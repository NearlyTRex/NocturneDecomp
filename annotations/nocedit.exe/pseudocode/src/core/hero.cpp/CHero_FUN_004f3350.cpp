// Name: core_hero.cpp_CHero_FUN_004f3350
// Address: 004f3350
// Address Range: [[004f3350, 004f33a4]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_FUN_004f3350(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_FUN_004f3350(CHero *this_ptr)

{
  CDemonActor *pCVar1;
  
  if (this_ptr->pushed_object == (CDemonActor *)0x0) {
    return;
  }
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (this_ptr->pushed_object,g_CBoxActorClassInfo.name_hash);
  if (this_ptr == (CHero *)pCVar1[2].was_created) {
    pCVar1[2].was_created = 0;
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)pCVar1[2].create_event);
  }
  this_ptr->pushed_object = (CDemonActor *)0x0;
  return;
}
