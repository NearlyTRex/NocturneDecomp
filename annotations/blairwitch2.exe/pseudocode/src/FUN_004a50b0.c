// Name: FUN_004a50b0
// Address: 004a50b0
// Address Range: [[004a50b0, 004a51f4]]
// Convention: unknown
// Signature: void FUN_004a50b0(undefined1 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a50b0(byte *param_1)

{
  char cVar1;
  byte *puVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  puVar2 = (byte *)0x1cab9f4;
  do {
    FUN_004a3570(puVar2);
    puVar2 = puVar2 + 0x2e4;
  } while (puVar2 != &DAT_01cacb4c);
  puVar2 = (byte *)0x1cacb50;
  _DAT_01cab9f0 = 0;
  do {
    FUN_004a3860(puVar2);
    puVar2 = puVar2 + 0x970;
  } while (puVar2 != &DAT_01caf110);
  pcVar4 = "fieldnote";
  pcVar5 = &DAT_01cab7a8;
  _DAT_01cacb4c = 0;
  DAT_01cab788 = 0;
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
  iVar3 = 0x1caf128;
  FUN_0040d540(0x1caf114);
  do {
    FUN_0040d540(iVar3);
    iVar3 = iVar3 + 0x14;
  } while (iVar3 != 0x1caf1a0);
  FUN_0040d540(0x1caf1a0);
  FUN_0040d540(0x1caf1b4);
  FUN_0040d540(0x1caf1c8);
  FUN_0040d540(0x1caf1dc);
  FUN_0040d540(0x1caf1f0);
  FUN_0040d540(0x1caf204);
  FUN_0040d540(0x1caf218);
  FUN_0040d540(0x1caf22c);
  DAT_00616010 = 1;
  _DAT_01caf488 = 0;
  DAT_00616040 = 0xffffffff;
  _DAT_01caf568 = 0;
  DAT_01caf4a0 = 0;
  *param_1 = 0;
  return;
}
