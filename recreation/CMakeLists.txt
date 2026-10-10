cmake_minimum_required(VERSION 3.24)
project(NocturneRecreation LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

option(NOCTURNE_RECREATION_COVERAGE "Instrument for clang source-based coverage" OFF)
option(NOCTURNE_RECREATION_GAME "Build the SDL adapters and the nocturne executable" OFF)

# Modules are the directories that carry a fwd.h.
file(GLOB _fwd_headers RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" CONFIGURE_DEPENDS
     "${CMAKE_CURRENT_SOURCE_DIR}/*/fwd.h")
set(NOCTURNE_RECREATION_MODULES "")
foreach(_fwd IN LISTS _fwd_headers)
    get_filename_component(_module "${_fwd}" DIRECTORY)
    list(APPEND NOCTURNE_RECREATION_MODULES "${_module}")
endforeach()

add_library(nocturne_recreation_options INTERFACE)
target_include_directories(nocturne_recreation_options INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}")
target_compile_options(nocturne_recreation_options INTERFACE -Wall -Wextra -Wpedantic -Werror)
if(NOCTURNE_RECREATION_COVERAGE)
    target_compile_options(nocturne_recreation_options INTERFACE
        -fprofile-instr-generate -fcoverage-mapping)
    target_link_options(nocturne_recreation_options INTERFACE -fprofile-instr-generate)
endif()

set(_sources "")
set(_headers "")
foreach(_module IN LISTS NOCTURNE_RECREATION_MODULES)
    file(GLOB_RECURSE _module_sources CONFIGURE_DEPENDS "${_module}/*.cpp")
    file(GLOB_RECURSE _module_headers RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" CONFIGURE_DEPENDS
         "${_module}/*.h")
    # The SDL adapters build only with the game; see NOCTURNE_RECREATION_GAME.
    list(FILTER _module_sources EXCLUDE REGEX "/platform/sdl/")
    list(FILTER _module_headers EXCLUDE REGEX "^platform/sdl/")
    list(APPEND _sources ${_module_sources})
    list(APPEND _headers ${_module_headers})
endforeach()

include(FetchContent)

include(cmake/khronos.cmake)
target_link_libraries(nocturne_recreation_options INTERFACE nocturne_khronos)

# sound/ uses miniaudio to mix, resample and decode; the SDL adapter owns the device, so
# miniaudio is built without one. Its feature defines are private to its own build, and
# MA_NO_DEVICE_IO changes its structs, so it is re-exported to everything that includes it.
FetchContent_Declare(miniaudio
    GIT_REPOSITORY https://github.com/mackron/miniaudio.git
    GIT_TAG        0.11.25
    GIT_SHALLOW    TRUE
    SYSTEM)
set(MINIAUDIO_NO_DEVICEIO ON CACHE BOOL "" FORCE)
set(MINIAUDIO_NO_LIBVORBIS ON CACHE BOOL "" FORCE)
set(MINIAUDIO_NO_LIBOPUS ON CACHE BOOL "" FORCE)
set(MINIAUDIO_NO_ENCODING ON CACHE BOOL "" FORCE)
set(MINIAUDIO_INSTALL OFF CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(miniaudio)
target_compile_definitions(miniaudio PUBLIC MA_NO_DEVICE_IO)

if(_sources)
    add_library(nocturne_recreation STATIC ${_sources})
    target_link_libraries(nocturne_recreation PUBLIC nocturne_recreation_options miniaudio)
else()
    add_library(nocturne_recreation INTERFACE)
    target_link_libraries(nocturne_recreation INTERFACE nocturne_recreation_options miniaudio)
endif()

# Every header must compile on its own.
set(_header_checks "")
foreach(_header IN LISTS _headers)
    set(_check "${CMAKE_CURRENT_BINARY_DIR}/header_checks/${_header}.cpp")
    file(CONFIGURE OUTPUT "${_check}" CONTENT "#include \"${_header}\"\n")
    list(APPEND _header_checks "${_check}")
endforeach()
if(_header_checks)
    add_library(nocturne_recreation_header_checks OBJECT ${_header_checks})
    target_link_libraries(nocturne_recreation_header_checks
        PRIVATE nocturne_recreation_options miniaudio)
endif()

FetchContent_Declare(googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG        v1.17.0
    GIT_SHALLOW    TRUE)
set(INSTALL_GTEST OFF CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()
include(GoogleTest)

# gMock stand-ins for the platform interfaces and seams, shared by every test.
file(GLOB_RECURSE _mock_headers RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" CONFIGURE_DEPENDS
     "tests/mocks/*.h")
set(_mock_checks "")
foreach(_header IN LISTS _mock_headers)
    set(_check "${CMAKE_CURRENT_BINARY_DIR}/header_checks/${_header}.cpp")
    file(CONFIGURE OUTPUT "${_check}" CONTENT "#include \"${_header}\"\n")
    list(APPEND _mock_checks "${_check}")
endforeach()
if(_mock_checks)
    add_library(nocturne_recreation_mock_checks OBJECT ${_mock_checks})
    target_link_libraries(nocturne_recreation_mock_checks
        PRIVATE nocturne_recreation_options GTest::gmock)
endif()

if(NOCTURNE_RECREATION_GAME)
    FetchContent_Declare(SDL3
        GIT_REPOSITORY https://github.com/libsdl-org/SDL.git
        GIT_TAG        release-3.4.16
        GIT_SHALLOW    TRUE
        SYSTEM)
    set(SDL_SHARED OFF CACHE BOOL "" FORCE)
    set(SDL_STATIC ON CACHE BOOL "" FORCE)
    set(SDL_TEST_LIBRARY OFF CACHE BOOL "" FORCE)
    FetchContent_MakeAvailable(SDL3)

    FetchContent_Declare(SDL3_net
        GIT_REPOSITORY https://github.com/libsdl-org/SDL_net.git
        GIT_TAG        release-3.2.0
        GIT_SHALLOW    TRUE
        SYSTEM)
    set(SDLNET_INSTALL OFF CACHE BOOL "" FORCE)
    set(SDLNET_SAMPLES OFF CACHE BOOL "" FORCE)
    set(BUILD_SHARED_LIBS OFF)
    FetchContent_MakeAvailable(SDL3_net)

    # The game draws single-byte Windows text, so there is no shaping and no colour emoji;
    # FreeType comes vendored so no system -dev package is needed.
    FetchContent_Declare(SDL3_ttf
        GIT_REPOSITORY https://github.com/libsdl-org/SDL_ttf.git
        GIT_TAG        release-3.2.2
        GIT_SHALLOW    TRUE
        GIT_SUBMODULES external/freetype
        SYSTEM)
    set(SDLTTF_VENDORED ON CACHE BOOL "" FORCE)
    set(SDLTTF_HARFBUZZ OFF CACHE BOOL "" FORCE)
    set(SDLTTF_PLUTOSVG OFF CACHE BOOL "" FORCE)
    set(SDLTTF_SAMPLES OFF CACHE BOOL "" FORCE)
    set(SDLTTF_INSTALL OFF CACHE BOOL "" FORCE)
    FetchContent_MakeAvailable(SDL3_ttf)

    include(cmake/ffmpeg.cmake)

    file(GLOB _sdl_sources CONFIGURE_DEPENDS "platform/sdl/*.cpp")
    add_library(nocturne_platform_sdl STATIC ${_sdl_sources})
    target_link_libraries(nocturne_platform_sdl
        PUBLIC nocturne_recreation
        PRIVATE SDL3::SDL3 SDL3_net::SDL3_net SDL3_ttf::SDL3_ttf nocturne_ffmpeg)

    file(GLOB _sdl_headers RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" CONFIGURE_DEPENDS
         "platform/sdl/*.h")
    set(_sdl_header_checks "")
    foreach(_header IN LISTS _sdl_headers)
        set(_check "${CMAKE_CURRENT_BINARY_DIR}/header_checks/${_header}.cpp")
        file(CONFIGURE OUTPUT "${_check}" CONTENT "#include \"${_header}\"\n")
        list(APPEND _sdl_header_checks "${_check}")
    endforeach()
    add_library(nocturne_platform_sdl_header_checks OBJECT ${_sdl_header_checks})
    target_link_libraries(nocturne_platform_sdl_header_checks
        PRIVATE nocturne_recreation_options SDL3::SDL3 SDL3_net::SDL3_net SDL3_ttf::SDL3_ttf
                nocturne_ffmpeg)

    add_executable(nocturne main.cpp)
    target_link_libraries(nocturne PRIVATE nocturne_platform_sdl)
endif()

set(NOCTURNE_RECREATION_TEST_BINARIES "")
foreach(_module IN LISTS NOCTURNE_RECREATION_MODULES)
    file(GLOB_RECURSE _tests CONFIGURE_DEPENDS "tests/${_module}/*_test.cpp")
    if(NOT _tests)
        continue()
    endif()
    set(_target recreation_${_module}_tests)
    add_executable(${_target} ${_tests})
    if(_sources)
        # Whole archive, so code no test reaches still lands in the binary and
        # counts as uncovered instead of vanishing from the report.
        target_link_libraries(${_target} PRIVATE "$<LINK_LIBRARY:WHOLE_ARCHIVE,nocturne_recreation>")
    else()
        target_link_libraries(${_target} PRIVATE nocturne_recreation)
    endif()
    target_link_libraries(${_target} PRIVATE GTest::gtest_main GTest::gmock)
    gtest_discover_tests(${_target} DISCOVERY_MODE PRE_TEST)
    list(APPEND NOCTURNE_RECREATION_TEST_BINARIES $<TARGET_FILE:${_target}>)
endforeach()

if(NOCTURNE_RECREATION_COVERAGE)
    find_program(LLVM_PROFDATA llvm-profdata REQUIRED)
    find_program(LLVM_COV llvm-cov REQUIRED)
    add_custom_target(coverage
        COMMAND ${CMAKE_COMMAND}
            -DBINARY_DIR=${CMAKE_CURRENT_BINARY_DIR}
            -DSOURCE_DIR=${CMAKE_CURRENT_SOURCE_DIR}
            -DLLVM_PROFDATA=${LLVM_PROFDATA}
            -DLLVM_COV=${LLVM_COV}
            "-DTEST_BINARIES=${NOCTURNE_RECREATION_TEST_BINARIES}"
            -P ${CMAKE_CURRENT_SOURCE_DIR}/cmake/coverage.cmake
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        VERBATIM)
endif()

find_program(RUN_CLANG_TIDY run-clang-tidy)
if(RUN_CLANG_TIDY)
    # Every translation unit this build compiles: header checks, tests and
    # implementation files. GoogleTest's own sources are left out.
    add_custom_target(tidy
        COMMAND ${RUN_CLANG_TIDY} -quiet -p ${CMAKE_CURRENT_BINARY_DIR}
                "${CMAKE_CURRENT_SOURCE_DIR}/|${CMAKE_CURRENT_BINARY_DIR}/header_checks/"
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        VERBATIM)
endif()

find_program(CLANG_FORMAT clang-format)
if(CLANG_FORMAT)
    file(GLOB_RECURSE _format_files CONFIGURE_DEPENDS
         "${CMAKE_CURRENT_SOURCE_DIR}/*.h" "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
    add_custom_target(format
        COMMAND ${CLANG_FORMAT} -i --style=file ${_format_files}
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        VERBATIM)
    add_custom_target(format-check
        COMMAND ${CLANG_FORMAT} --dry-run --Werror --style=file ${_format_files}
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        VERBATIM)
endif()
