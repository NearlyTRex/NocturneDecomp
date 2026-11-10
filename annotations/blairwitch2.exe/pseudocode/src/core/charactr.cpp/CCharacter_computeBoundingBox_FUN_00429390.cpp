// Name: core_charactr.cpp_CCharacter_computeBoundingBox_FUN_00429390
// Address: 00429390
// Address Range: [[00429390, 00429412]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_computeBoundingBox_FUN_00429390(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_computeBoundingBox_FUN_00429390(CCharacter *this_ptr)

{
  CVector3f *pCVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  byte bVar5;
  float local_3c [6];
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  bVar5 = 0;
  if ((this_ptr->model).field_0x2260 != '\0') {
    core_skeleton_cpp_FUN_005487d0(&this_ptr->model);
    pfVar3 = local_3c;
    pfVar4 = &local_24;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar4 = *pfVar3;
      pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
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
