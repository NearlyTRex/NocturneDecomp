// Name: core_emitter.cpp_FUN_0049f010
// Address: 0049f010
// Address Range: [[0049f010, 0049f0d3]]
// Convention: unknown
// Signature: void core_emitter_cpp_FUN_0049f010(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_emitter_cpp_FUN_0049f010(CDemonActor *param_1)

{
  int iVar1;
  uint uVar2;
  
  core_actor_cpp_FUN_00408850(param_1);
  iVar1 = *(int *)(param_1 + 1);
  *(uint *)&param_1[3].field_0x64 = *(uint *)&param_1[1].field_0xdc;
  if (iVar1 == 4) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
              ((CKeyFramedModelInstance *)&param_1[1].field_0xf0);
  }
  if (*(int *)(param_1 + 1) == 0xb) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
              ((CKeyFramedModelInstance *)&param_1[1].field_0xf0);
  }
  if (*(int *)(param_1 + 1) == 0xc) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
              ((CKeyFramedModelInstance *)&param_1[1].field_0xf0);
  }
  if (*(int *)(param_1 + 1) == 0xd) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
              ((CKeyFramedModelInstance *)&param_1[1].field_0xf0);
  }
  if (*(int *)&param_1[2].field_0x140 == 0) {
    *(uint *)&param_1[2].field_0x140 = *(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  }
  *(uint *)&param_1[3].field_0x54 = 0;
  uVar2 = *(uint *)&param_1[1].field_0x10;
  *(uint *)&param_1[3].field_0xa8 = 0;
  *(uint *)&param_1[3].field_0xac = uVar2;
  return;
}
