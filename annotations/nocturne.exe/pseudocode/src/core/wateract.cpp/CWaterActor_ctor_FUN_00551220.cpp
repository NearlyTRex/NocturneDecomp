// Name: core_wateract.cpp_CWaterActor_ctor_FUN_00551220
// Address: 00551220
// Address Range: [[00551220, 00551365]]
// Convention: unknown
// Signature: int core_wateract_cpp_CWaterActor_ctor_FUN_00551220(undefined4 param_1)

#include "nocturne.h"

int core_wateract_cpp_CWaterActor_ctor_FUN_00551220(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = core_actor_cpp_FUN_00409d30(param_1);
  iVar2 = __arrinit(iVar2 + 0x294,1000,&DAT_005a3fd0);
  *(byte ***)(iVar2 + -0x148) = &PTR_core_wateract_cpp_CWaterActor_setup_FUN_00551370_005a3ef4;
  *(uint *)(iVar2 + -0x144) = 0x40800000;
  *(uint *)(iVar2 + -0x140) = 0x3dcccccd;
  *(uint *)(iVar2 + -0x13c) = 0x40800000;
  *(uint *)(iVar2 + -0x138) = 0x8000;
  *(uint *)(iVar2 + 0x2af8c) = 0;
  *(uint *)(iVar2 + 0x2af90) = 0;
  *(uint *)(iVar2 + -0x198) = 1;
  *(uint *)(iVar2 + -0x19c) = 0;
  *(uint *)(iVar2 + -0x130) = 0x3f800000;
  *(uint *)(iVar2 + -300) = 0x3f800000;
  *(uint *)(iVar2 + -0x134) = 0;
  pcVar3 = &DAT_005975cb;
  *(uint *)(iVar2 + -0x20) = 0;
  *(byte *)(iVar2 + -0x128) = 0;
  pcVar4 = (char *)(iVar2 + -0xe8);
  *(byte *)(iVar2 + -0x108) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = &DAT_005975d0;
  pcVar4 = (char *)(iVar2 + -0x84);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -0x1c) = 0;
  *(uint *)(iVar2 + -0x18) = 0x3f800000;
  *(uint *)(iVar2 + -0x14) = 0;
  *(uint *)(iVar2 + -8) = 0xff;
  *(uint *)(iVar2 + -0xc) = *(uint *)(iVar2 + -8);
  *(uint *)(iVar2 + -0x10) = *(uint *)(iVar2 + -8);
  return iVar2 + -0x294;
}
