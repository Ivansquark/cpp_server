#ifndef HTTP_PARSER_H
#define HTTP_PARSER_H

#include "tcp.h"
#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
class HttpParser {
  public:
      HttpParser();
    void parseData(const char *buff, int len);

  private:
};

#endif // HTTP_PARSER_H
