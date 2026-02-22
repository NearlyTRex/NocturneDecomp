// Name: core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004778d0
// Address: 004778d0
// Address Range: [[004778d0, 00477970]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004778d0(CKeyFramedModel *this_ptr,int frame_index,CKeyFramedModelInstance *instance)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004778d0(CKeyFramedModel *this_ptr,int frame_index,CKeyFramedModelInstance *instance)

{
  CVector3i *vertex_positions;
  
  if (this_ptr->poly_count < 1) {
    return;
  }
  vertex_positions =
       core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00477890(this_ptr,frame_index);
  core_set_cpp_CDemonSet_rotateVertices_FUN_0056e7c0
            (g_CDemonSetPtr,this_ptr->vertex_count,&vertex_positions->x);
  if (this_ptr->vertex_normal_list != (CVector3i *)0x0) {
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
              (g_CDemonSetPtr,this_ptr->vertex_count,this_ptr->poly_count,this_ptr->poly_vert_list,
               vertex_positions,4,this_ptr->vertex_normal_list);
    return;
  }
  core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
            (g_CDemonSetPtr,this_ptr->vertex_count,this_ptr->poly_count,this_ptr->poly_vert_list,
             vertex_positions,4,(CVector3i *)0x0);
  return;
}
