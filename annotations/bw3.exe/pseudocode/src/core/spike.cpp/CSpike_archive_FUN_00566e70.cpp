// Name: core_spike.cpp_CSpike_archive_FUN_00566e70
// Address: 00566e70
// Address Range: [[00566e70, 00566fbf]]
// Convention: __cdecl
// Signature: void __cdecl core_spike_cpp_CSpike_archive_FUN_00566e70(CSpike *this_ptr)

#include "nocturne.h"

void __cdecl core_spike_cpp_CSpike_archive_FUN_00566e70(CSpike *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280((CDemonActor *)this_ptr);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0
            (&this_ptr->field_0x158,">modelName" + 1);
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x2d4,"spikeType");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x2d8,"spikeState");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x2dc,"areWeActive");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x2ec,"extendDistance");
  core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x2f0,"startEvent");
  core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x354,"stopEvent");
  core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x3b8,"extendEvent");
  core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x41c,"retractEvent");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x480,"extendTime");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x484,"retractTime");
  core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x48c,"extendSound");
  core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x4f0,"retractSound");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x554,"period");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x558,"damageStrength");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x55c,"param");
  return;
}
