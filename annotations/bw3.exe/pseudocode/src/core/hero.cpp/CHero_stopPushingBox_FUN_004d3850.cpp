// Name: core_hero.cpp_CHero_stopPushingBox_FUN_004d3850
// Address: 004d3850
// Address Range: [[004d3850, 004d38a4]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_stopPushingBox_FUN_004d3850(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_stopPushingBox_FUN_004d3850(CHero *this_ptr)

{
  int iVar1;
  
  if (*(int *)(this_ptr + 0x20b9c) == 0) {
    return;
  }
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                    (*(int *)(this_ptr + 0x20b9c),g_CBoxActorClassInfo.name_hash);
  if (this_ptr == *(CHero **)(iVar1 + 800)) {
    *(uint *)(iVar1 + 800) = 0;
    sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)(iVar1 + 0x328));
  }
  *(uint *)(this_ptr + 0x20b9c) = 0;
  return;
}
