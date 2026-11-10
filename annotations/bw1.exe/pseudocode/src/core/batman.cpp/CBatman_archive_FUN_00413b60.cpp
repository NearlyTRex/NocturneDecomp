// Name: core_batman.cpp_CBatman_archive_FUN_00413b60
// Address: 00413b60
// Address Range: [[00413b60, 00413c1a]]
// Convention: __cdecl
// Signature: void __cdecl core_batman_cpp_CBatman_archive_FUN_00413b60(CBatman *this_ptr)

#include "nocturne.h"

void __cdecl core_batman_cpp_CBatman_archive_FUN_00413b60(CBatman *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&(this_ptr->base).speed,"?speed" + 1);
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0(model_ptr,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040b870(&model_ptr->base,"motion state");
  if (g_CBatmanClassVersion < 2) {
    if (g_CBatmanClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveString_FUN_0040b440(this_ptr->fall_event,"fallEvent");
    if (g_CBatmanClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->mist_state,"mistState");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->vanish_timer,"vanishTimer");
  core_actor_cpp_archiveVector_FUN_0040b1c0(&this_ptr->new_pos,"newPos");
  return;
}
