// Name: core_health.cpp_FUN_004d1e10
// Address: 004d1e10
// Address Range: [[004d1e10, 004d1f04]]
// Convention: unknown
// Signature: void core_health_cpp_FUN_004d1e10(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_health_cpp_FUN_004d1e10(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  CKeyFramedModel *pCVar3;
  float fVar4;
  uint uStack_30;
  float fStack_2c;
  uint uStack_28;
  uint uStack_24;
  float fStack_20;
  uint uStack_1c;
  float fStack_18;
  
  uStack_30 = *(uint *)(param_1 + 0x20);
  fStack_2c = *(float *)(param_1 + 0x24) + 1.0;
  uStack_28 = *(uint *)(param_1 + 0x28);
  if (&uStack_24 != &uStack_30) {
    uStack_24 = uStack_30;
    fStack_20 = fStack_2c;
    uStack_1c = uStack_28;
  }
  core_fire_cpp_FUN_004a3af0(0x01C73654,&uStack_24,&DAT_02cfd900,1,0,3);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                     ((CKeyFramedModelInstance *)(param_1 + 0x158));
  fStack_18 = param_2 * _DAT_005c4a89;
  iVar1 = *(int *)&pCVar3->field_0x100;
  fVar4 = (float)core_actor_cpp_FUN_0040ce40(0x3f733333,0x3f866666);
  fVar2 = (float)(iVar1 + -1);
  fVar4 = fVar4 * fStack_18 + *(float *)(param_1 + 0x2dc);
  *(float *)(param_1 + 0x2dc) = fVar4;
  if (fVar4 < fVar2) {
    return;
  }
  *(float *)(param_1 + 0x2dc) = *(float *)(param_1 + 0x2dc) - fVar2;
  return;
}
