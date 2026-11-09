// Name: core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_00461ef0
// Address: 00461ef0
// Address Range: [[00461ef0, 00461fda]]
// Convention: __cdecl
// Signature: int __cdecl core_dmodel_cpp_CKeyFramedModel_getFloorHeight_FUN_00461ef0(CKeyFramedModel *this_ptr,int frame_index,CVector3f *position,float search_radius,float *out_height,CVector3f *transform_vector)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dmodel_cpp_CKeyFramedModel_getFloorHeight_FUN_00461ef0(CKeyFramedModel *this_ptr,int frame_index,CVector3f *position,float search_radius,float *out_height,CVector3f *transform_vector)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CDemonTriangle *triangle;
  
  if (*(int *)&this_ptr->field_0x100 <= frame_index) {
    frame_index = *(int *)&this_ptr->field_0x100 + -1;
  }
  if (frame_index < 0) {
    frame_index = 0;
  }
  if (*(int *)&this_ptr->field_0x358 == 0) {
    _DAT_01d71de0 = "..\\core\\dmodel.cpp";
    _DAT_01d71de4 = 0x43e;
    core_main_c_FUN_004e4330("Tried to call CKeyFramedModel::getFloorHeight for model %s but this model does not have a collision triangle list!",this_ptr);
  }
  if (((*(float *)&this_ptr->field_0x364 != *(float *)transform_vector) ||
      (*(float *)&this_ptr->field_0x368 != *(float *)&transform_vector->field_0x4)) ||
     (*(float *)&this_ptr->field_0x36c != *(float *)&transform_vector->field_0x8)) {
    core_dmodel_cpp_FUN_004620c0(this_ptr,transform_vector);
  }
  iVar3 = 0;
  triangle = (CDemonTriangle *)
             (*(int *)&this_ptr->field_0x358 + *(int *)&this_ptr->field_0x354 * frame_index * 0x38);
  iVar2 = 0;
  if (0 < *(int *)&this_ptr->field_0x354) {
    do {
      iVar1 = core_dtri_cpp_FUN_004795c0(triangle,position,search_radius,out_height);
      if (iVar1 != 0) {
        iVar3 = 1;
      }
      iVar2 = iVar2 + 1;
      triangle = triangle + 1;
    } while (iVar2 < *(int *)&this_ptr->field_0x354);
  }
  return iVar3;
}
