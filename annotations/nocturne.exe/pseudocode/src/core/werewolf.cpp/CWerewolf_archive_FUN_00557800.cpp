// Name: core_werewolf.cpp_CWerewolf_archive_FUN_00557800
// Address: 00557800
// Address Range: [[00557800, 0055793b]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_archive_FUN_00557800(CWerewolf *this_ptr)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_CWerewolf_archive_FUN_00557800(CWerewolf *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040c880(&(this_ptr->base).speed,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80
            (&(this_ptr->base).base.model,"modelName");
  if (INT_005c1614 < 3) {
    core_actor_cpp_archiveFloat_FUN_0040c880
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040cb00
            (&(this_ptr->base).base.model.motion_controller,"motion state");
  if (1 < INT_005c1614) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->light_up_eyes,"lightUpEyes");
  }
  if (3 < INT_005c1614) {
    core_actor_cpp_archiveActor_FUN_0040c980(&this_ptr->chain_anchor,"chainAnchor");
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->chain_length,"chainLength");
  }
  if (4 < INT_005c1614) {
    core_actor_cpp_archiveInteger_FUN_0040c900((int *)&this_ptr->type,"type");
  }
  if (INT_005c1614 < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->phase,"phase");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->phase_timer,"phaseTimer");
  core_actor_cpp_archiveActor_FUN_0040c980(&this_ptr->alpha1,"alpha1");
  core_actor_cpp_archiveActor_FUN_0040c980(&this_ptr->alpha2,"alpha2");
  return;
}
