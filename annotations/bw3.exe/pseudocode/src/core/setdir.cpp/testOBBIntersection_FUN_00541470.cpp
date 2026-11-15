// Name: core_setdir.cpp_testOBBIntersection_FUN_00541470
// Address: 00541470
// Address Range: [[00541470, 005418c0]]
// Convention: __cdecl
// Signature: int __cdecl core_setdir_cpp_testOBBIntersection_FUN_00541470(SVDBox *obb_a,SVDBox *obb_b)

#include "nocturne.h"

int __cdecl core_setdir_cpp_testOBBIntersection_FUN_00541470(SVDBox *obb_a,SVDBox *obb_b)

{
  uint uVar1;
  CVector3f *pCVar2;
  byte bVar3;
  float afStackY_1104 [984];
  float *pfVar4;
  float *pfVar5;
  CVector3f *pCVar6;
  uint uVar7;
  CVector3f local_194 [8];
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118 [2];
  CVector3f local_110;
  CVector3f local_104;
  float local_f8;
  float local_f4 [5];
  CVector3f local_e0;
  float local_d4;
  float local_d0 [4];
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac [4];
  float local_9c;
  CVector3f local_98;
  CVector3f local_8c;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float afStack_70 [2];
  CVector3f local_68;
  float local_5c;
  float afStack_58 [2];
  double local_50;
  double local_48;
  double local_40;
  uint local_38;
  CMatrix3x3f *local_34;
  float local_30;
  float local_2c;
  float local_28;
  CVector3f *local_24;
  uint local_20;
  CMatrix3x3f *local_1c;
  float local_18;
  float local_14;
  
  bVar3 = 0;
  local_bc = -(obb_b->extents).x;
  local_b8 = -(obb_b->extents).y;
  local_b4 = -(obb_b->extents).z;
  if (&local_134 != local_d0 + 5) {
    local_134 = local_bc;
    local_130 = local_b8;
    local_12c = local_b4;
  }
  if ((CVector3f *)&local_128 != &obb_b->extents) {
    local_128 = (obb_b->extents).x;
    local_124 = (obb_b->extents).y;
    local_120 = (obb_b->extents).z;
  }
  local_80 = local_bc;
  local_7c = local_b8;
  local_78 = local_b4;
  __arrinit(local_194,8,&g_CVectorTypeInfo);
  local_1c = &obb_b->rotation_matrix;
  local_34 = &obb_a->rotation_matrix;
  local_20 = 0;
  do {
    local_30 = (obb_a->extents).x;
    local_24 = local_194 + local_20;
    while( true ) {
      local_e0.x = local_30;
      if ((local_20 & 2) == 0) {
        local_2c = (obb_a->extents).y;
      }
      else {
        local_2c = -(obb_a->extents).y;
      }
      local_e0.y = local_2c;
      if ((local_20 & 4) == 0) {
        local_28 = (obb_a->extents).z;
      }
      else {
        local_28 = -(obb_a->extents).z;
      }
      local_e0.z = local_28;
      core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045b800(local_34,&local_e0,&local_68);
      local_d0[2] = local_68.x;
      local_d0[(uint)bVar3 * -2 + 3] = *(float *)((int)&local_68 + (uint)bVar3 * -8 + 4);
      local_d0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
           *(float *)((int)&local_68 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      local_b0 = local_d0[2] + (obb_a->position).x;
      local_ac[0] = local_d0[3] + (obb_a->position).y;
      local_ac[1] = local_c0 + (obb_a->position).z;
      local_104.x = local_b0;
      *(float *)((int)&local_104 + (uint)bVar3 * -8 + 4) = local_ac[(uint)bVar3 * -2];
      *(float *)((int)&local_104 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           local_ac[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      if (&local_e0 != &local_104) {
        local_e0.x = local_104.x;
        local_e0.y = local_104.y;
        local_e0.z = local_104.z;
      }
      local_ac[2] = local_e0.x - (obb_b->position).x;
      local_ac[3] = local_e0.y - (obb_b->position).y;
      local_9c = local_e0.z - (obb_b->position).z;
      local_110.x = local_ac[2];
      *(float *)((int)&local_110 + (uint)bVar3 * -8 + 4) = local_ac[(uint)bVar3 * -2 + 3];
      *(float *)((int)&local_110 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           local_ac[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045b870
                (local_1c,&local_110,&local_8c);
      local_98.x = local_8c.x;
      local_ac[(uint)bVar3 * -2 + 6] = *(float *)((int)&local_8c + (uint)bVar3 * -8 + 4);
      pCVar2 = local_24;
      local_ac[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7] =
           *(float *)((int)&local_8c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      if (&local_e0 != (CVector3f *)(local_ac + 5)) {
        local_e0.x = local_98.x;
        local_e0.y = local_98.y;
        local_e0.z = local_98.z;
      }
      if (((((local_134 <= local_e0.x) && (local_130 <= local_e0.y)) && (local_12c <= local_e0.z))
          && ((local_e0.x <= local_128 && (local_e0.y <= local_124)))) && (local_e0.z <= local_120))
      {
        return 1;
      }
      if (&local_e0 != local_24) {
        local_24->x = local_e0.x;
        pCVar2->y = local_e0.y;
        pCVar2->z = local_e0.z;
      }
      local_20 = local_20 + 1;
      local_24 = local_24 + 1;
      if (7 < (int)local_20) {
        pCVar2 = local_194;
        local_38 = 0;
        while( true ) {
          uVar1 = local_38 ^ 1;
          uVar7 = 0;
          pfVar5 = &local_74;
          local_d4 = local_194[uVar1].x - pCVar2->x;
          local_d0[0] = local_194[uVar1].y - pCVar2->y;
          pfVar4 = &local_134;
          local_d0[1] = local_194[uVar1].z - pCVar2->z;
          local_74 = local_d4;
          afStack_70[(uint)bVar3 * -2] = local_d0[(uint)bVar3 * -2];
          pCVar6 = pCVar2;
          afStack_70[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
               local_d0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
          local_14 = (float)core_box_cpp_FUN_0041e220(pfVar4,pCVar6,pfVar5,uVar7);
          local_18 = local_14;
          local_40 = (double)local_14;
          if ((0.0 <= local_40) && (local_40 <= 1.0)) {
            return 1;
          }
          uVar1 = local_38 ^ 2;
          uVar7 = 0;
          pfVar5 = &local_5c;
          local_f8 = local_194[uVar1].x - pCVar2->x;
          local_f4[0] = local_194[uVar1].y - pCVar2->y;
          pfVar4 = &local_134;
          local_f4[1] = local_194[uVar1].z - pCVar2->z;
          local_5c = local_f8;
          afStack_58[(uint)bVar3 * -2] = local_f4[(uint)bVar3 * -2];
          pCVar6 = pCVar2;
          afStack_58[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
               local_f4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
          local_14 = (float)core_box_cpp_FUN_0041e220(pfVar4,pCVar6,pfVar5,uVar7);
          local_48 = (double)local_14;
          if ((0.0 <= local_48) && (local_48 <= 1.0)) break;
          uVar1 = local_38 ^ 4;
          uVar7 = 0;
          pfVar4 = local_f4 + 2;
          local_11c = local_194[uVar1].x - pCVar2->x;
          local_118[0] = local_194[uVar1].y - pCVar2->y;
          pfVar5 = &local_134;
          local_118[1] = local_194[uVar1].z - pCVar2->z;
          local_f4[2] = local_11c;
          local_f4[(uint)bVar3 * -2 + 3] = local_118[(uint)bVar3 * -2];
          pCVar6 = pCVar2;
          local_f4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
               local_118[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
          local_14 = (float)core_box_cpp_FUN_0041e220(pfVar5,pCVar6,pfVar4,uVar7);
          local_50 = (double)local_14;
          if ((0.0 <= local_50) && (local_50 <= 1.0)) {
            return 1;
          }
          local_38 = local_38 + 1;
          pCVar2 = pCVar2 + 1;
          if (7 < (int)local_38) {
            return 0;
          }
        }
        return 1;
      }
      if ((local_20 & 1) == 0) break;
      local_30 = -(obb_a->extents).x;
    }
  } while( true );
}
