// Name: core_stranger.cpp_CStranger_serialize_FUN_005c2fe0
// Address: 005c2fe0
// Address Range: [[005c2fe0, 005c3127]]
// Convention: __cdecl
// Signature: void core_stranger.cpp_CStranger_serialize_FUN_005c2fe0(CStranger * this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_serialize_FUN_005c2fe0(CStranger *this_ptr)

{
  core_hero_cpp_CHero_serialize_FUN_004f2610(&this_ptr->base_hero);
  if ((1 < g_CStrangerClassVersion) && (g_CStrangerClassVersion < 5)) {
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)((this_ptr->base_hero).field6_0x1fb9c + 4),"objectToPickUp");
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)(this_ptr->base_hero).field6_0x1fb9c,"doorToOpen");
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)((this_ptr->base_hero).field6_0x1fb9c + 0xc),"leverToPull");
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)((this_ptr->base_hero).field6_0x1fb9c + 0x10),"ladderToClimb"
              );
  }
  if (g_CStrangerClassVersion == 2) {
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)&(this_ptr->base_hero).base_character.carry_hands[0].carry_actor,
               "lhCarryObject");
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)&(this_ptr->base_hero).base_character.carry_hands[1].carry_actor,
               "rhCarryObject");
  }
  if (3 < g_CStrangerClassVersion) {
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)(this_ptr->field2_0x1fbd8 + 0x50),"ladderToDescend");
  }
  if (5 < g_CStrangerClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->guns_drawn,"gunsDrawn");
  }
  if (6 < g_CStrangerClassVersion) {
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)(this_ptr->field2_0x1fbd8 + 0x54),"weapon");
  }
  if (7 < g_CStrangerClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->action_pending,"actionPending")
    ;
  }
  if (g_CStrangerClassVersion < 9) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)((this_ptr->base_hero).base_character.field13_0x2620 + 0x46c),
             "layerActionIndex");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)((this_ptr->base_hero).base_character.field13_0x2620 + 0x470),
             "layerActionT");
  return;
}
