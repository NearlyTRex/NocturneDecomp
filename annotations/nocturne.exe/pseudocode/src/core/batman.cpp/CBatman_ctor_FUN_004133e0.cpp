// Name: core_batman.cpp_CBatman_ctor_FUN_004133e0
// Address: 004133e0
// Address Range: [[004133e0, 00413490]]
// Convention: unknown
// Signature: int core_batman_cpp_CBatman_ctor_FUN_004133e0(undefined4 param_1)

#include "nocturne.h"

int core_batman_cpp_CBatman_ctor_FUN_004133e0(uint param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar4 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  pcVar5 = "none";
  *(byte ***)(iVar4 + 0x14c) = &PTR_core_batman_cpp_CBatman_setup_FUN_004134a0_0059a164;
  pcVar6 = (char *)(iVar4 + 0xbd24);
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(iVar4 + 0x150,"batman.dfm");
  fVar2 = 50.0f;
  *(uint *)(iVar4 + 0x2dd4) = 0x3f19999a;
  fVar3 = 100.0f;
  *(uint *)(iVar4 + 0x2dd8) = 0x40000000;
  *(float *)(iVar4 + 0x2ddc) = fVar2;
  *(float *)(iVar4 + 0x2de0) = fVar3;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar4 + 0xbdc0) = 0;
  *(uint *)(iVar4 + 0xbdc4) = 0;
  *(uint *)(iVar4 + 0xbdd0) = 0;
  *(uint *)(iVar4 + 0xbdcc) = *(uint *)(iVar4 + 0xbdd0);
  *(uint *)(iVar4 + 0xbdc8) = *(uint *)(iVar4 + 0xbdcc);
  return iVar4;
}
