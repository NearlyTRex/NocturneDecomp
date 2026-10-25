# =============================================================================
# Targets: format, format-check  (clang-format)
# =============================================================================
#
# The hand-written shims and their tests, in the repository's .clang-format,
# which the recreation shares. The decompiled and generated code under
# annotations/ keeps the original's shape: annotations/.clang-format turns
# formatting off, and shims/ and tests/ turn it back on.
find_program(CLANG_FORMAT clang-format)
if(CLANG_FORMAT)
    file(GLOB_RECURSE _format_files CONFIGURE_DEPENDS
         "${NOCTURNE_PSEUDOCODE_DIR}/shims/*.c" "${NOCTURNE_PSEUDOCODE_DIR}/shims/*.cpp"
         "${NOCTURNE_PSEUDOCODE_DIR}/shims/*.h"
         "${NOCTURNE_TESTS_DIR}/*.c" "${NOCTURNE_TESTS_DIR}/*.cpp" "${NOCTURNE_TESTS_DIR}/*.h")
    add_custom_target(format
        COMMAND ${CLANG_FORMAT} -i --style=file ${_format_files}
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
        VERBATIM)
    add_custom_target(format-check
        COMMAND ${CLANG_FORMAT} --dry-run --Werror --style=file ${_format_files}
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
        VERBATIM)
endif()
