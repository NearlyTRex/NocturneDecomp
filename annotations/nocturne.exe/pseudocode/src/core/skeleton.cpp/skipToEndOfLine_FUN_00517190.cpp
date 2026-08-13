// Name: core_skeleton.cpp_skipToEndOfLine_FUN_00517190
// Address: 00517190
// Address Range: [[00517190, 005171a8]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_skipToEndOfLine_FUN_00517190(_FILE *file_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_skipToEndOfLine_FUN_00517190(_FILE *file_ptr)

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
