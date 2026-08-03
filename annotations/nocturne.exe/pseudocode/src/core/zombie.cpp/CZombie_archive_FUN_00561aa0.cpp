// Name: core_zombie.cpp_CZombie_archive_FUN_00561aa0
// Address: 00561aa0
// Address Range: [[00561aa0, 00561be8]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_CZombie_archive_FUN_00561aa0(CZombie *this_ptr)

#include "nocturne.h"

void __cdecl core_zombie_cpp_CZombie_archive_FUN_00561aa0(CZombie *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040c880(&(this_ptr->base).speed,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80
            (&(this_ptr->base).base.model,"modelName");
  if (1 < INT_005c166c) {
    if (INT_005c166c < 0xb) {
      core_actor_cpp_archiveFloat_FUN_0040c880
                (&(this_ptr->base).guard_distance,"guardDistance");
    }
    core_actor_cpp_archiveMotionState_FUN_0040cb00
              (&(this_ptr->base).base.model.motion_controller,"motion state");
  }
  if (2 < INT_005c166c) {
    core_actor_cpp_archivePartStatus_FUN_0040cbf0
              (&(this_ptr->base).base.model,"partStatus");
    if (INT_005c166c < 7) {
      core_actor_cpp_archiveActor_FUN_0040c980
                (&(this_ptr->base).base.carry_hands[1].carry_actor,"carriedActor");
    }
  }
  if (3 < INT_005c166c) {
    core_actor_cpp_archiveString_FUN_0040c6d0
              (this_ptr->rise_from_grave_condition,"riseFromGraveCondition");
  }
  if (4 < INT_005c166c) {
    core_actor_cpp_archiveActor_FUN_0040c980(&this_ptr->grave_actor,"graveActor");
  }
  if ((5 < INT_005c166c) && (INT_005c166c < 9)) {
    core_actor_cpp_archiveClothList_FUN_0040cf70
              (&(this_ptr->base).base.cloth_list,"clothList");
  }
  if (7 < INT_005c166c) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->is_miner_zombie,"isMinerZombie");
  }
  if (INT_005c166c < 10) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900
            (&this_ptr->always_chase_fast,"alwaysChaseFast");
  return;
}
