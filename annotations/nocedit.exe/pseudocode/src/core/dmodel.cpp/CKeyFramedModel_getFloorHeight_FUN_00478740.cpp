// Name: core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_00478740
// Address: 00478740
// Address Range: [[00478740, 0047882a]]
// Convention: __cdecl
// Signature: int __cdecl core_dmodel_cpp_CKeyFramedModel_getFloorHeight_FUN_00478740 (CKeyFramedModel *this_ptr,int frame_index,float x,float z,float *out_height, CVector3f *transform_vector)

#include "nocturne.h"

int __cdecl
core_dmodel_cpp_CKeyFramedModel_getFloorHeight_FUN_00478740
          (CKeyFramedModel *this_ptr,int frame_index,float x,float z,float *out_height,
          CVector3f *transform_vector)

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
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0x43e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Tried to call CKeyFramedModel::getFloorHeight for model %s but this model does not have a collision triangle list!",this_ptr);
  }
  if ((((this_ptr->transform_vector).x != transform_vector->x) ||
      ((this_ptr->transform_vector).y != transform_vector->y)) ||
     ((this_ptr->transform_vector).z != transform_vector->z)) {
    core_dmodel_cpp_CKeyFramedModel_populateCollisionList_FUN_00478950(this_ptr,transform_vector);
  }
  iVar3 = 0;
  triangle = this_ptr->collision_triangle_list + this_ptr->collision_triangle_count * frame_index;
  iVar2 = 0;
  if (0 < this_ptr->collision_triangle_count) {
    do {
      iVar1 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0(triangle,x,z,out_height);
      if (iVar1 != 0) {
        iVar3 = 1;
      }
      iVar2 = iVar2 + 1;
      triangle = triangle + 1;
    } while (iVar2 < this_ptr->collision_triangle_count);
  }
  return iVar3;
}
