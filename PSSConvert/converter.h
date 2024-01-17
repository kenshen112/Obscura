#pragma once
#include <fstream>
#include <stdint.h>
#include <string>
#include <vector>

// Includes for FFMPeg
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavutil/imgutils.h>
#include <libavutil/samplefmt.h>
#include <libavutil/timestamp.h>

class PssConvert
{

 private:
  uint8_t header[5] {0x00, 0x00, 0x01, 0xBA, 0x44};
  uint8_t audio[4] {0x00, 0x00, 0x01, 0xBD};

  std::vector<uint8_t> buffer;

  int filesize;

  std::ifstream inStream;
  std::ofstream outStream;

 public:
  bool OpenFile(std::string filePath);
  void Convert();
};