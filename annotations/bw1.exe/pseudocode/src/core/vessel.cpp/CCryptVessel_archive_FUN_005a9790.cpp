// Name: core_vessel.cpp_CCryptVessel_archive_FUN_005a9790
// Address: 005a9790
// Address Range: [[005a9790, 005a989c]]
// Convention: __cdecl
// Signature: void __cdecl core_vessel_cpp_CCryptVessel_archive_FUN_005a9790(CCryptVessel *this_ptr)

#include "nocturne.h"

void __cdecl core_vessel_cpp_CCryptVessel_archive_FUN_005a9790(CCryptVessel *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c040(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b770(&this_ptr->model,"modelName");
  core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->prey,&DAT_005f918a);
  core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->neutral,"neutral");
  core_actor_cpp_archiveString_FUN_0040b440(this_ptr->destroyed_event,"destroyedEvent");
  core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->start_loc,"startLoc");
  core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->end_loc,"endLoc");
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->state,"state");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->timer,"timer");
  if (1 < g_CCryptVesselClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b440(this_ptr->win_event,"winEvent");
  }
  if (2 < g_CCryptVesselClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->eat_distance,"eatDistance");
  }
  if (g_CCryptVesselClassVersion < 4) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->visual_type,"visualType");
  return;
}
