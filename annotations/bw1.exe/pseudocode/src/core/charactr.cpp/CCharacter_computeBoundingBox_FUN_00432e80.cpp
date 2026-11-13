// Name: core_charactr.cpp_CCharacter_computeBoundingBox_FUN_00432e80
// Address: 00432e80
// Address Range: [[00432e80, 00432f02]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_computeBoundingBox_FUN_00432e80(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_computeBoundingBox_FUN_00432e80(CCharacter *this_ptr)

{
  CVector3f *pCVar1;
  int iVar2;
  CBoundingBox3D *pCVar3;
  float *pfVar4;
  byte bVar5;
  CBoundingBox3D local_3c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  bVar5 = 0;
  if ((this_ptr->model).model_name[0] != '\0') {
    core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0056ae70
              (&this_ptr->model,&local_3c);
    pCVar3 = &local_3c;
    pfVar4 = &local_24;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar4 = (pCVar3->min).x;
      pCVar3 = (CBoundingBox3D *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
      pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
    }
    if (&this_ptr->cached_bounding_box != (CBoundingBox3D *)&local_24) {
      (this_ptr->cached_bounding_box).min.x = local_24;
      (this_ptr->cached_bounding_box).min.y = local_20;
      (this_ptr->cached_bounding_box).min.z = local_1c;
    }
    pCVar1 = &(this_ptr->cached_bounding_box).max;
    if (pCVar1 != (CVector3f *)&local_18) {
      pCVar1->x = local_18;
      (this_ptr->cached_bounding_box).max.y = local_14;
      (this_ptr->cached_bounding_box).max.z = local_10;
      return;
    }
  }
  return;
}
