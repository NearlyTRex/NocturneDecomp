// Name: core_enemy.cpp_CEnemy_countSameClassAttackingHero_FUN_0048a130
// Address: 0048a130
// Address Range: [[0048a130, 0048a1ab]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_CEnemy_countSameClassAttackingHero_FUN_0048a130(CEnemy *this_ptr)

#include "nocturne.h"

int __cdecl core_enemy_cpp_CEnemy_countSameClassAttackingHero_FUN_0048a130(CEnemy *this_ptr)

{
  CCharacter *this_ptr_00;
  char *class_name;
  int iVar1;
  EDeathState EVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = 0;
  class_name = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408870((CDemonActor *)this_ptr);
  iVar3 = 0;
  while( true ) {
    if (g_CDemonSetPtr->enemy_count <= iVar5) break;
    this_ptr_00 = *(CCharacter **)((int)g_CDemonSetPtr->enemies + iVar4);
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c790(&this_ptr_00->base,class_name);
    if (iVar1 != 0) {
      EVar2 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00);
      if ((EVar2 == DEATH_STATE_ALIVE) &&
         (*(CHero **)(this_ptr_00[1].base.actor_name + 0x18) ==
          g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14])) {
        iVar3 = iVar3 + 1;
      }
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
  }
  return iVar3;
}
