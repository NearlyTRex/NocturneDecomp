// Name: core_vessel.cpp_CCryptVessel_ctor_FUN_0054f920
// Address: 0054f920
// Address Range: [[0054f920, 0054fa77]]
// Convention: unknown
// Signature: int core_vessel_cpp_CCryptVessel_ctor_FUN_0054f920(undefined4 param_1)

#include "nocturne.h"

int core_vessel_cpp_CCryptVessel_ctor_FUN_0054f920(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = core_actor_cpp_FUN_00409d30(param_1);
  iVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(iVar2 + 0x150);
  iVar2 = core_flame_cpp_CFlame_ctor_FUN_0048cf60(iVar2 + 0x26c);
  iVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(iVar2 + 0x2a0);
  pcVar3 = "none";
  *(byte ***)(iVar2 + -0x510) = &PTR_FUN_005a3d84;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (iVar2 + -0x50c,"vsslbase.kfm");
  *(uint *)(iVar2 + -0x390) = 0;
  *(uint *)(iVar2 + -0x38c) = 0;
  pcVar4 = (char *)(iVar2 + -900);
  *(uint *)(iVar2 + -0x388) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -700) = 0;
  *(uint *)(iVar2 + -0x2b8) = 0;
  pcVar3 = "none";
  *(uint *)(iVar2 + -0x2a8) = 0;
  pcVar4 = (char *)(iVar2 + -800);
  *(uint *)(iVar2 + -0x2ac) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -0x2b4) = 0x41200000;
  *(uint *)(iVar2 + -0x2a4) = 1;
  *(uint *)(iVar2 + -0x2b0) = 0;
  *(uint *)(iVar2 + -4) = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(iVar2,"vsslorb.kfm");
  *(uint *)(iVar2 + 0x17c) = 1;
  *(uint *)(iVar2 + -0x560) = 1;
  *(uint *)(iVar2 + 0x180) = 0;
  *(uint *)(iVar2 + 0x184) = 0;
  return iVar2 + -0x65c;
}
