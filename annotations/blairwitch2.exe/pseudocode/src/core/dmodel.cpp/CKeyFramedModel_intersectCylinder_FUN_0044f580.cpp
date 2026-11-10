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
  CDemonTriangle *pCVar2;
  
  if (this_ptr->frame_count <= frame_index) {
    frame_index = this_ptr->frame_count + -1;
  }
  if (frame_index < 0) {
    frame_index = 0;
  }
  if ((((this_ptr->transform_vector).x != transform_vector->x) ||
      ((this_ptr->transform_vector).y != transform_vector->y)) ||
     ((this_ptr->transform_vector).z != transform_vector->z)) {
    core_dmodel_cpp_CKeyFramedModel_populateCollisionList_FUN_0044f840(this_ptr,transform_vector);
  }
  if (this_ptr->collision_triangle_list == (CDemonTriangle *)0x0) {
    _DAT_01d046a0 = "..\\core\\dmodel.cpp";
    _DAT_01d046a4 = 0x40e;
    core_main_c_FUN_004e4500("Tried to call CKeyFramedModel::intersectCylinderXZ for model %s but this model does not have a collision triangle list!",this_ptr);
  }
  pCVar2 = this_ptr->collision_triangle_list + frame_index * this_ptr->collision_triangle_count;
  iVar1 = 0;
  if (0 < this_ptr->collision_triangle_count) {
    do {
      iVar1 = iVar1 + 1;
      core_dtri_cpp_cylinderTriangleTest_FUN_00477fe0(pCVar2,cylinder);
      pCVar2 = pCVar2 + 1;
    } while (iVar1 < this_ptr->collision_triangle_count);
  }
  return;
}
