// Name: core_zombie.cpp_CZombie_archive_FUN_0058c060
// Address: 0058c060
// Address Range: [[0058c060, 0058c1d9]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_CZombie_archive_FUN_0058c060(CZombie *this_ptr)

#include "nocturne.h"

void __cdecl core_zombie_cpp_CZombie_archive_FUN_0058c060(CZombie *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_00489120(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b830(&(this_ptr->base).field_0xcdcc,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30
            (&(this_ptr->base).base.model,"modelName");
  if (1 < g_CZombieClassVersion) {
    if (g_CZombieClassVersion < 0xb) {
      core_actor_cpp_archiveFloat_FUN_0040b830
                (&(this_ptr->base).guard_distance,"guardDistance");
    }
    core_actor_cpp_archiveMotionState_FUN_0040bab0
              (&(this_ptr->base).base.model.base,"motion state");
  }
  if (2 < g_CZombieClassVersion) {
    core_actor_cpp_archivePartStatus_FUN_0040bba0
              (&(this_ptr->base).base.model,"partStatus");
    if (g_CZombieClassVersion < 7) {
      core_actor_cpp_archiveActor_FUN_0040b930
                (&(this_ptr->base).base.field_0x2628,"carriedActor");
    }
  }
  if (3 < g_CZombieClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680
              (&this_ptr->field_0xd074,"riseFromGraveCondition");
  }
  if (4 < g_CZombieClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->field_0xd06c,"graveActor");
  }
  if ((5 < g_CZombieClassVersion) && (g_CZombieClassVersion < 9)) {
    core_actor_cpp_archiveClothList_FUN_0040bf20
              (&(this_ptr->base).base.cloth_list,"clothList");
  }
  if (7 < g_CZombieClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&this_ptr->field_0xd0d8,"isMinerZombie");
  }
  if (9 < g_CZombieClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&this_ptr->field_0xd0dc,"alwaysChaseFast");
  }
  if (g_CZombieClassVersion < 0xc) {
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0xd0e4,"startGuardDist");
  core_actor_cpp_archiveFloat_FUN_0040b830
            (&(this_ptr->base).guard_distance,"guardDistance");
  return;
}
