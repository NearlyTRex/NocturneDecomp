// Name: core_baron.cpp_CBaron_updateMountedPosition_FUN_0040fc00
// Address: 0040fc00
// Address Range: [[0040fc00, 0040fce4]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_updateMountedPosition_FUN_0040fc00(CBaron *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_baron_cpp_CBaron_updateMountedPosition_FUN_0040fc00(CBaron *this_ptr,float delta_time)

{
  CDemonActor_vtable *pCVar1;
  CCharacter *this_ptr_00;
  EDeathState EVar2;
  byte bVar3;
  float afStackY_1038 [1015];
  CBaron *this_ptr_01;
  CVector3f *new_position;
  CVector3f *new_orientation;
  float local_50;
  float in_stack_ffffffbc;
  uint local_38;
  uint local_34;
  uint local_30;
  float local_2c;
  CVector3f local_20;
  CDemonActor_vtable *local_14;
  
  bVar3 = 0;
  if (this_ptr->target_actor != (CDemonActor *)0x0) {
    local_14 = (this_ptr->base).base.base.vtable._ub;
    local_38 = 0;
    new_orientation = (CVector3f *)&this_ptr->target_actor->orient;
    local_34 = 0;
    local_30 = 0xc0000000;
    core_actor_cpp_FUN_00408ac0(this_ptr->target_actor,&stack0xffffffc8);
    local_2c = in_stack_ffffffbc;
    *(uint *)((int)&stack0xffffffd8 + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffc0 + (uint)bVar3 * -8);
    pCVar1 = local_14;
    *(uint *)((int)&stack0xffffffd8 + ((uint)bVar3 * -2 + (uint)bVar3 * -2 + 1) * 4) =
         *(uint *)(&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    new_position = &local_20;
    local_50 = (this_ptr->target_actor->location).position.x + local_2c;
    local_20.x = local_50;
    *(uint *)((int)&local_20 + (uint)bVar3 * -8 + 4) =
         *(uint *)(&stack0xffffffb4 + (uint)bVar3 * -8);
    this_ptr_01 = this_ptr;
    *(uint *)((int)&local_20 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         *(uint *)((int)&stack0xffffffd8 + ((uint)bVar3 * -2 + (uint)bVar3 * -2 + -8) * 4);
    (*pCVar1->setPositionAndOrientation)((CDemonActor *)this_ptr_01,new_position,new_orientation);
    local_50 = 5.96811e-39;
    this_ptr_00 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c600
                            (this_ptr->target_actor,g_CCharacterClassInfo.name_hash);
    if (this_ptr_00 != (CCharacter *)0x0) {
      EVar2 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00);
      if (EVar2 == DEATH_STATE_DEAD) {
        core_baron_cpp_CBaron_detachFromOwner_FUN_0040fbc0(this_ptr,this_ptr->target_actor);
        return;
      }
    }
  }
  return;
}
