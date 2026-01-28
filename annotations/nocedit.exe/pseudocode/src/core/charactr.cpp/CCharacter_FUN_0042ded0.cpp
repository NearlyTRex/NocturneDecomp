// Name: core_charactr.cpp_CCharacter_FUN_0042ded0
// Address: 0042ded0
// Address Range: [[0042ded0, 0042df8c]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_FUN_0042ded0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042ded0(CCharacter *this_ptr)

{
  COrientation *pCVar1;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  float *in_stack_00000008;
  CVector3f local_38;
  CVector3f local_2c;
  CVector3f local_20;
  CVector3f local_14;
  
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (&this_ptr->base,&local_20,&(this_ptr->model).accumulated_root_motion);
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (&this_ptr->base,&local_14,(CVector3f *)(this_ptr->unk1 + 0x10));
  pCVar1 = &(this_ptr->base).orient;
  if (pCVar1 != (COrientation *)in_stack_00000008) {
    pCVar1->pitch = *in_stack_00000008;
    (this_ptr->base).orient.bank = in_stack_00000008[1];
    (this_ptr->base).orient.heading = in_stack_00000008[2];
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
  pCVar2 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                     (&this_ptr->base,&local_38,&local_20);
  pCVar3 = &(this_ptr->model).accumulated_root_motion;
  if (pCVar3 != pCVar2) {
    pCVar3->x = pCVar2->x;
    (this_ptr->model).accumulated_root_motion.y = pCVar2->y;
    (this_ptr->model).accumulated_root_motion.z = pCVar2->z;
  }
  pCVar3 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                     (&this_ptr->base,&local_2c,&local_14);
  if ((CVector3f *)(this_ptr->unk1 + 0x10) == pCVar3) {
    return;
  }
  ((CVector3f *)(this_ptr->unk1 + 0x10))->x = pCVar3->x;
  *(float *)(this_ptr->unk1 + 0x14) = pCVar3->y;
  *(float *)(this_ptr->unk1 + 0x18) = pCVar3->z;
  return;
}
