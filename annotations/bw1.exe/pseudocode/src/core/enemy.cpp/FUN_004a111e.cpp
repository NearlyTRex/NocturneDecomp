// Name: core_enemy.cpp_FUN_004a111e
// Address: 004a111e
// Address Range: [[004a111e, 004a119b]]
// Convention: unknown
// Signature: int core_enemy_cpp_FUN_004a111e(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_enemy_cpp_FUN_004a111e(CDemonActor *param_1)

{
  CDemonActor *actor_ptr;
  char *class_name;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  class_name = core_actor_cpp_FUN_00408830(param_1);
  iVar2 = 0;
  while( true ) {
    if (*(int *)&g_CDemonSetPtr->field_0x150fec <= iVar4) break;
    actor_ptr = *(CDemonActor **)(&g_CDemonSetPtr->field_0x150ff0 + iVar3);
    iVar1 = core_actor_cpp_FUN_0040c550(actor_ptr,class_name);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*(int *)&actor_ptr->field_0x154 + 0x10c))(actor_ptr);
      if ((iVar1 == 0) &&
         (*(int *)&actor_ptr[0x90].field_0x68 == *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4))) {
        iVar2 = iVar2 + 1;
      }
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
  }
  return iVar2;
}
