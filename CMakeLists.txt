cmake_minimum_required(VERSION 3.21)
project(boost_chat_server)

find_package(Boost CONFIG REQUIRED)

add_executable(test main.cc)

target_link_libraries(test PRIVATE Boost::boost)