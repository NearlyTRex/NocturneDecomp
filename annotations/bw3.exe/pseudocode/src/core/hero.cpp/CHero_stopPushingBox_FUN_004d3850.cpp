// Name: core_hero.cpp_CHero_stopPushingBox_FUN_004d3850
// Address: 004d3850
// Address Range: [[004d3850, 004d38a4]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_stopPushingBox_FUN_004d3850(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_stopPushingBox_FUN_004d3850(CHero *this_ptr)

{
  int iVar1;
  
  if (this_ptr->pushed_object == (CBoxActor *)0x0) {
    return;
  }
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                    (this_ptr->pushed_object,g_CBoxActorClassInfo.name_hash);
  if (this_ptr == *(CHero **)(iVar1 + 800)) {
    *(uint *)(iVar1 + 800) = 0;
    sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)(iVar1 + 0x328));
  }
  this_ptr->pushed_object = (CBoxActor *)0x0;
  return;
}
