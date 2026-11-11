// Name: core_hero.cpp_CHero_stopPushingBox_FUN_004cf830
// Address: 004cf830
// Address Range: [[004cf830, 004cf884]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_stopPushingBox_FUN_004cf830(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_stopPushingBox_FUN_004cf830(CHero *this_ptr)

{
  int iVar1;
  
  if (this_ptr->pushed_object == (CBoxActor *)0x0) {
    return;
  }
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                    (this_ptr->pushed_object,g_CBoxActorClassInfo.name_hash);
  if (this_ptr == *(CHero **)(iVar1 + 0x47c)) {
    *(uint *)(iVar1 + 0x47c) = 0;
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(iVar1 + 0x484));
  }
  this_ptr->pushed_object = (CBoxActor *)0x0;
  return;
}
