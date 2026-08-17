// Name: core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_00440fe0
// Address: 00440fe0
// Address Range: [[00440fe0, 004410b5]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_00440fe0(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_00440fe0(CDemonCamera *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  uint *puVar1;
  byte bVar2;
  int aiStackY_1000 [1017];
  CVector3i local_18;
  
  bVar2 = 0;
  (this_ptr->source_matrix).m[0].x = g_TransformMatrix.m[0].x;
  (this_ptr->source_matrix).m[0].y = g_TransformMatrix.m[0].y;
  (this_ptr->source_matrix).m[0].z = g_TransformMatrix.m[0].z;
  (this_ptr->source_matrix).m[1].x = g_TransformMatrix.m[1].x;
  (this_ptr->source_matrix).m[1].y = g_TransformMatrix.m[1].y;
  (this_ptr->source_matrix).m[1].z = g_TransformMatrix.m[1].z;
  (this_ptr->source_matrix).m[2].x = g_TransformMatrix.m[2].x;
  this_ptr_00 = g_CDemonRenderer_PTR_005ae704;
  (this_ptr->source_matrix).m[2].y = g_TransformMatrix.m[2].y;
  (this_ptr->source_matrix).m[2].z = g_TransformMatrix.m[2].z;
  engine_drender_cpp_CDemonRenderer_getCameraOriginFixed_FUN_00460d10(this_ptr_00,&local_18);
  puVar1 = (uint *)((int)this_ptr + (uint)bVar2 * -8 + 0x170);
  (this_ptr->camera_origin).x = local_18.x;
  *puVar1 = *(uint *)((int)&local_18 + (uint)bVar2 * -8 + 4);
  puVar1[(uint)bVar2 * -2 + 1] =
       *(uint *)((int)&local_18 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  (this_ptr->cached_projection).half_width_fixed = g_Projection.half_width_fixed;
  (this_ptr->cached_projection).neg_half_height_fixed = g_Projection.neg_half_height_fixed;
  (this_ptr->cached_projection).center_x_fixed = g_Projection.center_x_fixed;
  (this_ptr->cached_projection).center_y_fixed = g_Projection.center_y_fixed;
  core_dcamera_cpp_CDemonCamera_calculateInverseTransform_FUN_00440d40(this_ptr);
  return;
}
