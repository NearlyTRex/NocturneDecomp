// Name: core_hostage.cpp_CDemnfolk_archive_FUN_004583c0
// Address: 004583c0
// Address Range: [[004583c0, 00458525]]
// Convention: __cdecl
// Signature: void __cdecl core_hostage_cpp_CDemnfolk_archive_FUN_004583c0(CDemnfolk *this_ptr)

#include "nocturne.h"

void __cdecl core_hostage_cpp_CDemnfolk_archive_FUN_004583c0(CDemnfolk *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_00489120(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b830(&(this_ptr->base).speed,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30
            (&(this_ptr->base).base.model,"modelName");
  if (1 < g_CDemnfolkClassVersion) {
    if (g_CDemnfolkClassVersion < 0xb) {
      core_actor_cpp_archiveFloat_FUN_0040b830
                (&(this_ptr->base).guard_distance,"guardDistance");
    }
    core_actor_cpp_archiveMotionState_FUN_0040bab0
              (&(this_ptr->base).base.model.base,"motion state");
  }
  if (2 < g_CDemnfolkClassVersion) {
    core_actor_cpp_archivePartStatus_FUN_0040bba0
              (&(this_ptr->base).base.model,"partStatus");
    if (g_CDemnfolkClassVersion < 7) {
      core_actor_cpp_archiveActor_FUN_0040b930
                (&(this_ptr->base).base.carry_hands[1].carry_actor,"carriedActor");
    }
  }
  if (3 < g_CDemnfolkClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680
              (this_ptr->rise_from_grave_condition,"riseFromGraveCondition");
  }
  if (4 < g_CDemnfolkClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->grave_actor,"graveActor");
  }
  if ((5 < g_CDemnfolkClassVersion) && (g_CDemnfolkClassVersion < 9)) {
    core_actor_cpp_archiveClothList_FUN_0040bf20
              (&(this_ptr->base).base.cloth_list,"clothList");
  }
  if (7 < g_CDemnfolkClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->is_miner_zombie,"isMinerZombie");
  }
  if (9 < g_CDemnfolkClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              (&this_ptr->always_chase_fast,"alwaysChaseFast");
  }
  if (g_CDemnfolkClassVersion < 0xc) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->is_indoor_demon,"isIndoorDemon");
  return;
}
