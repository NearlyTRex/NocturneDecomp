// Name: core_flamecan.cpp_CFlameCan_ctor_FUN_0048e370
// Address: 0048e370
// Address Range: [[0048e370, 0048e408]]
// Convention: unknown
// Signature: int core_flamecan_cpp_CFlameCan_ctor_FUN_0048e370(undefined4 param_1)

#include "nocturne.h"

int core_flamecan_cpp_CFlameCan_ctor_FUN_0048e370(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = core_actor_cpp_FUN_00409d30(param_1);
  iVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(iVar2 + 0x150);
  iVar2 = core_flame_cpp_CFlame_ctor_FUN_0048cf60(iVar2 + 0x1e8);
  pcVar3 = "none";
  *(byte ***)(iVar2 + -0x1ec) = &PTR_core_flamecan_cpp_CFlameCan_setup_FUN_0048e410_0059d684;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (iVar2 + -0x1e8,"question.kfm");
  *(uint *)(iVar2 + -0x6c) = 0;
  pcVar4 = (char *)(iVar2 + -100);
  *(uint *)(iVar2 + -0x68) = 0x41200000;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x29c) = 0;
  return iVar2 + -0x338;
}
