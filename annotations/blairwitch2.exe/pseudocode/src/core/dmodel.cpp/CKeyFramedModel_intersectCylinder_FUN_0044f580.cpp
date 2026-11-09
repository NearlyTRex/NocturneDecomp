// Name: core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_0044f580
// Address: 0044f580
// Address Range: [[0044f580, 0044f66e]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_intersectCylinder_FUN_0044f580(CKeyFramedModel *this_ptr,int frame_index,SIntersectXZCylinder *cylinder,CVector3f *transform_vector)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dmodel_cpp_CKeyFramedModel_intersectCylinder_FUN_0044f580(CKeyFramedModel *this_ptr,int frame_index,SIntersectXZCylinder *cylinder,CVector3f *transform_vector)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)&this_ptr->field_0x100 <= frame_index) {
    frame_index = *(int *)&this_ptr->field_0x100 + -1;
  }
  if (frame_index < 0) {
    frame_index = 0;
  }
  if (((*(float *)&this_ptr->field_0x364 != *(float *)transform_vector) ||
      (*(float *)&this_ptr->field_0x368 != *(float *)&transform_vector->field_0x4)) ||
     (*(float *)&this_ptr->field_0x36c != *(float *)&transform_vector->field_0x8)) {
    core_dmodel_cpp_FUN_0044f840(this_ptr,transform_vector);
  }
  if (*(int *)&this_ptr->field_0x358 == 0) {
    _DAT_01d046a0 = "..\\core\\dmodel.cpp";
    _DAT_01d046a4 = 0x40e;
    core_main_c_FUN_004e4500("Tried to call CKeyFramedModel::intersectCylinderXZ for model %s but this model does not have a collision triangle list!",this_ptr);
  }
  iVar2 = *(int *)&this_ptr->field_0x358 + frame_index * *(int *)&this_ptr->field_0x354 * 0x38;
  iVar1 = 0;
  if (0 < *(int *)&this_ptr->field_0x354) {
    do {
      iVar1 = iVar1 + 1;
      core_dtri_cpp_cylinderTriangleTest_FUN_00477fe0(iVar2,cylinder);
      iVar2 = iVar2 + 0x38;
    } while (iVar1 < *(int *)&this_ptr->field_0x354);
  }
  return;
}
