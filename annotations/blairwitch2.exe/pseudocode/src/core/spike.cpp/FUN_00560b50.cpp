// Name: core_spike.cpp_FUN_00560b50
// Address: 00560b50
// Address Range: [[00560b50, 00560c9f]]
// Convention: unknown
// Signature: void core_spike_cpp_FUN_00560b50(CDemonActor *param_1)

#include "nocturne.h"

void core_spike_cpp_FUN_00560b50(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60(param_1 + 1,">modelName" + 1);
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x17c,"spikeType");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x180,"spikeState");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x184,"areWeActive");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x194,"extendDistance");
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x198,"startEvent");
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x1fc,"stopEvent");
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x260,"extendEvent");
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[2].field_0x10,"retractEvent");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[2].field_0x74,"extendTime");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[2].field_0x78,"retractTime");
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[2].field_0x80,"extendSound");
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[2].field_0xe4,"retractSound");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[2].field_0x148,"period");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[2].field_0x14c,"damageStrength");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[2].field_0x150,"param");
  return;
}
