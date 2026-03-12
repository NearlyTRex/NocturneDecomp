// Name: core_ground.cpp_CGround_getNormalAtPosition_FUN_004effb0
// Address: 004effb0
// Address Range: [[004effb0, 004f027f]]
// Convention: __stack3_esi
// Signature: CVector3i * __stack3_esi core_ground_cpp_CGround_getNormalAtPosition_FUN_004effb0(CGround *this_ptr,int world_x,int world_z,CVector3i *out_normal)

#include "nocturne.h"

CVector3i * __stack3_esi core_ground_cpp_CGround_getNormalAtPosition_FUN_004effb0(CGround *this_ptr,int world_x,int world_z,CVector3i *out_normal)

{
  uint uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar8;
  CVector3i *pCVar6;
  uint *puVar9;
  uint uVar7;
  uint *puVar8;
  byte bVar9;
  uint auStackY_1024 [1008];
  CVector3i local_60;
  CVector3i local_54;
  CVector3i local_48;
  CVector3i local_3c;
  CVector3i local_30;
  int local_24;
  int local_20;
  void *local_1c;
  void *local_18;
  int local_14;
  int local_10;
  uint uVar1;
  void *pvVar2;
  
  bVar9 = 0;
  iVar5 = this_ptr->vertical_scale * 0x100;
  iVar4 = (int)(((longlong)(int)(iVar5 - 1U & world_z) * 0x10000) / (longlong)iVar5);
  iVar6 = this_ptr->vertical_scale * 0x100;
  iVar6 = (int)(((longlong)(int)(iVar6 - 1U & world_x) * 0x10000) / (longlong)iVar6);
  uVar4 = this_ptr->vertical_scale << 8;
  uVar7 = this_ptr->width_minus_1 & (uint)world_z / uVar4;
  uVar3 = (uint)world_x / uVar4 & this_ptr->height_minus_1;
  uVar2 = uVar3 + 1;
  uVar1 = uVar7 + 1;
  if ((uVar7 & 1) == (uVar3 & 1)) {
    if (iVar6 < iVar4) {
      iVar4 = this_ptr->width * uVar3;
      pvVar2 = this_ptr->terrain_data;
      iVar6 = (int)*(short *)((int)pvVar2 + ((this_ptr->width_minus_1 & uVar1) + iVar4) * 4) *
              this_ptr->height_scale;
      local_3c.x = (int)*(short *)((int)pvVar2 + (iVar4 + uVar7) * 4) * this_ptr->height_scale -
                   iVar6;
      local_3c.y = this_ptr->vertical_scale << 8;
      local_3c.z = iVar6 - this_ptr->height_scale *
                           (int)*(short *)((int)pvVar2 +
                                          ((uVar1 & this_ptr->height_minus_1) +
                                          (uVar2 & this_ptr->height_minus_1) * this_ptr->width) * 4)
      ;
      engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0(&local_3c,&local_54);
      pCVar6 = &local_54;
    }
    else {
      pvVar3 = this_ptr->terrain_data;
      iVar4 = (this_ptr->height_minus_1 & uVar2) * this_ptr->width;
      iVar6 = (int)*(short *)((iVar4 + uVar7) * 4 + (int)pvVar3) * this_ptr->height_scale;
      local_3c.x = iVar6 - this_ptr->height_scale *
                           (int)*(short *)(((uVar1 & this_ptr->width_minus_1) + iVar4) * 4 +
                                          (int)pvVar3);
      local_3c.y = this_ptr->vertical_scale << 8;
      local_3c.z = (int)*(short *)((uVar3 * this_ptr->width + uVar7) * 4 + (int)pvVar3) *
                   this_ptr->height_scale - iVar6;
      engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0(&local_3c,&local_30);
      pCVar6 = &local_30;
    }
  }
  else if (iVar6 < 0x10000 - iVar4) {
    iVar4 = this_ptr->width * uVar3;
    pvVar3 = this_ptr->terrain_data;
    iVar6 = this_ptr->height_scale * (int)*(short *)((iVar4 + uVar7) * 4 + (int)pvVar3);
    local_3c.x = iVar6 - (int)*(short *)(((uVar1 & this_ptr->width_minus_1) + iVar4) * 4 +
                                        (int)pvVar3) * this_ptr->height_scale;
    local_3c.y = this_ptr->vertical_scale << 8;
    local_3c.z = iVar6 - this_ptr->height_scale *
                         (int)*(short *)((uVar7 + (uVar2 & this_ptr->height_minus_1) *
                                                  this_ptr->width) * 4 + (int)pvVar3);
    engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0(&local_3c,&local_60);
    pCVar6 = &local_60;
  }
  else {
    uVar8 = this_ptr->width_minus_1 & uVar1;
    pvVar3 = this_ptr->terrain_data;
    iVar4 = (uVar2 & this_ptr->height_minus_1) * this_ptr->width;
    iVar6 = (int)*(short *)((int)pvVar3 + (uVar8 + iVar4) * 4) * this_ptr->height_scale;
    local_3c.x = (int)*(short *)((int)pvVar3 + (iVar4 + uVar7) * 4) * this_ptr->height_scale - iVar6
    ;
    local_3c.y = this_ptr->vertical_scale << 8;
    local_3c.z = this_ptr->height_scale *
                 (int)*(short *)((uVar3 * this_ptr->width + uVar8) * 4 + (int)pvVar3) - iVar6;
    engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0(&local_3c,&local_48);
    pCVar6 = &local_48;
  }
  puVar9 = (uint *)((int)pCVar6 + (uint)bVar9 * -8 + 4);
  local_3c.x = pCVar6->x;
  *(uint *)((int)&local_3c + (uint)bVar9 * -8 + 4) = *puVar9;
  *(uint *)((int)&local_3c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
       puVar9[(uint)bVar9 * -2 + 1];
  puVar8 = (uint *)((int)out_normal + (uint)bVar9 * -8 + 4);
  out_normal->x = local_3c.x;
  *puVar8 = *(uint *)((int)&local_3c + (uint)bVar9 * -8 + 4);
  puVar8[(uint)bVar9 * -2 + 1] =
       *(uint *)((int)&local_3c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  return out_normal;
}
