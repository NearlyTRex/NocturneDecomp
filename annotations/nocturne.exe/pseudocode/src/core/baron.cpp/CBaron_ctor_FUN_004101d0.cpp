// Name: core_baron.cpp_CBaron_ctor_FUN_004101d0
// Address: 004101d0
// Address Range: [[004101d0, 004102b1]]
// Convention: unknown
// Signature: int core_baron_cpp_CBaron_ctor_FUN_004101d0(undefined4 param_1)

#include "nocturne.h"

int core_baron_cpp_CBaron_ctor_FUN_004101d0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_004b46d0(param_1);
  *(byte ***)(iVar2 + 0x14c) = &PTR_core_baron_cpp_CBaron_setup_FUN_004102c0_00599ac4;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(iVar2 + 0x150,"baron.dfm");
  *(uint *)(iVar2 + 0x1fb10) = 0x3f800000;
  *(uint *)(iVar2 + 0x1fb0c) = 0;
  *(uint *)(iVar2 + 0x1fb08) = *(uint *)(iVar2 + 0x1fb0c);
  *(uint *)(iVar2 + 0x1fb04) = *(uint *)(iVar2 + 0x1fb08);
  *(uint *)(iVar2 + 0x1fb14) = 0;
  pcVar3 = "none";
  *(uint *)(iVar2 + 0x1fb18) = 0;
  *(uint *)(iVar2 + 0xfc) = 1;
  pcVar4 = (char *)(iVar2 + 0x1fa3c);
  *(uint *)(iVar2 + 0x1fb34) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "none";
  pcVar4 = (char *)(iVar2 + 0x1faa0);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (&DAT_0076436c,"baronshell.kfm");
  *(uint *)(iVar2 + 0x1fb38) = 0;
  return iVar2;
}
