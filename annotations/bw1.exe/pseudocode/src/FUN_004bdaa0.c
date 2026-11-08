// Name: FUN_004bdaa0
// Address: 004bdaa0
// Address Range: [[004bdaa0, 004bdbe4]]
// Convention: unknown
// Signature: void FUN_004bdaa0(undefined1 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bdaa0(byte *param_1)

{
  char cVar1;
  byte *puVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  puVar2 = (byte *)0x1cc4474;
  do {
    FUN_004bbf60(puVar2);
    puVar2 = puVar2 + 0x2e4;
  } while (puVar2 != &DAT_01cc55cc);
  puVar2 = &DAT_01cc55d0;
  _DAT_01cc4470 = 0;
  do {
    FUN_004bc250(puVar2);
    puVar2 = puVar2 + 0x970;
  } while (puVar2 != &DAT_01cc7b90);
  pcVar4 = "fieldnote";
  pcVar5 = &DAT_01cc4228;
  _DAT_01cc55cc = 0;
  DAT_01cc4208 = 0;
  *(uint *)(param_1 + 0x40) = 0;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  iVar3 = 0x1cc7ba8;
  FUN_0040d1c0(0x1cc7b94);
  do {
    FUN_0040d1c0(iVar3);
    iVar3 = iVar3 + 0x14;
  } while (iVar3 != 0x1cc7c20);
  FUN_0040d1c0(0x1cc7c20);
  FUN_0040d1c0(0x1cc7c34);
  FUN_0040d1c0(0x1cc7c48);
  FUN_0040d1c0(0x1cc7c5c);
  FUN_0040d1c0(0x1cc7c84);
  FUN_0040d1c0(0x1cc7c98);
  FUN_0040d1c0(0x1cc7cac);
  FUN_0040d1c0(0x1cc7cc0);
  DAT_0061d2e0 = 1;
  _DAT_01cc7f1c = 0;
  DAT_0061d310 = 0xffffffff;
  _DAT_01cc8000 = 0;
  DAT_01cc7f38 = 0;
  *param_1 = 0;
  return;
}
