// Name: core_ammobox.cpp_FUN_0040e670
// Address: 0040e670
// Address Range: [[0040e670, 0040e69f]]
// Convention: unknown
// Signature: void core_ammobox_cpp_FUN_0040e670(CDemonActor *param_1)

#include "nocturne.h"

void core_ammobox_cpp_FUN_0040e670(CDemonActor *param_1)

{
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
            ((CKeyFramedModelInstance *)(param_1 + 1));
  core_actor_cpp_FUN_00408890(param_1);
  *(uint *)&param_1[2].field_0x98 = 0;
  return;
}
