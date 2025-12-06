// Name: core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0
// Address: 0044d1c0
// Address Range: [[0044d1c0, 0044d295]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0(CDemonCamera * this_ptr)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0(CDemonCamera *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  BADSPACEBASE *in_ESP;
  uint *puVar1;
  byte bVar2;
  int aiStackY_ffc [1016];
  CVector3i *in_stack_ffffffe8;
  int iStack_14;
  
  bVar2 = 0;
  (this_ptr->source_matrix).m[0].x = g_TransformMatrix.m[0].x;
  (this_ptr->source_matrix).m[0].y = g_TransformMatrix.m[0].y;
  (this_ptr->source_matrix).m[0].z = g_TransformMatrix.m[0].z;
  (this_ptr->source_matrix).m[1].x = g_TransformMatrix.m[1].x;
  (this_ptr->source_matrix).m[1].y = g_TransformMatrix.m[1].y;
  (this_ptr->source_matrix).m[1].z = g_TransformMatrix.m[1].z;
  (this_ptr->source_matrix).m[2].x = g_TransformMatrix.m[2].x;
  this_ptr_00 = g_CDemonRendererPtr;
  (this_ptr->source_matrix).m[2].y = g_TransformMatrix.m[2].y;
  (this_ptr->source_matrix).m[2].z = g_TransformMatrix.m[2].z;
  engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
            (this_ptr_00,in_stack_ffffffe8);
  puVar1 = (uint *)((int)this_ptr + (uint)bVar2 * -8 + 0x170);
  (this_ptr->camera_origin).x = iStack_14;
  *puVar1 = *(uint *)(&stack0xfffffff0 + (uint)bVar2 * -8);
  puVar1[(uint)bVar2 * -2 + 1] =
       *(uint *)(&stack0xfffffff4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  (this_ptr->saved_viewport_rect).left = g_ViewportCenterXFixed;
  (this_ptr->saved_viewport_rect).top = g_ViewportCenterYFixed;
  (this_ptr->saved_viewport_rect).right = g_ViewportRightFixed;
  (this_ptr->saved_viewport_rect).bottom = g_ViewportBottomFixed;
  core_dcamera_cpp_CDemonCamera_calculateInverseTransform_FUN_0044cf20(this_ptr);
  return;
}
