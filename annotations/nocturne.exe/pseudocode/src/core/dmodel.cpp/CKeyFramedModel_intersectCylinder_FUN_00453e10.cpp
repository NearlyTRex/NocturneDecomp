// Name: core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_00453e10
// Address: 00453e10
// Address Range: [[00453e10, 00453efe]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_intersectCylinder_FUN_00453e10(CKeyFramedModel *this_ptr,int frame_index,SIntersectXZCylinder *cylinder,CVector3f *transform_vector)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_intersectCylinder_FUN_00453e10(CKeyFramedModel *this_ptr,int frame_index,SIntersectXZCylinder *cylinder,CVector3f *transform_vector)

{
  int iVar1;
  CDemonTriangle *triangle;
  
  if (this_ptr->frame_count <= frame_index) {
    frame_index = this_ptr->frame_count + -1;
  }
  if (frame_index < 0) {
    frame_index = 0;
  }
  if ((((this_ptr->transform_vector).x != transform_vector->x) ||
      ((this_ptr->transform_vector).y != transform_vector->y)) ||
     ((this_ptr->transform_vector).z != transform_vector->z)) {
    core_dmodel_cpp_CKeyFramedModel_populateCollisionList_FUN_00454100(this_ptr,transform_vector);
  }
  if (this_ptr->collision_triangle_list == (CDemonTriangle *)0x0) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 1038;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Tried to call CKeyFramedModel::intersectCylinderXZ for model %s but this model does not have a collision triangle list!");
  }
  triangle = this_ptr->collision_triangle_list + frame_index * this_ptr->collision_triangle_count;
  iVar1 = 0;
  if (0 < this_ptr->collision_triangle_count) {
    do {
      iVar1 = iVar1 + 1;
      core_dtri_cpp_cylinderTriangleTest_FUN_0046cba0(triangle,cylinder);
      triangle = triangle + 1;
    } while (iVar1 < this_ptr->collision_triangle_count);
  }
  return;
}
