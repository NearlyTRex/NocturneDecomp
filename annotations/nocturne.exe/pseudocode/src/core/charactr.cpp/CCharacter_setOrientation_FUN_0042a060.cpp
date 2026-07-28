// Name: core_charactr.cpp_CCharacter_setOrientation_FUN_0042a060
// Address: 0042a060
// Address Range: [[0042a060, 0042a11c]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setOrientation_FUN_0042a060(CCharacter *this_ptr,UOrientationVector *orientation)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_setOrientation_FUN_0042a060(CCharacter *this_ptr,UOrientationVector *orientation)

{
  UOrientationVector *pUVar1;
  CVector3f *pCVar2;
  float *pfVar3;
  byte local_38 [12];
  byte local_2c [12];
  byte local_20 [12];
  byte local_14 [12];
  
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
            (this_ptr,local_20,&(this_ptr->model).accumulated_root_motion);
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
            (this_ptr,local_14,&this_ptr->position_delta);
  pUVar1 = &(this_ptr->base).orient;
  if (pUVar1 != orientation) {
    (pUVar1->vec).x = (orientation->vec).x;
    (this_ptr->base).orient.vec.y = (orientation->vec).y;
    (this_ptr->base).orient.vec.z = (orientation->vec).z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(&this_ptr->base);
  pfVar3 = (float *)core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
                              (this_ptr,local_38,local_20);
  pCVar2 = &(this_ptr->model).accumulated_root_motion;
  if (pCVar2 != (CVector3f *)pfVar3) {
    pCVar2->x = *pfVar3;
    (this_ptr->model).accumulated_root_motion.y = pfVar3[1];
    (this_ptr->model).accumulated_root_motion.z = pfVar3[2];
  }
  pfVar3 = (float *)core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
                              (this_ptr,local_2c,local_14);
  if (&this_ptr->position_delta == (CVector3f *)pfVar3) {
    return;
  }
  (this_ptr->position_delta).x = *pfVar3;
  (this_ptr->position_delta).y = pfVar3[1];
  (this_ptr->position_delta).z = pfVar3[2];
  return;
}
