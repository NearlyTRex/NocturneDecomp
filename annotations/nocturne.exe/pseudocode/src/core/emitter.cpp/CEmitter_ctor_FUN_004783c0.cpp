// Name: core_emitter.cpp_CEmitter_ctor_FUN_004783c0
// Address: 004783c0
// Address Range: [[004783c0, 00478516]]
// Convention: unknown
// Signature: int core_emitter_cpp_CEmitter_ctor_FUN_004783c0(undefined4 param_1)

#include "nocturne.h"

int core_emitter_cpp_CEmitter_ctor_FUN_004783c0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00409d30(param_1);
  iVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(iVar2 + 0x240);
  *(byte ***)(iVar2 + -0xf4) = &PTR_core_emitter_cpp_CEmitter_setup_FUN_00478520_0059cc74;
  *(uint *)(iVar2 + -0xec) = 0x3f800000;
  pcVar3 = &DAT_0057f195;
  *(uint *)(iVar2 + -0xe8) = 0x3f800000;
  *(uint *)(iVar2 + -0xe4) = 0x3f800000;
  pcVar4 = (char *)(iVar2 + -0xdc);
  *(uint *)(iVar2 + -0xf0) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = &DAT_0057f19a;
  pcVar4 = (char *)(iVar2 + -0x78);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x1f8) = 0;
  *(uint *)(iVar2 + 0x1fc) = 0x3dcccccd;
  *(uint *)(iVar2 + -0xe0) = 1;
  *(uint *)(iVar2 + -0xc) = 0xff;
  *(uint *)(iVar2 + -8) = 0;
  *(uint *)(iVar2 + -4) = 0;
  *(uint *)(iVar2 + -0x10) = 1;
  *(uint *)(iVar2 + -0x14) = 0;
  *(uint *)(iVar2 + 0x200) = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(iVar2,"stalrock.kfm");
  *(uint *)(iVar2 + 0x17c) = 0x41a00000;
  *(uint *)(iVar2 + 0x180) = 0;
  *(uint *)(iVar2 + 0x184) = 0;
  *(uint *)(iVar2 + 0x188) = 0;
  *(byte *)(iVar2 + 0x18c) = 0;
  *(uint *)(iVar2 + 500) = 1;
  *(uint *)(iVar2 + 0x244) = 0;
  return iVar2 + -0x240;
}
