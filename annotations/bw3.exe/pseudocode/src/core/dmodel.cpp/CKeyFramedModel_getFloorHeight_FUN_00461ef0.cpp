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
  
  if (this_ptr->frame_count <= frame_index) {
    frame_index = this_ptr->frame_count + -1;
  }
  if (frame_index < 0) {
    frame_index = 0;
  }
  if (this_ptr->collision_triangle_list == (CDemonTriangle *)0x0) {
    _DAT_01d71de0 = "..\\core\\dmodel.cpp";
    _DAT_01d71de4 = 0x43e;
    core_main_c_FUN_004e4330("Tried to call CKeyFramedModel::getFloorHeight for model %s but this model does not have a collision triangle list!",this_ptr);
  }
  if ((((this_ptr->transform_vector).x != transform_vector->x) ||
      ((this_ptr->transform_vector).y != transform_vector->y)) ||
     ((this_ptr->transform_vector).z != transform_vector->z)) {
    core_dmodel_cpp_CKeyFramedModel_populateCollisionList_FUN_004620c0(this_ptr,transform_vector);
  }
  iVar3 = 0;
  triangle = this_ptr->collision_triangle_list + this_ptr->collision_triangle_count * frame_index;
  iVar2 = 0;
  if (0 < this_ptr->collision_triangle_count) {
    do {
      iVar1 = core_dtri_cpp_FUN_004795c0(triangle,position,search_radius,out_height);
      if (iVar1 != 0) {
        iVar3 = 1;
      }
      iVar2 = iVar2 + 1;
      triangle = triangle + 1;
    } while (iVar2 < this_ptr->collision_triangle_count);
  }
  return iVar3;
}
