# Writes OUT, the header naming this build: the project VERSION, followed by what git describe
# says of SOURCE_DIR when that is something else. Only recreation-v* tags count, the repository's
# other tags being the decompilation's; without one it names the commit. The header is only
# replaced when its text changes, so a build at the same commit recompiles nothing.
if(NOT DEFINED VERSION OR NOT DEFINED SOURCE_DIR OR NOT DEFINED OUT)
    message(FATAL_ERROR "version.cmake needs -DVERSION, -DSOURCE_DIR and -DOUT")
endif()

set(_line "${VERSION}")
find_package(Git QUIET)
if(GIT_FOUND)
    execute_process(
        COMMAND "${GIT_EXECUTABLE}" describe --tags --match "recreation-v*" --always --dirty
        WORKING_DIRECTORY "${SOURCE_DIR}"
        OUTPUT_VARIABLE _described
        OUTPUT_STRIP_TRAILING_WHITESPACE
        ERROR_QUIET
        RESULT_VARIABLE _result)
    if(_result EQUAL 0 AND _described AND NOT _described STREQUAL VERSION)
        set(_line "${VERSION} (${_described})")
    endif()
endif()

file(WRITE "${OUT}.tmp"
     "#pragma once\n\n#include <string_view>\n\nnamespace nocturne {\n\n"
     "inline constexpr std::string_view kBuildVersion = \"${_line}\";\n\n"
     "} // namespace nocturne\n")
file(COPY_FILE "${OUT}.tmp" "${OUT}" ONLY_IF_DIFFERENT)
file(REMOVE "${OUT}.tmp")
