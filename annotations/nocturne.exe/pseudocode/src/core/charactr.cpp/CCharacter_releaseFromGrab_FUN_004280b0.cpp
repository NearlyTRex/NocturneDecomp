// Name: core_charactr.cpp_CCharacter_releaseFromGrab_FUN_004280b0
// Address: 004280b0
// Address Range: [[004280b0, 004280df]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_charactr_cpp_CCharacter_releaseFromGrab_FUN_004280b0(int param_1)

#include "nocturne.h"

uint __cdecl core_charactr_cpp_CCharacter_releaseFromGrab_FUN_004280b0(int param_1)

{
  int iVar1;
  uint in_EAX;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x2590);
  if (iVar1 == 0) {
    return in_EAX;
  }
  *(uint *)(param_1 + 0x2590) = 0;
  uVar2 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0xf4))(iVar1,param_1);
  return uVar2;
}
