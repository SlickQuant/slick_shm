# Basic writer example
add_executable(basic_writer basic_writer.cpp)
target_link_libraries(basic_writer PRIVATE slick::shm)

# Basic reader example
add_executable(basic_reader basic_reader.cpp)
target_link_libraries(basic_reader PRIVATE slick::shm)

# Advanced synchronization example
add_executable(advanced_sync advanced_sync.cpp)
target_link_libraries(advanced_sync PRIVATE slick::shm)

# Note: Examples are not installed - they are for development/testing only
