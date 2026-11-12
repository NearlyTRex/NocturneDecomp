// Name: core_hero.cpp_CHero_stopPushingBox_FUN_004ebbe0
// Address: 004ebbe0
// Address Range: [[004ebbe0, 004ebc34]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_stopPushingBox_FUN_004ebbe0(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_stopPushingBox_FUN_004ebbe0(CHero *this_ptr)

{
  CDemonActor *pCVar1;
  
  if (this_ptr->pushed_object == (CBoxActor *)0x0) {
    return;
  }
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c600
                     (&this_ptr->pushed_object->base,g_CBoxActorClassInfo.name_hash);
  if (this_ptr == (CHero *)pCVar1[2].lifecycle_state) {
    pCVar1[2].lifecycle_state = ACTOR_NOT_CREATED;
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)pCVar1[2].create_event);
  }
  this_ptr->pushed_object = (CBoxActor *)0x0;
  return;
}
