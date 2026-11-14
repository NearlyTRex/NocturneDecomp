// Name: core_charactr.cpp_CCharacter_setOrientation_FUN_00433d50
// Address: 00433d50
// Address Range: [[00433d50, 00433e4b]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setOrientation_FUN_00433d50(CCharacter *this_ptr,UOrientationVector *orientation)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_charactr_cpp_CCharacter_setOrientation_FUN_00433d50(CCharacter *this_ptr,UOrientationVector *orientation)

{
  UOrientationVector *pUVar1;
  byte bVar2;
  float afStackY_1058 [1016];
  CVector3f *pCVar3;
  float local_70;
  float local_64;
  float local_60;
  float local_5c;
  uint local_58;
  uint local_4c;
  uint local_40;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  uint local_1c;
  
  bVar2 = 0;
  core_actor_cpp_FUN_00408ac0(this_ptr,&(this_ptr->model).accumulated_root_motion);
  pCVar3 = &this_ptr->position_delta;
  local_58 = local_1c;
  *(uint *)((int)&stack0xffffffac + (uint)bVar2 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffe8 + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffffb0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  core_actor_cpp_FUN_00408ac0(this_ptr,pCVar3);
  pUVar1 = &(this_ptr->base).orient;
  local_4c = local_40;
  *(uint *)((int)&stack0xffffffb8 + (uint)bVar2 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffc4 + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffffbc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if (pUVar1 != orientation) {
    (pUVar1->vec).x = (orientation->vec).x;
    (this_ptr->base).orient.vec.y = (orientation->vec).y;
    (this_ptr->base).orient.vec.z = (orientation->vec).z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(&this_ptr->base);
  core_actor_cpp_FUN_00408b00(this_ptr,&stack0xffffffa8);
  pCVar3 = &(this_ptr->model).accumulated_root_motion;
  local_64 = local_70;
  (&stack0xffffffa0)[(uint)bVar2 * 0xfffffffe] =
       (float)*(uint *)(&stack0xffffff94 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffa4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffff98 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if (pCVar3 != (CVector3f *)&stack0xffffff9c) {
    pCVar3->x = local_64;
    (this_ptr->model).accumulated_root_motion.y = local_60;
    (this_ptr->model).accumulated_root_motion.z = local_5c;
  }
  core_actor_cpp_FUN_00408b00(this_ptr,&stack0xffffffb4);
  local_34 = local_28;
  (&stack0xffffffd0)[(uint)bVar2 * 0xfffffffe] =
       (float)*(uint *)(&stack0xffffffdc + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if (&this_ptr->position_delta == (CVector3f *)&stack0xffffffcc) {
    return;
  }
  (this_ptr->position_delta).x = local_34;
  (this_ptr->position_delta).y = local_30;
  (this_ptr->position_delta).z = local_2c;
  return;
}
