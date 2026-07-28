// Name: core_hero.cpp_CHero_stopPushingBox_FUN_004b56f0
// Address: 004b56f0
// Address Range: [[004b56f0, 004b5744]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_stopPushingBox_FUN_004b56f0(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_stopPushingBox_FUN_004b56f0(CHero *this_ptr)

{
  uint sfx_handle;
  CDemonActor *pCVar1;
  
  if (this_ptr->pushed_object == (CBoxActor *)0x0) {
    return;
  }
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                     (&this_ptr->pushed_object->base,g_CBoxActorActorType_00764800.name_hash);
  if (this_ptr == *(CHero **)pCVar1[2].create_event) {
    sfx_handle = *(uint *)(pCVar1[2].create_event + 8);
    pCVar1[2].create_event[0] = '\0';
    pCVar1[2].create_event[1] = '\0';
    pCVar1[2].create_event[2] = '\0';
    pCVar1[2].create_event[3] = '\0';
    sound_sndmain_cpp_killSfx_FUN_00527230(sfx_handle);
  }
  this_ptr->pushed_object = (CBoxActor *)0x0;
  return;
}
