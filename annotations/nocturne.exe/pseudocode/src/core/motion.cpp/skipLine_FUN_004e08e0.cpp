// Name: core_motion.cpp_skipLine_FUN_004e08e0
// Address: 004e08e0
// Address Range: [[004e08e0, 004e08f8]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_skipLine_FUN_004e08e0(_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_motion_cpp_skipLine_FUN_004e08e0(_FILE *file_handle)

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
