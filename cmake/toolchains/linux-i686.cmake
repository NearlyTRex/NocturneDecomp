# 32-bit Linux toolchain using clang/clang++ (-m32).
# Matches compiler_config.py so syntax-check and full build stay in sync.

set(CMAKE_SYSTEM_NAME       Linux)
set(CMAKE_SYSTEM_PROCESSOR  i686)

if(NOT DEFINED CMAKE_C_COMPILER)
    set(CMAKE_C_COMPILER   clang)
endif()
if(NOT DEFINED CMAKE_CXX_COMPILER)
    set(CMAKE_CXX_COMPILER clang++)
endif()

set(_NOCTURNE_TARGET_FLAGS "-m32 -mmmx -fasm-blocks")

set(CMAKE_C_FLAGS_INIT   "${_NOCTURNE_TARGET_FLAGS}")
set(CMAKE_CXX_FLAGS_INIT "${_NOCTURNE_TARGET_FLAGS}")
set(CMAKE_EXE_LINKER_FLAGS_INIT    "-m32")
set(CMAKE_SHARED_LINKER_FLAGS_INIT "-m32")

set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY BOTH)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE BOTH)
