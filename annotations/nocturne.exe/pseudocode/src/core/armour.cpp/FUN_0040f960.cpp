// Name: core_armour.cpp_FUN_0040f960
// Address: 0040f960
// Address Range: [[0040f960, 0040f9f2]]
// Convention: unknown
// Signature: int core_armour_cpp_FUN_0040f960(undefined4 param_1)

#include "nocturne.h"

int core_armour_cpp_FUN_0040f960(uint param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar4 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  pcVar5 = "none";
  *(byte ***)(iVar4 + 0x14c) = &PTR_core_armour_cpp_FUN_0040fa00_005997b4;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(iVar4 + 0x150,"armour.dfm");
  fVar3 = 100.0f;
  fVar2 = 50.0f;
  *(uint *)(iVar4 + 0x2dd4) = 0x3f19999a;
  *(uint *)(iVar4 + 0x2dd8) = 0x40000000;
  pcVar6 = (char *)(iVar4 + 0xbd24);
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
  *(uint *)(iVar4 + 0x2608) = 2;
  return iVar4;
}
