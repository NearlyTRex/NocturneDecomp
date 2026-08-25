// Name: core_actor.cpp_deleteActor_FUN_00408820
// Address: 00408820
// MANUAL RECONSTRUCTION
// Address Range: [[00408820, 0040886b]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_deleteActor_FUN_00408820(CDemonActor *actor_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_deleteActor_FUN_00408820(CDemonActor *actor_ptr)

{
#if !NOCTURNE_AUTHENTIC_ACTOR_DELETE
  CStranger *stranger;
  CHero *hero;
  CInventory *inventory;
  int hero_index;
  int hand_index;
#endif

  if (actor_ptr != (CDemonActor *)0x0) {
    core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
              (actor_ptr,"..\\core\\actor.cpp",321);
#if !NOCTURNE_AUTHENTIC_ACTOR_DELETE
    for (hero_index = 0; hero_index < g_HeroCount; hero_index = hero_index + 1) {
      hero = g_HeroActors[hero_index];
      if (hero == (CHero *)0x0) {
        continue;
      }
      stranger = (CStranger *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (&(hero->base).base,g_CStrangerClassInfo.name_hash);
      if ((stranger != (CStranger *)0x0) && (stranger->weapon == (CWeapon *)actor_ptr)) {
        stranger->weapon = (CWeapon *)0x0;
      }
      for (hand_index = 0; hand_index < 2; hand_index = hand_index + 1) {
        if ((hero->base).carry_hands[hand_index].carry_actor == actor_ptr) {
          (hero->base).carry_hands[hand_index].carry_actor = (CDemonActor *)0x0;
        }
      }
      inventory = &hero->inventory;
      if (inventory->selected_weapon == (CWeapon *)actor_ptr) {
        inventory->selected_weapon = (CWeapon *)0x0;
      }
      if (inventory->selected_item == actor_ptr) {
        inventory->selected_item = (CDemonActor *)0x0;
      }
    }
#endif
    g_CurrentDebugFilename = "..\\core\\actor.cpp";
    g_CurrentDebugLine = 0x149;
    if (actor_ptr != (CDemonActor *)0x0) {
      (*((actor_ptr->vtable)._ub)->dtor)(actor_ptr,2);
      return;
    }
  }
  return;
}
