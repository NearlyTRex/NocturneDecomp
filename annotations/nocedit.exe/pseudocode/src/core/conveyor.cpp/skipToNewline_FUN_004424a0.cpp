// Name: core_conveyor.cpp_skipToNewline_FUN_004424a0
// Address: 004424a0
// Address Range: [[004424a0, 004424b8]]
// Convention: __cdecl
// Signature: void __cdecl core_conveyor_cpp_skipToNewline_FUN_004424a0(_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_conveyor_cpp_skipToNewline_FUN_004424a0(_FILE *file_handle)

{
  int iVar1;
  
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) {
      return;
    }
  } while (iVar1 != 10);
  return;
}
