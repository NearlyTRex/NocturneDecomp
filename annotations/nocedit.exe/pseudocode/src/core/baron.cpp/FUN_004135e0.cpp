// Name: core_baron.cpp_FUN_004135e0
// Address: 004135e0
// Address Range: [[004135e0, 004136a2]]
// Convention: unknown
// Signature: undefined core_baron.cpp_FUN_004135e0()

#include "nocturne.h"

/* Signature: byte actors_hero_baron.cpp_FUN_004135e0(uint param_1) */

void core_baron_cpp_FUN_004135e0(void)

{
  CVector3f *pCVar1;
  CDemonActor *this_ptr;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  SCollisionInfo *collision_info;
  CVector3f local_28;
  CVector3f local_1c;
  
  if (*(int *)(in_stack_00000004 + 0x1fcac) != 0) {
    iVar2 = *(int *)(in_stack_00000004 + 0x154);
    local_1c.z = -2.0;
    local_1c.x = 0.0;
    local_1c.y = 0.0;
    pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (*(CDemonActor **)(in_stack_00000004 + 0x1fcac),&local_28,&local_1c);
    collision_info =
         (SCollisionInfo *)(*(float *)(*(int *)(in_stack_00000004 + 0x1fcac) + 0x20) + pCVar1->x);
    (**(code **)(iVar2 + 0x60))();
    this_ptr = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(in_stack_00000004 + 0x1fcac),
                          g_CCharacterClassInfo.name_hash);
    if (this_ptr != (CDemonActor *)0x0) {
      iVar2 = (*this_ptr->vtable[1].hasCollision)(this_ptr,collision_info);
      if (iVar2 == 2) {
        core_baron_cpp_FUN_004135a0();
        return;
      }
    }
  }
  return;
}
