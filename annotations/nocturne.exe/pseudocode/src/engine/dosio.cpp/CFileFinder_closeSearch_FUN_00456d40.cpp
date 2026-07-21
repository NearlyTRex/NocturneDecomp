// Name: engine_dosio.cpp_CFileFinder_closeSearch_FUN_00456d40
// Address: 00456d40
// Address Range: [[00456d40, 00456d7b]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_CFileFinder_closeSearch_FUN_00456d40(int param_1)

#include "nocturne.h"

void __cdecl engine_dosio_cpp_CFileFinder_closeSearch_FUN_00456d40(int param_1)

{
  if (*(int *)(param_1 + 0x10c) == 0) {
    engine_dosio_cpp_CFileFinder_reset_FUN_00456d80(param_1);
    return;
  }
  FindClose(*(HANDLE *)(param_1 + 0x110));
  *(uint *)(param_1 + 0x10c) = 0;
  engine_dosio_cpp_CFileFinder_reset_FUN_00456d80(param_1);
  return;
}
