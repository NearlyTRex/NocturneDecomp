// Name: core_ghoul.cpp_CGhoul_archive_FUN_004e0130
// Address: 004e0130
// Address Range: [[004e0130, 004e0234]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_archive_FUN_004e0130(CGhoul *this_ptr)

#include "nocturne.h"

void __cdecl core_ghoul_cpp_CGhoul_archive_FUN_004e0130(CGhoul *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(&this_ptr->base);
  if (g_CGhoulClassVersion < 4) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&(this_ptr->base).speed,"?speed" + 1);
  }
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0
            (&(this_ptr->base).base.model,"modelName");
  if ((1 < g_CGhoulClassVersion) && (g_CGhoulClassVersion < 7)) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  if (2 < g_CGhoulClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->lives_left,"livesLeft");
  }
  if (4 < g_CGhoulClassVersion) {
    core_actor_cpp_archiveMotionState_FUN_0040b870
              (&(this_ptr->base).base.model.base,"motion state");
  }
  if (g_CGhoulClassVersion < 6) {
    return;
  }
  core_actor_cpp_archivePartStatus_FUN_0040b960(&(this_ptr->base).base.model,"partStatus");
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->spasm_count,"spasmCount");
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->lives_left,"livesLeft");
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->arise_timer,"ariseTimer");
  return;
}
