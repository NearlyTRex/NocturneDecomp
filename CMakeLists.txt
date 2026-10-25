cmake_minimum_required(VERSION 3.20)

# -----------------------------------------------------------------------------
# NocturneDecomp build
#
# Two top-level targets:
#   nocturne_check   Per-file -fsyntax-only pass. Reproduces the 100%
#                    compilation milestone. Fast, no codegen, no link.
#   nocturne         Full codegen + link into the game executable.
#                    Entry point comes from src/main/main.cpp; the decompiled
#                    src/entry/entry.c and src/crt/* are NOT included (we
#                    link against a modern C/C++ runtime via the shims).
#
# Pick one or both:
#   cmake -B build -DNOCTURNE_BUILD_CHECK=ON -DNOCTURNE_BUILD_EXE=ON \
#         --toolchain cmake/toolchains/linux-x86_64.cmake
#   cmake --build build --target nocturne_check
#   cmake --build build --target nocturne
#
# Each stage is a file under cmake/, included below in the order it has to
# run; cmake/README.md says which file holds what.
# -----------------------------------------------------------------------------

project(NocturneDecomp VERSION 0.1.8 LANGUAGES C CXX)

include("${CMAKE_SOURCE_DIR}/cmake/options.cmake")
include("${CMAKE_SOURCE_DIR}/cmake/authenticity.cmake")

set(NOCTURNE_PSEUDOCODE_DIR "${CMAKE_SOURCE_DIR}/annotations/nocedit.exe/pseudocode"
    CACHE PATH "Root of the exported pseudocode tree")
set(NOCTURNE_SKIP_LIST "${CMAKE_SOURCE_DIR}/cmake/skip_list.txt"
    CACHE FILEPATH "Skip list consumed by cmake/collect_sources.py")

set(NOCTURNE_SRC_ROOT     "${NOCTURNE_PSEUDOCODE_DIR}/src")
set(NOCTURNE_INCLUDE_DIR  "${NOCTURNE_PSEUDOCODE_DIR}/include")
set(NOCTURNE_SHIMS_DIR    "${NOCTURNE_PSEUDOCODE_DIR}/shims")
set(NOCTURNE_TESTS_DIR    "${NOCTURNE_PSEUDOCODE_DIR}/tests")

set(NOCTURNE_MAIN_DIR     "${NOCTURNE_PSEUDOCODE_DIR}/main")
set(NOCTURNE_CHECKS_DIR   "${NOCTURNE_PSEUDOCODE_DIR}/checks")

find_package(Python3 REQUIRED COMPONENTS Interpreter)

include("${CMAKE_SOURCE_DIR}/cmake/platform.cmake")

# What configure generates: the version header and the per-module source lists.
set(NOCTURNE_GEN_DIR "${CMAKE_BINARY_DIR}/generated")
file(MAKE_DIRECTORY "${NOCTURNE_GEN_DIR}")
include("${CMAKE_SOURCE_DIR}/cmake/version_header.cmake")
include("${CMAKE_SOURCE_DIR}/cmake/sources.cmake")

include("${CMAKE_SOURCE_DIR}/cmake/compile_flags.cmake")

if(NOCTURNE_BUILD_CHECK)
    include("${CMAKE_SOURCE_DIR}/cmake/check_target.cmake")
endif()

if(NOCTURNE_BUILD_EXE)
    include("${CMAKE_SOURCE_DIR}/cmake/game_modules.cmake")
    include("${CMAKE_SOURCE_DIR}/cmake/shims.cmake")
    include("${CMAKE_SOURCE_DIR}/cmake/executable.cmake")
endif()

include("${CMAKE_SOURCE_DIR}/cmake/tests.cmake")
include("${CMAKE_SOURCE_DIR}/cmake/format.cmake")
