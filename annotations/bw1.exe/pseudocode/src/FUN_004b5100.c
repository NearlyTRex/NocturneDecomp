// Name: FUN_004b5100
// Address: 004b5100
// Address Range: [[004b5100, 004b549c]]
// Convention: unknown
// Signature: void FUN_004b5100(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b5100(void)

{
  int iVar1;
  byte *puVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < _DAT_01c726a8) {
    iVar1 = 0;
    do {
      if (*(int *)(iVar1 + 0x1c726b0) == 0) {
        FUN_004ace60(iVar1 + 0x1c726b0);
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + 0x260;
    } while (iVar4 < _DAT_01c726a8);
  }
  puVar2 = (byte *)0x1cac764;
  do {
    if (0.0 < *(float *)(puVar2 + 0x24)) {
      (**(code **)(*(int *)(puVar2 + 0x3c) + 8))(puVar2);
    }
    puVar2 = puVar2 + 0x50;
  } while (puVar2 != &DAT_01cadb64);
  puVar2 = (byte *)0x1cadb68;
  do {
    if (0.0 < *(float *)(puVar2 + 0x24)) {
      (**(code **)(*(int *)(puVar2 + 0x3c) + 8))(puVar2);
    }
    puVar2 = puVar2 + 0x54;
  } while (puVar2 != &DAT_01caf068);
  puVar2 = (byte *)0x1c9dab8;
  do {
    if (0.0 < *(float *)(puVar2 + 0x24)) {
      (**(code **)(*(int *)(puVar2 + 0x3c) + 8))(puVar2);
    }
    puVar2 = puVar2 + 0x5c;
  } while (puVar2 != &DAT_01c9f1b8);
  puVar2 = (byte *)0x1ca9e60;
  FUN_004ae550(0x1ca9e60);
  do {
    if (0.0 < *(float *)(puVar2 + 0x24)) {
      (**(code **)(*(int *)(puVar2 + 0x3c) + 8))(puVar2);
    }
    puVar2 = puVar2 + 0xa4;
  } while (puVar2 != &DAT_01cac760);
  puVar2 = (byte *)0x1cbae48;
  do {
    (**(code **)(*(int *)(puVar2 + 0x3c) + 8))(puVar2);
    puVar2 = puVar2 + 0x60;
  } while (puVar2 != &DAT_01cbc108);
  iVar4 = FUN_00483e60(DAT_00612560);
  if (iVar4 == 0) {
    FUN_00551c30(0x01E82168,0,0,0,0,0);
    iVar4 = 0;
    FUN_004ac6f0(&DAT_01c6eaa8);
    if (0 < _DAT_01c6eaa0) {
      iVar1 = 0;
      do {
        if (*(int *)(iVar1 + 0x1c6eab8) != 0) {
          FUN_004ac770(&DAT_01c6eaa8 + iVar1);
        }
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + 0x3c;
      } while (iVar4 < _DAT_01c6eaa0);
    }
    piVar3 = (int *)&DAT_01c58aa0;
    FUN_004abdb0(&DAT_01c58aa0);
    do {
      if (*piVar3 != 0) {
        FUN_004ac0b0(piVar3);
      }
      piVar3 = piVar3 + 0xb;
    } while (piVar3 != (int *)&DAT_01c6eaa0);
    piVar3 = (int *)&DAT_01c9f1bc;
    do {
      if (*piVar3 != 0) {
        FUN_004af430(piVar3);
      }
      piVar3 = piVar3 + 0x17;
    } while (piVar3 != (int *)&DAT_01c9f8ec);
    iVar4 = 0;
    if (0 < _DAT_01caf068) {
      iVar1 = 0x1caf06c;
      do {
        FUN_004b01a0(iVar1);
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + 0x40;
      } while (iVar4 < _DAT_01caf068);
    }
    puVar2 = (byte *)0x1c986b4;
    FUN_004ad010(0x1c986b4);
    do {
      if (0.0 < *(float *)(puVar2 + 0x24)) {
        (**(code **)(*(int *)(puVar2 + 0x3c) + 8))(puVar2);
      }
      puVar2 = puVar2 + 0x54;
    } while (puVar2 != &DAT_01c9dab4);
    puVar2 = (byte *)0x1c9dab8;
    FUN_004ad9c0(0x1c9dab8);
    do {
      if (0.0 < *(float *)(puVar2 + 0x24)) {
        (**(code **)(*(int *)(puVar2 + 0x3c) + 8))(puVar2);
      }
      puVar2 = puVar2 + 0x5c;
    } while (puVar2 != &DAT_01c9f1b8);
    iVar4 = 0x1c9f8f0;
    do {
      if (0.0 < *(float *)(iVar4 + 0x24)) {
        (**(code **)(*(int *)(iVar4 + 0x3c) + 8))(iVar4);
      }
      iVar4 = iVar4 + 0xa4;
    } while (iVar4 != 0x1ca9cf0);
    puVar2 = (byte *)0x1ca9cf4;
    do {
      if (*(int *)(puVar2 + 0x20) != 0) {
        FUN_004afcf0(puVar2);
      }
      puVar2 = puVar2 + 0x24;
    } while (puVar2 != &DAT_01ca9e5c);
    puVar2 = (byte *)0x1cb0070;
    do {
      FUN_004b1870(puVar2);
      puVar2 = puVar2 + 0x1c;
    } while (puVar2 != &DAT_01cb0188);
    puVar2 = (byte *)0x1cb018c;
    do {
      FUN_004b1f10(puVar2);
      puVar2 = puVar2 + 0x3e4;
    } while (puVar2 != &DAT_01cb4f5c);
    puVar2 = &DAT_01cb5824;
    do {
      FUN_004b2ea0(puVar2);
      puVar2 = puVar2 + 0x24;
    } while (puVar2 != &DAT_01cb9e74);
    puVar2 = (byte *)0x1cb9e78;
    do {
      FUN_004b3570(puVar2);
      puVar2 = puVar2 + 0x2c;
    } while (puVar2 != &DAT_01cba030);
    puVar2 = (byte *)0x1cba034;
    do {
      FUN_004b3d20(puVar2);
      puVar2 = puVar2 + 0x24;
    } while (puVar2 != &DAT_01cbae44);
    puVar2 = (byte *)0x1cbc10c;
    do {
      if (0.0 < *(float *)(puVar2 + 0x24)) {
        (**(code **)(*(int *)(puVar2 + 0x3c) + 8))(puVar2);
      }
      puVar2 = puVar2 + 0x40;
    } while (puVar2 != &DAT_01cc010c);
    iVar4 = 0x1cc0110;
    do {
      if (0.0 < *(float *)(iVar4 + 0x24)) {
        (**(code **)(*(int *)(iVar4 + 0x3c) + 8))(iVar4);
      }
      iVar4 = iVar4 + 0x40;
    } while (iVar4 != 0x1cc4110);
  }
  return;
}
