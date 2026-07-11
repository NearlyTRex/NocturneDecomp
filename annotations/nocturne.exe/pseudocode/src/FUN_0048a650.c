// Name: FUN_0048a650
// Address: 0048a650
// Address Range: [[0048a650, 0048a967]]
// Convention: unknown
// Signature: void FUN_0048a650(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048a650(void)

{
  int iVar1;
  byte *puVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < _DAT_01c23d48) {
    iVar1 = 0;
    do {
      if (*(int *)(iVar1 + 0x1c23d50) == 0) {
        FUN_004835d0(iVar1 + 0x1c23d50);
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + 0x260;
    } while (iVar4 < _DAT_01c23d48);
  }
  puVar2 = (byte *)0x1c5b500;
  do {
    if (0.0 < *(float *)(puVar2 + 0x18)) {
      (**(code **)(*(int *)(puVar2 + 0x34) + 8))(puVar2);
    }
    puVar2 = puVar2 + 0x48;
  } while (puVar2 != &DAT_01c5c700);
  puVar2 = (byte *)0x1c58dfc;
  FUN_004842a0(0x1c58dfc);
  do {
    if (0.0 < *(float *)(puVar2 + 0x18)) {
      (**(code **)(*(int *)(puVar2 + 0x34) + 8))(puVar2);
    }
    puVar2 = puVar2 + 0x9c;
  } while (puVar2 != &DAT_01c5b4fc);
  puVar2 = (byte *)0x1c684e0;
  do {
    (**(code **)(*(int *)(puVar2 + 0x34) + 8))(puVar2);
    puVar2 = puVar2 + 0x58;
  } while (puVar2 != &DAT_01c69610);
  iVar4 = FUN_00461090(DAT_005ae704);
  if (iVar4 == 0) {
    FUN_0050adc0(0x01E57284,0,0,0,0,0);
    iVar4 = 0;
    FUN_00482ed0(&DAT_01c20148);
    if (0 < _DAT_01c20140) {
      iVar1 = 0;
      do {
        if (*(int *)(iVar1 + 0x1c20158) != 0) {
          FUN_00482f50(&DAT_01c20148 + iVar1);
        }
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + 0x3c;
      } while (iVar4 < _DAT_01c20140);
    }
    piVar3 = (int *)&DAT_01c0a140;
    FUN_00482680(&DAT_01c0a140);
    do {
      if (*piVar3 != 0) {
        FUN_00482950(piVar3);
      }
      piVar3 = piVar3 + 0xb;
    } while (piVar3 != (int *)&DAT_01c20140);
    piVar3 = (int *)&DAT_01c4e958;
    do {
      if (*piVar3 != 0) {
        FUN_00484f00(piVar3);
      }
      piVar3 = piVar3 + 0x17;
    } while (piVar3 != (int *)&DAT_01c4f088);
    iVar4 = 0;
    if (0 < _DAT_01c5c700) {
      iVar1 = 0x1c5c704;
      do {
        FUN_00485a90(iVar1);
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + 0x40;
      } while (iVar4 < _DAT_01c5c700);
    }
    puVar2 = (byte *)0x1c49d54;
    FUN_004837a0(0x1c49d54);
    do {
      if (0.0 < *(float *)(puVar2 + 0x18)) {
        (**(code **)(*(int *)(puVar2 + 0x34) + 8))(puVar2);
      }
      puVar2 = puVar2 + 0x4c;
    } while (puVar2 != &DAT_01c4e954);
    iVar4 = 0x1c4f08c;
    do {
      if (0.0 < *(float *)(iVar4 + 0x18)) {
        (**(code **)(*(int *)(iVar4 + 0x34) + 8))(iVar4);
      }
      iVar4 = iVar4 + 0x9c;
    } while (iVar4 != 0x1c58c8c);
    puVar2 = (byte *)0x1c58c90;
    do {
      if (*(int *)(puVar2 + 0x20) != 0) {
        FUN_004856c0(puVar2);
      }
      puVar2 = puVar2 + 0x24;
    } while (puVar2 != &DAT_01c58df8);
    puVar2 = (byte *)0x1c5d708;
    do {
      FUN_00486fe0(puVar2);
      puVar2 = puVar2 + 0x1c;
    } while (puVar2 != &DAT_01c5d820);
    puVar2 = (byte *)0x1c5d824;
    do {
      FUN_00487630(puVar2);
      puVar2 = puVar2 + 0x3e4;
    } while (puVar2 != &DAT_01c625f4);
    puVar2 = &DAT_01c62ebc;
    do {
      FUN_00488580(puVar2);
      puVar2 = puVar2 + 0x24;
    } while (puVar2 != &DAT_01c6750c);
    puVar2 = (byte *)0x1c67510;
    do {
      FUN_00488bf0(puVar2);
      puVar2 = puVar2 + 0x2c;
    } while (puVar2 != &DAT_01c676c8);
    puVar2 = (byte *)0x1c676cc;
    do {
      FUN_00489360(puVar2);
      puVar2 = puVar2 + 0x24;
    } while (puVar2 != &DAT_01c684dc);
    puVar2 = (byte *)0x1c69614;
    do {
      if (0.0 < *(float *)(puVar2 + 0x18)) {
        (**(code **)(*(int *)(puVar2 + 0x34) + 8))(puVar2);
      }
      puVar2 = puVar2 + 0x38;
    } while (puVar2 != &DAT_01c6ce14);
    iVar4 = 0x1c6ce18;
    do {
      if (0.0 < *(float *)(iVar4 + 0x18)) {
        (**(code **)(*(int *)(iVar4 + 0x34) + 8))(iVar4);
      }
      iVar4 = iVar4 + 0x38;
    } while (iVar4 != 0x1c70618);
  }
  return;
}
