// Name: core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_00468580
// Address: 00468580
// Address Range: [[00468580, 004687d3]]
// Convention: unknown
// Signature: float core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_00468580(int param_1,float *param_2,undefined4 *param_3,float *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_00468580(int param_1,float *param_2,uint *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
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
  uint local_34;
  uint local_30;
  int local_2c;
  float local_28;
  int local_24;
  float *local_18;
  
  local_5c = *param_2;
  local_18 = param_2 + 1;
  local_54 = param_2[2];
  local_50 = *param_2;
  local_58 = *local_18 + _DAT_0057e1e2;
  fVar3 = param_2[2];
  local_4c = *local_18 + _DAT_0057e1e6;
  fVar1 = *(float *)(param_1 + 0x2c);
  fVar6 = (float10)local_4c;
  fVar2 = *(float *)(param_1 + 0x14);
  fVar8 = local_50 - local_5c;
  uStack_64 = 0x46862a;
  local_48 = fVar3;
  fVar7 = (float10)round();
  local_24 = (int)ROUND(fVar7);
  fVar3 = fVar3 - local_58;
  fVar4 = local_50 - local_5c;
  fStack_68 = 6.476652e-39;
  fVar7 = (float10)round();
  local_2c = (int)ROUND(fVar7);
  uStack_6c = 0x468658;
  local_40 = fVar8;
  local_3c = fVar4;
  fVar7 = (float10)round();
  fVar8 = 6.476688e-39;
  fVar6 = (float10)round
                             ((fVar6 - (float10)fVar2) * ((float10)1 / (float10)fVar1));
  local_3c = (float)(int)ROUND(fVar7);
  local_2c = (int)ROUND(fVar6);
  local_40 = fVar3;
  if (local_2c <= (int)local_3c) {
    do {
      iVar5 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004678d0
                        (param_1,local_30,local_3c,local_34,fVar8);
      if (iVar5 != 0) {
        fVar8 = (float)core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_0044b290
                                 (iVar5,&uStack_6c,&local_48,&local_54,param_3);
        local_28 = fVar8;
        if (fVar8 <= 1.0) {
          if ((param_4 != (float *)0x0) && (param_4 != &local_54)) {
            *param_4 = local_54;
            param_4[1] = local_50;
            param_4[2] = local_4c;
          }
          return fVar8 * local_44 + fStack_68;
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
