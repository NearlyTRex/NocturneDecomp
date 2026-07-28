// Name: core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_00468580
// Address: 00468580
// Address Range: [[00468580, 004687d3]]
// Convention: unknown
// Signature: float core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_00468580(CDemonRaytrace *param_1,float *param_2,undefined4 *param_3,float *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_00468580(CDemonRaytrace *param_1,float *param_2,uint *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  CDemonCube *pCVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  uint uStack_6c;
  float fStack_68;
  uint uStack_64;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  int local_24;
  float *local_18;
  
  local_5c = *param_2;
  local_18 = param_2 + 1;
  local_54 = param_2[2];
  local_50 = *param_2;
  local_58 = *local_18 + 2.0f;
  fVar1 = param_2[2];
  local_4c = *local_18 + -10.0f;
  fVar2 = local_58 - (param_1->bbox_min).y;
  fVar4 = 1.0 / (param_1->cell_size).y;
  fVar5 = local_54 - (param_1->bbox_min).z;
  fVar11 = (param_1->cell_size).z;
  fVar3 = local_4c - (param_1->bbox_min).y;
  fVar6 = local_50 - local_5c;
  uStack_64 = 0x46862a;
  local_48 = fVar1;
  dVar9 = round
                    ((double)((local_5c - (param_1->bbox_min).x) / (param_1->cell_size).x));
  local_24 = (int)ROUND(dVar9);
  fVar1 = fVar1 - local_58;
  fVar7 = local_50 - local_5c;
  fStack_68 = 6.476652e-39;
  dVar9 = round((double)(fVar5 / fVar11));
  local_2c = (int)ROUND(dVar9);
  uStack_6c = 0x468658;
  local_40 = fVar6;
  local_3c = fVar7;
  dVar9 = round((double)(fVar2 * fVar4));
  fVar11 = 6.476688e-39;
  dVar10 = round((double)(fVar3 * fVar4));
  local_3c = (float)(int)ROUND(dVar9);
  local_2c = (int)ROUND(dVar10);
  local_40 = fVar1;
  if (local_2c <= (int)local_3c) {
    do {
      pCVar8 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004678d0
                         (param_1,local_30,(int)local_3c,local_34);
      if (pCVar8 != (CDemonCube *)0x0) {
        fVar11 = (float)core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_0044b290
                                  (pCVar8,&uStack_6c,&local_48,&local_54,param_3,fVar11);
        local_28 = fVar11;
        if (fVar11 <= 1.0) {
          if ((param_4 != (float *)0x0) && (param_4 != &local_54)) {
            *param_4 = local_54;
            param_4[1] = local_50;
            param_4[2] = local_4c;
          }
          return fVar11 * local_44 + fStack_68;
        }
      }
      local_3c = (float)((int)local_3c + -1);
    } while (local_2c <= (int)local_3c);
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = 1;
  }
  if (param_4 != (float *)0x0) {
    param_4[1] = 1.0;
    param_4[2] = 0.0;
    *param_4 = 0.0;
  }
  _DAT_014b8a04 = _DAT_02dd1188;
  _DAT_014b8a08 = _DAT_02dd118c;
  _DAT_014b8a00 = _DAT_02dd1184;
  _DAT_014b89f8 = _DAT_02dd1188;
  _DAT_014b89fc = _DAT_02dd118c;
  _DAT_014b89f4 = _DAT_02dd1184;
  _DAT_014b89ec = _DAT_02dd1188;
  _DAT_014b89f0 = _DAT_02dd118c;
  _DAT_014b89e8 = _DAT_02dd1184;
  return local_5c;
}
