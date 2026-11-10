// Name: core_enemy.cpp_FUN_00488aae
// Address: 00488aae
// Address Range: [[00488aae, 00488b2b]]
// Convention: unknown
// Signature: int core_enemy_cpp_FUN_00488aae(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_enemy_cpp_FUN_00488aae(uint param_1)

{
  CCharacter *this_ptr;
  char *class_name;
  int iVar1;
  EDeathState EVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = 0;
  class_name = (char *)core_actor_cpp_FUN_00408a50(param_1);
  iVar3 = 0;
  while( true ) {
    if (g_CDemonSetPtr->enemy_count <= iVar5) break;
    this_ptr = *(CCharacter **)((int)g_CDemonSetPtr->enemies + iVar4);
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c840(&this_ptr->base,class_name);
    if (iVar1 != 0) {
      EVar2 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
      if ((EVar2 == DEATH_STATE_ALIVE) &&
         (*(int *)(this_ptr[1].base.actor_name + 0x18) == *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4)))
      {
        iVar3 = iVar3 + 1;
      }
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
  }
  return iVar3;
}
