// Name: core_dcamera.cpp_CDemonCamera_restoreTransform_FUN_00443050
// Address: 00443050
// Address Range: [[00443050, 004430fa]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_restoreTransform_FUN_00443050(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_restoreTransform_FUN_00443050(CDemonCamera *this_ptr)

{
  UVector3 *pUVar1;
  
  pUVar1 = &(this_ptr->transform_state).saved_camera_position;
  (this_ptr->camera_origin).x = (this_ptr->transform_state).saved_camera_origin.x;
  (this_ptr->camera_origin).y = (this_ptr->transform_state).saved_camera_origin.y;
  (this_ptr->camera_origin).z = (this_ptr->transform_state).saved_camera_origin.z;
  if (&this_ptr->position != (CVector3f *)pUVar1) {
    (this_ptr->position).x = (pUVar1->f).x;
    (this_ptr->position).y = (this_ptr->transform_state).saved_camera_position.f.y;
    (this_ptr->position).z = (this_ptr->transform_state).saved_camera_position.f.z;
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
