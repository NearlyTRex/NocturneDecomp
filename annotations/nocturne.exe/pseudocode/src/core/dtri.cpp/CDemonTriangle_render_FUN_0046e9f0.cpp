// Name: core_dtri.cpp_CDemonTriangle_render_FUN_0046e9f0
// Address: 0046e9f0
// Address Range: [[0046e9f0, 0046eb3b]]
// Convention: unknown
// Signature: void core_dtri_cpp_CDemonTriangle_render_FUN_0046e9f0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtri_cpp_CDemonTriangle_render_FUN_0046e9f0(float *param_1)

{
  double dVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  uint uStack_84;
  CVector3i local_30;
  CVector3i local_24;
  CVector3i local_18;
  
  local_30.x = (int)ROUND(*param_1 * _DAT_0059c8e0);
  local_30.y = (int)ROUND(param_1[1] * _DAT_0059c8e0);
  local_30.z = (int)ROUND(param_1[2] * _DAT_0059c8e0);
  uStack_84 = 0x46ea35;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            ((SProjectedVertex *)*0x01B4D738,&local_30);
  local_18.x = (int)ROUND(param_1[3] * _DAT_0059c8e0);
  local_18.y = (int)ROUND(param_1[4] * _DAT_0059c8e0);
  local_18.z = (int)ROUND(param_1[5] * _DAT_0059c8e0);
  uStack_84 = 0x46ea77;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            ((SProjectedVertex *)(*0x01B4D738 + 0x30),&local_18);
  local_24.x = (int)ROUND(param_1[6] * _DAT_0059c8e0);
  local_24.y = (int)ROUND(param_1[7] * _DAT_0059c8e0);
  local_24.z = (int)ROUND(param_1[8] * _DAT_0059c8e0);
  uStack_84 = 0x46eab9;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            ((SProjectedVertex *)(*0x01B4D738 + 0x60),&local_24);
  dVar1 = _DAT_0057e4ae;
  round((double)param_1[9] * _DAT_0057e4ae);
  round((double)param_1[10] * dVar1);
  puVar4 = &uStack_84;
  uStack_84 = 0x46eaef;
  round(dVar1 * (double)param_1[0xb]);
  uVar2 = 0x46eb29;
  piVar3 = 0x01B4D738;
  round
            ((double)(param_1[0xc] * (float)65536 * (float)256));
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0(uVar2,piVar3,puVar4);
  return;
}
