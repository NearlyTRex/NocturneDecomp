// Name: FUN_004085c0
// Address: 004085c0
// Address Range: [[004085c0, 00408729]]
// Convention: unknown
// Signature: undefined1 * FUN_004085c0(int param_1)

#include "nocturne.h"

byte * FUN_004085c0(int param_1)

{
  byte *puVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar3 = FUN_00408580(param_1 + 300);
  puVar1 = (byte *)(iVar3 + -300);
  *(byte ***)(iVar3 + 0x28) = &PTR_FUN_005fb334;
  *puVar1 = 0;
  *(uint *)(iVar3 + 0x20) = 0;
  *(uint *)(iVar3 + 0x24) = 0;
  *(uint *)(iVar3 + -0x104) = 0;
  *(uint *)(iVar3 + -0x108) = *(uint *)(iVar3 + -0x104);
  *(uint *)(iVar3 + -0x10c) = *(uint *)(iVar3 + -0x108);
  *(uint *)(iVar3 + -0x100) = 0;
  pcVar4 = "none";
  *(uint *)(iVar3 + -0xf4) = 0;
  *(uint *)(iVar3 + -0xf8) = *(uint *)(iVar3 + -0xf4);
  *(uint *)(iVar3 + -0xfc) = *(uint *)(iVar3 + -0xf8);
  FUN_004088b0(puVar1);
  pcVar5 = (char *)(iVar3 + -0xb4);
  *(uint *)(iVar3 + -0xb8) = 0x3f800000;
  do {
    cVar2 = *pcVar4;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  *(uint *)(iVar3 + -0xbc) = 0;
  *(uint *)(iVar3 + -0x50) = 0;
  *(uint *)(iVar3 + -0x44) = 0;
  *(uint *)(iVar3 + -0x48) = *(uint *)(iVar3 + -0x44);
  *(uint *)(iVar3 + -0x4c) = *(uint *)(iVar3 + -0x48);
  *(uint *)(iVar3 + -0x38) = 0;
  *(uint *)(iVar3 + -0x3c) = *(uint *)(iVar3 + -0x38);
  *(uint *)(iVar3 + -0x40) = *(uint *)(iVar3 + -0x3c);
  *(uint *)(iVar3 + -0x24) = 0x10000;
  *(uint *)(iVar3 + -0x20) = 0x10000;
  *(uint *)(iVar3 + -0x1c) = 0x10000;
  *(uint *)(iVar3 + -0x34) = 1;
  *(uint *)(iVar3 + -0x30) = 0;
  *(uint *)(iVar3 + -0x18) = 0;
  *(uint *)(iVar3 + -0x2c) = 0;
  *(uint *)(iVar3 + -0x28) = 0;
  pcVar4 = "str";
  *(uint *)(iVar3 + -200) = 100;
  pcVar5 = (char *)(iVar3 + -0xc);
  *(byte **)(iVar3 + -0xc4) = &DAT_0078a123;
  do {
    cVar2 = *pcVar4;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') {
      return puVar1;
    }
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  return puVar1;
}
