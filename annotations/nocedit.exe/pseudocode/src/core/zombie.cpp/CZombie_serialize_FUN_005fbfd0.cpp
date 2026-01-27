// Name: core_zombie.cpp_CZombie_serialize_FUN_005fbfd0
// Address: 005fbfd0
// Address Range: [[005fbfd0, 005fc118]]
// Convention: __cdecl
// Signature: void core_zombie.cpp_CZombie_serialize_FUN_005fbfd0(CZombie * this_ptr)

#include "nocturne.h"

void __cdecl core_zombie_cpp_CZombie_serialize_FUN_005fbfd0(CZombie *this_ptr)

{
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(&this_ptr->base);
  core_actor_cpp_serializeFloat_FUN_0040b770(&(this_ptr->base).speed,"speed");
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970
            (&(this_ptr->base).base.model,"modelName");
  if (1 < g_CZombieClassVersion) {
    if (g_CZombieClassVersion < 0xb) {
      core_actor_cpp_serializeFloat_FUN_0040b770
                (&(this_ptr->base).guard_distance,"guardDistance");
    }
    core_actor_cpp_serializeMotionState_FUN_0040b9f0
              (&(this_ptr->base).base.model.motion_controller,"motion state");
  }
  if (2 < g_CZombieClassVersion) {
    core_actor_cpp_serializePartStatus_FUN_0040bae0
              (&(this_ptr->base).base.model,"partStatus");
    if (g_CZombieClassVersion < 7) {
      core_actor_cpp_serializeActor_FUN_0040b870
                ((CDemonActor *)&(this_ptr->base).base.carry_hands[1].carry_actor,
                 "carriedActor");
    }
  }
  if (3 < g_CZombieClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(this_ptr->unk1 + 0x28),"riseFromGraveCondition");
  }
  if (4 < g_CZombieClassVersion) {
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)(this_ptr->unk1 + 0x20),"graveActor");
  }
  if ((5 < g_CZombieClassVersion) && (g_CZombieClassVersion < 9)) {
    core_actor_cpp_serializeClothList_FUN_0040be60
              ((CClothList *)&(this_ptr->base).base.cloth_count,"clothList");
  }
  if (7 < g_CZombieClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              (&this_ptr->is_miner_zombie,"isMinerZombie");
  }
  if (g_CZombieClassVersion < 10) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            (&this_ptr->always_chase_fast,"alwaysChaseFast");
  return;
}
