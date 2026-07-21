// Name: core_biggs.cpp_CBiggs_ctor_FUN_00415370
// Address: 00415370
// Address Range: [[00415370, 0041542c]]
// Convention: unknown
// Signature: int core_biggs_cpp_CBiggs_ctor_FUN_00415370(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_biggs_cpp_CBiggs_ctor_FUN_00415370(uint param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar4 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  iVar4 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(iVar4 + 0xbd24);
  iVar4 = core_morph_cpp_CMorph_ctor_FUN_004e0050(iVar4 + 0x184);
  *(byte ***)(iVar4 + -0xbd5c) = &PTR_FUN_0059a5b4;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(iVar4 + -0xbd58,"biggs.dfm")
  ;
  pcVar5 = "bigAlien";
  pcVar6 = (char *)(iVar4 + 0xc2c);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (iVar4 + -0x184,"question.kfm");
  uVar2 = _DAT_0059a598;
  *(uint *)(iVar4 + -0x90d4) = 0x3f19999a;
  uVar3 = _DAT_0059a59c;
  *(uint *)(iVar4 + -0x90d0) = 0x3f666666;
  *(uint *)(iVar4 + -0x90cc) = uVar2;
  *(uint *)(iVar4 + -0x90c8) = uVar3;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') {
      return iVar4 + -0xbea8;
    }
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  return iVar4 + -0xbea8;
}
