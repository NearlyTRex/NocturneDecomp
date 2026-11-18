// Name: core_setdir.cpp_testOBBIntersection_FUN_0053a1b0
// Address: 0053a1b0
// Address Range: [[0053a1b0, 0053a600]]
// Convention: __cdecl
// Signature: int __cdecl core_setdir_cpp_testOBBIntersection_FUN_0053a1b0(SVDBox *obb_a,SVDBox *obb_b)

#include "nocturne.h"

int __cdecl core_setdir_cpp_testOBBIntersection_FUN_0053a1b0(SVDBox *obb_a,SVDBox *obb_b)

{
  uint uVar1;
  CVector3f *pCVar2;
  byte bVar3;
  float afStackY_1104 [984];
  CBoundingBox3D *pCVar4;
  CVector3f *pCVar5;
  CVector3f *pCVar6;
  CVector3f *pCVar7;
  CVector3f local_194 [8];
  CBoundingBox3D local_134;
  float local_11c;
  float local_118 [2];
  CVector3f local_110;
  CVector3f local_104;
  float local_f8;
  float local_f4 [2];
  CVector3f local_ec;
  CVector3f local_e0;
  float local_d4;
  float local_d0 [4];
  float local_c0;
  CBoundingBox3D local_bc;
  float local_a4;
  float local_a0 [2];
  CVector3f local_98;
  CVector3f local_8c;
  float local_80;
  float local_7c;
  float local_78;
  CVector3f local_74;
  CVector3f local_68;
  CVector3f local_5c;
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
  local_bc.min.x = -(obb_b->extents).x;
  local_bc.min.y = -(obb_b->extents).y;
  local_bc.min.z = -(obb_b->extents).z;
  if (&local_134 != (CBoundingBox3D *)(local_d0 + 5)) {
    local_134.min.x = local_bc.min.x;
    local_134.min.y = local_bc.min.y;
    local_134.min.z = local_bc.min.z;
  }
  if (&local_134.max != &obb_b->extents) {
    local_134.max.x = (obb_b->extents).x;
    local_134.max.y = (obb_b->extents).y;
    local_134.max.z = (obb_b->extents).z;
  }
  local_80 = local_bc.min.x;
  local_7c = local_bc.min.y;
  local_78 = local_bc.min.z;
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
      core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530(local_34,&local_e0,&local_68);
      local_d0[2] = local_68.x;
      local_d0[(uint)bVar3 * -2 + 3] = *(float *)((int)&local_68 + (uint)bVar3 * -8 + 4);
      local_d0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
           *(float *)((int)&local_68 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      local_bc.max.x = local_d0[2] + (obb_a->position).x;
      local_bc.max.y = local_d0[3] + (obb_a->position).y;
      local_bc.max.z = local_c0 + (obb_a->position).z;
      local_104.x = local_bc.max.x;
      *(uint *)((int)&local_104 + (uint)bVar3 * -8 + 4) =
           *(uint *)((int)&local_bc + (uint)bVar3 * -8 + 0x10);
      *(uint *)((int)&local_104 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           *(uint *)((int)&local_bc + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 0x14);
      if (&local_e0 != &local_104) {
        local_e0.x = local_104.x;
        local_e0.y = local_104.y;
        local_e0.z = local_104.z;
      }
      local_a4 = local_e0.x - (obb_b->position).x;
      local_a0[0] = local_e0.y - (obb_b->position).y;
      local_a0[1] = local_e0.z - (obb_b->position).z;
      local_110.x = local_a4;
      *(float *)((int)&local_110 + (uint)bVar3 * -8 + 4) = local_a0[(uint)bVar3 * -2];
      *(float *)((int)&local_110 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           local_a0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_004495a0
                (local_1c,&local_110,&local_8c);
      local_98.x = local_8c.x;
      local_a0[(uint)bVar3 * -2 + 3] = *(float *)((int)&local_8c + (uint)bVar3 * -8 + 4);
      pCVar2 = local_24;
      local_a0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
           *(float *)((int)&local_8c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      if (&local_e0 != (CVector3f *)(local_a0 + 2)) {
        local_e0.x = local_98.x;
        local_e0.y = local_98.y;
        local_e0.z = local_98.z;
      }
      if (((((local_134.min.x <= local_e0.x) && (local_134.min.y <= local_e0.y)) &&
           (local_134.min.z <= local_e0.z)) &&
          ((local_e0.x <= local_134.max.x && (local_e0.y <= local_134.max.y)))) &&
         (local_e0.z <= local_134.max.z)) {
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
          pCVar7 = (CVector3f *)0x0;
          pCVar6 = &local_74;
          local_d4 = local_194[uVar1].x - pCVar2->x;
          local_d0[0] = local_194[uVar1].y - pCVar2->y;
          pCVar4 = &local_134;
          local_d0[1] = local_194[uVar1].z - pCVar2->z;
          local_74.x = local_d4;
          *(float *)((int)&local_74 + (uint)bVar3 * -8 + 4) = local_d0[(uint)bVar3 * -2];
          pCVar5 = pCVar2;
          *(float *)((int)&local_74 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
               local_d0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
          local_14 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_0041af70
                               (pCVar4,pCVar5,pCVar6,pCVar7);
          local_18 = local_14;
          local_40 = (double)local_14;
          if ((0.0 <= local_40) && (local_40 <= 1.0)) {
            return 1;
          }
          uVar1 = local_38 ^ 2;
          pCVar7 = (CVector3f *)0x0;
          pCVar6 = &local_5c;
          local_f8 = local_194[uVar1].x - pCVar2->x;
          local_f4[0] = local_194[uVar1].y - pCVar2->y;
          pCVar4 = &local_134;
          local_f4[1] = local_194[uVar1].z - pCVar2->z;
          local_5c.x = local_f8;
          *(float *)((int)&local_5c + (uint)bVar3 * -8 + 4) = local_f4[(uint)bVar3 * -2];
          pCVar5 = pCVar2;
          *(float *)((int)&local_5c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
               local_f4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
          local_14 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_0041af70
                               (pCVar4,pCVar5,pCVar6,pCVar7);
          local_48 = (double)local_14;
          if ((0.0 <= local_48) && (local_48 <= 1.0)) break;
          uVar1 = local_38 ^ 4;
          pCVar7 = (CVector3f *)0x0;
          pCVar6 = &local_ec;
          local_11c = local_194[uVar1].x - pCVar2->x;
          local_118[0] = local_194[uVar1].y - pCVar2->y;
          pCVar4 = &local_134;
          local_118[1] = local_194[uVar1].z - pCVar2->z;
          local_ec.x = local_11c;
          *(float *)((int)&local_ec + (uint)bVar3 * -8 + 4) = local_118[(uint)bVar3 * -2];
          pCVar5 = pCVar2;
          *(float *)((int)&local_ec + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
               local_118[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
          local_14 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_0041af70
                               (pCVar4,pCVar5,pCVar6,pCVar7);
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
