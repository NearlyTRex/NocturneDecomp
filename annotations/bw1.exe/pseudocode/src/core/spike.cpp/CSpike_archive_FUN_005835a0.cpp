// Name: core_spike.cpp_CSpike_archive_FUN_005835a0
// Address: 005835a0
// Address Range: [[005835a0, 005836ef]]
// Convention: __cdecl
// Signature: void __cdecl core_spike_cpp_CSpike_archive_FUN_005835a0(CSpike *this_ptr)

#include "nocturne.h"

void __cdecl core_spike_cpp_CSpike_archive_FUN_005835a0(CSpike *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c040(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b770
            (&this_ptr->model,">modelName" + 1);
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->spike_type,"spikeType");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->spike_state,"spikeState");
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->are_we_active,"areWeActive");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->extend_distance,"extendDistance");
  core_actor_cpp_archiveString_FUN_0040b440(this_ptr->start_event,"startEvent");
  core_actor_cpp_archiveString_FUN_0040b440(this_ptr->stop_event,"stopEvent");
  core_actor_cpp_archiveString_FUN_0040b440(this_ptr->extend_event,"extendEvent");
  core_actor_cpp_archiveString_FUN_0040b440(this_ptr->retract_event,"retractEvent");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->extend_time,"extendTime");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->retract_time,"retractTime");
  core_actor_cpp_archiveString_FUN_0040b440(this_ptr->extend_sound,"extendSound");
  core_actor_cpp_archiveString_FUN_0040b440(this_ptr->retract_sound,"retractSound");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->period,"period");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->damage_strength,"damageStrength");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->param,"param");
  return;
}
