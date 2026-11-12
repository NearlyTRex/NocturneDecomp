// Name: core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044dc90
// Address: 0044dc90
// Address Range: [[0044dc90, 0044dd65]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_0044dc90(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_0044dc90(CDemonCamera *this_ptr)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  int aiStackY_1000 [1017];
  int local_18;
  
  bVar3 = 0;
  (this_ptr->source_matrix).m[0].x = _DAT_01c51d5c;
  (this_ptr->source_matrix).m[0].y = _DAT_01c51d60;
  (this_ptr->source_matrix).m[0].z = _DAT_01c51d64;
  (this_ptr->source_matrix).m[1].x = _DAT_01c51d68;
  (this_ptr->source_matrix).m[1].y = _DAT_01c51d6c;
  (this_ptr->source_matrix).m[1].z = _DAT_01c51d70;
  (this_ptr->source_matrix).m[2].x = _DAT_01c51d74;
  uVar1 = DAT_00612560;
  (this_ptr->source_matrix).m[2].y = _DAT_01c51d78;
  (this_ptr->source_matrix).m[2].z = _DAT_01c51d7c;
  engine_drender_cpp_FUN_00483ac0(uVar1);
  puVar2 = (uint *)((int)this_ptr + (uint)bVar3 * -8 + 0x170);
  (this_ptr->camera_origin).x = local_18;
  *puVar2 = *(uint *)(&stack0xffffffec + (uint)bVar3 * -8);
  puVar2[(uint)bVar3 * -2 + 1] =
       *(uint *)(&stack0xfffffff0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  (this_ptr->cached_projection).half_width_fixed = _DAT_01c4eff8;
  (this_ptr->cached_projection).neg_half_height_fixed = _DAT_01c4effc;
  (this_ptr->cached_projection).center_x_fixed = _DAT_01c4f000;
  (this_ptr->cached_projection).center_y_fixed = _DAT_01c4f004;
  core_dcamera_cpp_CDemonCamera_calculateInverseTransform_FUN_0044d9f0(this_ptr);
  return;
}
