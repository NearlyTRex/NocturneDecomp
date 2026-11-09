// Name: core_filmreel.cpp_FUN_00492cd0
// Address: 00492cd0
// Address Range: [[00492cd0, 00492d0c]]
// Convention: unknown
// Signature: void core_filmreel_cpp_FUN_00492cd0(CActorDestination *param_1)

#include "nocturne.h"

void core_filmreel_cpp_FUN_00492cd0(CActorDestination *param_1)

{
  core_dest_cpp_CActorDestination_setup_FUN_00447100(param_1);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)(param_1 + 1));
  *(uint *)&param_1->field_0xf8 = 1;
  *(uint *)&param_1[1].field_0x1e4 = 0;
  *(uint *)&param_1[1].field_0x1e8 = 0;
  return;
}
