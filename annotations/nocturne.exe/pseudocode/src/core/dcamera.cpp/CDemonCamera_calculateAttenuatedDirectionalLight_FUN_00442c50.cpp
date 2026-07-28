// Name: core_dcamera.cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_00442c50
// Address: 00442c50
// Address Range: [[00442c50, 00442d8d]]
// Convention: unknown
// Signature: int core_dcamera_cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_00442c50(CDemonCamera *param_1,CVector3i *param_2,CDemonLight *param_3,int *param_4)

#include "nocturne.h"

int core_dcamera_cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_00442c50(CDemonCamera *param_1,CVector3i *param_2,CDemonLight *param_3,int *param_4)

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
    fVar4 = (float)param_2->x * 0.00390625f - *(float *)((param_3->base).camera_name + 0xc4);
    fVar5 = (float)param_2->y * 0.00390625f - *(float *)((param_3->base).camera_name + 200);
    fVar6 = (float)param_2->z * 0.00390625f - *(float *)((param_3->base).camera_name + 0xcc);
    fVar8 = (float)((int)CVector3f_01c70708.z -
                   ((int)(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) >> 1));
    lVar1 = (longlong)(int)ROUND(fVar4 * fVar8 * 65536.0f) * (longlong)*param_4;
    lVar2 = (longlong)(int)ROUND(fVar5 * fVar8 * 65536.0f) * (longlong)param_4[1];
    lVar3 = (longlong)(int)ROUND(fVar6 * fVar8 * 65536.0f) * (longlong)param_4[2];
    iVar7 = ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
            ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
            ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    if (-1 < iVar7) {
      return 0;
    }
    iVar7 = -iVar7;
  }
  iVar7 = core_dcamera_cpp_CDemonCamera_sampleLightingAntialiased_FUN_004425f0
                    (param_1,param_2,param_3,iVar7);
  return iVar7;
}
