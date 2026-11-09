// Name: core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_00461e00
// Address: 00461e00
// Address Range: [[00461e00, 00461eee]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_intersectCylinder_FUN_00461e00(CKeyFramedModel *this_ptr,int frame_index,SIntersectXZCylinder *cylinder,CVector3f *transform_vector)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dmodel_cpp_CKeyFramedModel_intersectCylinder_FUN_00461e00(CKeyFramedModel *this_ptr,int frame_index,SIntersectXZCylinder *cylinder,CVector3f *transform_vector)

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
    core_dmodel_cpp_FUN_004620c0(this_ptr,transform_vector);
  }
  if (*(int *)&this_ptr->field_0x358 == 0) {
    _DAT_01d71de0 = "..\\core\\dmodel.cpp";
    _DAT_01d71de4 = 0x40e;
    core_main_c_FUN_004e4330("Tried to call CKeyFramedModel::intersectCylinderXZ for model %s but this model does not have a collision triangle list!",this_ptr);
  }
  iVar2 = *(int *)&this_ptr->field_0x358 + frame_index * *(int *)&this_ptr->field_0x354 * 0x38;
  iVar1 = 0;
  if (0 < *(int *)&this_ptr->field_0x354) {
    do {
      iVar1 = iVar1 + 1;
      core_dtri_cpp_cylinderTriangleTest_FUN_00479050(iVar2,cylinder);
      iVar2 = iVar2 + 0x38;
    } while (iVar1 < *(int *)&this_ptr->field_0x354);
  }
  return;
}
