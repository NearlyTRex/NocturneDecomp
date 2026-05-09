// Name: core_charactr.cpp_CCharacter_setOrientation_FUN_0042ded0
// Address: 0042ded0
// MANUAL RECONSTRUCTION
// Address Range: [[0042ded0, 0042df8c]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setOrientation_FUN_0042ded0(CCharacter *this_ptr,UOrientationVector *orientation)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_setOrientation_FUN_0042ded0(CCharacter *this_ptr,UOrientationVector *orientation)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  CVector3f local_38;
  CVector3f local_2c;
  CVector3f local_20;
  CVector3f local_14;
  UOrientationVector *pUVar1;
  
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (&this_ptr->base,&local_20,&(this_ptr->model).accumulated_root_motion);
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (&this_ptr->base,&local_14,&this_ptr->position_delta);
  pUVar1 = &(this_ptr->base).orient;
  if (pUVar1 != orientation) {
    pUVar1->vec = orientation->vec;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
  pCVar2 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                     (&this_ptr->base,&local_38,&local_20);
  pCVar1 = &(this_ptr->model).accumulated_root_motion;
  if (pCVar1 != pCVar2) {
    *pCVar1 = *pCVar2;
  }
  pCVar3 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                     (&this_ptr->base,&local_2c,&local_14);
  if (&this_ptr->position_delta == pCVar3) {
    return;
  }
  this_ptr->position_delta = *pCVar3;
  return;
}
