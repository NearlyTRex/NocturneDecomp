// Name: core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_0044e720
// Address: 0044e720
// Address Range: [[0044e720, 0044e7c0]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_rotateAndLightVertices_FUN_0044e720(CKeyFramedModel *this_ptr,int frame_index,CKeyFramedModelInstance *instance)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_rotateAndLightVertices_FUN_0044e720(CKeyFramedModel *this_ptr,int frame_index,CKeyFramedModelInstance *instance)

{
  CVector3i *input_vertices;
  
  if (this_ptr->poly_count < 1) {
    return;
  }
  input_vertices =
       core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_0044e6e0(this_ptr,frame_index);
  core_set_cpp_CDemonSet_rotateVerticies_FUN_00531e90
            (g_CDemonSetPtr,this_ptr->vertex_count,input_vertices);
  if (this_ptr->vertex_normal_list != (CVector3i *)0x0) {
    core_set_cpp_CDemonSet_lightVerticies_FUN_00532190
              (g_CDemonSetPtr,this_ptr->vertex_count,this_ptr->poly_count,this_ptr->poly_vert_list,
               input_vertices,4,this_ptr->vertex_normal_list);
    return;
  }
  core_set_cpp_CDemonSet_lightVerticies_FUN_00532190
            (g_CDemonSetPtr,this_ptr->vertex_count,this_ptr->poly_count,this_ptr->poly_vert_list,
             input_vertices,4,(CVector3i *)0x0);
  return;
}
