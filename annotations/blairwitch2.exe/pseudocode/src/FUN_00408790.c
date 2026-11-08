// Name: FUN_00408790
// Address: 00408790
// Address Range: [[00408790, 00408920]]
// Convention: unknown
// Signature: undefined1 * FUN_00408790(int param_1)

#include "nocturne.h"

byte * FUN_00408790(int param_1)

{
  byte *puVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar3 = FUN_00408750(param_1 + 300);
  iVar3 = FUN_005b7f5f(iVar3 + 0x28,5,&DAT_005f2270);
  puVar1 = (byte *)(iVar3 + -0x154);
  *(byte **)(iVar3 + 0x15c) = &DAT_005f2184;
  *puVar1 = 0;
  *(uint *)(iVar3 + -8) = 0;
  *(uint *)(iVar3 + -4) = 0;
  *(uint *)(iVar3 + -300) = 0;
  *(uint *)(iVar3 + -0x130) = *(uint *)(iVar3 + -300);
  *(uint *)(iVar3 + -0x134) = *(uint *)(iVar3 + -0x130);
  *(uint *)(iVar3 + -0x128) = 0;
  pcVar4 = &DAT_005ca42a;
  *(uint *)(iVar3 + -0x11c) = 0;
  *(uint *)(iVar3 + -0x120) = *(uint *)(iVar3 + -0x11c);
  *(uint *)(iVar3 + -0x124) = *(uint *)(iVar3 + -0x120);
  FUN_00408ae0(puVar1);
  pcVar5 = (char *)(iVar3 + -0xdc);
  *(uint *)(iVar3 + -0xe0) = 0x3f800000;
  do {
    cVar2 = *pcVar4;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  *(uint *)(iVar3 + -0xe4) = 0;
  *(uint *)(iVar3 + -0x78) = 0;
  *(uint *)(iVar3 + -0x6c) = 0;
  *(uint *)(iVar3 + -0x70) = *(uint *)(iVar3 + -0x6c);
  *(uint *)(iVar3 + -0x74) = *(uint *)(iVar3 + -0x70);
  *(uint *)(iVar3 + -0x60) = 0;
  *(uint *)(iVar3 + -100) = *(uint *)(iVar3 + -0x60);
  *(uint *)(iVar3 + -0x68) = *(uint *)(iVar3 + -100);
  *(uint *)(iVar3 + -0x4c) = 0x10000;
  *(uint *)(iVar3 + -0x48) = 0x10000;
  *(uint *)(iVar3 + -0x44) = 0x10000;
  *(uint *)(iVar3 + -0x5c) = 1;
  *(uint *)(iVar3 + -0x58) = 0;
  *(uint *)(iVar3 + -0x40) = 0;
  *(uint *)(iVar3 + -0x54) = 0;
  *(uint *)(iVar3 + -0x50) = 0;
  pcVar4 = &DAT_005ca42f;
  *(uint *)(iVar3 + -0xf0) = 100;
  pcVar5 = (char *)(iVar3 + -0x34);
  *(byte **)(iVar3 + -0xec) = &DAT_0078a123;
  do {
    cVar2 = *pcVar4;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  *(uint *)(iVar3 + 0x154) = 0x3dcccccd;
  *(uint *)(iVar3 + 0x158) = 1;
  return puVar1;
}
