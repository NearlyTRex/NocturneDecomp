// Name: core_ghoul.cpp_CGhoul_archive_FUN_004aae30
// Address: 004aae30
// Address Range: [[004aae30, 004aaf34]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_archive_FUN_004aae30(CGhoul *this_ptr)

#include "nocturne.h"

void __cdecl core_ghoul_cpp_CGhoul_archive_FUN_004aae30(CGhoul *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(&this_ptr->base);
  if (INT_005b9650 < 4) {
    core_actor_cpp_archiveFloat_FUN_0040c880(&(this_ptr->base).speed,"speed");
  }
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80
            (&(this_ptr->base).base.model,"modelName");
  if ((1 < INT_005b9650) && (INT_005b9650 < 7)) {
    core_actor_cpp_archiveFloat_FUN_0040c880
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  if (2 < INT_005b9650) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->lives_left,"livesLeft");
  }
  if (4 < INT_005b9650) {
    core_actor_cpp_archiveMotionState_FUN_0040cb00
              (&(this_ptr->base).base.model.motion_controller,"motion state");
  }
  if (INT_005b9650 < 6) {
    return;
  }
  core_actor_cpp_archivePartStatus_FUN_0040cbf0(&(this_ptr->base).base.model,"partStatus");
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->spasm_count,"spasmCount");
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->lives_left,"livesLeft");
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->arise_timer,"ariseTimer");
  return;
}
