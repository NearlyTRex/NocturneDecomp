// Name: core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_004474e0
// Address: 004474e0
// Address Range: [[004474e0, 0044759e]]
// Convention: unknown
// Signature: void core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004474e0(undefined4 param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004474e0(uint param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  DAT_005ad450 = *param_2;
  DAT_005ad454 = param_2[1];
  DAT_005ad458 = param_2[2];
  engine_special_cpp_setFogColor_FUN_00532af0
            (*(uint *)(&DAT_00b0e1fc + *param_2 * 4) & 0xff,
             *(uint *)(&DAT_00b0e1fc + param_2[1] * 4) & 0xff,
             *(uint *)(&DAT_00b0e1fc + DAT_005ad458 * 4) & 0xff);
  fVar4 = (float10)65536;
  fVar1 = (float)param_2[5];
  fVar2 = (float)param_2[6];
  fVar8 = (float10)256;
  fVar3 = (float)param_2[7];
  fVar5 = (float10)round();
  fVar6 = (float10)round();
  fVar7 = (float10)round((float10)fVar1 * fVar4);
  fVar8 = (float10)round((float10)fVar2 * fVar8);
  fVar4 = (float10)round((float10)fVar3 * fVar4);
  _DAT_0140e790 = (int)ROUND(fVar5);
  _DAT_0140e794 = (int)ROUND(fVar6);
  _DAT_0140e798 = (int)ROUND(fVar7);
  _DAT_0140e79c = (int)ROUND(fVar8);
  _DAT_0140e7a0 = (int)ROUND(fVar4);
  return;
}
