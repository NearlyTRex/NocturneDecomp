// Name: FUN_0040f040
// Address: 0040f040
// Address Range: [[0040f040, 0040f0ef]]
// Convention: unknown
// Signature: int FUN_0040f040(undefined4 param_1)

#include "nocturne.h"

int FUN_0040f040(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = core_actor_cpp_FUN_00409d30(param_1);
  iVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(iVar2 + 0x150);
  *(byte ***)(iVar2 + -4) = &PTR_FUN_00599574;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(iVar2,"ammobag.kfm");
  pcVar3 = "CGun";
  pcVar4 = (char *)(iVar2 + 0x17c);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x1bc) = 0x14;
  *(uint *)(iVar2 + 0x1c0) = 0;
  *(uint *)(iVar2 + 0x1c4) = 0;
  *(uint *)(iVar2 + 0x1c8) = 0;
  *(uint *)(iVar2 + 0x1cc) = 0;
  *(byte *)(iVar2 + 0x1d0) = 0;
  *(uint *)(iVar2 + 0x1f0) = 0;
  return iVar2 + -0x150;
}
