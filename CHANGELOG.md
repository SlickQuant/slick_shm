# Changelog

## [Unreleased]

- Add missing `<type_traits>` include in `error.hpp` to fix compilation with strict compilers
- Fix Windows handle validation in `create()`, `open()`, and `map_impl()` to properly check for both NULL and INVALID_HANDLE_VALUE
- Add missing `error.hpp` and `types.hpp` includes in `platform.hpp` to resolve dependency issues
- Add documentation comment to POSIX `format_name()` clarifying preconditions
- Fix Windows UTF-8 to UTF-16 name conversion buffer sizing in shared memory mapping.
- Fix POSIX create/open_or_create/open_always logic to avoid unlinking existing segments and to allow read-only open_or_create.
- Reject POSIX shared memory name of '/' and add tests for read-only create/open_or_create and slash-only name validation.

## [v0.1.2] - 2026-01-10

 - Rename repository from slick_shm to slick-shm (hyphenated naming follows recommended convention)
 - Update documentation and build references to use new repository name

## [v0.1.1] - 2025-12-26

 - Fix Linux build enum multiple definition error
 - Add CHANGELOG.md
 - Add version number cmake message

## [v0.1.0] - 2025-12-25

- Initial release
- Windows, Linux, and macOS support
- RAII-based shared memory management
