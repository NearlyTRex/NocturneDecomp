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
  if ((((float)this_ptr->texture_list[8].textures[0].base.type != transform_vector->x) ||
      ((float)this_ptr->texture_list[8].textures[0].base.count != transform_vector->y)) ||
     (*(float *)this_ptr->texture_list[8].textures[0].texture_name != transform_vector->z)) {
    core_dmodel_cpp_CKeyFramedModel_populateCollisionList_FUN_00454100(this_ptr,transform_vector);
  }
  if (*(int *)(this_ptr->texture_list[7].textures[2].texture_name + 4) == 0) {
    PTR_01cc4800 = "..\\core\\dmodel.cpp";
    INT_01cc4804 = 0x40e;
    core_main_c_FUN_004c8440("Tried to call CKeyFramedModel::intersectCylinderXZ for model %s but this model does not have a collision triangle list!",this_ptr);
  }
  triangle = (CDemonTriangle *)
             (*(int *)(this_ptr->texture_list[7].textures[2].texture_name + 4) +
             frame_index * *(int *)this_ptr->texture_list[7].textures[2].texture_name * 0x38);
  iVar1 = 0;
  if (0 < *(int *)this_ptr->texture_list[7].textures[2].texture_name) {
    do {
      iVar1 = iVar1 + 1;
      core_dtri_cpp_cylinderTriangleTest_FUN_0046cba0(triangle,cylinder);
      triangle = triangle + 1;
    } while (iVar1 < *(int *)this_ptr->texture_list[7].textures[2].texture_name);
  }
  return;
}
