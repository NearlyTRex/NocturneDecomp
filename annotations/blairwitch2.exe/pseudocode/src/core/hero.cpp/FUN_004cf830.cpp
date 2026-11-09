// Name: core_hero.cpp_FUN_004cf830
// Address: 004cf830
// Address Range: [[004cf830, 004cf884]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_FUN_004cf830(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_FUN_004cf830(CHero *this_ptr)

{
  int iVar1;
  
  if (*(int *)(this_ptr + 0x2560c) == 0) {
    return;
  }
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                    (*(int *)(this_ptr + 0x2560c),g_CBoxActorClassInfo.name_hash);
  if (this_ptr == *(CHero **)(iVar1 + 0x47c)) {
    *(uint *)(iVar1 + 0x47c) = 0;
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(iVar1 + 0x484));
  }
  *(uint *)(this_ptr + 0x2560c) = 0;
  return;
}
