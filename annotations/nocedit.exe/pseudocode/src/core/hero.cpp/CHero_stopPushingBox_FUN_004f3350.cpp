// Name: core_hero.cpp_CHero_stopPushingBox_FUN_004f3350
// Address: 004f3350
// Address Range: [[004f3350, 004f33a4]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_stopPushingBox_FUN_004f3350(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_stopPushingBox_FUN_004f3350(CHero *this_ptr)

{
  CBoxActor *pCVar1;
  
  if (this_ptr->pushed_object == (CBoxActor *)0x0) {
    return;
  }
  pCVar1 = (CBoxActor *)
           core_actor_cpp_castToClassHash_FUN_0040c790
                     (&this_ptr->pushed_object->base,g_CBoxActorClassInfo.name_hash);
  if (this_ptr == (CHero *)pCVar1->pushed_by_actor) {
    pCVar1->pushed_by_actor = (CDemonActor *)0x0;
    sound_sndmain_cpp_killSfx_FUN_005a9c40(pCVar1->push_sfx_handle);
  }
  this_ptr->pushed_object = (CBoxActor *)0x0;
  return;
}
