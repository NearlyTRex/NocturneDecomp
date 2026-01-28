// Name: core_charactr.cpp_CCharacter_FUN_0042d530
// Address: 0042d530
// Address Range: [[0042d530, 0042d598]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_FUN_0042d530(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042d530(CCharacter *this_ptr)

{
  CBoundingBox3D *pCVar1;
  CBoundingBox3D CStack_1c;
  
  if ((this_ptr->model).model_name[0] != '\0') {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
                       (&this_ptr->model,&CStack_1c);
    if ((CBoundingBox3D *)(this_ptr->unk2 + 0x58) != pCVar1) {
      (((CBoundingBox3D *)(this_ptr->unk2 + 0x58))->min).x = (pCVar1->min).x;
      *(float *)(this_ptr->unk2 + 0x5c) = (pCVar1->min).y;
      *(float *)(this_ptr->unk2 + 0x60) = (pCVar1->min).z;
    }
    if ((CVector3f *)(this_ptr->unk2 + 100) != &pCVar1->max) {
      *(float *)(this_ptr->unk2 + 100) = (pCVar1->max).x;
      *(float *)(this_ptr->unk2 + 0x68) = (pCVar1->max).y;
      *(float *)(this_ptr->unk2 + 0x6c) = (pCVar1->max).z;
      return;
    }
  }
  return;
}
