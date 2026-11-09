// Name: core_shadow.cpp_FUN_0053ec30
// Address: 0053ec30
// Address Range: [[0053ec30, 0053ec6d]]
// Convention: unknown
// Signature: undefined4 core_shadow_cpp_FUN_0053ec30(int param_1)

#include "nocturne.h"

uint core_shadow_cpp_FUN_0053ec30(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x70) != 2) {
    iVar1 = core_motion_cpp_FUN_005035c0(param_1 + 0x2b4);
    switch(*(uint *)(iVar1 + 0x24)) {
    case 0xd:
    case 0xe:
      return 1;
    case 0xf:
    case 0x10:
      return 2;
    default:
      return 0;
    }
  }
  return 2;
}
