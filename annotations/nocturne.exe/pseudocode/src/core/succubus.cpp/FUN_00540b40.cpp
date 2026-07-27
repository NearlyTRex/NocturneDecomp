// Name: core_succubus.cpp_FUN_00540b40
// Address: 00540b40
// Address Range: [[00540b40, 00540c14]]
// Convention: unknown
// Signature: int core_succubus_cpp_FUN_00540b40(undefined4 param_1)

#include "nocturne.h"

int core_succubus_cpp_FUN_00540b40(uint param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar4 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  iVar4 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0051b660(iVar4 + 0xbd24);
  iVar4 = core_cloth_cpp_CClothList_ctor_FUN_00438210(iVar4 + 0x22b4);
  iVar4 = core_morph_cpp_CMorph_ctor_FUN_004e0050(iVar4 + 0x1cc);
  *(byte ***)(iVar4 + -0xe058) = &PTR_core_succubus_cpp_FUN_00540c20_005a28e4;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (iVar4 + -0xe054,"succubus.dfm");
  pcVar5 = "hdwing.cth";
  pcVar6 = (char *)(iVar4 + -0x1c8);
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (iVar4 + -0x2480,"hotdemon.dfm");
  *(uint *)(iVar4 + -0xb3d0) = 0x3f19999a;
  fVar2 = 50.0f;
  *(uint *)(iVar4 + -0xb3cc) = 0x3f666666;
  fVar3 = 100.0f;
  *(uint *)(iVar4 + -0x1cc) = 1;
  *(float *)(iVar4 + -0xb3c8) = fVar2;
  *(float *)(iVar4 + -0xb3c4) = fVar3;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') {
      return iVar4 + -0xe1a4;
    }
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  return iVar4 + -0xe1a4;
}
