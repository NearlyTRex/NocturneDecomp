// Name: FUN_0049c780
// Address: 0049c780
// Address Range: [[0049c780, 0049cb4c]]
// Convention: unknown
// Signature: void FUN_0049c780(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049c780(void)

{
  int iVar1;
  byte *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = 0;
  if (0 < _DAT_01c594e8) {
    iVar1 = 0;
    do {
      if (*(int *)(iVar1 + 0x1c594f0) == 0) {
        FUN_004944c0(iVar1 + 0x1c594f0);
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + 0x260;
    } while (iVar4 < _DAT_01c594e8);
  }
  puVar2 = (byte *)0x1c93cd8;
  do {
    if (0.0 < *(float *)(puVar2 + 0x24)) {
      (**(code **)(*(int *)(puVar2 + 0x3c) + 8))(puVar2);
    }
    puVar2 = puVar2 + 0x50;
  } while (puVar2 != &DAT_01c950d8);
  puVar2 = (byte *)0x1c950dc;
  do {
    if (0.0 < *(float *)(puVar2 + 0x24)) {
      (**(code **)(*(int *)(puVar2 + 0x3c) + 8))(puVar2);
    }
    puVar2 = puVar2 + 0x54;
  } while (puVar2 != &DAT_01c965dc);
  puVar2 = (byte *)0x1c848f8;
  do {
    if (0.0 < *(float *)(puVar2 + 0x24)) {
      (**(code **)(*(int *)(puVar2 + 0x3c) + 8))(puVar2);
    }
    puVar2 = puVar2 + 0x5c;
  } while (puVar2 != &DAT_01c85ff8);
  puVar2 = (byte *)0x1c913d4;
  FUN_00495bb0(0x1c913d4);
  do {
    if (0.0 < *(float *)(puVar2 + 0x24)) {
      (**(code **)(*(int *)(puVar2 + 0x3c) + 8))(puVar2);
    }
    puVar2 = puVar2 + 0xa4;
  } while (puVar2 != &DAT_01c93cd4);
  puVar2 = (byte *)0x1ca23bc;
  do {
    (**(code **)(*(int *)(puVar2 + 0x3c) + 8))(puVar2);
    puVar2 = puVar2 + 0x60;
  } while (puVar2 != &DAT_01ca367c);
  iVar4 = FUN_0046b960(DAT_0060b280);
  if (iVar4 == 0) {
    FUN_00530980(0x01E661B8,0,0,0,0,0);
    iVar4 = 0;
    FUN_00493d50(&DAT_01c558e8);
    if (0 < _DAT_01c558e0) {
      iVar1 = 0;
      do {
        if (*(int *)(iVar1 + 0x1c558f8) != 0) {
          FUN_00493dd0(&DAT_01c558e8 + iVar1);
        }
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + 0x3c;
      } while (iVar4 < _DAT_01c558e0);
    }
    piVar3 = (int *)&DAT_01c3f8e0;
    FUN_00493410(&DAT_01c3f8e0);
    do {
      if (*piVar3 != 0) {
        FUN_00493710(piVar3);
      }
      piVar3 = piVar3 + 0xb;
    } while (piVar3 != (int *)&DAT_01c558e0);
    piVar3 = (int *)&DAT_01c86730;
    piVar5 = (int *)&DAT_01c85ffc;
    do {
      if (*piVar5 != 0) {
        FUN_00496a90(piVar5);
      }
      if (*piVar3 != 0) {
        FUN_0059d440(piVar3);
      }
      piVar3 = piVar3 + 0x17;
      piVar5 = piVar5 + 0x17;
    } while (piVar3 != (int *)&DAT_01c86e60);
    iVar4 = 0;
    if (0 < _DAT_01c965dc) {
      iVar1 = 0x1c965e0;
      do {
        FUN_00497800(iVar1);
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + 0x40;
      } while (iVar4 < _DAT_01c965dc);
    }
    puVar2 = (byte *)0x1c7f4f4;
    FUN_00494670(0x1c7f4f4);
    do {
      if (0.0 < *(float *)(puVar2 + 0x24)) {
        (**(code **)(*(int *)(puVar2 + 0x3c) + 8))(puVar2);
      }
      puVar2 = puVar2 + 0x54;
    } while (puVar2 != &DAT_01c848f4);
    puVar2 = (byte *)0x1c848f8;
    FUN_00495020(0x1c848f8);
    do {
      if (0.0 < *(float *)(puVar2 + 0x24)) {
        (**(code **)(*(int *)(puVar2 + 0x3c) + 8))(puVar2);
      }
      puVar2 = puVar2 + 0x5c;
    } while (puVar2 != &DAT_01c85ff8);
    iVar4 = 0x1c86e64;
    do {
      if (0.0 < *(float *)(iVar4 + 0x24)) {
        (**(code **)(*(int *)(iVar4 + 0x3c) + 8))(iVar4);
      }
      iVar4 = iVar4 + 0xa4;
    } while (iVar4 != 0x1c91264);
    puVar2 = (byte *)0x1c91268;
    do {
      if (*(int *)(puVar2 + 0x20) != 0) {
        FUN_00497350(puVar2);
      }
      puVar2 = puVar2 + 0x24;
    } while (puVar2 != &DAT_01c913d0);
    puVar2 = (byte *)0x1c975e4;
    do {
      FUN_00498ed0(puVar2);
      puVar2 = puVar2 + 0x1c;
    } while (puVar2 != &DAT_01c976fc);
    puVar2 = (byte *)0x1c97700;
    do {
      FUN_00499570(puVar2);
      puVar2 = puVar2 + 0x3e4;
    } while (puVar2 != &DAT_01c9c4d0);
    puVar2 = &DAT_01c9cd98;
    do {
      FUN_0049a500(puVar2);
      puVar2 = puVar2 + 0x24;
    } while (puVar2 != &DAT_01ca13e8);
    puVar2 = (byte *)0x1ca13ec;
    do {
      FUN_0049abd0(puVar2);
      puVar2 = puVar2 + 0x2c;
    } while (puVar2 != &DAT_01ca15a4);
    puVar2 = (byte *)0x1ca15a8;
    do {
      FUN_0049b380(puVar2);
      puVar2 = puVar2 + 0x24;
    } while (puVar2 != &DAT_01ca23b8);
    puVar2 = (byte *)0x1ca3680;
    do {
      if (0.0 < *(float *)(puVar2 + 0x24)) {
        (**(code **)(*(int *)(puVar2 + 0x3c) + 8))(puVar2);
      }
      puVar2 = puVar2 + 0x40;
    } while (puVar2 != &DAT_01ca7680);
    iVar4 = 0x1ca7684;
    do {
      if (0.0 < *(float *)(iVar4 + 0x24)) {
        (**(code **)(*(int *)(iVar4 + 0x3c) + 8))(iVar4);
      }
      iVar4 = iVar4 + 0x40;
    } while (iVar4 != 0x1cab684);
    FUN_0046b880(DAT_0060b280,0);
    FUN_005a8290(0x026687B0);
  }
  return;
}
