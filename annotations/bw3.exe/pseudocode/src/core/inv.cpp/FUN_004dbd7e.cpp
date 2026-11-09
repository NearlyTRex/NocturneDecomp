// Name: core_inv.cpp_FUN_004dbd7e
// Address: 004dbd7e
// Address Range: [[004dbd7e, 004dbe6e]]
// Convention: unknown
// Signature: void core_inv_cpp_FUN_004dbd7e(CInventory *param_1,int param_2)

#include "nocturne.h"

void core_inv_cpp_FUN_004dbd7e(CInventory *param_1,int param_2)

{
  CDemonActor *pCVar1;
  CDemonActor *this_ptr;
  char *str2;
  char *str1;
  int iVar2;
  int iVar3;
  int iVar4;
  CInventory *pCVar5;
  
  core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340(param_1,1);
  if (*(int *)(param_1 + 0x338) != 0) {
    iVar3 = 0;
    pCVar5 = param_1;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        if (*(int *)(param_1 + 0x338) == *(int *)(pCVar5 + 0x14)) break;
        iVar3 = iVar3 + 1;
        pCVar5 = pCVar5 + 4;
      } while (iVar3 < *(int *)(param_1 + 0x10));
    }
    iVar4 = 0;
    do {
      iVar3 = iVar3 + param_2;
      if (iVar3 < *(int *)(param_1 + 0x10)) {
        if (iVar3 < 0) {
          iVar3 = *(int *)(param_1 + 0x10) + -1;
        }
      }
      else {
        iVar3 = 0;
      }
      this_ptr = (CDemonActor *)
                 core_actor_cpp_castToClassHash_FUN_0040c840
                           (*(uint *)(param_1 + iVar3 * 4 + 0x14),g_CWeaponClassInfo.name_hash
                           );
      if (this_ptr != (CDemonActor *)0x0) {
        str2 = core_actor_cpp_FUN_00408870(*(CDemonActor **)(param_1 + 0x338));
        str1 = core_actor_cpp_FUN_00408870(this_ptr);
        iVar2 = _strcmp(str1,str2);
        if (iVar2 == 0) {
          pCVar1 = *(CDemonActor **)(param_1 + 0x338);
          if (this_ptr == pCVar1) {
            return;
          }
          if (pCVar1 != (CDemonActor *)0x0) {
            (**(code **)(*(int *)&pCVar1->field_0x154 + 0xc))(pCVar1,0x3dcccccd);
          }
          *(CDemonActor **)(param_1 + 0x338) = this_ptr;
          core_inv_cpp_FUN_004dd2d0(param_1,999);
          return;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 100);
  }
  return;
}
