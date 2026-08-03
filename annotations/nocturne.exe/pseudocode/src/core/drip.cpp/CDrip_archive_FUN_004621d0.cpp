// Name: core_drip.cpp_CDrip_archive_FUN_004621d0
// Address: 004621d0
// Address Range: [[004621d0, 004622f5]]
// Convention: __cdecl
// Signature: void __cdecl core_drip_cpp_CDrip_archive_FUN_004621d0(CDrip *this_ptr)

#include "nocturne.h"

void __cdecl core_drip_cpp_CDrip_archive_FUN_004621d0(CDrip *this_ptr)

{
  if (1 < g_INT_005b064c) {
    core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  }
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(&this_ptr->model,"modelName");
  core_actor_cpp_archiveInteger_FUN_0040c900((int *)&this_ptr->type,"type");
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->auto_drop,"autoDrop");
  core_actor_cpp_archiveVector_FUN_0040c450(&this_ptr->home_pos,"homePos");
  core_actor_cpp_archiveVector_FUN_0040c450(&this_ptr->vel,"vel");
  if (2 < g_INT_005b064c) {
    core_actor_cpp_archiveFloat_FUN_0040c880
              (&this_ptr->min_auto_drip_time,"minAutoDripTime");
    core_actor_cpp_archiveFloat_FUN_0040c880
              (&this_ptr->max_auto_drip_time,"maxAutoDripTime");
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->drip_radius,"dripRadius");
  }
  if (3 < g_INT_005b064c) {
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->damage,"damage");
  }
  if (4 < g_INT_005b064c) {
    core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->hit_sound,"hitSound");
  }
  if (g_INT_005b064c < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->no_rock_flag,"noRockFlag");
  return;
}
