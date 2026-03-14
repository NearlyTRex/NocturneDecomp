// Name: core_skeledit.cpp_skipFileLines_FUN_005894c0
// Address: 005894c0
// Address Range: [[005894c0, 005894f1]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_skipFileLines_FUN_005894c0(_FILE *file_handle,int line_count)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_skipFileLines_FUN_005894c0(_FILE *file_handle,int line_count)

{
  int iVar1;
  
  do {
    if (line_count < 1) {
      return;
    }
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) {
        return;
      }
    } while (iVar1 != 10);
    line_count = line_count + -1;
  } while( true );
}
