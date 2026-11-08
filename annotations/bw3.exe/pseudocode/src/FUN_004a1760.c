// Name: FUN_004a1760
// Address: 004a1760
// Address Range: [[004a1760, 004a1ac4]]
// Convention: unknown
// Signature: void FUN_004a1760(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a1760(void)

{
  bool bVar1;
  int *piVar2;
  byte *puVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = (int *)&DAT_01c74ea0;
  _DAT_01cf5088 = 0;
  FUN_0049c620();
  do {
    if (*piVar2 != 0) {
      FUN_00496e00(piVar2);
    }
    piVar2 = piVar2 + 0xb;
  } while (piVar2 != (int *)&DAT_01c8aea0);
  puVar3 = (byte *)0x1cb4eb4;
  do {
    if (0.0 < *(float *)(puVar3 + 0x24)) {
      (**(code **)(*(int *)(puVar3 + 0x3c) + 4))(puVar3);
    }
    puVar3 = puVar3 + 0x54;
  } while (puVar3 != &DAT_01cba2b4);
  puVar3 = (byte *)0x1cba2b8;
  do {
    if (0.0 < *(float *)(puVar3 + 0x24)) {
      (**(code **)(*(int *)(puVar3 + 0x3c) + 4))(puVar3);
    }
    puVar3 = puVar3 + 0x5c;
  } while (puVar3 != &DAT_01cbb9b8);
  piVar2 = (int *)&DAT_01cbb9bc;
  do {
    if (*piVar2 != 0) {
      FUN_0049a450(piVar2);
    }
    piVar2 = piVar2 + 0x17;
  } while (piVar2 != (int *)&DAT_01cbc0ec);
  iVar5 = 0;
  if (0 < _DAT_01c8eea8) {
    iVar4 = 0x1c8eeb0;
    do {
      if (*(int *)(iVar4 + 600) != 0) {
        FUN_00497e80(iVar4);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x260;
    } while (iVar5 < _DAT_01c8eea8);
  }
  iVar5 = 0x1cbc0f0;
  do {
    if (0.0 < *(float *)(iVar5 + 0x24)) {
      (**(code **)(*(int *)(iVar5 + 0x3c) + 4))(iVar5);
    }
    iVar5 = iVar5 + 0xd4;
  } while (iVar5 != 0x1cefd10);
  puVar3 = (byte *)0x1cefd14;
  do {
    if (*(int *)(puVar3 + 0x20) != 0) {
      FUN_0049ad00(puVar3);
    }
    puVar3 = puVar3 + 0x24;
  } while (puVar3 != &DAT_01cefe7c);
  puVar3 = (byte *)0x1cefe80;
  do {
    if (0.0 < *(float *)(puVar3 + 0x24)) {
      (**(code **)(*(int *)(puVar3 + 0x3c) + 4))(puVar3);
    }
    puVar3 = puVar3 + 0xa4;
  } while (puVar3 != &DAT_01cf2780);
  puVar3 = (byte *)0x1cf2784;
  do {
    if (0.0 < *(float *)(puVar3 + 0x24)) {
      (**(code **)(*(int *)(puVar3 + 0x3c) + 4))(puVar3);
    }
    puVar3 = puVar3 + 0x50;
  } while (puVar3 != &DAT_01cf3b84);
  puVar3 = (byte *)0x1cf3b88;
  do {
    if (0.0 < *(float *)(puVar3 + 0x24)) {
      (**(code **)(*(int *)(puVar3 + 0x3c) + 4))(puVar3);
    }
    puVar3 = puVar3 + 0x54;
  } while (puVar3 != &DAT_01cf5088);
  puVar3 = (byte *)0x1cba2b8;
  do {
    if (0.0 < *(float *)(puVar3 + 0x24)) {
      (**(code **)(*(int *)(puVar3 + 0x3c) + 4))(puVar3);
    }
    puVar3 = puVar3 + 0x5c;
  } while (puVar3 != &DAT_01cbb9b8);
  iVar5 = 0;
  if (0 < _DAT_01c8aea0) {
    puVar3 = &DAT_01c8aea8;
    do {
      FUN_00497540(puVar3);
      iVar5 = iVar5 + 1;
      puVar3 = puVar3 + 0x40;
    } while (iVar5 < _DAT_01c8aea0);
  }
  puVar3 = (byte *)0x1cf6090;
  do {
    FUN_0049c890(puVar3);
    puVar3 = puVar3 + 0x20;
  } while (puVar3 != &DAT_01cf61d0);
  puVar3 = (byte *)0x1cf61d4;
  do {
    FUN_0049d090(puVar3);
    puVar3 = puVar3 + 1000;
  } while (puVar3 != &DAT_01cfaff4);
  puVar3 = (byte *)0x1cfaff8;
  do {
    FUN_0049d8b0(puVar3);
    puVar3 = puVar3 + 0x70;
  } while (puVar3 != &DAT_01cfb8b8);
  puVar3 = (byte *)0x1cfb8bc;
  bVar1 = false;
  do {
    if ((*(uint *)(puVar3 + 0xc) & 0x7fffffff) != 0) {
      if (!bVar1) {
        FUN_0049de60();
        bVar1 = true;
      }
      FUN_0049e390(puVar3);
    }
    puVar3 = puVar3 + 0x2c;
  } while (puVar3 != &DAT_01d00eac);
  puVar3 = (byte *)0x1d00eb0;
  do {
    FUN_0049f4e0(puVar3);
    puVar3 = puVar3 + 0x30;
  } while (puVar3 != &DAT_01d01ab0);
  puVar3 = (byte *)0x1d01ab4;
  do {
    FUN_004a0630(puVar3);
    puVar3 = puVar3 + 0x24;
  } while (puVar3 != &DAT_01d028c4);
  puVar3 = (byte *)0x1d028c8;
  do {
    (**(code **)(*(int *)(puVar3 + 0x3c) + 4))(puVar3);
    puVar3 = puVar3 + 0x60;
  } while (puVar3 != &DAT_01d03b88);
  puVar3 = (byte *)0x1d03b8c;
  do {
    if (0.0 < *(float *)(puVar3 + 0x24)) {
      (**(code **)(*(int *)(puVar3 + 0x3c) + 4))(puVar3);
    }
    puVar3 = puVar3 + 0x40;
  } while (puVar3 != &DAT_01d07b8c);
  puVar3 = (byte *)0x1d07b90;
  do {
    if (0.0 < *(float *)(puVar3 + 0x24)) {
      (**(code **)(*(int *)(puVar3 + 0x3c) + 4))(puVar3);
    }
    puVar3 = puVar3 + 0x40;
  } while (puVar3 != &DAT_01d0bb90);
  puVar3 = (byte *)0x1d0bb94;
  do {
    FUN_0049fdf0(puVar3);
    puVar3 = puVar3 + 0x1e4;
  } while (puVar3 != &DAT_01d0ce7c);
  iVar5 = 0x1d0ce80;
  do {
    FUN_004a0570(iVar5);
    iVar5 = iVar5 + 0xc;
  } while (iVar5 != 0x1d0ceb0);
  return;
}
