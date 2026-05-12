// Name: core_dcamera.cpp_CDemonCamera_restoreTransform_FUN_0044f1e0
// Address: 0044f1e0
// MANUAL RECONSTRUCTION
// Address Range: [[0044f1e0, 0044f287]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_restoreTransform_FUN_0044f1e0(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_restoreTransform_FUN_0044f1e0(CDemonCamera *this_ptr)

{
  this_ptr->camera_origin = this_ptr->transform_state.saved_camera_origin;
  (this_ptr->base).position = this_ptr->transform_state.saved_camera_position;
  this_ptr->source_matrix = this_ptr->transform_state.saved_source_matrix;
  return;
}
