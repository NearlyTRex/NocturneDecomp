// Name: core_spike.cpp_CSpike_load_FUN_005b87f0
// Address: 005b87f0
// Address Range: [[005b87f0, 005b893f]]
// Convention: unknown
// Signature: undefined core_spike.cpp_CSpike_load_FUN_005b87f0()

#include "nocturne.h"

/* Signature: byte actors_other_spike.cpp_CSpike_load(CSpike* param_1) */

void core_spike_cpp_CSpike_load_FUN_005b87f0(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),"modelName");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[2].location.position.y,"spikeType");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[2].location.position.z,"spikeState");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            (&in_stack_00000004[2].location.area_id,"areWeActive");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)&in_stack_00000004[2].orient_matrix,"extendDistance");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[2].orient_matrix.m[0].y,"startEvent");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[2].create_event + 0x2c),"stopEvent");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[2].scale,"extendEvent");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[3].actor_name + 0x14),"retractEvent");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)in_stack_00000004[3].create_event,"extendTime");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)(in_stack_00000004[3].create_event + 4),"retractTime");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[3].create_event + 0xc),"extendSound");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[3].unk3.z,"retractSound");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)&in_stack_00000004[3].next_actor,"period");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)&in_stack_00000004[3].unk15,"damageStrength");
  core_actor_cpp_serializeFloat_FUN_0040b770((float *)&in_stack_00000004[3].vtable,"param")
  ;
  return;
}
