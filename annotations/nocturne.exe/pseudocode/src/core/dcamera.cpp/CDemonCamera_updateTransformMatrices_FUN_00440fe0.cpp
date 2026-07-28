// Name: core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_00440fe0
// Address: 00440fe0
// Address Range: [[00440fe0, 004410b5]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_00440fe0(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_00440fe0(CDemonCamera *this_ptr)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  int aiStackY_1000 [1017];
  int local_18;
  
  bVar3 = 0;
  (this_ptr->source_matrix).m[0].x = _DAT_01c039e8;
  (this_ptr->source_matrix).m[0].y = _DAT_01c039ec;
  (this_ptr->source_matrix).m[0].z = _DAT_01c039f0;
  (this_ptr->source_matrix).m[1].x = _DAT_01c039f4;
  (this_ptr->source_matrix).m[1].y = _DAT_01c039f8;
  (this_ptr->source_matrix).m[1].z = _DAT_01c039fc;
  (this_ptr->source_matrix).m[2].x = _DAT_01c03a00;
  uVar1 = DAT_005ae704;
  (this_ptr->source_matrix).m[2].y = _DAT_01c03a04;
  (this_ptr->source_matrix).m[2].z = _DAT_01c03a08;
  engine_drender_cpp_FUN_00460d10(uVar1);
  puVar2 = (uint *)((int)this_ptr + (uint)bVar3 * -8 + 0x170);
  (this_ptr->camera_origin).x = local_18;
  *puVar2 = *(uint *)(&stack0xffffffec + (uint)bVar3 * -8);
  puVar2[(uint)bVar3 * -2 + 1] =
       *(uint *)(&stack0xfffffff0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  (this_ptr->cached_projection).half_width_fixed = _DAT_01c00c48;
  (this_ptr->cached_projection).neg_half_height_fixed = _DAT_01c00c4c;
  (this_ptr->cached_projection).center_x_fixed = _DAT_01c00c50;
  (this_ptr->cached_projection).center_y_fixed = _DAT_01c00c54;
  core_dcamera_cpp_CDemonCamera_calculateInverseTransform_FUN_00440d40(this_ptr);
  return;
}
