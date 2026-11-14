// Name: core_werewolf.cpp_CWerewolf_archive_FUN_0057f5b0
// Address: 0057f5b0
// Address Range: [[0057f5b0, 0057f6eb]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_archive_FUN_0057f5b0(CWerewolf *this_ptr)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_CWerewolf_archive_FUN_0057f5b0(CWerewolf *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_00489120(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b830(&(this_ptr->base).speed,"?speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30
            (&(this_ptr->base).base.model,"modelName");
  if (g_CWerewolfClassVersion < 3) {
    core_actor_cpp_archiveFloat_FUN_0040b830
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040bab0
            (&(this_ptr->base).base.model.base,"motion state");
  if (1 < g_CWerewolfClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->light_up_eyes,"lightUpEyes");
  }
  if (3 < g_CWerewolfClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->chain_anchor,"chainAnchor");
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->chain_length,"chainLength");
  }
  if (4 < g_CWerewolfClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->type,&DAT_005d7baa);
  }
  if (g_CWerewolfClassVersion < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->phase,"phase");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->phase_timer,"phaseTimer");
  core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->alpha1,"alpha1");
  core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->alpha2,"alpha2");
  return;
}
