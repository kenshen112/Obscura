#include "converter.h"

bool PssConvert::OpenFile(std::string path)
{
  inStream.open(path, std::ios::binary);

  if (inStream.is_open())
  {
    inStream.seekg(0, std::ios::end);
    filesize = inStream.tellg();
    inStream.seekg(0, std::ios::beg);

    buffer.resize(filesize);

    inStream.read((char *) &buffer[0], filesize);

    return true;
  }
  return false;
}

void PssConvert::Convert()
{
}