// Name: core_hero.cpp_CHero_stopPushingBox_FUN_004ebbe0
// Address: 004ebbe0
// Address Range: [[004ebbe0, 004ebc34]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_stopPushingBox_FUN_004ebbe0(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_stopPushingBox_FUN_004ebbe0(CHero *this_ptr)

{
  int iVar1;
  
  if (*(int *)(this_ptr + 0x1ff7c) == 0) {
    return;
  }
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c600
                    (*(int *)(this_ptr + 0x1ff7c),g_CBoxActorClassInfo.name_hash);
  if (this_ptr == *(CHero **)(iVar1 + 800)) {
    *(uint *)(iVar1 + 800) = 0;
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)(iVar1 + 0x328));
  }
  *(uint *)(this_ptr + 0x1ff7c) = 0;
  return;
}
