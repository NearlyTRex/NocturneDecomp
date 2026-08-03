// Name: core_vessel.cpp_CCryptVessel_archive_FUN_00550540
// Address: 00550540
// Address Range: [[00550540, 0055064c]]
// Convention: __cdecl
// Signature: void __cdecl core_vessel_cpp_CCryptVessel_archive_FUN_00550540(CCryptVessel *this_ptr)

#include "nocturne.h"

void __cdecl core_vessel_cpp_CCryptVessel_archive_FUN_00550540(CCryptVessel *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(&this_ptr->model,"modelName");
  core_actor_cpp_archiveActor_FUN_0040c980((CDemonActor **)&this_ptr->prey,"prey");
  core_actor_cpp_archiveActor_FUN_0040c980((CDemonActor **)&this_ptr->neutral,"neutral");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->destroyed_event,"destroyedEvent");
  core_actor_cpp_archiveActor_FUN_0040c980((CDemonActor **)&this_ptr->start_loc,"startLoc")
  ;
  core_actor_cpp_archiveActor_FUN_0040c980((CDemonActor **)&this_ptr->end_loc,"endLoc");
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->state,"state");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->timer,"timer");
  if (1 < g_INT_005c11c4) {
    core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->win_event,"winEvent");
  }
  if (2 < g_INT_005c11c4) {
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->eat_distance,"eatDistance");
  }
  if (g_INT_005c11c4 < 4) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->visual_type,"visualType");
  return;
}
