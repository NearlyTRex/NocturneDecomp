// Name: core_skeleton.cpp_skipToEndOfLine_FUN_00562bc0
// Address: 00562bc0
// Address Range: [[00562bc0, 00562bd8]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_skipToEndOfLine_FUN_00562bc0(_FILE *file_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_skipToEndOfLine_FUN_00562bc0(_FILE *file_ptr)

{
  int iVar1;
  
  do {
    iVar1 = _fgetc(file_ptr);
    if (iVar1 < 0) {
      return;
    }
  } while (iVar1 != 10);
  return;
}
