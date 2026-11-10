// Name: core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0043c5d0
// Address: 0043c5d0
// Address Range: [[0043c5d0, 0043c6a5]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_0043c5d0(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_0043c5d0(CDemonCamera *this_ptr)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  int aiStackY_1000 [1017];
  int local_18;
  
  bVar3 = 0;
  (this_ptr->source_matrix).m[0].x = _DAT_01c38b9c;
  (this_ptr->source_matrix).m[0].y = _DAT_01c38ba0;
  (this_ptr->source_matrix).m[0].z = _DAT_01c38ba4;
  (this_ptr->source_matrix).m[1].x = _DAT_01c38ba8;
  (this_ptr->source_matrix).m[1].y = _DAT_01c38bac;
  (this_ptr->source_matrix).m[1].z = _DAT_01c38bb0;
  (this_ptr->source_matrix).m[2].x = _DAT_01c38bb4;
  uVar1 = DAT_0060b280;
  (this_ptr->source_matrix).m[2].y = _DAT_01c38bb8;
  (this_ptr->source_matrix).m[2].z = _DAT_01c38bbc;
  engine_matrix_c_FUN_0046b5c0(uVar1);
  puVar2 = (uint *)((int)this_ptr + (uint)bVar3 * -8 + 0x170);
  (this_ptr->camera_origin).x = local_18;
  *puVar2 = *(uint *)(&stack0xffffffec + (uint)bVar3 * -8);
  puVar2[(uint)bVar3 * -2 + 1] =
       *(uint *)(&stack0xfffffff0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  (this_ptr->cached_projection).half_width_fixed = _DAT_01c35e38;
  (this_ptr->cached_projection).neg_half_height_fixed = _DAT_01c35e3c;
  (this_ptr->cached_projection).center_x_fixed = _DAT_01c35e40;
  (this_ptr->cached_projection).center_y_fixed = _DAT_01c35e44;
  core_dcamera_cpp_CDemonCamera_calculateInverseTransform_FUN_0043c330(this_ptr);
  return;
}
