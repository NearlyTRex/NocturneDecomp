// Name: core_inv.cpp_FUN_004db9d0
// Address: 004db9d0
// Address Range: [[004db9d0, 004dbb4b]]
// Convention: unknown
// Signature: void core_inv_cpp_FUN_004db9d0(CInventory *param_1,int param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

void core_inv_cpp_FUN_004db9d0(CInventory *param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CInventory *pCVar5;
  
  if (*(int *)(param_1 + 0x10) < 1) {
    *(uint *)(param_1 + *(int *)(param_1 + 0x468) * 4 + 0x610) = 0;
  }
  else {
    iVar3 = 0;
    core_inv_cpp_FUN_004dd270(param_1,1);
    if (0 < *(int *)(param_1 + 0x10)) {
      pCVar5 = param_1;
      do {
        if (*(int *)(param_1 + *(int *)(param_1 + 0x468) * 4 + 0x610) == *(int *)(pCVar5 + 0x14))
        break;
        iVar3 = iVar3 + 1;
        pCVar5 = pCVar5 + 4;
      } while (iVar3 < *(int *)(param_1 + 0x10));
    }
    if ((*(int *)(param_1 + *(int *)(param_1 + 0x468) * 4 + 0x610) != 0) &&
       (*(int *)(param_1 + iVar3 * 4 + 0x46c) != *(int *)(param_1 + 0x468))) {
      *(uint *)(param_1 + *(int *)(param_1 + 0x468) * 4 + 0x610) = 0;
    }
    iVar4 = 0;
    while( true ) {
      iVar3 = iVar3 + param_4;
      if (iVar3 < *(int *)(param_1 + 0x10)) {
        if (iVar3 < 0) {
          iVar3 = *(int *)(param_1 + 0x10) + -1;
        }
      }
      else {
        iVar3 = 0;
      }
      iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                        (*(uint *)(param_1 + iVar3 * 4 + 0x14),g_CWeaponClassInfo.name_hash);
      if ((((*(int *)(param_1 + 0x468) == *(int *)(param_1 + iVar3 * 4 + 0x46c)) && (iVar1 != 0)) &&
          (iVar2 = core_inv_cpp_FUN_004dd0a0(param_1,iVar1,param_3), iVar2 != 0)) &&
         ((param_2 == 0 || (iVar1 == param_2)))) break;
      iVar4 = iVar4 + 1;
      if (99 < iVar4) {
        return;
      }
    }
    iVar3 = *(int *)(param_1 + *(int *)(param_1 + 0x468) * 4 + 0x610);
    if (iVar3 != iVar1) {
      if (iVar3 != 0) {
        (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x14))(iVar3,0x3dcccccd);
      }
      *(int *)(param_1 + *(int *)(param_1 + 0x468) * 4 + 0x610) = iVar1;
      core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004dd020(param_1,999);
      return;
    }
  }
  return;
}
