// Name: core_trash.cpp_FUN_00576980
// Address: 00576980
// Address Range: [[00576980, 00576a3e]]
// Convention: unknown
// Signature: void core_trash_cpp_FUN_00576980(CDemonActor *param_1)

#include "nocturne.h"

void core_trash_cpp_FUN_00576980(CDemonActor *param_1)

{
  uint uVar1;
  
  core_actor_cpp_FUN_00408a80(param_1);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)(param_1 + 1));
  *(uint *)&param_1[1].field_0x1b0 = 0;
  *(uint *)&param_1[1].field_0x1ac = *(uint *)&param_1[1].field_0x1b0;
  *(uint *)&param_1[1].field_0x1a8 = *(uint *)&param_1[1].field_0x1ac;
  *(uint *)&param_1[1].field_0x198 = 0;
  *(uint *)&param_1[1].field_0x194 = *(uint *)&param_1[1].field_0x198;
  *(uint *)&param_1[1].field_0x190 = *(uint *)&param_1[1].field_0x194;
  *(uint *)&param_1[1].field_0x188 = 0x3f000000;
  *(uint *)&param_1[1].field_0x18c = 0x40000000;
  *(uint *)&param_1[1].field_0x1b4 = 0x3f800000;
  *(uint *)&param_1[1].field_0x1b8 = 0x3f800000;
  uVar1 = core_actor_cpp_FUN_0040cf60(0x40c00000,0x41a00000);
  *(uint *)&param_1[1].field_0x1bc = uVar1;
  *(uint *)&param_1[1].field_0x1c8 = 0;
  *(uint *)&param_1[1].field_0x1c4 = *(uint *)&param_1[1].field_0x1c8;
  *(uint *)&param_1[1].field_0x1c0 = *(uint *)&param_1[1].field_0x1c4;
  *(uint *)&param_1[1].field_0x1cc = 0x41000000;
  return;
}
