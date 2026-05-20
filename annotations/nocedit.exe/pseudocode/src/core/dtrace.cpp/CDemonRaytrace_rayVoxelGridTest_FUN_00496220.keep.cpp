// Name: core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220
// Address: 00496220
// MANUAL RECONSTRUCTION
// Address Range: [[00496220, 004966ed]]
// Convention: __cdecl
// Signature: int __cdecl core_dtrace_cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220(CDemonRaytrace *this_ptr,CVector3f *start_pos,CVector3f *end_pos)

#include "nocturne.h"

int __cdecl core_dtrace_cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220(CDemonRaytrace *this_ptr,CVector3f *start_pos,CVector3f *end_pos)

{
  float fVar2;
  int iVar6;
  int iVar3;
  int iVar4;
  int iVar7;
  CDemonCube *this_ptr_00;
  int iVar5;
  double dVar8;
  CVector3f local_94;
  CVector3f local_88;
  uint local_70;
  float local_6c;
  int local_68;
  float local_64;
  int local_60;
  int local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  float local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_14;
  int iVar2;
  float fVar1;
  
  local_20 = 0;
  local_1c = 0;
  local_50 = (start_pos->y - (this_ptr->bbox_min).y) / (this_ptr->cell_size).y;
  fVar1 = 1.0 / (this_ptr->cell_size).x;
  local_58 = (start_pos->z - (this_ptr->bbox_min).z) / (this_ptr->cell_size).z;
  local_4c = (start_pos->x - (this_ptr->bbox_min).x) * fVar1;
  local_30 = (int)ROUND(ROUND(local_50));
  local_28 = (int)ROUND(ROUND(local_58));
  local_2c = (int)ROUND(ROUND(local_4c));
  dVar8 = floor((double)((end_pos->x - (this_ptr->bbox_min).x) * fVar1));
  local_5c = (int)ROUND(ROUND(dVar8));
  dVar8 = floor
                    ((double)((end_pos->y - (this_ptr->bbox_min).y) / (this_ptr->cell_size).y));
  local_68 = (int)ROUND(ROUND(dVar8));
  dVar8 = floor
                    ((double)((end_pos->z - (this_ptr->bbox_min).z) / (this_ptr->cell_size).z));
  iVar5 = 1;
  local_94.x = end_pos->x - start_pos->x;
  local_60 = (int)ROUND(ROUND(dVar8));
  local_94.y = end_pos->y - start_pos->y;
  local_94.z = end_pos->z - start_pos->z;
  iVar2 = local_28;
  if (((local_2c != local_5c) || (local_30 != local_68)) ||
     (iVar7 = local_20, iVar6 = local_1c, local_28 != local_60)) {
    fVar2 = SQRT(local_94.z * local_94.z + local_94.x * local_94.x + local_94.y * local_94.y);
    if (fVar2 <= 0.0) {
      return 0;
    }
    fVar2 = 2.684355e+08f / fVar2;
    local_38 = (int)ROUND(ROUND(ABS(local_94.x) * fVar2));
    local_3c = (int)ROUND(ROUND(ABS(local_94.y) * fVar2));
    local_34 = (float)(int)ROUND(ROUND(ABS(local_94.z) * fVar2));
    if (local_94.x < 0.0) {
      iVar3 = local_2c - local_5c;
      local_44 = -1;
      local_6c = local_4c - (float)local_2c;
    }
    else {
      iVar3 = local_5c - local_2c;
      local_44 = 1;
      local_6c = (float)(local_2c + 1) - local_4c;
    }
    if (local_94.y < 0.0) {
      iVar4 = local_30 - local_68;
      local_48 = -1;
      local_54 = local_50 - (float)local_30;
    }
    else {
      iVar4 = local_68 - local_30;
      local_48 = 1;
      local_54 = (float)(local_30 + 1) - local_50;
    }
    if (local_94.z < 0.0) {
      iVar7 = local_28 - local_60;
      local_40 = -1;
      local_64 = local_58 - (float)local_28;
    }
    else {
      iVar7 = local_60 - local_28;
      local_40 = 1;
      local_64 = (float)(local_28 + 1) - local_58;
    }
    iVar5 = iVar3 + 1 + iVar4 + iVar7;
    local_24 = (int)ROUND(ROUND((float)local_3c * local_6c - (float)local_38 * local_54));
    iVar7 = (int)ROUND(ROUND((float)local_3c * local_64 - (float)(int)local_34 * local_54));
    iVar6 = (int)ROUND(ROUND((float)(int)local_34 * local_6c - (float)local_38 * local_64));
    local_14 = local_34;
  }
  while (((local_1c = iVar6, local_20 = iVar7, local_28 = iVar2,
          this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                                  (this_ptr,local_2c,local_30,local_28),
          this_ptr_00 == (CDemonCube *)0x0 ||
          (local_14 = core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
                                (this_ptr_00,start_pos,&local_94,&local_88,&local_70),
          local_14 < 0.0)) || (1.0 < local_14))) {
    iVar5 = iVar5 + -1;
    if (iVar5 < 1) {
      return 0;
    }
    iVar2 = local_28 + local_40;
    iVar7 = local_20 + local_3c;
    iVar6 = local_1c - local_38;
    if (local_24 < 0) {
      if (local_1c < 0) {
        local_2c = local_2c + local_44;
        local_24 = local_24 + local_3c;
        iVar2 = local_28;
        iVar7 = local_20;
        iVar6 = local_1c + (int)local_34;
      }
    }
    else if (-1 < local_20) {
      local_30 = local_30 + local_48;
      local_24 = local_24 - local_38;
      iVar2 = local_28;
      iVar7 = local_20 - (int)local_34;
      iVar6 = local_1c;
    }
  }
  return 1;
}
