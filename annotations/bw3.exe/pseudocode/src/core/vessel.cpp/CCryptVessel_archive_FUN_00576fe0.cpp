// Name: core_vessel.cpp_CCryptVessel_archive_FUN_00576fe0
// Address: 00576fe0
// Address Range: [[00576fe0, 005770ec]]
// Convention: __cdecl
// Signature: void __cdecl core_vessel_cpp_CCryptVessel_archive_FUN_00576fe0(CCryptVessel *this_ptr)

#include "nocturne.h"

void __cdecl core_vessel_cpp_CCryptVessel_archive_FUN_00576fe0(CCryptVessel *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0(&this_ptr->model,"modelName");
  core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->prey,&DAT_005d70f3);
  core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->neutral,"neutral");
  core_actor_cpp_archiveString_FUN_0040b680(this_ptr->destroyed_event,"destroyedEvent");
  core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->start_loc,"startLoc");
  core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->end_loc,"endLoc");
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->state,"state");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->timer,"timer");
  if (1 < g_CCryptVesselClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680(this_ptr->win_event,"winEvent");
  }
  if (2 < g_CCryptVesselClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->eat_distance,"eatDistance");
  }
  if (g_CCryptVesselClassVersion < 4) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->visual_type,"visualType");
  return;
}
