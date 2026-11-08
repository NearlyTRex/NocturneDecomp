// Name: FUN_0049c430
// Address: 0049c430
// Address Range: [[0049c430, 0049c77d]]
// Convention: unknown
// Signature: void FUN_0049c430(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049c430(void)

{
  bool bVar1;
  int *piVar2;
  byte *puVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  
  piVar2 = (int *)&DAT_01c3f8e0;
  _DAT_01c965dc = 0;
  FUN_00498c30();
  do {
    if (*piVar2 != 0) {
      FUN_004935b0(piVar2);
    }
    piVar2 = piVar2 + 0xb;
  } while (piVar2 != (int *)&DAT_01c558e0);
  puVar3 = (byte *)0x1c7f4f4;
  do {
    if (0.0 < *(float *)(puVar3 + 0x24)) {
      (**(code **)(*(int *)(puVar3 + 0x3c) + 4))(puVar3);
    }
    puVar3 = puVar3 + 0x54;
  } while (puVar3 != &DAT_01c848f4);
  puVar3 = (byte *)0x1c848f8;
  do {
    if (0.0 < *(float *)(puVar3 + 0x24)) {
      (**(code **)(*(int *)(puVar3 + 0x3c) + 4))(puVar3);
    }
    puVar3 = puVar3 + 0x5c;
  } while (puVar3 != &DAT_01c85ff8);
  piVar2 = (int *)&DAT_01c86730;
  piVar6 = (int *)&DAT_01c85ffc;
  do {
    if (*piVar6 != 0) {
      FUN_00496a60(piVar6);
    }
    if (*piVar2 != 0) {
      FUN_0059d420(piVar2);
    }
    piVar2 = piVar2 + 0x17;
    piVar6 = piVar6 + 0x17;
  } while (piVar2 != (int *)&DAT_01c86e60);
  iVar7 = 0;
  if (0 < _DAT_01c594e8) {
    iVar4 = 0x1c594f0;
    do {
      if (*(int *)(iVar4 + 600) != 0) {
        FUN_00494580(iVar4);
      }
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + 0x260;
    } while (iVar7 < _DAT_01c594e8);
  }
  iVar7 = 0x1c86e64;
  do {
    if (0.0 < *(float *)(iVar7 + 0x24)) {
      (**(code **)(*(int *)(iVar7 + 0x3c) + 4))(iVar7);
    }
    iVar7 = iVar7 + 0xa4;
  } while (iVar7 != 0x1c91264);
  puVar3 = (byte *)0x1c91268;
  do {
    if (*(int *)(puVar3 + 0x20) != 0) {
      FUN_00497330(puVar3);
    }
    puVar3 = puVar3 + 0x24;
  } while (puVar3 != &DAT_01c913d0);
  puVar3 = (byte *)0x1c913d4;
  do {
    if (0.0 < *(float *)(puVar3 + 0x24)) {
      (**(code **)(*(int *)(puVar3 + 0x3c) + 4))(puVar3);
    }
    puVar3 = puVar3 + 0xa4;
  } while (puVar3 != &DAT_01c93cd4);
  puVar3 = (byte *)0x1c93cd8;
  do {
    if (0.0 < *(float *)(puVar3 + 0x24)) {
      (**(code **)(*(int *)(puVar3 + 0x3c) + 4))(puVar3);
    }
    puVar3 = puVar3 + 0x50;
  } while (puVar3 != &DAT_01c950d8);
  puVar3 = (byte *)0x1c950dc;
  do {
    if (0.0 < *(float *)(puVar3 + 0x24)) {
      (**(code **)(*(int *)(puVar3 + 0x3c) + 4))(puVar3);
    }
    puVar3 = puVar3 + 0x54;
  } while (puVar3 != &DAT_01c965dc);
  puVar3 = (byte *)0x1c848f8;
  do {
    if (0.0 < *(float *)(puVar3 + 0x24)) {
      (**(code **)(*(int *)(puVar3 + 0x3c) + 4))(puVar3);
    }
    puVar3 = puVar3 + 0x5c;
  } while (puVar3 != &DAT_01c85ff8);
  iVar7 = 0;
  if (0 < _DAT_01c558e0) {
    puVar3 = &DAT_01c558e8;
    do {
      FUN_00493cf0(puVar3);
      iVar7 = iVar7 + 1;
      puVar3 = puVar3 + 0x3c;
    } while (iVar7 < _DAT_01c558e0);
  }
  puVar3 = (byte *)0x1c975e4;
  do {
    FUN_00498e80(puVar3);
    puVar3 = puVar3 + 0x1c;
  } while (puVar3 != &DAT_01c976fc);
  puVar3 = (byte *)0x1c97700;
  do {
    FUN_004993f0(puVar3);
    puVar3 = puVar3 + 0x3e4;
  } while (puVar3 != &DAT_01c9c4d0);
  puVar3 = (byte *)0x1c9c4d4;
  do {
    FUN_00499930(puVar3);
    puVar3 = puVar3 + 0x70;
  } while (puVar3 != &DAT_01c9cd94);
  puVar5 = (uint *)&DAT_01c9cd98;
  bVar1 = false;
  do {
    if ((*puVar5 & 0x7fffffff) != 0) {
      if (!bVar1) {
        FUN_00499ee0();
        bVar1 = true;
      }
      FUN_0049a3a0(puVar5);
    }
    puVar5 = puVar5 + 9;
  } while (puVar5 != (uint *)&DAT_01ca13e8);
  puVar3 = (byte *)0x1ca13ec;
  do {
    FUN_0049ab90(puVar3);
    puVar3 = puVar3 + 0x2c;
  } while (puVar3 != &DAT_01ca15a4);
  puVar3 = (byte *)0x1ca15a8;
  do {
    FUN_0049b330(puVar3);
    puVar3 = puVar3 + 0x24;
  } while (puVar3 != &DAT_01ca23b8);
  puVar3 = (byte *)0x1ca23bc;
  do {
    (**(code **)(*(int *)(puVar3 + 0x3c) + 4))(puVar3);
    puVar3 = puVar3 + 0x60;
  } while (puVar3 != &DAT_01ca367c);
  puVar3 = (byte *)0x1ca3680;
  do {
    if (0.0 < *(float *)(puVar3 + 0x24)) {
      (**(code **)(*(int *)(puVar3 + 0x3c) + 4))(puVar3);
    }
    puVar3 = puVar3 + 0x40;
  } while (puVar3 != &DAT_01ca7680);
  iVar7 = 0x1ca7684;
  do {
    if (0.0 < *(float *)(iVar7 + 0x24)) {
      (**(code **)(*(int *)(iVar7 + 0x3c) + 4))(iVar7);
    }
    iVar7 = iVar7 + 0x40;
  } while (iVar7 != 0x1cab684);
  return;
}
