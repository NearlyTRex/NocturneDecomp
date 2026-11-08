// Name: FUN_00446350
// Address: 00446350
// Address Range: [[00446350, 004464b1]]
// Convention: unknown
// Signature: int FUN_00446350(undefined4 param_1)

#include "nocturne.h"

int FUN_00446350(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00408600(param_1);
  iVar2 = FUN_005a30d7(iVar2 + 0x208,1000,0x5ddf70);
  *(uint *)(iVar2 + -0xb4) = 0x5dde74;
  pcVar3 = "SGLASS.RAW";
  *(uint *)(iVar2 + -0xb0) = 0x40800000;
  *(uint *)(iVar2 + -0xac) = 0x40800000;
  pcVar4 = (char *)(iVar2 + -0x9c);
  *(uint *)(iVar2 + -0xa8) = 0x3dcccccd;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -0xa0) = 0;
  *(uint *)(iVar2 + -0xa4) = 0xd;
  *(uint *)(iVar2 + -0x8c) = 0x8000;
  *(uint *)(iVar2 + -0x88) = 1;
  *(uint *)(iVar2 + -0x7c) = 0;
  *(uint *)(iVar2 + -0x80) = 0;
  pcVar3 = (char *)0x5b9a3d;
  *(uint *)(iVar2 + -0x84) = 0;
  pcVar4 = (char *)(iVar2 + -0x74);
  *(uint *)(iVar2 + -0x78) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x6590c) = 0x3f800000;
  *(uint *)(iVar2 + 0x65910) = 0x3f733333;
  *(uint *)(iVar2 + 0x65914) = 0;
  *(uint *)(iVar2 + 0x65918) = 0x3f000000;
  *(uint *)(iVar2 + 0x6591c) = 0x42000000;
  *(uint *)(iVar2 + 0x65924) = 0;
  *(uint *)(iVar2 + 0x65928) = 0;
  *(uint *)(iVar2 + -0x10) = 1;
  *(uint *)(iVar2 + -0xc) = 0x3f000000;
  *(uint *)(iVar2 + -8) = 1;
  *(uint *)(iVar2 + 0x6592c) = 0;
  return iVar2 + -0x208;
}
