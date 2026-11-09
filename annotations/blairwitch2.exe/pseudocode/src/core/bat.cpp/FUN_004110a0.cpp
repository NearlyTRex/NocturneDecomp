// Name: core_bat.cpp_FUN_004110a0
// Address: 004110a0
// Address Range: [[004110a0, 0041110f]]
// Convention: unknown
// Signature: void core_bat_cpp_FUN_004110a0(CDemonActor *param_1)

#include "nocturne.h"

void core_bat_cpp_FUN_004110a0(CDemonActor *param_1)

{
  uint uVar1;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)&param_1[1].field_0x30);
  core_course_cpp_CCourse_load_FUN_00438af0((CCourse *)&param_1[1].field_0x20,(char *)(param_1 + 1))
  ;
  core_actor_cpp_FUN_00408a80(param_1);
  core_bat_cpp_FUN_004114e0(param_1);
  *(uint *)&param_1[1].field_0x228 = 0;
  uVar1 = core_actor_cpp_FUN_0040cf60
                    (*(uint *)&param_1[1].field_0x220,*(uint *)&param_1[1].field_0x224);
  *(uint *)&param_1[1].field_0x22c = uVar1;
  return;
}
