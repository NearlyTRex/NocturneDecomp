// Name: core_enemy.cpp_FUN_004a1120
// Address: 004a1120
// Address Range: [[004a1120, 004a119b]]
// Convention: unknown
// Signature: int core_enemy_cpp_FUN_004a1120(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int core_enemy_cpp_FUN_004a1120(void)

{
  CCharacter *this_ptr;
  char *class_name;
  int iVar1;
  EDeathState EVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CDemonActor *in_stack_00000004;
  
  iVar5 = 0;
  iVar4 = 0;
  class_name = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(in_stack_00000004);
  iVar3 = 0;
  while( true ) {
    if (g_CDemonSetPtr->enemy_count <= iVar5) break;
    this_ptr = *(CCharacter **)((int)g_CDemonSetPtr->enemies + iVar4);
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(&this_ptr->base,class_name);
    if (iVar1 != 0) {
      EVar2 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
      if ((EVar2 == DEATH_STATE_ALIVE) &&
         (*(int *)(this_ptr[1].base.actor_name + 0x18) == *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4)))
      {
        iVar3 = iVar3 + 1;
      }
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
  }
  return iVar3;
}
