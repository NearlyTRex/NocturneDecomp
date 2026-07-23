// Name: core_dcamera.cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_00442c50
// Address: 00442c50
// Address Range: [[00442c50, 00442d8d]]
// Convention: unknown
// Signature: undefined4 core_dcamera_cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_00442c50(undefined4 param_1,int *param_2,int param_3,int *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_dcamera_cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_00442c50(uint param_1,int *param_2,int param_3,int *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  
  if (param_4 == (int *)0x0) {
    iVar7 = 0xaaaa;
  }
  else {
    fVar4 = (float)*param_2 * _DAT_0059bde4 - *(float *)(param_3 + 0x104);
    fVar5 = (float)param_2[1] * _DAT_0059bde4 - *(float *)(param_3 + 0x108);
    fVar6 = (float)param_2[2] * _DAT_0059bde4 - *(float *)(param_3 + 0x10c);
    fVar9 = (float)(_DAT_01c70710 - ((int)(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) >> 1));
    lVar1 = (longlong)(int)ROUND(fVar4 * fVar9 * 65536.0f) * (longlong)*param_4;
    lVar2 = (longlong)(int)ROUND(fVar5 * fVar9 * 65536.0f) * (longlong)param_4[1];
    lVar3 = (longlong)(int)ROUND(fVar6 * fVar9 * 65536.0f) * (longlong)param_4[2];
    iVar7 = ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
            ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
            ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    if (-1 < iVar7) {
      return 0;
    }
    iVar7 = -iVar7;
  }
  uVar8 = core_dcamera_cpp_CDemonCamera_sampleLightingAntialiased_FUN_004425f0
                    (param_1,param_2,param_3,iVar7);
  return uVar8;
}
