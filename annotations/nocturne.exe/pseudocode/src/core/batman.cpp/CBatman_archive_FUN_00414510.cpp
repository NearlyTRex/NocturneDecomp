// Name: core_batman.cpp_CBatman_archive_FUN_00414510
// Address: 00414510
// Address Range: [[00414510, 004145ca]]
// Convention: __cdecl
// Signature: void __cdecl core_batman_cpp_CBatman_archive_FUN_00414510(CBatman *this_ptr)

#include "nocturne.h"

void __cdecl core_batman_cpp_CBatman_archive_FUN_00414510(CBatman *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040c880(&(this_ptr->base).speed,"speed");
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(model_ptr,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040cb00
            (&model_ptr->motion_controller,"motion state");
  if (g_INT_005acfbc < 2) {
    if (g_INT_005acfbc < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->fall_event,"fallEvent");
    if (g_INT_005acfbc < 3) {
      return;
    }
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->mist_state,"mistState");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->vanish_timer,"vanishTimer");
  core_actor_cpp_archiveVector_FUN_0040c450(&this_ptr->new_pos,"newPos");
  return;
}
