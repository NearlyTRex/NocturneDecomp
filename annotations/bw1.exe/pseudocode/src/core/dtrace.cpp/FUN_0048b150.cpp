// Name: core_dtrace.cpp_FUN_0048b150
// Address: 0048b150
// Address Range: [[0048b150, 0048b876]]
// Convention: unknown
// Signature: float core_dtrace_cpp_FUN_0048b150(CDemonRaytrace *param_1,CVector3f *param_2,float *param_3,float *param_4,float *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_dtrace_cpp_FUN_0048b150(CDemonRaytrace *param_1,CVector3f *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CDemonCube *this_ptr;
  int iVar7;
  byte bVar8;
  double dVar9;
  float afStackY_1094 [996];
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_c0;
  float local_bc;
  CVector3f local_b8;
  float local_ac;
  float local_a8 [4];
  float local_98;
  uint local_90;
  float local_8c;
  float local_88;
  int local_84;
  int local_80;
  uint local_7c;
  float fStack_78;
  int local_74;
  float fStack_70;
  int iStack_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  float local_4c;
  float local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  
  bVar8 = 0;
  local_b8.y = (param_2->x - (param_1->bbox_min).x) / (param_1->cell_size).x;
  local_b8.z = (param_2->y - (param_1->bbox_min).y) / (param_1->cell_size).y;
  local_b8.x = (param_2->z - (param_1->bbox_min).z) / (param_1->cell_size).z;
  dVar9 = floor((double)local_b8.y);
  local_7c = SUB84(__BITCAST_UINT64(dVar9),0);
  fStack_78 = (float)((ulonglong)dVar9 >> 0x20);
  fVar16 = 6.675923e-39;
  dVar9 = round(dVar9);
  local_3c = (int)ROUND(dVar9);
  dVar9 = floor((double)local_b8.y);
  local_80 = SUB84(__BITCAST_UINT64(dVar9),0);
  local_7c = (uint)((ulonglong)dVar9 >> 0x20);
  dVar9 = round(dVar9);
  local_44 = (int)ROUND(dVar9);
  dVar9 = floor((double)local_c0);
  local_84 = SUB84(__BITCAST_UINT64(dVar9),0);
  local_80 = (int)((ulonglong)dVar9 >> 0x20);
  fVar15 = (*param_3 - (param_1->bbox_min).x) / (param_1->cell_size).x;
  fVar12 = param_3[1];
  fVar13 = (param_1->bbox_min).y;
  fVar11 = (param_1->cell_size).y;
  fVar1 = param_3[2];
  fVar2 = (param_1->bbox_min).z;
  fVar3 = (param_1->cell_size).z;
  fVar14 = 6.67609e-39;
  dVar9 = round(dVar9);
  local_40 = (int)ROUND(dVar9);
  local_b8.x = (fVar1 - fVar2) / fVar3;
  local_b8.z = (fVar12 - fVar13) / fVar11;
  dVar9 = floor((double)fVar15);
  local_88 = SUB84(__BITCAST_UINT64(dVar9),0);
  local_84 = (int)((ulonglong)dVar9 >> 0x20);
  fVar13 = 6.676168e-39;
  dVar9 = round(dVar9);
  iStack_6c = (int)ROUND(dVar9);
  dVar9 = floor((double)local_b8.y);
  local_8c = SUB84(__BITCAST_UINT64(dVar9),0);
  local_88 = (float)((ulonglong)dVar9 >> 0x20);
  fVar12 = 6.676226e-39;
  dVar9 = round(dVar9);
  local_38 = (int)ROUND(dVar9);
  uStack_e0 = 0x48b2b2;
  dVar9 = floor((double)local_c0);
  local_90 = SUB84(__BITCAST_UINT64(dVar9),0);
  local_8c = (float)((ulonglong)dVar9 >> 0x20);
  dVar9 = round(dVar9);
  fStack_78 = (float)(int)ROUND(dVar9);
  if ((-1 < local_50) || (-1 < local_74)) {
    if ((local_54 < 0) && (local_3c < 0)) {
      return -1.0;
    }
    if (((int)local_4c < 0) && ((int)fStack_78 < 0)) {
      return -1.0;
    }
    iVar7 = (param_1->grid_coord).x;
    if ((((local_50 < iVar7) || (local_74 < iVar7)) &&
        ((iVar7 = (param_1->grid_coord).y, local_54 < iVar7 || (local_3c < iVar7)))) &&
       ((iVar7 = (param_1->grid_coord).z, (int)local_4c < iVar7 || ((int)fStack_78 < iVar7)))) {
      local_ac = *param_3 - param_2->x;
      local_a8[0] = param_3[1] - param_2->y;
      local_a8[1] = param_3[2] - param_2->z;
      local_a8[2] = local_ac;
      local_a8[(uint)bVar8 * -2 + 3] = local_a8[(uint)bVar8 * -2];
      local_a8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
           local_a8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      iVar7 = 1;
      if ((local_50 != local_74) || ((local_54 != local_3c || (local_4c != fStack_78)))) {
        fVar11 = SQRT(local_98 * local_98 + local_a8[2] * local_a8[2] + local_a8[3] * local_a8[3]);
        if (fVar11 <= 0.0) {
          return -1.0;
        }
        fVar2 = local_bc - fVar15;
        fVar16 = fVar16 - fVar13;
        fVar1 = _DAT_005db94c / fVar11;
        fVar10 = 6.67671e-39;
        dVar9 = round((double)(ABS(fVar12 - fVar14) * fVar1));
        fVar3 = local_a8[1];
        local_60 = (int)ROUND(dVar9);
        uStack_e0 = 0x48b402;
        dVar9 = round((double)(ABS(fVar2) * fVar1));
        local_60 = (int)ROUND(dVar9);
        uStack_e4 = 0x48b412;
        dVar9 = round((double)(ABS(fVar16) * fVar1));
        iStack_6c = (int)ROUND(dVar9);
        if (fVar3 < 0.0) {
          iVar5 = local_5c - local_80;
          local_8c = fVar11 - (float)local_5c;
          fStack_78 = -NAN;
        }
        else {
          iVar5 = local_80 - local_5c;
          local_8c = (float)(local_5c + 1) - fVar11;
          fStack_78 = 1.4013e-45;
        }
        if (local_a8[0] < 0.0) {
          local_74 = -1;
          iVar6 = local_60 - (int)local_48;
          local_88 = fVar12 - (float)local_60;
        }
        else {
          iVar6 = (int)local_48 - local_60;
          local_88 = (float)(local_60 + 1) - fVar12;
          local_74 = 1;
        }
        if (local_a8[1] < 0.0) {
          local_44 = -1;
          iVar7 = local_58 - local_84;
          fStack_70 = fVar10 - (float)local_58;
        }
        else {
          iVar7 = local_84 - local_58;
          fStack_70 = (float)(local_58 + 1) - fVar10;
          local_44 = 1;
        }
        iVar7 = iVar5 + 1 + iVar6 + iVar7;
        fVar2 = (float)local_64 * fStack_70;
        fVar11 = (float)iStack_6c * local_8c;
        fVar1 = (float)iStack_6c * local_88;
        fVar12 = (float)local_68 * fStack_70;
        uStack_e8 = 0x48b548;
        local_3c = iStack_6c;
        dVar9 = round
                          ((double)((float)local_64 * local_8c - (float)local_68 * local_88));
        local_58 = (int)ROUND(dVar9);
        uStack_ec = 0x48b55a;
        dVar9 = round((double)(fVar2 - fVar1));
        local_54 = (int)ROUND(dVar9);
        uStack_f0 = 0x48b56a;
        dVar9 = round((double)(fVar11 - fVar12));
        local_5c = (int)ROUND(dVar9);
      }
      fVar12 = 1.0001;
      iVar5 = local_64;
      iVar6 = local_5c;
      iVar4 = local_58;
      while( true ) {
        local_58 = iVar4;
        local_5c = iVar6;
        local_64 = iVar5;
        this_ptr = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_0048afe0
                             (param_1,local_68,iStack_6c,local_64);
        if (this_ptr != (CDemonCube *)0x0) {
          local_4c = core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_00458210
                               (this_ptr,param_2,&local_b8,(CVector3f *)&stack0xffffff30,
                                (uint *)(local_a8 + 1));
          if (local_4c < fVar12) {
            if ((param_4 != (float *)0x0) && (param_4 != (float *)&stack0xffffff30)) {
              *param_4 = fVar13;
              param_4[1] = fVar14;
              param_4[2] = fVar15;
            }
            fVar12 = local_4c;
            if (param_5 != (float *)0x0) {
              *param_5 = local_a8[1];
            }
          }
          local_48 = local_4c;
          if (fVar12 <= 1.0) {
            return fVar12;
          }
        }
        iVar7 = iVar7 + -1;
        if (iVar7 < 1) break;
        iVar5 = local_64 + local_50;
        iVar6 = local_5c - local_74;
        iVar4 = local_58 + (int)fStack_70;
        if (local_60 < 0) {
          if (local_5c < 0) {
            local_68 = local_68 + local_84;
            local_60 = local_60 + (int)fStack_70;
            iVar5 = local_64;
            iVar6 = local_5c + (int)fStack_78;
            iVar4 = local_58;
          }
        }
        else if (-1 < local_58) {
          iStack_6c = iStack_6c + local_80;
          local_60 = local_60 - local_74;
          iVar5 = local_64;
          iVar6 = local_5c;
          iVar4 = local_58 - (int)fStack_78;
        }
      }
      if (param_5 != (float *)0x0) {
        *param_5 = 1.4013e-45;
        return -1.0;
      }
    }
  }
  return -1.0;
}
