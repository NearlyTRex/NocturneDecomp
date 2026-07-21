// Name: core_fire.cpp_CBulletTrail_process_FUN_004856a0
// Address: 004856a0
// Address Range: [[004856a0, 004856b7]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletTrail_process_FUN_004856a0(int param_1)

#include "nocturne.h"

void __cdecl core_fire_cpp_CBulletTrail_process_FUN_004856a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20) + -1;
  *(int *)(param_1 + 0x20) = iVar1;
  if (-1 < iVar1) {
    return;
  }
  *(uint *)(param_1 + 0x20) = 0;
  return;
}
