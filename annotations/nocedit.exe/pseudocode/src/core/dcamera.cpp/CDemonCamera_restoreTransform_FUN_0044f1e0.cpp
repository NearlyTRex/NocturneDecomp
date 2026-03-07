// Name: core_dcamera.cpp_CDemonCamera_restoreTransform_FUN_0044f1e0
// Address: 0044f1e0
// Address Range: [[0044f1e0, 0044f287]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_restoreTransform_FUN_0044f1e0(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_restoreTransform_FUN_0044f1e0(CDemonCamera *this_ptr)

{
  UVector3 *pUVar1;
  CVector3i *pCVar2;
  
  pUVar1 = &(this_ptr->base).position;
  pCVar2 = &(this_ptr->transform_state).saved_camera_position;
  (this_ptr->camera_origin).x = (this_ptr->transform_state).saved_camera_origin.x;
  (this_ptr->camera_origin).y = (this_ptr->transform_state).saved_camera_origin.y;
  (this_ptr->camera_origin).z = (this_ptr->transform_state).saved_camera_origin.z;
  if ((CVector3i *)pUVar1 != pCVar2) {
    (pUVar1->f).x = (float)pCVar2->x;
    (this_ptr->base).position.f.y = (float)(this_ptr->transform_state).saved_camera_position.y;
    (this_ptr->base).position.f.z = (float)(this_ptr->transform_state).saved_camera_position.z;
  }
  (this_ptr->source_matrix).m[0].x = (this_ptr->transform_state).saved_source_matrix.m[0].x;
  (this_ptr->source_matrix).m[0].y = (this_ptr->transform_state).saved_source_matrix.m[0].y;
  (this_ptr->source_matrix).m[0].z = (this_ptr->transform_state).saved_source_matrix.m[0].z;
  (this_ptr->source_matrix).m[1].x = (this_ptr->transform_state).saved_source_matrix.m[1].x;
  (this_ptr->source_matrix).m[1].y = (this_ptr->transform_state).saved_source_matrix.m[1].y;
  (this_ptr->source_matrix).m[1].z = (this_ptr->transform_state).saved_source_matrix.m[1].z;
  (this_ptr->source_matrix).m[2].x = (this_ptr->transform_state).saved_source_matrix.m[2].x;
  (this_ptr->source_matrix).m[2].y = (this_ptr->transform_state).saved_source_matrix.m[2].y;
  (this_ptr->source_matrix).m[2].z = (this_ptr->transform_state).saved_source_matrix.m[2].z;
  return;
}
