// Name: core_batman.cpp_CBatman_archive_FUN_00413e60
// Address: 00413e60
// Address Range: [[00413e60, 00413f1a]]
// Convention: __cdecl
// Signature: void __cdecl core_batman_cpp_CBatman_archive_FUN_00413e60(CBatman *this_ptr)

#include "nocturne.h"

void __cdecl core_batman_cpp_CBatman_archive_FUN_00413e60(CBatman *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&(this_ptr->base).speed,"?speed" + 1);
  pCVar1 = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0(pCVar1,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040bb60(pCVar1,"motion state");
  if (g_CBatmanClassVersion < 2) {
    if (g_CBatmanClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveString_FUN_0040b730(this_ptr->fall_event,"fallEvent");
    if (g_CBatmanClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->mist_state,"mistState");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->vanish_timer,"vanishTimer");
  core_actor_cpp_archiveVector_FUN_0040b4b0(&this_ptr->new_pos,"newPos");
  return;
}
