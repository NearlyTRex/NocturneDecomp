// Name: core_charactr.cpp_CCharacter_setOrientation_FUN_00433220
// Address: 00433220
// Address Range: [[00433220, 0043331b]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setOrientation_FUN_00433220(CCharacter *this_ptr,UOrientationVector *orientation)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_setOrientation_FUN_00433220(CCharacter *this_ptr,UOrientationVector *orientation)

{
  UOrientationVector *pUVar1;
  byte bVar2;
  float afStackY_1058 [1016];
  CVector3f *pCVar3;
  CVector3f local_70;
  float local_64;
  float local_60 [2];
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40;
  float local_34;
  float local_30 [2];
  CVector3f local_28;
  CVector3f local_1c;
  
  bVar2 = 0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
            (&this_ptr->base,&(this_ptr->model).accumulated_root_motion,&local_1c);
  pCVar3 = &this_ptr->position_delta;
  local_58.x = local_1c.x;
  *(uint *)((int)&local_58 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&local_1c + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&local_58 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&local_1c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  core_actor_cpp_CDemonActor_transformVector_FUN_00408b00(&this_ptr->base,pCVar3,&local_40);
  pUVar1 = &(this_ptr->base).orient;
  local_4c.x = local_40.x;
  *(uint *)((int)&local_4c + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&local_40 + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&local_4c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&local_40 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  if (pUVar1 != orientation) {
    (pUVar1->vec).x = (orientation->vec).x;
    (this_ptr->base).orient.vec.y = (orientation->vec).y;
    (this_ptr->base).orient.vec.z = (orientation->vec).z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(&this_ptr->base);
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408b40
            (&this_ptr->base,&local_58,&local_70);
  pCVar3 = &(this_ptr->model).accumulated_root_motion;
  local_64 = local_70.x;
  local_60[(uint)bVar2 * -2] = *(float *)((int)&local_70 + (uint)bVar2 * -8 + 4);
  local_60[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       *(float *)((int)&local_70 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  if (pCVar3 != (CVector3f *)&local_64) {
    pCVar3->x = local_64;
    (this_ptr->model).accumulated_root_motion.y = local_60[0];
    (this_ptr->model).accumulated_root_motion.z = local_60[1];
  }
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408b40
            (&this_ptr->base,&local_4c,&local_28);
  local_34 = local_28.x;
  local_30[(uint)bVar2 * -2] = *(float *)((int)&local_28 + (uint)bVar2 * -8 + 4);
  local_30[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       *(float *)((int)&local_28 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  if (&this_ptr->position_delta == (CVector3f *)&local_34) {
    return;
  }
  (this_ptr->position_delta).x = local_34;
  (this_ptr->position_delta).y = local_30[0];
  (this_ptr->position_delta).z = local_30[1];
  return;
}
