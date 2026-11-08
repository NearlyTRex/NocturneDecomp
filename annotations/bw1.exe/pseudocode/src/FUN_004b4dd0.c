// Name: FUN_004b4dd0
// Address: 004b4dd0
// Address Range: [[004b4dd0, 004b50fd]]
// Convention: unknown
// Signature: void FUN_004b4dd0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b4dd0(void)

{
  bool bVar1;
  int *piVar2;
  byte *puVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  
  piVar2 = (int *)&DAT_01c58aa0;
  _DAT_01caf068 = 0;
  FUN_004b15d0();
  do {
    if (*piVar2 != 0) {
      FUN_004abf50(piVar2);
    }
    piVar2 = piVar2 + 0xb;
  } while (piVar2 != (int *)&DAT_01c6eaa0);
  puVar3 = (byte *)0x1c986b4;
  do {
    if (0.0 < *(float *)(puVar3 + 0x24)) {
      (**(code **)(*(int *)(puVar3 + 0x3c) + 4))(puVar3);
    }
    puVar3 = puVar3 + 0x54;
  } while (puVar3 != &DAT_01c9dab4);
  puVar3 = (byte *)0x1c9dab8;
  do {
    if (0.0 < *(float *)(puVar3 + 0x24)) {
      (**(code **)(*(int *)(puVar3 + 0x3c) + 4))(puVar3);
    }
    puVar3 = puVar3 + 0x5c;
  } while (puVar3 != &DAT_01c9f1b8);
  piVar2 = (int *)&DAT_01c9f1bc;
  do {
    if (*piVar2 != 0) {
      FUN_004af400(piVar2);
    }
    piVar2 = piVar2 + 0x17;
  } while (piVar2 != (int *)&DAT_01c9f8ec);
  iVar6 = 0;
  if (0 < _DAT_01c726a8) {
    iVar4 = 0x1c726b0;
    do {
      if (*(int *)(iVar4 + 600) != 0) {
        FUN_004acf20(iVar4);
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 0x260;
    } while (iVar6 < _DAT_01c726a8);
  }
  iVar6 = 0x1c9f8f0;
  do {
    if (0.0 < *(float *)(iVar6 + 0x24)) {
      (**(code **)(*(int *)(iVar6 + 0x3c) + 4))(iVar6);
    }
    iVar6 = iVar6 + 0xa4;
  } while (iVar6 != 0x1ca9cf0);
  puVar3 = (byte *)0x1ca9cf4;
  do {
    if (*(int *)(puVar3 + 0x20) != 0) {
      FUN_004afcd0(puVar3);
    }
    puVar3 = puVar3 + 0x24;
  } while (puVar3 != &DAT_01ca9e5c);
  puVar3 = (byte *)0x1ca9e60;
  do {
    if (0.0 < *(float *)(puVar3 + 0x24)) {
      (**(code **)(*(int *)(puVar3 + 0x3c) + 4))(puVar3);
    }
    puVar3 = puVar3 + 0xa4;
  } while (puVar3 != &DAT_01cac760);
  puVar3 = (byte *)0x1cac764;
  do {
    if (0.0 < *(float *)(puVar3 + 0x24)) {
      (**(code **)(*(int *)(puVar3 + 0x3c) + 4))(puVar3);
    }
    puVar3 = puVar3 + 0x50;
  } while (puVar3 != &DAT_01cadb64);
  puVar3 = (byte *)0x1cadb68;
  do {
    if (0.0 < *(float *)(puVar3 + 0x24)) {
      (**(code **)(*(int *)(puVar3 + 0x3c) + 4))(puVar3);
    }
    puVar3 = puVar3 + 0x54;
  } while (puVar3 != &DAT_01caf068);
  puVar3 = (byte *)0x1c9dab8;
  do {
    if (0.0 < *(float *)(puVar3 + 0x24)) {
      (**(code **)(*(int *)(puVar3 + 0x3c) + 4))(puVar3);
    }
    puVar3 = puVar3 + 0x5c;
  } while (puVar3 != &DAT_01c9f1b8);
  iVar6 = 0;
  if (0 < _DAT_01c6eaa0) {
    puVar3 = &DAT_01c6eaa8;
    do {
      FUN_004ac690(puVar3);
      iVar6 = iVar6 + 1;
      puVar3 = puVar3 + 0x3c;
    } while (iVar6 < _DAT_01c6eaa0);
  }
  puVar3 = (byte *)0x1cb0070;
  do {
    FUN_004b1820(puVar3);
    puVar3 = puVar3 + 0x1c;
  } while (puVar3 != &DAT_01cb0188);
  puVar3 = (byte *)0x1cb018c;
  do {
    FUN_004b1d90(puVar3);
    puVar3 = puVar3 + 0x3e4;
  } while (puVar3 != &DAT_01cb4f5c);
  puVar3 = (byte *)0x1cb4f60;
  do {
    FUN_004b22d0(puVar3);
    puVar3 = puVar3 + 0x70;
  } while (puVar3 != &DAT_01cb5820);
  puVar5 = (uint *)&DAT_01cb5824;
  bVar1 = false;
  do {
    if ((*puVar5 & 0x7fffffff) != 0) {
      if (!bVar1) {
        FUN_004b2880();
        bVar1 = true;
      }
      FUN_004b2d40(puVar5);
    }
    puVar5 = puVar5 + 9;
  } while (puVar5 != (uint *)&DAT_01cb9e74);
  puVar3 = (byte *)0x1cb9e78;
  do {
    FUN_004b3530(puVar3);
    puVar3 = puVar3 + 0x2c;
  } while (puVar3 != &DAT_01cba030);
  puVar3 = (byte *)0x1cba034;
  do {
    FUN_004b3cd0(puVar3);
    puVar3 = puVar3 + 0x24;
  } while (puVar3 != &DAT_01cbae44);
  puVar3 = (byte *)0x1cbae48;
  do {
    (**(code **)(*(int *)(puVar3 + 0x3c) + 4))(puVar3);
    puVar3 = puVar3 + 0x60;
  } while (puVar3 != &DAT_01cbc108);
  puVar3 = (byte *)0x1cbc10c;
  do {
    if (0.0 < *(float *)(puVar3 + 0x24)) {
      (**(code **)(*(int *)(puVar3 + 0x3c) + 4))(puVar3);
    }
    puVar3 = puVar3 + 0x40;
  } while (puVar3 != &DAT_01cc010c);
  iVar6 = 0x1cc0110;
  do {
    if (0.0 < *(float *)(iVar6 + 0x24)) {
      (**(code **)(*(int *)(iVar6 + 0x3c) + 4))(iVar6);
    }
    iVar6 = iVar6 + 0x40;
  } while (iVar6 != 0x1cc4110);
  return;
}
