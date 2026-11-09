// Name: core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_0044e720
// Address: 0044e720
// Address Range: [[0044e720, 0044e7c0]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_rotateAndLightVertices_FUN_0044e720(CKeyFramedModel *this_ptr,int frame_index,CKeyFramedModelInstance *instance)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_rotateAndLightVertices_FUN_0044e720(CKeyFramedModel *this_ptr,int frame_index,CKeyFramedModelInstance *instance)

{
  CVector3i *input_vertices;
  
  if (*(int *)&this_ptr->field_0x110 < 1) {
    return;
  }
  input_vertices =
       core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_0044e6e0(this_ptr,frame_index);
  core_set_cpp_CDemonSet_rotateVerticies_FUN_00531e90
            (g_CDemonSetPtr,*(int *)&this_ptr->field_0x104,input_vertices);
  if (*(CVector3i **)&this_ptr->field_0x108 != (CVector3i *)0x0) {
    core_set_cpp_CDemonSet_lightVerticies_FUN_00532190
              (g_CDemonSetPtr,*(int *)&this_ptr->field_0x104,*(int *)&this_ptr->field_0x110,
               *(void **)&this_ptr->field_0x114,input_vertices,4,
               *(CVector3i **)&this_ptr->field_0x108);
    return;
  }
  core_set_cpp_CDemonSet_lightVerticies_FUN_00532190
            (g_CDemonSetPtr,*(int *)&this_ptr->field_0x104,*(int *)&this_ptr->field_0x110,
             *(void **)&this_ptr->field_0x114,input_vertices,4,(CVector3i *)0x0);
  return;
}
