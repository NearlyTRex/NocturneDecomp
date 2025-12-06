// Name: core_werewolf.cpp_FUN_005f11e0
// Address: 005f11e0
// Address Range: [[005f11e0, 005f1227]]
// Convention: unknown
// Signature: undefined core_werewolf.cpp_FUN_005f11e0()

#include "nocturne.h"

/* Signature: byte actors_enemy_werewolf.cpp_FUN_005f11e0(uint param_1) */

void core_werewolf_cpp_FUN_005f11e0(void)

{
  int iVar1;
  uint uVar2;
  int in_stack_00000004;
  
  *(uint *)(in_stack_00000004 + 0xbedc) = 0x41200000;
  iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(in_stack_00000004 + 0xbed8));
  if (iVar1 != 0) {
    return;
  }
  uVar2 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
  *(uint *)(in_stack_00000004 + 0xbedc) = 0x41a00000;
  *(uint *)(in_stack_00000004 + 0xbed8) = uVar2;
  return;
}
