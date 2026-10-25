# =============================================================================
# Target: nocturne_tests  (ctest)
# =============================================================================
#
# Unit tests over the shims and the annotated code. pseudocode/tests/ mirrors
# pseudocode/; any directory in it with a CMakeLists.txt is a suite, found here
# without being listed, and each test_*.cpp in it is a test binary. See
# cmake/nocturne_tests.cmake.
#
# The binaries are EXCLUDE_FROM_ALL so an ordinary build does not pay for them.
# This target builds them all, and so does `ctest`: every test requires the
# build_tests fixture, so none runs a binary older than its sources. A coverage
# build also brings the exe up to date, since the gate reads it too.
include("${CMAKE_SOURCE_DIR}/cmake/nocturne_tests.cmake")
enable_testing()
add_custom_target(nocturne_tests)
set(_build_targets nocturne_tests)
if(NOCTURNE_COVERAGE AND TARGET nocturne)
    list(APPEND _build_targets nocturne)
endif()
add_test(NAME build_tests
         COMMAND "${CMAKE_COMMAND}" --build "${CMAKE_BINARY_DIR}" --config $<CONFIG>
                 --target ${_build_targets})
set_tests_properties(build_tests PROPERTIES FIXTURES_SETUP nocturne_build)
file(GLOB_RECURSE _test_suites CONFIGURE_DEPENDS "${NOCTURNE_TESTS_DIR}/CMakeLists.txt")
foreach(_suite_list IN LISTS _test_suites)
    get_filename_component(_suite_dir "${_suite_list}" DIRECTORY)
    file(RELATIVE_PATH _suite_rel "${NOCTURNE_TESTS_DIR}" "${_suite_dir}")
    add_subdirectory("${_suite_dir}" "${CMAKE_BINARY_DIR}/tests/${_suite_rel}")
endforeach()
get_property(_test_targets GLOBAL PROPERTY NOCTURNE_TEST_TARGETS)
list(LENGTH _test_targets _test_count)
message(STATUS "nocturne_tests: ${_test_count} test binaries")

# ci-cpp-coverage's arguments, one per line. The objects are every test binary,
# and the exe for the shims no test links. Only the hand-written shims/ count,
# less the files tests/coverage_exclusions.txt lists.
if(NOCTURNE_COVERAGE)
    set(_coverage_args "")
    foreach(_target IN LISTS _test_targets ITEMS nocturne)
        if(TARGET ${_target})
            string(APPEND _coverage_args "--object\n$<TARGET_FILE:${_target}>\n")
        endif()
    endforeach()
    string(APPEND _coverage_args "--exclude\n^(?!.*/nocedit\\.exe/pseudocode/shims/)\n")
    set(_exclusions_file "${NOCTURNE_TESTS_DIR}/coverage_exclusions.txt")
    set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS "${_exclusions_file}")
    file(STRINGS "${_exclusions_file}" _exclusions REGEX "^[^#]")
    foreach(_line IN LISTS _exclusions)
        string(REGEX REPLACE "\t.*$" "" _path "${_line}")
        string(APPEND _coverage_args "--exclude\n${_path}\n")
    endforeach()
    file(GENERATE OUTPUT "${CMAKE_BINARY_DIR}/coverage_args.txt" CONTENT "${_coverage_args}")
endif()

# The Windows test binaries in one folder with what they need on a machine that
# has none of the toolchain: the gcc runtime DLLs on the mingw lanes (the clang-cl
# lane links its runtime statically), SDL and SDL_ttf, the font the text tests
# draw with, and the renderer's golden traces, which the tests find in their
# working directory when the source tree is not there. CI builds it on Linux and
# runs it on a Windows runner with Workflows' windows-test.
if(COMMAND nocturne_windows_runtime_dlls)
    nocturne_windows_runtime_dlls(_bundle_dlls)
    set(_bundle "${CMAKE_BINARY_DIR}/test-bundle")
    set(_bundle_tests "")
    foreach(_target IN LISTS _test_targets)
        list(APPEND _bundle_tests "$<TARGET_FILE:${_target}>")
    endforeach()
    # The SDL-backed suites' libraries, and the files suites ask to travel with
    # them (the text tests' font).
    foreach(_lib IN ITEMS SDL2::SDL2 SDL2_ttf::SDL2_ttf)
        if(TARGET ${_lib})
            list(APPEND _bundle_dlls "$<TARGET_FILE:${_lib}>")
        endif()
    endforeach()
    get_property(_bundle_files GLOBAL PROPERTY NOCTURNE_TEST_BUNDLE_FILES)
    add_custom_target(nocturne_test_bundle
        COMMAND "${CMAKE_COMMAND}" -E rm -rf "${_bundle}"
        COMMAND "${CMAKE_COMMAND}" -E make_directory "${_bundle}"
        COMMAND "${CMAKE_COMMAND}" -E copy ${_bundle_tests} ${_bundle_dlls} ${_bundle_files} "${_bundle}"
        COMMAND "${CMAKE_COMMAND}" -E copy_directory
                "${NOCTURNE_TESTS_DIR}/shims/renderer/golden" "${_bundle}/golden"
        COMMENT "Bundling the Windows tests into ${_bundle}"
        VERBATIM)
    add_dependencies(nocturne_test_bundle nocturne_tests)
endif()
