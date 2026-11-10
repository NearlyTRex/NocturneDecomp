// Name: core_drip.cpp_CDrip_archive_FUN_004854e0
// Address: 004854e0
// Address Range: [[004854e0, 00485605]]
// Convention: __cdecl
// Signature: void __cdecl core_drip_cpp_CDrip_archive_FUN_004854e0(CDrip *this_ptr)

#include "nocturne.h"

void __cdecl core_drip_cpp_CDrip_archive_FUN_004854e0(CDrip *this_ptr)

{
  if (1 < g_CDripClassVersion) {
    core_actor_cpp_CDemonActor_archive_FUN_0040c040(&this_ptr->base);
  }
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b770(&this_ptr->model,"modelName");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->type,&DAT_005db599);
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->auto_drop,"autoDrop");
  core_actor_cpp_archiveVector_FUN_0040b1c0(&this_ptr->home_pos,"homePos");
  core_actor_cpp_archiveVector_FUN_0040b1c0(&this_ptr->vel,&DAT_005db5af);
  if (2 < g_CDripClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0
              (&this_ptr->min_auto_drip_time,"minAutoDripTime");
    core_actor_cpp_archiveFloat_FUN_0040b5f0
              (&this_ptr->max_auto_drip_time,"maxAutoDripTime");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->drip_radius,"dripRadius");
  }
  if (3 < g_CDripClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->damage,"damage");
  }
  if (4 < g_CDripClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b440(this_ptr->hit_sound,"hitSound");
  }
  if (g_CDripClassVersion < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->no_rock_flag,"noRockFlag");
  return;
}
