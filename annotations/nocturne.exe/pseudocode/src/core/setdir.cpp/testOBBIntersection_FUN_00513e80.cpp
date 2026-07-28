// Name: core_setdir.cpp_testOBBIntersection_FUN_00513e80
// Address: 00513e80
// Address Range: [[00513e80, 005141ee]]
// Convention: __cdecl
// Signature: int __cdecl core_setdir_cpp_testOBBIntersection_FUN_00513e80(SVDBox *obb_a,SVDBox *obb_b)

#include "nocturne.h"

int __cdecl core_setdir_cpp_testOBBIntersection_FUN_00513e80(SVDBox *obb_a,SVDBox *obb_b)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  float local_128 [24];
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  byte local_98 [12];
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  byte local_5c [12];
  float local_50;
  float local_4c;
  float local_48;
  double local_44;
  double local_3c;
  double local_34;
  float local_2c;
  CMatrix3x3f *local_28;
  CMatrix3x3f *local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_74 = -(obb_b->extents).x;
  local_70 = -(obb_b->extents).y;
  local_6c = -(obb_b->extents).z;
  if (&local_c8 != &local_74) {
    local_c8 = local_74;
    local_c4 = local_70;
    local_c0 = local_6c;
  }
  if ((CVector3f *)&local_bc != &obb_b->extents) {
    local_bc = (obb_b->extents).x;
    local_b8 = (obb_b->extents).y;
    local_b4 = (obb_b->extents).z;
  }
  __arrinit(local_128,8,&g_CVectorTypeInfo_005993b0);
  local_28 = &obb_b->rotation_matrix;
  uVar3 = 0;
  local_24 = &obb_a->rotation_matrix;
  do {
    local_20 = (obb_a->extents).x;
    pfVar4 = local_128 + uVar3 * 3;
    while( true ) {
      local_68 = local_20;
      if ((uVar3 & 2) == 0) {
        local_1c = (obb_a->extents).y;
      }
      else {
        local_1c = -(obb_a->extents).y;
      }
      local_64 = local_1c;
      if ((uVar3 & 4) == 0) {
        local_18 = (obb_a->extents).z;
      }
      else {
        local_18 = -(obb_a->extents).z;
      }
      local_60 = local_18;
      pfVar1 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                  (local_24,local_5c,&local_68);
      local_8c = *pfVar1 + (obb_a->position).x;
      local_88 = pfVar1[1] + (obb_a->position).y;
      local_84 = pfVar1[2] + (obb_a->position).z;
      if (&local_68 != &local_8c) {
        local_68 = local_8c;
        local_64 = local_88;
        local_60 = local_84;
      }
      local_80 = local_68 - (obb_b->position).x;
      local_7c = local_64 - (obb_b->position).y;
      local_78 = local_60 - (obb_b->position).z;
      pfVar1 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                                  (local_28,local_98,&local_80);
      if (&local_68 != pfVar1) {
        local_68 = *pfVar1;
        local_64 = pfVar1[1];
        local_60 = pfVar1[2];
      }
      if (((((local_c8 <= local_68) && (local_c4 <= local_64)) && (local_c0 <= local_60)) &&
          ((local_68 <= local_bc && (local_64 <= local_b8)))) && (local_60 <= local_b4)) {
        return 1;
      }
      if (pfVar4 != &local_68) {
        *pfVar4 = local_68;
        pfVar4[1] = local_64;
        pfVar4[2] = local_60;
      }
      uVar3 = uVar3 + 1;
      pfVar4 = pfVar4 + 3;
      if (7 < (int)uVar3) {
        pfVar4 = local_128;
        uVar3 = 0;
        while( true ) {
          uVar2 = uVar3 ^ 1;
          local_50 = local_128[uVar2 * 3] - *pfVar4;
          local_4c = local_128[uVar2 * 3 + 1] - pfVar4[1];
          local_48 = local_128[uVar2 * 3 + 2] - pfVar4[2];
          local_14 = (float)core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550
                                      (&local_c8,pfVar4,&local_50,0);
          local_2c = local_14;
          local_44 = (double)local_14;
          if ((0.0 <= local_44) && (local_44 <= 1.0)) {
            return 1;
          }
          uVar2 = uVar3 ^ 2;
          local_a4 = local_128[uVar2 * 3] - *pfVar4;
          local_a0 = local_128[uVar2 * 3 + 1] - pfVar4[1];
          local_9c = local_128[uVar2 * 3 + 2] - pfVar4[2];
          local_14 = (float)core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550
                                      (&local_c8,pfVar4,&local_a4,0);
          local_3c = (double)local_14;
          if ((0.0 <= local_3c) && (local_3c <= 1.0)) break;
          uVar2 = uVar3 ^ 4;
          local_b0 = local_128[uVar2 * 3] - *pfVar4;
          local_ac = local_128[uVar2 * 3 + 1] - pfVar4[1];
          local_a8 = local_128[uVar2 * 3 + 2] - pfVar4[2];
          local_14 = (float)core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550
                                      (&local_c8,pfVar4,&local_b0,0);
          local_34 = (double)local_14;
          if ((0.0 <= local_34) && (local_34 <= 1.0)) {
            return 1;
          }
          uVar3 = uVar3 + 1;
          pfVar4 = pfVar4 + 3;
          if (7 < (int)uVar3) {
            return 0;
          }
        }
        return 1;
      }
      if ((uVar3 & 1) == 0) break;
      local_20 = -(obb_a->extents).x;
    }
  } while( true );
}
