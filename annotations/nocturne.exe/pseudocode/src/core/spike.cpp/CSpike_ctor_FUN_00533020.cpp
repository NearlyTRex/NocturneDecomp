// Name: core_spike.cpp_CSpike_ctor_FUN_00533020
// Address: 00533020
// Address Range: [[00533020, 00533159]]
// Convention: unknown
// Signature: int core_spike_cpp_CSpike_ctor_FUN_00533020(undefined4 param_1)

#include "nocturne.h"

int core_spike_cpp_CSpike_ctor_FUN_00533020(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00409d30(param_1);
  iVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(iVar2 + 0x150);
  pcVar3 = &DAT_0059501b;
  *(byte ***)(iVar2 + -4) = &PTR_core_spike_cpp_CSpike_setup_FUN_00533160_005a2334;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(iVar2,"bgate.kfm");
  *(uint *)(iVar2 + 0x17c) = 0;
  *(uint *)(iVar2 + 0x180) = 0;
  pcVar4 = (char *)(iVar2 + 0x198);
  *(uint *)(iVar2 + 0x184) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = &DAT_00595020;
  pcVar4 = (char *)(iVar2 + 0x1fc);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = &DAT_00595025;
  pcVar4 = (char *)(iVar2 + 0x260);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = &DAT_0059502a;
  pcVar4 = (char *)(iVar2 + 0x2c4);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x328) = 0x3f800000;
  *(uint *)(iVar2 + 0x32c) = 0x3f800000;
  *(byte *)(iVar2 + 0x334) = 0;
  *(byte *)(iVar2 + 0x398) = 0;
  *(uint *)(iVar2 + 0x3fc) = 0x3f800000;
  *(uint *)(iVar2 + 0x400) = 0x3dcccccd;
  *(uint *)(iVar2 + 0x404) = 0;
  return iVar2 + -0x150;
}
