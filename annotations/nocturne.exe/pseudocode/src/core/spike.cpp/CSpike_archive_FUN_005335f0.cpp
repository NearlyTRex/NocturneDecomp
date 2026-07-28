// Name: core_spike.cpp_CSpike_archive_FUN_005335f0
// Address: 005335f0
// Address Range: [[005335f0, 0053373f]]
// Convention: unknown
// Signature: void core_spike_cpp_CSpike_archive_FUN_005335f0(CDemonActor *param_1)

#include "nocturne.h"

void core_spike_cpp_CSpike_archive_FUN_005335f0(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00
            ((CKeyFramedModelInstance *)(param_1 + 1),"modelName");
  core_actor_cpp_archiveInteger_FUN_0040c900(&param_1[2].location.area_id,"spikeType");
  core_actor_cpp_archiveInteger_FUN_0040c900((int *)&param_1[2].orient,"spikeState");
  core_actor_cpp_archiveInteger_FUN_0040c900((int *)&param_1[2].orient.vec.y,"areWeActive")
  ;
  core_actor_cpp_archiveFloat_FUN_0040c880
            (&param_1[2].orient_matrix.m[0].z,"extendDistance");
  core_actor_cpp_archiveString_FUN_0040c6d0
            ((char *)(param_1[2].orient_matrix.m + 1),"startEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1[2].create_event + 0x34,"stopEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0((char *)&param_1[2].scale.z,"extendEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0
            ((char *)&param_1[3].location.position.y,"retractEvent");
  core_actor_cpp_archiveFloat_FUN_0040c880
            ((float *)(param_1[3].create_event + 0x10),"extendTime");
  core_actor_cpp_archiveFloat_FUN_0040c880
            ((float *)(param_1[3].create_event + 0x14),"retractTime");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1[3].create_event + 0x1c,"extendSound");
  core_actor_cpp_archiveString_FUN_0040c6d0
            ((char *)&param_1[3].is_renderable,"retractSound");
  core_actor_cpp_archiveFloat_FUN_0040c880((float *)(param_1[4].actor_name + 0xc),"period")
  ;
  core_actor_cpp_archiveFloat_FUN_0040c880
            ((float *)(param_1[4].actor_name + 0x10),"damageStrength");
  core_actor_cpp_archiveFloat_FUN_0040c880((float *)(param_1[4].actor_name + 0x14),"param")
  ;
  return;
}
