// Name: core_werewolf.cpp_CWerewolf_archive_FUN_005f1980
// Address: 005f1980
// Address Range: [[005f1980, 005f1abb]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_archive_FUN_005f1980(CWerewolf *this_ptr)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_CWerewolf_archive_FUN_005f1980(CWerewolf *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_004a9660(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b770(&(this_ptr->base).speed,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b970
            (&(this_ptr->base).base.model,"modelName");
  if (g_CWerewolfClassVersion < 3) {
    core_actor_cpp_archiveFloat_FUN_0040b770
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040b9f0
            (&(this_ptr->base).base.model.motion_controller,"motion state");
  if (1 < g_CWerewolfClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->light_up_eyes,"lightUpEyes");
  }
  if (3 < g_CWerewolfClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b870
              ((CDemonActor *)(this_ptr->unk4 + 0x10),"chainAnchor");
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->chain_length,"chainLength");
  }
  if (4 < g_CWerewolfClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->type,"type");
  }
  if (g_CWerewolfClassVersion < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->phase,"phase");
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->phase_timer,"phaseTimer");
  core_actor_cpp_archiveActor_FUN_0040b870((CDemonActor *)this_ptr->unk5,"alpha1");
  core_actor_cpp_archiveActor_FUN_0040b870((CDemonActor *)(this_ptr->unk5 + 4),"alpha2");
  return;
}
