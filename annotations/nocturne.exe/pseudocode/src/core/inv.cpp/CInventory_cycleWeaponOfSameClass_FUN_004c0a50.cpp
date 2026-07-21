// Name: core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004c0a50
// Address: 004c0a50
// Address Range: [[004c0a50, 004c0b3e]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_cycleWeaponOfSameClass_FUN_004c0a50(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_cycleWeaponOfSameClass_FUN_004c0a50(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004c1d20(param_1,1);
  if (*(int *)(param_1 + 0x330) != 0) {
    iVar4 = 0;
    iVar5 = param_1;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        if (*(int *)(param_1 + 0x330) == *(int *)(iVar5 + 0xc)) break;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar4 < *(int *)(param_1 + 8));
    }
    iVar5 = 0;
    do {
      iVar4 = iVar4 + param_2;
      if (iVar4 < *(int *)(param_1 + 8)) {
        if (iVar4 < 0) {
          iVar4 = *(int *)(param_1 + 8) + -1;
        }
      }
      else {
        iVar4 = 0;
      }
      iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                        (*(uint *)(param_1 + 0xc + iVar4 * 4),_DAT_02ddf9a8);
      if (iVar1 != 0) {
        uVar2 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0
                          (*(uint *)(param_1 + 0x330));
        uVar2 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(iVar1,uVar2);
        iVar3 = _strcmp(uVar2);
        if (iVar3 == 0) {
          iVar4 = *(int *)(param_1 + 0x330);
          if (iVar1 == iVar4) {
            return;
          }
          if (iVar4 != 0) {
            (**(code **)(*(int *)(iVar4 + 0x14c) + 4))(iVar4,0x3dcccccd);
          }
          *(int *)(param_1 + 0x330) = iVar1;
          core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004c1b90(param_1,999);
          return;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 100);
  }
  return;
}
