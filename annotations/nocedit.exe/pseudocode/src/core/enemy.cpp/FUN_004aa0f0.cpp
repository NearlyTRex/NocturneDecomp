// Name: core_enemy.cpp_FUN_004aa0f0
// Address: 004aa0f0
// Address Range: [[004aa0f0, 004aa16b]]
// Convention: unknown
// Signature: undefined core_enemy.cpp_FUN_004aa0f0()

#include "nocturne.h"

int core_enemy_cpp_FUN_004aa0f0(void)

{
  CDemonActor *actor_ptr;
  CDemonActor *class_name;
  int iVar1;
  int iVar2;
  int iVar3;
  SCollisionInfo *unaff_EDI;
  int iVar4;
  CDemonActor *in_stack_00000004;
  
  iVar4 = 0;
  iVar3 = 0;
  class_name = (CDemonActor *)
               core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(in_stack_00000004);
  iVar2 = 0;
  while( true ) {
    if (*(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x1f3c) <= iVar4) break;
    actor_ptr = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iVar3 + 8000);
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,class_name->actor_name);
    if (iVar1 != 0) {
      class_name = actor_ptr;
      iVar1 = (*actor_ptr->vtable[1].hasCollision)(actor_ptr,unaff_EDI);
      if ((iVar1 == 0) &&
         (*(CHero **)(actor_ptr[0x8d].create_event + 0x4c) == g_HeroActors[g_LocalHeroIndex])) {
        iVar2 = iVar2 + 1;
      }
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
  }
  return iVar2;
}
