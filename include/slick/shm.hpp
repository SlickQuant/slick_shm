#pragma once

/**
 * @file shm.hpp
 * @brief Main header file for the slick_shm library
 *
 * Include this single header to use the slick_shm cross-platform
 * shared memory library.
 *
 * @example
 * #include <slick/shm.hpp>
 *
 * using namespace slick::shm;
 *
 * // Create shared memory
 * shared_memory shm("my_shm", 1024, create_only);
 * std::memcpy(shm.data(), "Hello", 5);
 *
 * // Open existing shared memory
 * shared_memory shm2("my_shm", open_existing);
 * std::cout << static_cast<const char*>(shm2.data()) << std::endl;
 */

#include "slick/shm/types.hpp"
#include "slick/shm/error.hpp"
#include "slick/shm/shared_memory.hpp"
#include "slick/shm/shared_memory_view.hpp"
