// Name: core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_00453f00
// Address: 00453f00
// Address Range: [[00453f00, 00453fea]]
// Convention: __cdecl
// Signature: int __cdecl core_dmodel_cpp_CKeyFramedModel_getFloorHeight_FUN_00453f00(CKeyFramedModel *this_ptr,int frame_index,CVector3f *position,float search_radius,float *out_height,CVector3f *transform_vector)

#include "nocturne.h"

int __cdecl core_dmodel_cpp_CKeyFramedModel_getFloorHeight_FUN_00453f00(CKeyFramedModel *this_ptr,int frame_index,CVector3f *position,float search_radius,float *out_height,CVector3f *transform_vector)

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
  if (*(int *)(this_ptr->texture_list[7].textures[2].texture_name + 4) == 0) {
    PTR_01cc4800 = "..\\core\\dmodel.cpp";
    INT_01cc4804 = 0x43e;
    core_main_c_FUN_004c8440("Tried to call CKeyFramedModel::getFloorHeight for model %s but this model does not have a collision triangle list!",this_ptr);
  }
  if ((((float)this_ptr->texture_list[8].textures[0].base.type != transform_vector->x) ||
      ((float)this_ptr->texture_list[8].textures[0].base.count != transform_vector->y)) ||
     (*(float *)this_ptr->texture_list[8].textures[0].texture_name != transform_vector->z)) {
    core_dmodel_cpp_CKeyFramedModel_populateCollisionList_FUN_00454100(this_ptr,transform_vector);
  }
  iVar3 = 0;
  triangle = (CDemonTriangle *)
             (*(int *)(this_ptr->texture_list[7].textures[2].texture_name + 4) +
             *(int *)this_ptr->texture_list[7].textures[2].texture_name * frame_index * 0x38);
  iVar2 = 0;
  if (0 < *(int *)this_ptr->texture_list[7].textures[2].texture_name) {
    do {
      iVar1 = core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110
                        (triangle,position,search_radius,out_height);
      if (iVar1 != 0) {
        iVar3 = 1;
      }
      iVar2 = iVar2 + 1;
      triangle = triangle + 1;
    } while (iVar2 < *(int *)this_ptr->texture_list[7].textures[2].texture_name);
  }
  return iVar3;
}
