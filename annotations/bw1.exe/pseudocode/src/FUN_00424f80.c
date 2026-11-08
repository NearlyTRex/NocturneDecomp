// Name: FUN_00424f80
// Address: 00424f80
// Address Range: [[00424f80, 0042511f]]
// Convention: unknown
// Signature: int FUN_00424f80(undefined4 param_1)

#include "nocturne.h"

int FUN_00424f80(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_004a0410(param_1);
  iVar2 = FUN_005c0357(iVar2 + 0xc270,400,0x5fd390);
  iVar2 = FUN_005c0357(iVar2 + 0x6404,4,0x5fd3b0);
  *(byte ***)(iVar2 + -0x12520) = &PTR_FUN_005fd244;
  *(uint *)(iVar2 + -0x640c) = 0;
  *(uint *)(iVar2 + -0x6408) = 0x32;
  FUN_005bfb70(iVar2 + -0x6404,0,0x6400);
  *(uint *)(iVar2 + -4) = 3;
  FUN_00468950(iVar2,0x5d4ffc);
  FUN_00468950(iVar2 + 0x17c,0x5d5006);
  FUN_00468950(iVar2 + 0x2f8,0x5d5011);
  FUN_00569f50(iVar2 + -0x1251c,0x5d501c);
  *(uint *)(iVar2 + 0x830) = 0;
  pcVar3 = (char *)0x5d5025;
  *(uint *)(iVar2 + 0x834) = 0;
  *(uint *)(iVar2 + 0x86c) = 0;
  pcVar4 = (char *)(iVar2 + 0x75d8);
  *(uint *)(iVar2 + 0x75d0) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5d502a;
  pcVar4 = (char *)(iVar2 + 0x763c);
  *(uint *)(iVar2 + 0x75d4) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "false";
  pcVar4 = (char *)(iVar2 + 0x76a0);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -0xf688) = 0x401f5c29;
  *(uint *)(iVar2 + -0xf684) = 0x40200000;
  *(uint *)(iVar2 + -0xf678) = 0x3fa66666;
  *(uint *)(iVar2 + -0xf674) = 0x3fc00000;
  return iVar2 + -0x12674;
}
