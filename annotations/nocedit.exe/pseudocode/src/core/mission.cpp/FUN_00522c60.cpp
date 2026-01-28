// Name: core_mission.cpp_FUN_00522c60
// Address: 00522c60
// Address Range: [[00522c60, 00522c78]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_FUN_00522c60(FILE *file_handle)

#include "nocturne.h"

void __cdecl core_mission_cpp_FUN_00522c60(FILE *file_handle)

{
  int iVar1;
  
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
    if (iVar1 < 0) {
      return;
    }
  } while (iVar1 != 10);
  return;
}
