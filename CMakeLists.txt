cmake_minimum_required(VERSION 2.8)
project(boost_chat_server)

add_compile_options(-fvisibility=hidden -fvisibility-inlines-hidden)

find_package(Boost CONFIG REQUIRED)

add_executable(test main.cc)
add_executable(client client.cc)
add_executable(server server.cc)

target_link_libraries(test PRIVATE Boost::boost)
target_link_libraries(client PRIVATE Boost::boost Boost::thread)
target_link_libraries(server PRIVATE Boost::boost Boost::thread)