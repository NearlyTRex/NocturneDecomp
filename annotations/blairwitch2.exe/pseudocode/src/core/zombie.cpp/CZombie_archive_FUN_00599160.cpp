// Name: core_zombie.cpp_CZombie_archive_FUN_00599160
// Address: 00599160
// Address Range: [[00599160, 005992a8]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_CZombie_archive_FUN_00599160(CZombie *this_ptr)

#include "nocturne.h"

void __cdecl core_zombie_cpp_CZombie_archive_FUN_00599160(CZombie *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&(this_ptr->base).speed,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&(this_ptr->base).base.model,"modelName");
  if (1 < g_CZombieClassVersion) {
    if (g_CZombieClassVersion < 0xb) {
      core_actor_cpp_archiveFloat_FUN_0040b8e0
                (&(this_ptr->base).guard_distance,"guardDistance");
    }
    core_actor_cpp_archiveMotionState_FUN_0040bb60
              (&(this_ptr->base).base.model,"motion state");
  }
  if (2 < g_CZombieClassVersion) {
    core_actor_cpp_archivePartStatus_FUN_0040bc50
              (&(this_ptr->base).base.model,"partStatus");
    if (g_CZombieClassVersion < 7) {
      core_actor_cpp_archiveActor_FUN_0040b9e0
                (&(this_ptr->base).base.carry_hands[1].carry_actor,"carriedActor");
    }
  }
  if (3 < g_CZombieClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730
              (this_ptr->rise_from_grave_condition,"riseFromGraveCondition");
  }
  if (4 < g_CZombieClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->grave_actor,"graveActor");
  }
  if ((5 < g_CZombieClassVersion) && (g_CZombieClassVersion < 9)) {
    core_actor_cpp_archiveClothList_FUN_0040bfd0
              (&(this_ptr->base).base.cloth_list,"clothList");
  }
  if (7 < g_CZombieClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->is_miner_zombie,"isMinerZombie");
  }
  if (g_CZombieClassVersion < 10) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960
            (&this_ptr->always_chase_fast,"alwaysChaseFast");
  return;
}
