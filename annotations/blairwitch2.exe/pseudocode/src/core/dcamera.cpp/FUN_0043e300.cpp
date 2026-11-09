// Name: core_dcamera.cpp_FUN_0043e300
// Address: 0043e300
// Address Range: [[0043e300, 0043e44f]]
// Convention: unknown
// Signature: int core_dcamera_cpp_FUN_0043e300(CDemonCamera *param_1,CVector3i *param_2,CDemonLight *param_3,int *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_dcamera_cpp_FUN_0043e300(CDemonCamera *param_1,CVector3i *param_2,CDemonLight *param_3,int *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  
  if (param_4 == (int *)0x0) {
    iVar7 = 0xaaaa;
  }
  else {
    fVar4 = (float)*(int *)param_2 * _DAT_005f4dd4 - *(float *)&param_3->field_0x4;
    fVar5 = (float)*(int *)(param_2 + 4) * _DAT_005f4dd4 - *(float *)&param_3->field_0x8;
    fVar6 = (float)*(int *)(param_2 + 8) * _DAT_005f4dd4 - *(float *)&param_3->field_0xc;
    fVar8 = (float)(_DAT_01caf5b8 - ((int)(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) >> 1));
    lVar1 = (longlong)(int)ROUND(fVar4 * fVar8 * _DAT_005f4dd0) * (longlong)*param_4;
    lVar2 = (longlong)(int)ROUND(fVar5 * fVar8 * _DAT_005f4dd0) * (longlong)param_4[1];
    lVar3 = (longlong)(int)ROUND(fVar6 * fVar8 * _DAT_005f4dd0) * (longlong)param_4[2];
    iVar7 = ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
            ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
            ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    if (-1 < iVar7) {
      return 0;
    }
    iVar7 = -iVar7;
  }
  iVar7 = core_dcamera_cpp_CDemonCamera_sampleLightingAntialiased_FUN_0043dca0
                    (param_1,param_2,param_3,iVar7);
  return iVar7;
}
