// Name: FUN_004abb50
// Address: 004abb50
// Address Range: [[004abb50, 004abc84]]
// Convention: unknown
// Signature: int FUN_004abb50(undefined4 param_1)

#include "nocturne.h"

int FUN_004abb50(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = core_actor_cpp_FUN_00409d30(param_1);
  iVar2 = core_mirror_cpp_CMirror_ctor_FUN_004d6550(iVar2 + 0x1e4);
  iVar2 = __arrinit(iVar2 + 0x1a0,0x19,&DAT_005993b0);
  *(byte ***)(iVar2 + -0x238) = &PTR_core_glass_cpp_CGlass_setup_FUN_004abc90_0059e3b4;
  pcVar3 = "HEADLITE.RAW";
  *(uint *)(iVar2 + -0x234) = 0x40800000;
  *(uint *)(iVar2 + -0x230) = 0x40800000;
  pcVar4 = (char *)(iVar2 + -0x220);
  *(uint *)(iVar2 + -0x22c) = 0x3dcccccd;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -0x224) = 0;
  *(uint *)(iVar2 + -0x228) = 0xd;
  *(uint *)(iVar2 + -0x210) = 0x8000;
  *(uint *)(iVar2 + -0x20c) = 0;
  pcVar3 = "true";
  *(byte *)(iVar2 + -0x208) = 0;
  pcVar4 = (char *)(iVar2 + -0x80);
  *(uint *)(iVar2 + -0x1a4) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "7YEARS.RAW";
  pcVar4 = (char *)(iVar2 + -0x10);
  *(uint *)(iVar2 + -0x1c) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -0x14) = 0;
  *(uint *)(iVar2 + -0x18) = 0xd;
  *(uint *)(iVar2 + 0x7b0) = 0;
  return iVar2 + -900;
}
