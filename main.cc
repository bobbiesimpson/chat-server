#include <cstring>
#include <iostream>

#include "chat_message.h"

int main(const int argc, const char* argv[]) {
  chat_message msg;
  msg.body_length(512);
  std::cout << msg.length() << std::endl;
  std::strncpy(msg.body(), "Hello, world!", msg.body_length());
  msg.encode_header();
  std::cout << msg.data() << std::endl;
  return 0;
}