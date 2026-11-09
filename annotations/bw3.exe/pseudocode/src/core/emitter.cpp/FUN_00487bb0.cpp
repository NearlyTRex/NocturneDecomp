// Name: core_emitter.cpp_FUN_00487bb0
// Address: 00487bb0
// Address Range: [[00487bb0, 00487c73]]
// Convention: unknown
// Signature: void core_emitter_cpp_FUN_00487bb0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_emitter_cpp_FUN_00487bb0(CDemonActor *param_1)

{
  int iVar1;
  uint uVar2;
  
  core_actor_cpp_FUN_00408890(param_1);
  iVar1 = *(int *)(param_1 + 1);
  *(uint *)&param_1[3].field_0x64 = *(uint *)&param_1[1].field_0xdc;
  if (iVar1 == 4) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
              ((CKeyFramedModelInstance *)&param_1[1].field_0xf0);
  }
  if (*(int *)(param_1 + 1) == 0xb) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
              ((CKeyFramedModelInstance *)&param_1[1].field_0xf0);
  }
  if (*(int *)(param_1 + 1) == 0xc) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
              ((CKeyFramedModelInstance *)&param_1[1].field_0xf0);
  }
  if (*(int *)(param_1 + 1) == 0xd) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
              ((CKeyFramedModelInstance *)&param_1[1].field_0xf0);
  }
  if (*(int *)&param_1[2].field_0x140 == 0) {
    *(uint *)&param_1[2].field_0x140 = *(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  }
  *(uint *)&param_1[3].field_0x54 = 0;
  uVar2 = *(uint *)&param_1[1].field_0x10;
  *(uint *)&param_1[3].field_0xa8 = 0;
  *(uint *)&param_1[3].field_0xac = uVar2;
  return;
}
