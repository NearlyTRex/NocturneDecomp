// Name: core_inv.cpp_CInventory_initialize_FUN_004bef10
// Address: 004bef10
// Address Range: [[004bef10, 004bef94]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_initialize_FUN_004bef10(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_initialize_FUN_004bef10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  core_inv_cpp_CInventory_clear_FUN_004bee80(param_1);
  iVar2 = param_1;
  do {
    iVar1 = rand();
    iVar3 = iVar2 + 4;
    *(float *)(iVar2 + 0x19c) =
         (float)iVar1 * _DAT_00586d79 * (float)_DAT_00586d81 * (float)_DAT_00586d89;
    iVar2 = iVar3;
  } while (iVar3 != param_1 + 400);
  if (*(int *)(param_1 + 0x458) != 0) {
    return;
  }
  iVar2 = core_actor_cpp_createActorByName_FUN_0040d540("CAmmo");
  *(int *)(param_1 + 0x458) = iVar2;
  (*(code *)**(uint **)(iVar2 + 0x14c))(iVar2);
  *(uint *)(param_1 + 0x45c) = 0;
  return;
}
