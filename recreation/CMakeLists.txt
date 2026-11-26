cmake_minimum_required(VERSION 3.24)
project(NocturneRecreation VERSION 0.1.0 LANGUAGES C CXX)

# The code uses the C++23 library LLVM 23's libc++ provides; the presets select both.
if(NOT CMAKE_CXX_COMPILER_ID STREQUAL "Clang" OR CMAKE_CXX_COMPILER_VERSION VERSION_LESS 23)
    message(FATAL_ERROR "The recreation needs clang 23 or newer, as the presets select; "
                        "found ${CMAKE_CXX_COMPILER_ID} ${CMAKE_CXX_COMPILER_VERSION}")
endif()
# The coverage tools and clang-tidy must match the compiler: the profile format and the
# checks change between releases.
string(REGEX MATCH "^[0-9]+" NOCTURNE_LLVM_MAJOR "${CMAKE_CXX_COMPILER_VERSION}")
set(NOCTURNE_LLVM_BIN "/usr/lib/llvm-${NOCTURNE_LLVM_MAJOR}/bin")

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

option(NOCTURNE_RECREATION_COVERAGE "Instrument for clang source-based coverage" OFF)
option(NOCTURNE_RECREATION_GAME "Build the SDL adapters and the nocturne executable" OFF)
option(NOCTURNE_RECREATION_SANITIZE "Build with AddressSanitizer and UBSan" OFF)

# tidy, coverage and a build each fan out to every core, and together they exhaust a desktop's
# memory. A host-wide lock, shared by compiles and links and exclusive for tidy and coverage,
# makes each wait for the others across build directories and checkouts; CI jobs run alone.
find_program(FLOCK flock)
if(DEFINED ENV{CI} OR NOT FLOCK)
    set(_host_lock_default "")
elseif(DEFINED ENV{XDG_RUNTIME_DIR})
    set(_host_lock_default "$ENV{XDG_RUNTIME_DIR}/nocturne-recreation.lock")
else()
    set(_host_lock_default "/tmp/nocturne-recreation-$ENV{USER}.lock")
endif()
set(NOCTURNE_RECREATION_HOST_LOCK "${_host_lock_default}"
    CACHE FILEPATH "Lock file that serialises builds, tidy and coverage on this host; empty disables it")
set(NOCTURNE_RECREATION_EXCLUSIVE "")
if(NOCTURNE_RECREATION_HOST_LOCK)
    foreach(_launcher IN ITEMS C_COMPILER CXX_COMPILER C_LINKER CXX_LINKER)
        set(CMAKE_${_launcher}_LAUNCHER
            "${FLOCK}" --shared "${NOCTURNE_RECREATION_HOST_LOCK}" ${CMAKE_${_launcher}_LAUNCHER})
    endforeach()
    set(NOCTURNE_RECREATION_EXCLUSIVE "${FLOCK}" --exclusive "${NOCTURNE_RECREATION_HOST_LOCK}")
endif()

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
# Lockstep netplay needs every architecture to round alike, and arm64 fuses a
# multiply and an add into one rounding by default.
target_compile_options(nocturne_recreation_options INTERFACE -ffp-contract=off)
if(NOCTURNE_RECREATION_COVERAGE)
    target_compile_options(nocturne_recreation_options INTERFACE
        -fprofile-instr-generate -fcoverage-mapping)
    target_link_options(nocturne_recreation_options INTERFACE -fprofile-instr-generate)
endif()
# The first error stops the run, so a test or the game can't carry on past it.
if(NOCTURNE_RECREATION_SANITIZE)
    set(_sanitize_flags -fsanitize=address,undefined -fno-sanitize-recover=all
        -fno-omit-frame-pointer)
    target_compile_options(nocturne_recreation_options INTERFACE ${_sanitize_flags})
    target_link_options(nocturne_recreation_options INTERFACE ${_sanitize_flags})
endif()

# How the optimiser may use the processor; see cmake/cpulevel.cmake for the tiers. Vectorising
# keeps every float result as written, since nothing allows reassociation, so builds of different
# tiers still play in lockstep together.
include(cmake/cpulevel.cmake)
nocturne_apply_cpu_level(nocturne_recreation_options)
option(NOCTURNE_RECREATION_VECTORIZE "Let the optimiser vectorise loops" ON)
option(NOCTURNE_RECREATION_VECTORIZE_REMARKS
       "Report which of the hot paths' loops vectorised and why the rest did not" OFF)
option(NOCTURNE_RECREATION_LTO
       "Link-time optimisation across the tree (ThinLTO, with lld but on a Mac, whose linker has it)"
       OFF)
if(NOT NOCTURNE_RECREATION_VECTORIZE)
    target_compile_options(nocturne_recreation_options INTERFACE
        -fno-vectorize -fno-slp-vectorize)
endif()
if(NOCTURNE_RECREATION_LTO)
    target_compile_options(nocturne_recreation_options INTERFACE -flto=thin)
    target_link_options(nocturne_recreation_options INTERFACE -flto=thin)
    if(NOT APPLE)
        target_link_options(nocturne_recreation_options INTERFACE -fuse-ld=lld)
    endif()
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

# The software renderer's per-pixel and per-polygon loops, the backdrop's light maps and their
# rows, the frame's conversion and the hardware renderer: at a Debug build's -O0 they hold the
# frame rate to a crawl, so they build at -O2 there, as the decomp's game_modules.cmake builds
# its own, and the rest stays debuggable. Every loop over a frame's or a map's pixels lives in
# one of these; a new one goes into one of them or brings its file onto the list.
set(_hot_paths
    "/engine/(2d|3d|clipper|drender|font|matrix|prim|special|zraster)/"
    "/engine/rasteredges\\.cpp$" "/core/dstrender/" "/core/dcamera/demoncamera_lightmap\\.cpp$"
    "/common/(render|video)/" "/platform/(gl|sdl)/")
string(JOIN "|" _hot_regex ${_hot_paths})
set(_vectorize_remarks -Rpass=loop-vectorize -Rpass-missed=loop-vectorize
    -Rpass-analysis=loop-vectorize)
function(nocturne_optimize_hot_paths)
    foreach(_source IN LISTS ARGN)
        if(NOT _source MATCHES "${_hot_regex}")
            continue()
        endif()
        if(CMAKE_BUILD_TYPE STREQUAL "Debug")
            set_property(SOURCE "${_source}" APPEND PROPERTY COMPILE_OPTIONS -O2)
        endif()
        if(NOCTURNE_RECREATION_VECTORIZE_REMARKS)
            set_property(SOURCE "${_source}" APPEND PROPERTY COMPILE_OPTIONS ${_vectorize_remarks})
        endif()
    endforeach()
endfunction()
nocturne_optimize_hot_paths(${_sources})

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

# Package manifests and the known-release catalogue are TOML; the package layer hashes PODs
# with xxHash's XXH3-128. Both are header-only and stay private to engine/package.
FetchContent_Declare(tomlplusplus
    GIT_REPOSITORY https://github.com/marzer/tomlplusplus.git
    GIT_TAG        v3.4.0
    GIT_SHALLOW    TRUE
    SYSTEM)
FetchContent_MakeAvailable(tomlplusplus)
FetchContent_Declare(xxhash
    GIT_REPOSITORY https://github.com/Cyan4973/xxHash.git
    GIT_TAG        v0.8.3
    GIT_SHALLOW    TRUE
    SOURCE_SUBDIR  build/cmake/disabled
    SYSTEM)
FetchContent_MakeAvailable(xxhash)
add_library(nocturne_xxhash INTERFACE)
target_include_directories(nocturne_xxhash SYSTEM INTERFACE "${xxhash_SOURCE_DIR}")
target_compile_definitions(nocturne_xxhash INTERFACE XXH_INLINE_ALL)
include(cmake/libarchive.cmake)

# The catalogue of known releases is data in the repository, compiled in so an install needs no
# extra file to be recognised.
file(READ "${CMAKE_CURRENT_SOURCE_DIR}/data/releases.toml" NOCTURNE_RELEASE_CATALOG)
set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/data/releases.toml")
# Each game's content, data/games/<id>.toml, which a base manifest written for its release copies.
file(GLOB _game_files CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/data/games/*.toml")
list(SORT _game_files)
set(NOCTURNE_EMBEDDED_GAMES "")
foreach(_game_file IN LISTS _game_files)
    get_filename_component(_game_id "${_game_file}" NAME_WE)
    file(READ "${_game_file}" _game_text)
    string(APPEND NOCTURNE_EMBEDDED_GAMES
        "        SEmbeddedGame{.id = \"${_game_id}\", .text = R\"game(${_game_text})game\"},\n")
    set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS "${_game_file}")
endforeach()
configure_file(cmake/releasecatalogtext.cpp.in
    "${CMAKE_CURRENT_BINARY_DIR}/generated/engine/package/releasecatalogtext.cpp" @ONLY)
list(APPEND _sources "${CMAKE_CURRENT_BINARY_DIR}/generated/engine/package/releasecatalogtext.cpp")

if(_sources)
    add_library(nocturne_recreation STATIC ${_sources})
    target_link_libraries(nocturne_recreation PUBLIC nocturne_recreation_options miniaudio)
    # zlib, which libarchive builds, also compresses the screenshots' PNGs.
    target_link_libraries(nocturne_recreation
        PRIVATE tomlplusplus::tomlplusplus nocturne_xxhash nocturne_libarchive ZLIB::ZLIB)
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
        PRIVATE nocturne_recreation_options miniaudio tomlplusplus::tomlplusplus)
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
        PRIVATE nocturne_recreation_options GTest::gmock nocturne_libarchive ZLIB::ZLIB)
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
    nocturne_optimize_hot_paths(${_sdl_sources})
    add_library(nocturne_platform_sdl STATIC ${_sdl_sources})
    target_link_libraries(nocturne_platform_sdl
        PUBLIC nocturne_recreation
        PRIVATE SDL3::SDL3 SDL3_net::SDL3_net SDL3_ttf::SDL3_ttf nocturne_ffmpeg)

    # Where a run reads the install from and writes to when neither the command line nor the
    # environment says, as the shim lane's platform files set them (platform/pathroots.h).
    set(NOCTURNE_DEFAULT_DATA_DIR "" CACHE STRING "The data directory compiled in")
    set(NOCTURNE_DEFAULT_USER_DIR "" CACHE STRING "The user directory compiled in")
    option(NOCTURNE_USER_DIR_FROM_SDL "The user directory is SDL_GetPrefPath's" OFF)
    option(NOCTURNE_DATA_DIR_FROM_SDL "The data directory is SDL_GetPrefPath's, filled by hand" OFF)
    if(NOCTURNE_DEFAULT_DATA_DIR)
        target_compile_definitions(nocturne_platform_sdl
            PRIVATE "NOCTURNE_DEFAULT_DATA_DIR=\"${NOCTURNE_DEFAULT_DATA_DIR}\"")
    endif()
    if(NOCTURNE_DEFAULT_USER_DIR)
        target_compile_definitions(nocturne_platform_sdl
            PRIVATE "NOCTURNE_DEFAULT_USER_DIR=\"${NOCTURNE_DEFAULT_USER_DIR}\"")
    endif()
    if(NOCTURNE_USER_DIR_FROM_SDL)
        target_compile_definitions(nocturne_platform_sdl PRIVATE NOCTURNE_USER_DIR_FROM_SDL)
    endif()
    if(NOCTURNE_DATA_DIR_FROM_SDL)
        target_compile_definitions(nocturne_platform_sdl PRIVATE NOCTURNE_DATA_DIR_FROM_SDL)
    endif()

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

    # The build's version line, rewritten at every build so it follows the checkout; run once
    # here too so the header exists before the first compile.
    set(_generated_dir "${CMAKE_CURRENT_BINARY_DIR}/generated")
    set(_version_command "${CMAKE_COMMAND}" -DVERSION=${PROJECT_VERSION}
        -DSOURCE_DIR=${CMAKE_CURRENT_SOURCE_DIR} -DOUT=${_generated_dir}/buildversion.h
        -P ${CMAKE_CURRENT_SOURCE_DIR}/cmake/version.cmake)
    file(MAKE_DIRECTORY "${_generated_dir}")
    execute_process(COMMAND ${_version_command})
    add_custom_target(nocturne_version COMMAND ${_version_command}
        BYPRODUCTS "${_generated_dir}/buildversion.h" VERBATIM)

    add_executable(nocturne main.cpp)
    add_dependencies(nocturne nocturne_version)
    target_include_directories(nocturne PRIVATE "${_generated_dir}")
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
    if(_module STREQUAL "common")
        # Its PNG tests read back what the encoder wrote (tests/mocks/common/pngimage.h).
        target_link_libraries(${_target} PRIVATE ZLIB::ZLIB)
    elseif(_module STREQUAL "engine")
        # The package layer's TOML readers take toml++ tables, its archive tests make archives
        # with libarchive, and its screenshot tests read back PNGs with zlib.
        target_link_libraries(${_target} PRIVATE tomlplusplus::tomlplusplus nocturne_libarchive
                                                 ZLIB::ZLIB)
    elseif(_module STREQUAL "core")
        # Its loader tests read PODs and packages from archives made with libarchive
        # (tests/mocks/engine/testarchive.h), and its frame tests read back screenshots.
        target_link_libraries(${_target} PRIVATE nocturne_libarchive ZLIB::ZLIB)
    endif()
    # A test runs in well under a second; one stuck in a loop is ended before ctest, which holds
    # each test's output, fills the memory with it.
    gtest_discover_tests(${_target} DISCOVERY_MODE PRE_TEST PROPERTIES TIMEOUT 20)
    list(APPEND NOCTURNE_RECREATION_TEST_BINARIES $<TARGET_FILE:${_target}>)
endforeach()

if(NOCTURNE_RECREATION_COVERAGE)
    find_program(LLVM_PROFDATA NAMES llvm-profdata-${NOCTURNE_LLVM_MAJOR} llvm-profdata
                 HINTS "${NOCTURNE_LLVM_BIN}" REQUIRED)
    find_program(LLVM_COV NAMES llvm-cov-${NOCTURNE_LLVM_MAJOR} llvm-cov
                 HINTS "${NOCTURNE_LLVM_BIN}" REQUIRED)
    add_custom_target(coverage
        COMMAND ${NOCTURNE_RECREATION_EXCLUSIVE} ${CMAKE_COMMAND}
            -DBINARY_DIR=${CMAKE_CURRENT_BINARY_DIR}
            -DSOURCE_DIR=${CMAKE_CURRENT_SOURCE_DIR}
            -DLLVM_PROFDATA=${LLVM_PROFDATA}
            -DLLVM_COV=${LLVM_COV}
            "-DTEST_BINARIES=${NOCTURNE_RECREATION_TEST_BINARIES}"
            -P ${CMAKE_CURRENT_SOURCE_DIR}/cmake/coverage.cmake
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        VERBATIM)
endif()

find_program(CLANG_TIDY NAMES clang-tidy-${NOCTURNE_LLVM_MAJOR} clang-tidy
             HINTS "${NOCTURNE_LLVM_BIN}")
find_package(Python3 COMPONENTS Interpreter)
if(CLANG_TIDY AND Python3_FOUND)
    # Source and test files, and header checks for headers no .cpp includes; clean results are
    # cached in NOCTURNE_RECREATION_TIDY_CACHE (see cmake/tidy.py).
    set(NOCTURNE_RECREATION_TIDY_CACHE "${CMAKE_CURRENT_BINARY_DIR}/tidy-cache"
        CACHE PATH "Where clang-tidy's clean results are kept; empty disables the cache")
    set(_tidy_cache "")
    if(NOCTURNE_RECREATION_TIDY_CACHE)
        set(_tidy_cache "--cache-dir=${NOCTURNE_RECREATION_TIDY_CACHE}")
    endif()
    add_custom_target(tidy
        COMMAND ${NOCTURNE_RECREATION_EXCLUSIVE} ${Python3_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/cmake/tidy.py
                --clang-tidy ${CLANG_TIDY}
                --source-dir ${CMAKE_CURRENT_SOURCE_DIR}
                --build-dir ${CMAKE_CURRENT_BINARY_DIR}
                ${_tidy_cache}
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        USES_TERMINAL
        VERBATIM)
endif()

find_program(CLANG_FORMAT NAMES clang-format-${NOCTURNE_LLVM_MAJOR} clang-format
             HINTS "${NOCTURNE_LLVM_BIN}")
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
