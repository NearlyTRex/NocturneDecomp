# Runs the tests instrumented, then fails unless lines, functions and branches
# are all fully covered outside the paths listed in coverage_exclusions.txt.

set(_profiles "${BINARY_DIR}/coverage")
file(REMOVE_RECURSE "${_profiles}")
file(MAKE_DIRECTORY "${_profiles}")

set(ENV{LLVM_PROFILE_FILE} "${_profiles}/%p.profraw")
execute_process(COMMAND ctest --output-on-failure WORKING_DIRECTORY "${BINARY_DIR}"
                RESULT_VARIABLE _ctest)
if(_ctest)
    message(FATAL_ERROR "tests failed")
endif()

file(GLOB _raw "${_profiles}/*.profraw")
if(NOT _raw)
    message(FATAL_ERROR "no coverage profiles were written")
endif()
execute_process(COMMAND "${LLVM_PROFDATA}" merge -sparse ${_raw} -o "${_profiles}/merged.profdata"
                COMMAND_ERROR_IS_FATAL ANY)

set(_ignore "/tests/|/_deps/|/header_checks/")
file(STRINGS "${SOURCE_DIR}/coverage_exclusions.txt" _exclusions REGEX "^[^#]")
foreach(_line IN LISTS _exclusions)
    string(REGEX REPLACE "[ \t].*$" "" _path "${_line}")
    string(APPEND _ignore "|${_path}")
endforeach()

list(POP_FRONT TEST_BINARIES _first)
set(_objects "")
foreach(_binary IN LISTS TEST_BINARIES)
    list(APPEND _objects -object "${_binary}")
endforeach()

execute_process(
    COMMAND "${LLVM_COV}" export -summary-only "-instr-profile=${_profiles}/merged.profdata"
            "-ignore-filename-regex=${_ignore}" "${_first}" ${_objects}
    OUTPUT_VARIABLE _summary
    COMMAND_ERROR_IS_FATAL ANY)

set(_failed FALSE)
foreach(_metric lines functions branches)
    string(JSON _count GET "${_summary}" data 0 totals ${_metric} count)
    string(JSON _covered GET "${_summary}" data 0 totals ${_metric} covered)
    message(STATUS "${_metric}: ${_covered}/${_count}")
    if(NOT _covered EQUAL _count)
        set(_failed TRUE)
    endif()
endforeach()
if(_failed)
    message(FATAL_ERROR "coverage is below 100%")
endif()
