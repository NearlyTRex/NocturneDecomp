// Name: core_baron.cpp_CBaron_updateMountedPosition_FUN_00410080
// Address: 00410080
// Address Range: [[00410080, 00410164]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_updateMountedPosition_FUN_00410080(CBaron *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_updateMountedPosition_FUN_00410080(CBaron *this_ptr,float delta_time)

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
  CVector3f local_38;
  float local_2c;
  float local_28 [2];
  CVector3f local_20;
  CDemonActor_vtable *local_14;
  
  bVar3 = 0;
  if (this_ptr->target_actor != (CDemonActor *)0x0) {
    local_14 = (this_ptr->base).base.base.vtable._ub;
    local_38.x = 0.0;
    new_orientation = (CVector3f *)&this_ptr->target_actor->orient;
    local_38.y = 0.0;
    local_38.z = -2.0;
    core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
              (this_ptr->target_actor,&local_38,(CVector3f *)&stack0xffffffbc);
    local_2c = in_stack_ffffffbc;
    local_28[(uint)bVar3 * -2] = *(float *)(&stack0xffffffc0 + (uint)bVar3 * -8);
    pCVar1 = local_14;
    local_28[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         *(float *)(&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    new_position = &local_20;
    local_50 = (this_ptr->target_actor->location).position.x + local_2c;
    local_20.x = local_50;
    *(uint *)((int)&local_20 + (uint)bVar3 * -8 + 4) =
         *(uint *)(&stack0xffffffb4 + (uint)bVar3 * -8);
    this_ptr_01 = this_ptr;
    *(float *)((int)&local_20 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         local_28[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -8];
    (*pCVar1->setPositionAndOrientation)((CDemonActor *)this_ptr_01,new_position,new_orientation);
    local_50 = 5.969725e-39;
    this_ptr_00 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (this_ptr->target_actor,g_CCharacterClassInfo.name_hash);
    if (this_ptr_00 != (CCharacter *)0x0) {
      EVar2 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00);
      if (EVar2 == DEATH_STATE_DEAD) {
        core_baron_cpp_CBaron_detachFromOwner_FUN_00410040(this_ptr,this_ptr->target_actor);
        return;
      }
    }
  }
  return;
}
