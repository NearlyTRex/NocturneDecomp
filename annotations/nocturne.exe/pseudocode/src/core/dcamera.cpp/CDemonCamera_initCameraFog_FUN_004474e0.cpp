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
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  DAT_005ad450 = *param_2;
  DAT_005ad454 = param_2[1];
  DAT_005ad458 = param_2[2];
  engine_special_cpp_setFogColor_FUN_00532af0
            (*(uint *)(&DAT_00b0e1fc + *param_2 * 4) & 0xff,
             *(uint *)(&DAT_00b0e1fc + param_2[1] * 4) & 0xff,
             *(uint *)(&DAT_00b0e1fc + DAT_005ad458 * 4) & 0xff);
  dVar4 = (double)(float)param_2[4] * 65536;
  dVar5 = (double)(float)param_2[5] * 65536;
  fVar1 = (float)param_2[6];
  fVar2 = (float)256;
  dVar7 = (double)(float)param_2[7] * 65536;
  dVar3 = round((double)(float)param_2[3] * 65536);
  dVar4 = round(dVar4);
  dVar5 = round(dVar5);
  dVar6 = round((double)(fVar1 * fVar2));
  dVar7 = round(dVar7);
  _DAT_0140e790 = (int)ROUND(dVar3);
  _DAT_0140e794 = (int)ROUND(dVar4);
  _DAT_0140e798 = (int)ROUND(dVar5);
  _DAT_0140e79c = (int)ROUND(dVar6);
  _DAT_0140e7a0 = (int)ROUND(dVar7);
  return;
}
