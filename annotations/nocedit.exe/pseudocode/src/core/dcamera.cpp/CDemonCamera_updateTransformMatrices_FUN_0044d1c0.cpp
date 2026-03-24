// Name: core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0
// Address: 0044d1c0
// Address Range: [[0044d1c0, 0044d295] [0060c7eb, 0060c80b]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0(CDemonCamera *this_ptr)

{
  uint *puVar1;
  byte bVar2;
  int aiStackY_1000 [1017];
  CVector3i local_18;
  CDemonRenderer *this_ptr_00;
  
  (this_ptr->source_matrix).m[0].x = g_TransformMatrix.m[0].x;
  (this_ptr->source_matrix).m[0].y = g_TransformMatrix.m[0].y;
  (this_ptr->source_matrix).m[0].z = g_TransformMatrix.m[0].z;
  (this_ptr->source_matrix).m[1].x = g_TransformMatrix.m[1].x;
  (this_ptr->source_matrix).m[1].y = g_TransformMatrix.m[1].y;
  (this_ptr->source_matrix).m[1].z = g_TransformMatrix.m[1].z;
  (this_ptr->source_matrix).m[2].x = g_TransformMatrix.m[2].x;
  this_ptr_00 = g_CDemonRendererPtr2;
  (this_ptr->source_matrix).m[2].y = g_TransformMatrix.m[2].y;
  (this_ptr->source_matrix).m[2].z = g_TransformMatrix.m[2].z;
  engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760(this_ptr_00,&local_18);
  (this_ptr->camera_origin).x = local_18.x;
  (this_ptr->camera_origin).y = local_18.y;
  (this_ptr->camera_origin).z = local_18.z;
  (this_ptr->saved_viewport_rect).left = g_ViewportCenterXFixed;
  (this_ptr->saved_viewport_rect).top = g_ViewportCenterYFixed;
  (this_ptr->saved_viewport_rect).right = g_ViewportRightFixed;
  (this_ptr->saved_viewport_rect).bottom = g_ViewportBottomFixed;
  core_dcamera_cpp_CDemonCamera_calculateInverseTransform_FUN_0044cf20(this_ptr);
  return;
}
