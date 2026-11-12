// Name: core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_00449dd0
// Address: 00449dd0
// Address Range: [[00449dd0, 00449ea5]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_00449dd0(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_00449dd0(CDemonCamera *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  uint *puVar1;
  byte bVar2;
  int aiStackY_1000 [1017];
  CVector3i local_18;
  
  bVar2 = 0;
  (this_ptr->source_matrix).m[0].x = _DAT_01c6e2fc;
  (this_ptr->source_matrix).m[0].y = _DAT_01c6e300;
  (this_ptr->source_matrix).m[0].z = _DAT_01c6e304;
  (this_ptr->source_matrix).m[1].x = _DAT_01c6e308;
  (this_ptr->source_matrix).m[1].y = _DAT_01c6e30c;
  (this_ptr->source_matrix).m[1].z = _DAT_01c6e310;
  (this_ptr->source_matrix).m[2].x = _DAT_01c6e314;
  this_ptr_00 = DAT_005f2afc;
  (this_ptr->source_matrix).m[2].y = _DAT_01c6e318;
  (this_ptr->source_matrix).m[2].z = _DAT_01c6e31c;
  engine_drender_cpp_CDemonRenderer_getCameraOriginFixed_FUN_0046d1a0(this_ptr_00,&local_18);
  puVar1 = (uint *)((int)this_ptr + (uint)bVar2 * -8 + 0x170);
  (this_ptr->camera_origin).x = local_18.x;
  *puVar1 = *(uint *)((int)&local_18 + (uint)bVar2 * -8 + 4);
  puVar1[(uint)bVar2 * -2 + 1] =
       *(uint *)((int)&local_18 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  (this_ptr->cached_projection).half_width_fixed = _DAT_01c6b598;
  (this_ptr->cached_projection).neg_half_height_fixed = _DAT_01c6b59c;
  (this_ptr->cached_projection).center_x_fixed = _DAT_01c6b5a0;
  (this_ptr->cached_projection).center_y_fixed = _DAT_01c6b5a4;
  core_dcamera_cpp_CDemonCamera_calculateInverseTransform_FUN_00449b30(this_ptr);
  return;
}
