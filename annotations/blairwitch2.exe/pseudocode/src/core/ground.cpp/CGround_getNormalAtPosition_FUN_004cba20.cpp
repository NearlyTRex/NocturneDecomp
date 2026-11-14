// Name: core_ground.cpp_CGround_getNormalAtPosition_FUN_004cba20
// Address: 004cba20
// Address Range: [[004cba20, 004cbcef]]
// Convention: __stack3_esi
// Signature: CVector3i * __stack3_esi core_ground_cpp_CGround_getNormalAtPosition_FUN_004cba20(CGround *this_ptr,int world_x,int world_z,CVector3i *out_normal)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CVector3i * __stack3_esi core_ground_cpp_CGround_getNormalAtPosition_FUN_004cba20(CGround *this_ptr,int world_x,int world_z,CVector3i *out_normal)

{
  uint uVar1;
  SGroundCell *pSVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint *puVar9;
  byte bVar10;
  int aiStackY_1024 [1008];
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  byte auStack_30 [12];
  int iStack_24;
  int iStack_20;
  SGroundCell *pSStack_1c;
  SGroundCell *pSStack_18;
  int iStack_14;
  int iStack_10;
  
  bVar10 = 0;
  iVar6 = this_ptr->vertical_scale * 0x100;
  uVar3 = (ulonglong)(int)(iVar6 - 1U & world_z);
  iStack_14 = (int)((longlong)
                    (((uVar3 & 0xffffffffffff) >> 0x10) << 0x20 | uVar3 * 0x10000 & 0xffffffff) /
                   (longlong)iVar6);
  iVar6 = this_ptr->vertical_scale * 0x100;
  uVar3 = (ulonglong)(int)(iVar6 - 1U & world_x);
  iStack_10 = (int)((longlong)
                    (((uVar3 & 0xffffffffffff) >> 0x10) << 0x20 | uVar3 * 0x10000 & 0xffffffff) /
                   (longlong)iVar6);
  uVar5 = this_ptr->vertical_scale << 8;
  uVar8 = this_ptr->width_minus_1 & (uint)world_z / uVar5;
  uVar4 = (uint)world_x / uVar5 & this_ptr->height_minus_1;
  pSStack_1c = (SGroundCell *)(uVar4 & 1);
  uVar5 = uVar4 + 1;
  uVar1 = uVar8 + 1;
  if ((SGroundCell *)(uVar8 & 1) == pSStack_1c) {
    if (iStack_10 < iStack_14) {
      pSStack_1c = (SGroundCell *)(this_ptr->width * uVar4);
      pSVar2 = this_ptr->terrain_data;
      iStack_24 = (int)pSVar2[(int)pSStack_1c + uVar8].height * this_ptr->height_scale;
      iStack_34 = (int)pSVar2[(this_ptr->width_minus_1 & uVar1) + (int)pSStack_1c].height *
                  this_ptr->height_scale;
      iStack_3c = iStack_24 - iStack_34;
      iStack_38 = this_ptr->vertical_scale << 8;
      iStack_34 = iStack_34 -
                  this_ptr->height_scale *
                  (int)pSVar2[(uVar1 & this_ptr->height_minus_1) +
                              (uVar5 & this_ptr->height_minus_1) * this_ptr->width].height;
      engine_matrix_c_normalizeVector3DFloat_FUN_004e9ae0(&stack0xffffffc4);
      piVar7 = (int *)&stack0xffffffac;
    }
    else {
      pSStack_1c = this_ptr->terrain_data;
      iStack_24 = (int)pSStack_1c[uVar4 * this_ptr->width + uVar8].height * this_ptr->height_scale;
      iVar6 = (this_ptr->height_minus_1 & uVar5) * this_ptr->width;
      iStack_34 = (int)pSStack_1c[iVar6 + uVar8].height * this_ptr->height_scale;
      iStack_3c = iStack_34 -
                  this_ptr->height_scale *
                  (int)pSStack_1c[(uVar1 & this_ptr->width_minus_1) + iVar6].height;
      iStack_38 = this_ptr->vertical_scale << 8;
      iStack_34 = iStack_24 - iStack_34;
      engine_matrix_c_normalizeVector3DFloat_FUN_004e9ae0(&stack0xffffffc4);
      piVar7 = (int *)auStack_30;
    }
  }
  else if (iStack_10 < 0x10000 - iStack_14) {
    pSStack_1c = (SGroundCell *)(this_ptr->width * uVar4);
    pSStack_18 = this_ptr->terrain_data;
    iStack_34 = this_ptr->height_scale * (int)pSStack_18[(int)pSStack_1c + uVar8].height;
    iStack_20 = (int)pSStack_18[(uVar1 & this_ptr->width_minus_1) + (int)pSStack_1c].height *
                this_ptr->height_scale;
    iStack_3c = iStack_34 - iStack_20;
    iStack_38 = this_ptr->vertical_scale << 8;
    iStack_34 = iStack_34 -
                this_ptr->height_scale *
                (int)pSStack_18[uVar8 + (uVar5 & this_ptr->height_minus_1) * this_ptr->width].height
    ;
    engine_matrix_c_normalizeVector3DFloat_FUN_004e9ae0(&stack0xffffffc4);
    piVar7 = (int *)&stack0xffffffa0;
  }
  else {
    pSStack_18 = (SGroundCell *)(this_ptr->width_minus_1 & uVar1);
    pSVar2 = this_ptr->terrain_data;
    iStack_20 = this_ptr->height_scale *
                (int)pSVar2[uVar4 * this_ptr->width + (int)pSStack_18].height;
    iVar6 = (uVar5 & this_ptr->height_minus_1) * this_ptr->width;
    iStack_34 = (int)pSVar2[(int)pSStack_18 + iVar6].height * this_ptr->height_scale;
    iStack_3c = (int)pSVar2[iVar6 + uVar8].height * this_ptr->height_scale - iStack_34;
    iStack_38 = this_ptr->vertical_scale << 8;
    iStack_34 = iStack_20 - iStack_34;
    engine_matrix_c_normalizeVector3DFloat_FUN_004e9ae0(&stack0xffffffc4);
    piVar7 = (int *)&stack0xffffffb8;
  }
  iStack_3c = *piVar7;
  (&stack0xffffffc8)[(uint)bVar10 * 0xfffffffe] = piVar7[(uint)bVar10 * -2 + 1];
  *(int *)((int)&stack0xffffffcc + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
       (piVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
  puVar9 = (uint *)((int)out_normal + (uint)bVar10 * -8 + 4);
  out_normal->x = iStack_3c;
  *puVar9 = (&stack0xffffffc8)[(uint)bVar10 * 0xfffffffe];
  puVar9[(uint)bVar10 * -2 + 1] =
       *(uint *)((int)&stack0xffffffcc + (uint)bVar10 * -8 + (uint)bVar10 * -8);
  return out_normal;
}
