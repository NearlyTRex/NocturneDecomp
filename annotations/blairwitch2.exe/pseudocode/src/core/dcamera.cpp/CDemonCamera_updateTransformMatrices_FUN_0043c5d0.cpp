// Name: core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0043c5d0
// Address: 0043c5d0
// Address Range: [[0043c5d0, 0043c6a5]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_0043c5d0(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_0043c5d0(CDemonCamera *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  uint *puVar1;
  byte bVar2;
  int aiStackY_1000 [1017];
  CVector3i local_18;
  
  bVar2 = 0;
  (this_ptr->source_matrix).m[0].x = _DAT_01c38b9c;
  (this_ptr->source_matrix).m[0].y = _DAT_01c38ba0;
  (this_ptr->source_matrix).m[0].z = _DAT_01c38ba4;
  (this_ptr->source_matrix).m[1].x = _DAT_01c38ba8;
  (this_ptr->source_matrix).m[1].y = _DAT_01c38bac;
  (this_ptr->source_matrix).m[1].z = _DAT_01c38bb0;
  (this_ptr->source_matrix).m[2].x = _DAT_01c38bb4;
  this_ptr_00 = DAT_0060b280;
  (this_ptr->source_matrix).m[2].y = _DAT_01c38bb8;
  (this_ptr->source_matrix).m[2].z = _DAT_01c38bbc;
  engine_drender_cpp_CDemonRenderer_getCameraOriginFixed_FUN_0046b5c0(this_ptr_00,&local_18);
  puVar1 = (uint *)((int)this_ptr + (uint)bVar2 * -8 + 0x170);
  (this_ptr->camera_origin).x = local_18.x;
  *puVar1 = *(uint *)((int)&local_18 + (uint)bVar2 * -8 + 4);
  puVar1[(uint)bVar2 * -2 + 1] =
       *(uint *)((int)&local_18 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  (this_ptr->cached_projection).half_width_fixed = _DAT_01c35e38;
  (this_ptr->cached_projection).neg_half_height_fixed = _DAT_01c35e3c;
  (this_ptr->cached_projection).center_x_fixed = _DAT_01c35e40;
  (this_ptr->cached_projection).center_y_fixed = _DAT_01c35e44;
  core_dcamera_cpp_CDemonCamera_calculateInverseTransform_FUN_0043c330(this_ptr);
  return;
}
