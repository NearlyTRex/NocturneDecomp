// Name: core_anvil.cpp_FUN_0040f560
// Address: 0040f560
// Address Range: [[0040f560, 0040f5ea]]
// Convention: unknown
// Signature: int core_anvil_cpp_FUN_0040f560(undefined4 param_1)

#include "nocturne.h"

int core_anvil_cpp_FUN_0040f560(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = core_actor_cpp_FUN_00409d30(param_1);
  iVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(iVar2 + 0x150);
  pcVar3 = "acmeanvilinc";
  *(byte ***)(iVar2 + -4) = &PTR_core_anvil_cpp_FUN_0040f5f0_00599694;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(iVar2,"question.kfm");
  *(uint *)(iVar2 + 0x1e0) = 0x41c80000;
  *(uint *)(iVar2 + 0x1e4) = 0;
  pcVar4 = (char *)(iVar2 + 0x17c);
  *(uint *)(iVar2 + 0x1e8) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return iVar2 + -0x150;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return iVar2 + -0x150;
}
