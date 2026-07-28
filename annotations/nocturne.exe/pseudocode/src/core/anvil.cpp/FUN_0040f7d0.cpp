// Name: core_anvil.cpp_FUN_0040f7d0
// Address: 0040f7d0
// Address Range: [[0040f7d0, 0040f843]]
// Convention: unknown
// Signature: void core_anvil_cpp_FUN_0040f7d0(CDemonActor *param_1)

#include "nocturne.h"

void core_anvil_cpp_FUN_0040f7d0(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00
            ((CKeyFramedModelInstance *)(param_1 + 1),"modelName");
  core_actor_cpp_archiveString_FUN_0040c6d0
            ((char *)&param_1[2].location.area_id,"dropCondition");
  core_actor_cpp_archiveFloat_FUN_0040c880
            ((float *)(param_1[2].create_event + 0x18),"dropHeight");
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)(param_1[2].create_event + 0x1c),"triggered");
  core_actor_cpp_archiveFloat_FUN_0040c880
            ((float *)(param_1[2].create_event + 0x20),"yvel");
  return;
}
