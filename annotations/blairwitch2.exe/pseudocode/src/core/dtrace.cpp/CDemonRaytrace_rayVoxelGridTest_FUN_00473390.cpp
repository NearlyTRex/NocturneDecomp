// Name: core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00473390
// Address: 00473390
// Address Range: [[00473390, 004738c9]]
// Convention: __cdecl
// Signature: int __cdecl core_dtrace_cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00473390(CDemonRaytrace *this_ptr,CVector3f *start_pos,CVector3f *end_pos)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dtrace_cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00473390(CDemonRaytrace *this_ptr,CVector3f *start_pos,CVector3f *end_pos)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CDemonCube *this_ptr_00;
  int iVar5;
  byte bVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float afStackY_1080 [1007];
  CVector3f local_a4;
  float local_98;
  float local_94 [2];
  CVector3f local_8c;
  double local_80;
  uint local_78 [2];
  float local_70;
  float local_6c;
  float local_68;
  int local_64;
  int local_60;
  int local_5c;
  float local_58;
  float local_54;
  float local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  float local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  float local_18;
  
  bVar6 = 0;
  fVar7 = (float10)1 / (float10)(this_ptr->cell_size).x;
  fVar8 = ((float10)start_pos->y - (float10)(this_ptr->bbox_min).y) /
          (float10)(this_ptr->cell_size).y;
  fVar9 = ((float10)start_pos->z - (float10)(this_ptr->bbox_min).z) /
          (float10)(this_ptr->cell_size).z;
  fVar10 = ((float10)start_pos->x - (float10)(this_ptr->bbox_min).x) * fVar7;
  fVar7 = ((float10)end_pos->x - (float10)(this_ptr->bbox_min).x) * fVar7;
  local_6c = (float)fVar10;
  round();
  local_34 = (int)ROUND(fVar10);
  local_50 = (float)fVar8;
  round();
  local_30 = (int)ROUND(fVar8);
  local_58 = (float)fVar9;
  round();
  local_2c = (int)ROUND(fVar9);
  local_80 = floor((double)fVar7);
  fVar10 = (float10)local_80;
  fVar7 = ((float10)end_pos->y - (float10)(this_ptr->bbox_min).y) / (float10)(this_ptr->cell_size).y
  ;
  round();
  local_64 = (int)ROUND(fVar10);
  local_80 = floor((double)fVar7);
  fVar10 = (float10)local_80;
  fVar7 = ((float10)end_pos->z - (float10)(this_ptr->bbox_min).z) / (float10)(this_ptr->cell_size).z
  ;
  round();
  local_60 = (int)ROUND(fVar10);
  iVar5 = 1;
  local_80 = floor((double)fVar7);
  fVar7 = (float10)end_pos->x;
  fVar10 = (float10)end_pos->y;
  fVar8 = (float10)end_pos->z;
  fVar9 = (float10)local_80;
  round();
  iVar4 = local_34;
  iVar3 = local_64;
  local_5c = (int)ROUND(fVar9);
  local_98 = (float)(fVar7 - (float10)start_pos->x);
  local_94[0] = (float)(fVar10 - (float10)start_pos->y);
  local_94[1] = (float)(fVar8 - (float10)start_pos->z);
  local_8c.x = local_98;
  *(float *)((int)&local_8c + (uint)bVar6 * -8 + 4) = local_94[(uint)bVar6 * -2];
  *(float *)((int)&local_8c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
       local_94[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  if (((iVar4 != iVar3) || (local_30 != local_60)) ||
     (iVar3 = local_2c, iVar4 = local_24, iVar2 = local_20, local_2c != local_5c)) {
    fVar1 = SQRT(local_8c.z * local_8c.z + local_8c.x * local_8c.x + local_8c.y * local_8c.y);
    if (fVar1 <= 0.0) {
      return 0;
    }
    fVar10 = (float10)local_8c.x;
    fVar9 = (float10)_DAT_005d1b57 / (float10)fVar1;
    fVar7 = ABS(fVar10) * fVar9;
    fVar8 = ABS((float10)local_8c.y) * fVar9;
    fVar9 = ABS((float10)local_8c.z) * fVar9;
    round();
    local_3c = (int)ROUND(fVar7);
    fVar7 = (float10)0;
    round();
    round();
    local_40 = (int)ROUND(fVar8);
    local_38 = (float)(int)ROUND(fVar9);
    if (fVar10 < fVar7) {
      iVar3 = local_34 - local_64;
      local_54 = local_6c - (float)local_34;
      local_48 = -1;
    }
    else {
      iVar3 = local_64 - local_34;
      local_54 = (float)(local_34 + 1) - local_6c;
      local_48 = 1;
    }
    if (local_8c.y < 0.0) {
      iVar4 = local_30 - local_60;
      local_70 = local_50 - (float)local_30;
      local_4c = -1;
    }
    else {
      iVar4 = local_60 - local_30;
      local_70 = (float)(local_30 + 1) - local_50;
      local_4c = 1;
    }
    if (local_8c.z < 0.0) {
      iVar5 = local_2c - local_5c;
      local_68 = local_58 - (float)local_2c;
      local_44 = -1;
    }
    else {
      iVar5 = local_5c - local_2c;
      local_68 = (float)(local_2c + 1) - local_58;
      local_44 = 1;
    }
    iVar5 = iVar3 + 1 + iVar4 + iVar5;
    fVar8 = (float10)local_40 * (float10)local_68;
    fVar9 = (float10)(int)local_38 * (float10)local_54;
    fVar7 = (float10)(int)local_38 * (float10)local_70;
    fVar10 = (float10)local_40 * (float10)local_54 - (float10)local_3c * (float10)local_70;
    fVar11 = (float10)local_3c * (float10)local_68;
    local_18 = local_38;
    round();
    fVar8 = fVar8 - fVar7;
    local_28 = (int)ROUND(fVar10);
    round();
    fVar9 = fVar9 - fVar11;
    local_24 = (int)ROUND(fVar8);
    round();
    iVar3 = local_2c;
    iVar4 = local_24;
    iVar2 = (int)ROUND(fVar9);
  }
  while (((local_20 = iVar2, local_24 = iVar4, local_2c = iVar3,
          this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_00472af0
                                  (this_ptr,local_34,local_30,local_2c),
          this_ptr_00 == (CDemonCube *)0x0 ||
          (local_18 = core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_00446b60
                                (this_ptr_00,start_pos,&local_8c,&local_a4,local_78), local_18 < 0.0
          )) || (1.0 < local_18))) {
    iVar5 = iVar5 + -1;
    if (iVar5 < 1) {
      return 0;
    }
    iVar3 = local_2c + local_44;
    iVar4 = local_24 + local_40;
    iVar2 = local_20 - local_3c;
    if (local_28 < 0) {
      if (local_20 < 0) {
        local_34 = local_34 + local_48;
        local_28 = local_28 + local_40;
        iVar3 = local_2c;
        iVar4 = local_24;
        iVar2 = local_20 + (int)local_38;
      }
    }
    else if (-1 < local_24) {
      local_30 = local_30 + local_4c;
      local_28 = local_28 - local_3c;
      iVar3 = local_2c;
      iVar4 = local_24 - (int)local_38;
      iVar2 = local_20;
    }
  }
  return 1;
}
