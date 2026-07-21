// Name: core_inv.cpp_CInventory_hasItemOfClass_FUN_004c0760
// Address: 004c0760
// Address Range: [[004c0760, 004c07a3]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_inv_cpp_CInventory_hasItemOfClass_FUN_004c0760(int param_1,undefined4 param_2)

#include "nocturne.h"

uint __cdecl core_inv_cpp_CInventory_hasItemOfClass_FUN_004c0760(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = param_1;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(*(uint *)(iVar3 + 0xc),param_2);
      if (iVar1 != 0) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  return 0;
}
