# =============================================================================
# nocturne_test_suite() — one directory of unit tests under pseudocode/tests/
# =============================================================================
#
#   nocturne_test_suite(<name>
#       [TESTS <glob>...]         # default: test_*.cpp in this directory
#       [EXCLUDE <regex>]         # drop matching files from TESTS
#       [SUBJECTS <file>...]      # code under test; relative = pseudocode/
#       [SUPPORT <file>...]       # test helpers with no main(); relative = here
#       [DEFINITIONS <def>...])
#
# tests/ mirrors pseudocode/: the test for shims/core/file_search.cpp is
# tests/shims/core/test_file_search.cpp.
#
# Every matching file is its own binary and its own ctest test, named by its
# path under tests/ (shims/core/test_file_search) and labelled <name>
# (`ctest -L <name>`). SUBJECTS and SUPPORT are compiled once per suite and
# linked into each of its tests. Subjects are named, never globbed: a file that
# reaches GL or a global should be noticed when it is added.

function(nocturne_test_suite _suite)
    cmake_parse_arguments(PARSE_ARGV 1 _arg ""
        "EXCLUDE" "TESTS;SUBJECTS;SUPPORT;DEFINITIONS")

    if(NOT _arg_TESTS)
        set(_arg_TESTS "test_*.cpp")
    endif()
    list(TRANSFORM _arg_TESTS PREPEND "${CMAKE_CURRENT_SOURCE_DIR}/")
    file(GLOB _tests CONFIGURE_DEPENDS ${_arg_TESTS})
    if(_arg_EXCLUDE)
        list(FILTER _tests EXCLUDE REGEX "${_arg_EXCLUDE}")
    endif()
    if(NOT _tests)
        message(WARNING "nocturne_test_suite(${_suite}): no tests matched")
        return()
    endif()

    set(_objects)
    foreach(_f IN LISTS _arg_SUBJECTS)
        cmake_path(ABSOLUTE_PATH _f BASE_DIRECTORY "${NOCTURNE_PSEUDOCODE_DIR}")
        list(APPEND _objects "${_f}")
    endforeach()
    foreach(_f IN LISTS _arg_SUPPORT)
        cmake_path(ABSOLUTE_PATH _f BASE_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}")
        list(APPEND _objects "${_f}")
    endforeach()

    set(_objlib)
    if(_objects)
        set(_objlib nocturne_test_${_suite}_objs)
        add_library(${_objlib} OBJECT EXCLUDE_FROM_ALL ${_objects})
        _nocturne_test_setup(${_objlib} "${_arg_DEFINITIONS}")
    endif()

    foreach(_src IN LISTS _tests)
        # By path, so test_path.cpp in two directories are two tests.
        file(RELATIVE_PATH _test "${NOCTURNE_TESTS_DIR}" "${_src}")
        string(REGEX REPLACE "\\.cpp$" "" _test "${_test}")
        string(REPLACE "/" "_" _name "${_test}")
        add_executable(${_name} EXCLUDE_FROM_ALL "${_src}")
        _nocturne_test_setup(${_name} "${_arg_DEFINITIONS}")
        if(_objlib)
            target_link_libraries(${_name} PRIVATE ${_objlib})
        endif()
        add_test(NAME ${_test} COMMAND ${_name})
        set_tests_properties(${_test} PROPERTIES LABELS "${_suite}")
        add_dependencies(nocturne_tests ${_name})
        set_property(GLOBAL APPEND PROPERTY NOCTURNE_TEST_TARGETS ${_name})
    endforeach()
endfunction()

function(_nocturne_test_setup _target _defs)
    target_include_directories(${_target} PRIVATE
        "${NOCTURNE_TESTS_DIR}" "${CMAKE_CURRENT_SOURCE_DIR}"
        "${NOCTURNE_SHIMS_DIR}" "${NOCTURNE_INCLUDE_DIR}" ${SDL2_INCLUDE_DIRS})
    target_compile_features(${_target} PRIVATE cxx_std_17)
    target_compile_options(${_target} PRIVATE ${NOCTURNE_COMMON_WARNINGS})
    if(_defs)
        target_compile_definitions(${_target} PRIVATE ${_defs})
    endif()
endfunction()
