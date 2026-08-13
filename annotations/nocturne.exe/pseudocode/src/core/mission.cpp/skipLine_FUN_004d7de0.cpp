// Name: core_mission.cpp_skipLine_FUN_004d7de0
// Address: 004d7de0
// Address Range: [[004d7de0, 004d7df8]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_skipLine_FUN_004d7de0(_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_mission_cpp_skipLine_FUN_004d7de0(_FILE *file_handle)

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
