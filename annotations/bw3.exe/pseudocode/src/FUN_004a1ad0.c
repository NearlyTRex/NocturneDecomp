// Name: FUN_004a1ad0
// Address: 004a1ad0
// Address Range: [[004a1ad0, 004a1e8b]]
// Convention: unknown
// Signature: uint FUN_004a1ad0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004a1ad0(void)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  byte *puVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < _DAT_01c8eea8) {
    iVar3 = 0;
    do {
      if (*(int *)(iVar3 + 0x1c8eeb0) == 0) {
        FUN_00497dc0(iVar3 + 0x1c8eeb0);
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + 0x260;
    } while (iVar6 < _DAT_01c8eea8);
  }
  puVar4 = (byte *)0x1cf2784;
  do {
    if (0.0 < *(float *)(puVar4 + 0x24)) {
      (**(code **)(*(int *)(puVar4 + 0x3c) + 8))(puVar4);
    }
    puVar4 = puVar4 + 0x50;
  } while (puVar4 != &DAT_01cf3b84);
  puVar4 = (byte *)0x1cf3b88;
  do {
    if (0.0 < *(float *)(puVar4 + 0x24)) {
      (**(code **)(*(int *)(puVar4 + 0x3c) + 8))(puVar4);
    }
    puVar4 = puVar4 + 0x54;
  } while (puVar4 != &DAT_01cf5088);
  puVar4 = (byte *)0x1cba2b8;
  do {
    if (0.0 < *(float *)(puVar4 + 0x24)) {
      (**(code **)(*(int *)(puVar4 + 0x3c) + 8))(puVar4);
    }
    puVar4 = puVar4 + 0x5c;
  } while (puVar4 != &DAT_01cbb9b8);
  puVar4 = (byte *)0x1cefe80;
  FUN_004995a0(0x1cefe80);
  do {
    if (0.0 < *(float *)(puVar4 + 0x24)) {
      (**(code **)(*(int *)(puVar4 + 0x3c) + 8))(puVar4);
    }
    puVar4 = puVar4 + 0xa4;
  } while (puVar4 != &DAT_01cf2780);
  puVar4 = (byte *)0x1d028c8;
  do {
    (**(code **)(*(int *)(puVar4 + 0x3c) + 8))(puVar4);
    puVar4 = puVar4 + 0x60;
  } while (puVar4 != &DAT_01d03b88);
  uVar2 = FUN_0046d540(DAT_005f2afc);
  if (uVar2 == 0) {
    FUN_005375c0(0x01ED78C8,0,0,0,0,0);
    iVar6 = 0;
    FUN_004975a0(&DAT_01c8aea8);
    if (0 < _DAT_01c8aea0) {
      iVar3 = 0;
      do {
        if (*(int *)(iVar3 + 0x1c8aeb8) != 0) {
          FUN_00497610(&DAT_01c8aea8 + iVar3);
        }
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + 0x40;
      } while (iVar6 < _DAT_01c8aea0);
    }
    piVar5 = (int *)&DAT_01c74ea0;
    FUN_00496c60(&DAT_01c74ea0);
    do {
      if (*piVar5 != 0) {
        FUN_00496f60(piVar5);
      }
      piVar5 = piVar5 + 0xb;
    } while (piVar5 != (int *)&DAT_01c8aea0);
    piVar5 = (int *)&DAT_01cbb9bc;
    do {
      if (*piVar5 != 0) {
        FUN_0049a480(piVar5);
      }
      piVar5 = piVar5 + 0x17;
    } while (piVar5 != (int *)&DAT_01cbc0ec);
    iVar6 = 0;
    if (0 < _DAT_01cf5088) {
      iVar3 = 0x1cf508c;
      do {
        FUN_0049b1d0(iVar3);
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + 0x40;
      } while (iVar6 < _DAT_01cf5088);
    }
    puVar4 = (byte *)0x1cb4eb4;
    FUN_00497f70(0x1cb4eb4);
    do {
      if (0.0 < *(float *)(puVar4 + 0x24)) {
        (**(code **)(*(int *)(puVar4 + 0x3c) + 8))(puVar4);
      }
      puVar4 = puVar4 + 0x54;
    } while (puVar4 != &DAT_01cba2b4);
    puVar4 = (byte *)0x1cba2b8;
    FUN_00498a10(0x1cba2b8);
    do {
      if (0.0 < *(float *)(puVar4 + 0x24)) {
        (**(code **)(*(int *)(puVar4 + 0x3c) + 8))(puVar4);
      }
      puVar4 = puVar4 + 0x5c;
    } while (puVar4 != &DAT_01cbb9b8);
    iVar6 = 0x1cbc0f0;
    do {
      if (0.0 < *(float *)(iVar6 + 0x24)) {
        (**(code **)(*(int *)(iVar6 + 0x3c) + 8))(iVar6);
      }
      iVar6 = iVar6 + 0xd4;
    } while (iVar6 != 0x1cefd10);
    puVar4 = (byte *)0x1cefd14;
    do {
      if (*(int *)(puVar4 + 0x20) != 0) {
        FUN_0049ad20(puVar4);
      }
      puVar4 = puVar4 + 0x24;
    } while (puVar4 != &DAT_01cefe7c);
    puVar4 = (byte *)0x1cf6090;
    do {
      FUN_0049c8e0(puVar4);
      puVar4 = puVar4 + 0x20;
    } while (puVar4 != &DAT_01cf61d0);
    puVar4 = (byte *)0x1cf61d4;
    do {
      FUN_0049d500(puVar4);
      puVar4 = puVar4 + 1000;
    } while (puVar4 != &DAT_01cfaff4);
    puVar4 = (byte *)0x1cfb8bc;
    do {
      FUN_0049e500(puVar4);
      puVar4 = puVar4 + 0x2c;
    } while (puVar4 != &DAT_01d00eac);
    puVar4 = (byte *)0x1d00eb0;
    do {
      FUN_0049f520(puVar4);
      puVar4 = puVar4 + 0x30;
    } while (puVar4 != &DAT_01d01ab0);
    puVar4 = (byte *)0x1d01ab4;
    do {
      FUN_004a0680(puVar4);
      puVar4 = puVar4 + 0x24;
    } while (puVar4 != &DAT_01d028c4);
    puVar4 = (byte *)0x1d03b8c;
    do {
      if (0.0 < *(float *)(puVar4 + 0x24)) {
        (**(code **)(*(int *)(puVar4 + 0x3c) + 8))(puVar4);
      }
      puVar4 = puVar4 + 0x40;
    } while (puVar4 != &DAT_01d07b8c);
    puVar4 = (byte *)0x1d07b90;
    do {
      fVar1 = *(float *)(puVar4 + 0x24);
      uVar2 = (uint)(ushort)((ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                            (ushort)(fVar1 == 0.0) << 0xe);
      if (0.0 < fVar1) {
        uVar2 = (**(code **)(*(int *)(puVar4 + 0x3c) + 8))(puVar4);
      }
      puVar4 = puVar4 + 0x40;
    } while (puVar4 != &DAT_01d0bb90);
    puVar4 = (byte *)0x1d0bb94;
    do {
      puVar4 = puVar4 + 0x1e4;
    } while (puVar4 != &DAT_01d0ce7c);
  }
  return uVar2;
}
