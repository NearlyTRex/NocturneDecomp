// Name: core_hero.cpp_CHero_stopPushingBox_FUN_004b56f0
// Address: 004b56f0
// Address Range: [[004b56f0, 004b5744]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_stopPushingBox_FUN_004b56f0(int param_1)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_stopPushingBox_FUN_004b56f0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1fa0c) == 0) {
    return;
  }
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                    (*(int *)(param_1 + 0x1fa0c),g_CBoxActorActorType_00764800.name_hash);
  if (param_1 == *(int *)(iVar1 + 0x318)) {
    *(uint *)(iVar1 + 0x318) = 0;
    sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(iVar1 + 800));
  }
  *(uint *)(param_1 + 0x1fa0c) = 0;
  return;
}
