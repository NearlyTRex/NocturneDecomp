// Name: core_inv.cpp_FUN_004dbd7e
// Address: 004dbd7e
// Address Range: [[004dbd7e, 004dbe6e]]
// Convention: unknown
// Signature: void core_inv_cpp_FUN_004dbd7e(CInventory *param_1,int param_2)

#include "nocturne.h"

void core_inv_cpp_FUN_004dbd7e(CInventory *param_1,int param_2)

{
  CDemonActor *this_ptr;
  CDemonActor *this_ptr_00;
  char *str2;
  char *str1;
  int iVar1;
  int iVar2;
  int iVar3;
  CInventory *pCVar4;
  
  core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340(param_1,1);
  if (*(int *)(param_1 + 0x338) != 0) {
    iVar2 = 0;
    pCVar4 = param_1;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        if (*(int *)(param_1 + 0x338) == *(int *)(pCVar4 + 0x14)) break;
        iVar2 = iVar2 + 1;
        pCVar4 = pCVar4 + 4;
      } while (iVar2 < *(int *)(param_1 + 0x10));
    }
    iVar3 = 0;
    do {
      iVar2 = iVar2 + param_2;
      if (iVar2 < *(int *)(param_1 + 0x10)) {
        if (iVar2 < 0) {
          iVar2 = *(int *)(param_1 + 0x10) + -1;
        }
      }
      else {
        iVar2 = 0;
      }
      this_ptr_00 = (CDemonActor *)
                    core_actor_cpp_castToClassHash_FUN_0040c840
                              (*(uint *)(param_1 + iVar2 * 4 + 0x14),
                               g_CWeaponClassInfo.name_hash);
      if (this_ptr_00 != (CDemonActor *)0x0) {
        str2 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408870
                         (*(CDemonActor **)(param_1 + 0x338));
        str1 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408870(this_ptr_00);
        iVar1 = _strcmp(str1,str2);
        if (iVar1 == 0) {
          this_ptr = *(CDemonActor **)(param_1 + 0x338);
          if (this_ptr_00 == this_ptr) {
            return;
          }
          if (this_ptr != (CDemonActor *)0x0) {
            (*((this_ptr->vtable)._ub)->process)(this_ptr,0.1);
          }
          *(CDemonActor **)(param_1 + 0x338) = this_ptr_00;
          core_inv_cpp_FUN_004dd2d0(param_1,999);
          return;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 100);
  }
  return;
}
