// Name: core_emitter.cpp_FUN_004869b0
// Address: 004869b0
// Address Range: [[004869b0, 00486a73]]
// Convention: unknown
// Signature: void core_emitter_cpp_FUN_004869b0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_emitter_cpp_FUN_004869b0(CDemonActor *param_1)

{
  int iVar1;
  uint uVar2;
  
  core_actor_cpp_FUN_00408a80(param_1);
  iVar1 = *(int *)(param_1 + 1);
  *(uint *)&param_1[2].field_0x60 = *(uint *)&param_1[1].field_0xdc;
  if (iVar1 == 4) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
              ((CKeyFramedModelInstance *)&param_1[1].field_0xf0);
  }
  if (*(int *)(param_1 + 1) == 0xb) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
              ((CKeyFramedModelInstance *)&param_1[1].field_0xf0);
  }
  if (*(int *)(param_1 + 1) == 0xc) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
              ((CKeyFramedModelInstance *)&param_1[1].field_0xf0);
  }
  if (*(int *)(param_1 + 1) == 0xd) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
              ((CKeyFramedModelInstance *)&param_1[1].field_0xf0);
  }
  if (*(int *)&param_1[1].field_0x298 == 0) {
    *(uint *)&param_1[1].field_0x298 = *(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  }
  *(uint *)&param_1[2].field_0x50 = 0;
  uVar2 = *(uint *)&param_1[1].field_0x10;
  *(uint *)&param_1[2].field_0xa4 = 0;
  *(uint *)&param_1[2].field_0xa8 = uVar2;
  return;
}
