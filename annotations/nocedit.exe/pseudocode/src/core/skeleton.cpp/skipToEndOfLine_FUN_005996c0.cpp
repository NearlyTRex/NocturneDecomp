// Name: core_skeleton.cpp_skipToEndOfLine_FUN_005996c0
// Address: 005996c0
// Address Range: [[005996c0, 005996d8]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_skipToEndOfLine_FUN_005996c0(FILE *file_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_skipToEndOfLine_FUN_005996c0(FILE *file_ptr)

{
  int iVar1;
  
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_ptr);
    if (iVar1 < 0) {
      return;
    }
  } while (iVar1 != 10);
  return;
}
