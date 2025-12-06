// Name: core_ground.cpp_CGround_getNormalAtPosition_FUN_004effb0
// Address: 004effb0
// Address Range: [[004effb0, 004f027f]]
// Convention: __cdecl
// Signature: void core_ground.cpp_CGround_getNormalAtPosition_FUN_004effb0(CGround * this_ptr, int world_x, int world_z, CVector3i * out_normal)

#include "nocturne.h"

void __cdecl
core_ground_cpp_CGround_getNormalAtPosition_FUN_004effb0
          (CGround *this_ptr,int world_x,int world_z,CVector3i *out_normal)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  int *unaff_ESI;
  int *piVar6;
  uint uVar7;
  byte bVar8;
  int aiStackY_1024 [1008];
  CVector3i local_3c;
  int local_30 [4];
  int local_20;
  void *local_1c;
  void *local_18;
  int local_14;
  int local_10;
  
  bVar8 = 0;
  iVar5 = this_ptr->vertical_scale * 0x100;
  local_14 = (int)(((longlong)(int)(iVar5 - 1U & world_z) * 0x10000) / (longlong)iVar5);
  iVar5 = this_ptr->vertical_scale * 0x100;
  local_10 = (int)(((longlong)(int)(iVar5 - 1U & world_x) * 0x10000) / (longlong)iVar5);
  uVar4 = this_ptr->vertical_scale << 8;
  uVar7 = this_ptr->width_minus_1 & (uint)world_z / uVar4;
  uVar3 = (uint)world_x / uVar4 & this_ptr->height_minus_1;
  local_1c = (void *)(uVar3 & 1);
  uVar4 = uVar3 + 1;
  uVar1 = uVar7 + 1;
  if ((void *)(uVar7 & 1) == local_1c) {
    if (local_10 < local_14) {
      local_1c = (void *)(this_ptr->width * uVar3);
      pvVar2 = this_ptr->terrain_data;
      local_30[3] = (int)*(short *)((int)pvVar2 + ((int)local_1c + uVar7) * 4) *
                    this_ptr->height_scale;
      local_3c.z = (int)*(short *)((int)pvVar2 +
                                  ((this_ptr->width_minus_1 & uVar1) + (int)local_1c) * 4) *
                   this_ptr->height_scale;
      local_3c.x = local_30[3] - local_3c.z;
      local_3c.y = this_ptr->vertical_scale << 8;
      local_3c.z = local_3c.z -
                   this_ptr->height_scale *
                   (int)*(short *)((int)pvVar2 +
                                  ((uVar1 & this_ptr->height_minus_1) +
                                  (uVar4 & this_ptr->height_minus_1) * this_ptr->width) * 4);
      engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0(&local_3c);
      piVar6 = (int *)&stack0xffffffb0;
    }
    else {
      local_1c = this_ptr->terrain_data;
      local_30[3] = (int)*(short *)((uVar3 * this_ptr->width + uVar7) * 4 + (int)local_1c) *
                    this_ptr->height_scale;
      iVar5 = (this_ptr->height_minus_1 & uVar4) * this_ptr->width;
      local_3c.z = (int)*(short *)((iVar5 + uVar7) * 4 + (int)local_1c) * this_ptr->height_scale;
      local_3c.x = local_3c.z -
                   this_ptr->height_scale *
                   (int)*(short *)(((uVar1 & this_ptr->width_minus_1) + iVar5) * 4 + (int)local_1c);
      local_3c.y = this_ptr->vertical_scale << 8;
      local_3c.z = local_30[3] - local_3c.z;
      engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0(&local_3c);
      piVar6 = local_30 + 1;
    }
  }
  else if (local_10 < 0x10000 - local_14) {
    local_1c = (void *)(this_ptr->width * uVar3);
    local_18 = this_ptr->terrain_data;
    local_3c.z = this_ptr->height_scale *
                 (int)*(short *)(((int)local_1c + uVar7) * 4 + (int)local_18);
    local_20 = (int)*(short *)(((uVar1 & this_ptr->width_minus_1) + (int)local_1c) * 4 +
                              (int)local_18) * this_ptr->height_scale;
    local_3c.x = local_3c.z - local_20;
    local_3c.y = this_ptr->vertical_scale << 8;
    local_3c.z = local_3c.z -
                 this_ptr->height_scale *
                 (int)*(short *)((uVar7 + (uVar4 & this_ptr->height_minus_1) * this_ptr->width) * 4
                                + (int)local_18);
    engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0(&local_3c);
    piVar6 = (int *)&stack0xffffffa4;
  }
  else {
    local_18 = (void *)(this_ptr->width_minus_1 & uVar1);
    pvVar2 = this_ptr->terrain_data;
    local_20 = this_ptr->height_scale *
               (int)*(short *)((uVar3 * this_ptr->width + (int)local_18) * 4 + (int)pvVar2);
    iVar5 = (uVar4 & this_ptr->height_minus_1) * this_ptr->width;
    local_3c.z = (int)*(short *)((int)pvVar2 + ((int)local_18 + iVar5) * 4) * this_ptr->height_scale
    ;
    local_3c.x = (int)*(short *)((int)pvVar2 + (iVar5 + uVar7) * 4) * this_ptr->height_scale -
                 local_3c.z;
    local_3c.y = this_ptr->vertical_scale << 8;
    local_3c.z = local_20 - local_3c.z;
    engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0(&local_3c);
    piVar6 = (int *)&stack0xffffffbc;
  }
  local_3c.x = *piVar6;
  local_30[(uint)bVar8 * -2 + -2] = piVar6[(uint)bVar8 * -2 + 1];
  local_30[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -1] =
       (piVar6 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
  *unaff_ESI = local_3c.y;
  unaff_ESI[(uint)bVar8 * -2 + 1] = local_30[(uint)bVar8 * -2 + -1];
  (unaff_ESI + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
       local_30[(uint)bVar8 * -2 + (uint)bVar8 * -2];
  return;
}
