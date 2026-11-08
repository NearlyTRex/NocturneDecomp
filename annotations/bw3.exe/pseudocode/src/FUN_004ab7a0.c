// Name: FUN_004ab7a0
// Address: 004ab7a0
// Address Range: [[004ab7a0, 004ab8e4]]
// Convention: unknown
// Signature: void FUN_004ab7a0(undefined1 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ab7a0(byte *param_1)

{
  char cVar1;
  byte *puVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  puVar2 = (byte *)0x1d0d214;
  do {
    FUN_004a9bc0(puVar2);
    puVar2 = puVar2 + 0x2e4;
  } while (puVar2 != &DAT_01d0e36c);
  puVar2 = &DAT_01d0e370;
  _DAT_01d0d210 = 0;
  do {
    FUN_004a9eb0(puVar2);
    puVar2 = puVar2 + 0x126c;
  } while (puVar2 != &DAT_01d19ba8);
  pcVar4 = "fieldnote";
  pcVar5 = &DAT_01d0cfc8;
  _DAT_01d0e36c = 0;
  DAT_01d0cfa8 = 0;
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
  iVar3 = 0x1d19bc0;
  FUN_0040d400(0x1d19bac);
  do {
    FUN_0040d400(iVar3);
    iVar3 = iVar3 + 0x14;
  } while (iVar3 != 0x1d19c38);
  FUN_0040d400(0x1d19c38);
  FUN_0040d400(0x1d19c4c);
  FUN_0040d400(0x1d19c60);
  FUN_0040d400(0x1d19c74);
  FUN_0040d400(0x1d19c9c);
  FUN_0040d400(0x1d19cb0);
  FUN_0040d400(0x1d19cc4);
  FUN_0040d400(0x1d19cd8);
  DAT_005fe370 = 1;
  _DAT_01d19f78 = 0;
  DAT_005fe3a8 = 0xffffffff;
  _DAT_01d1a058 = 0;
  DAT_01d19f90 = 0;
  *param_1 = 0;
  return;
}
