// Name: core_ground.cpp_CGround_getNormalAtPosition_FUN_004effb0
// Address: 004effb0
// Address Range: [[004effb0, 004f027f] [0060c5dd, 0060c618]]
// Convention: __stack3_esi
// Signature: CVector3i * __stack3_esi core_ground_cpp_CGround_getNormalAtPosition_FUN_004effb0(CGround *this_ptr,int world_x,int world_z,CVector3i *out_normal)

#include "nocturne.h"

CVector3i * __stack3_esi core_ground_cpp_CGround_getNormalAtPosition_FUN_004effb0(CGround *this_ptr,int world_x,int world_z,CVector3i *out_normal)

{
  uint uVar2;
  void *pvVar3;
  ulonglong uVar5;
  int iVar6;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar7;
  uint uVar8;
  CVector3i *pCVar6;
  uint uVar7;
  uint *puVar8;
  byte bVar9;
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
  
  iVar5 = this_ptr->vertical_scale * 0x100;
  uVar5 = (ulonglong)(int)(iVar5 - 1U & world_z);
  iVar6 = (int)((longlong)
                (((uVar5 & 0xffffffffffff) >> 0x10) << 0x20 | uVar5 * 0x10000 & 0xffffffff) /
               (longlong)iVar5);
  iVar7 = this_ptr->vertical_scale * 0x100;
  uVar5 = (ulonglong)(int)(iVar7 - 1U & world_x);
  iVar7 = (int)((longlong)
                (((uVar5 & 0xffffffffffff) >> 0x10) << 0x20 | uVar5 * 0x10000 & 0xffffffff) /
               (longlong)iVar7);
  uVar4 = this_ptr->vertical_scale << 8;
  uVar7 = this_ptr->width_minus_1 & (uint)world_z / uVar4;
  uVar3 = (uint)world_x / uVar4 & this_ptr->height_minus_1;
  uVar2 = uVar3 + 1;
  uVar1 = uVar7 + 1;
  if ((uVar7 & 1) == (uVar3 & 1)) {
    if (iVar7 < iVar6) {
      iVar6 = this_ptr->width * uVar3;
      pvVar2 = this_ptr->terrain_data;
      iVar7 = (int)*(short *)((int)pvVar2 + ((this_ptr->width_minus_1 & uVar1) + iVar6) * 4) *
              this_ptr->height_scale;
      local_3c.x = (int)*(short *)((int)pvVar2 + (iVar6 + uVar7) * 4) * this_ptr->height_scale -
                   iVar7;
      local_3c.y = this_ptr->vertical_scale << 8;
      local_3c.z = iVar7 - this_ptr->height_scale *
                           (int)*(short *)((int)pvVar2 +
                                          ((uVar1 & this_ptr->height_minus_1) +
                                          (uVar2 & this_ptr->height_minus_1) * this_ptr->width) * 4)
      ;
      engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0(&local_3c,&local_54);
      pCVar6 = &local_54;
    }
    else {
      pvVar3 = this_ptr->terrain_data;
      iVar6 = (this_ptr->height_minus_1 & uVar2) * this_ptr->width;
      iVar7 = (int)*(short *)((iVar6 + uVar7) * 4 + (int)pvVar3) * this_ptr->height_scale;
      local_3c.x = iVar7 - this_ptr->height_scale *
                           (int)*(short *)(((uVar1 & this_ptr->width_minus_1) + iVar6) * 4 +
                                          (int)pvVar3);
      local_3c.y = this_ptr->vertical_scale << 8;
      local_3c.z = (int)*(short *)((uVar3 * this_ptr->width + uVar7) * 4 + (int)pvVar3) *
                   this_ptr->height_scale - iVar7;
      engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0(&local_3c,&local_30);
      pCVar6 = &local_30;
    }
  }
  else if (iVar7 < 0x10000 - iVar6) {
    iVar6 = this_ptr->width * uVar3;
    pvVar3 = this_ptr->terrain_data;
    iVar7 = this_ptr->height_scale * (int)*(short *)((iVar6 + uVar7) * 4 + (int)pvVar3);
    local_3c.x = iVar7 - (int)*(short *)(((uVar1 & this_ptr->width_minus_1) + iVar6) * 4 +
                                        (int)pvVar3) * this_ptr->height_scale;
    local_3c.y = this_ptr->vertical_scale << 8;
    local_3c.z = iVar7 - this_ptr->height_scale *
                         (int)*(short *)((uVar7 + (uVar2 & this_ptr->height_minus_1) *
                                                  this_ptr->width) * 4 + (int)pvVar3);
    engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0(&local_3c,&local_60);
    pCVar6 = &local_60;
  }
  else {
    uVar8 = this_ptr->width_minus_1 & uVar1;
    pvVar3 = this_ptr->terrain_data;
    iVar6 = (uVar2 & this_ptr->height_minus_1) * this_ptr->width;
    iVar7 = (int)*(short *)((int)pvVar3 + (uVar8 + iVar6) * 4) * this_ptr->height_scale;
    local_3c.x = (int)*(short *)((int)pvVar3 + (iVar6 + uVar7) * 4) * this_ptr->height_scale - iVar7
    ;
    local_3c.y = this_ptr->vertical_scale << 8;
    local_3c.z = this_ptr->height_scale *
                 (int)*(short *)((uVar3 * this_ptr->width + uVar8) * 4 + (int)pvVar3) - iVar7;
    engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0(&local_3c,&local_48);
    pCVar6 = &local_48;
  }
  local_3c.x = pCVar6->x;
  local_3c.y = pCVar6->y;
  iVar6 = pCVar6->z;
  out_normal->x = pCVar6->x;
  out_normal->y = local_3c.y;
  out_normal->z = iVar6;
  return out_normal;
}
