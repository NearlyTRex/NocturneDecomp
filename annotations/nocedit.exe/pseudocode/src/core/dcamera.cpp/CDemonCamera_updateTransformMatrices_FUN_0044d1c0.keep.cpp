// Name: core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0
// Address: 0044d1c0
// MANUAL RECONSTRUCTION
// Address Range: [[0044d1c0, 0044d295] [0060c7eb, 0060c80b]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0(CDemonCamera *this_ptr)

{
  CVector3i local_18;
  CDemonRenderer *this_ptr_00;

  this_ptr->source_matrix = g_TransformMatrix;
  this_ptr_00 = g_CDemonRendererPtr2;
  engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760(this_ptr_00,&local_18);
  this_ptr->camera_origin = local_18;
  this_ptr->cached_projection = g_Projection;
  core_dcamera_cpp_CDemonCamera_calculateInverseTransform_FUN_0044cf20(this_ptr);
  return;
}
