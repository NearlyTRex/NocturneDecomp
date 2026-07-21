// Name: core_flame.cpp_CFlame_setup_FUN_0048d050
// Address: 0048d050
// Address Range: [[0048d050, 0048d0b5]]
// Convention: unknown
// Signature: void core_flame_cpp_CFlame_setup_FUN_0048d050(int param_1)

#include "nocturne.h"

void core_flame_cpp_CFlame_setup_FUN_0048d050(int param_1)

{
  uint uVar1;
  byte *puVar2;
  byte *puVar3;
  int iVar4;
  
  iVar4 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  puVar3 = &DAT_005b8ec0;
  do {
    puVar2 = &DAT_005b8e00 + iVar4 * 0xc0;
    do {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,puVar2);
      puVar2 = puVar2 + 0x18;
    } while (puVar2 != puVar3);
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 0xc0;
  } while (iVar4 < 5);
  uVar1 = rand();
  *(uint *)(param_1 + 0x28c) = uVar1 & 1;
  return;
}
