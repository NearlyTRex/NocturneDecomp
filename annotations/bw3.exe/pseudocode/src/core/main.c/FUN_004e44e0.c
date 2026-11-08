// Name: FUN_004e44e0
// Address: 004e44e0
// Address Range: [[004e44e0, 004e4c6d]]
// Convention: unknown
// Signature: void FUN_004e44e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e44e0(void)

{
  uint *puVar1;
  char cVar2;
  float fVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  char acStack_728 [512];
  char acStack_528 [512];
  char acStack_328 [256];
  char acStack_228 [256];
  char acStack_128 [256];
  byte auStack_28 [20];
  int iStack_14;
  
  bVar11 = 0;
  _DAT_01c6e2b0 = 0;
  _DAT_0060683c = 0x10000;
  _DAT_00606830 = 1;
  iVar4 = FUN_005a43ec("stderr.txt",&DAT_005c6b99);
  if (iVar4 != 0) {
    FUN_005a3a90();
    iVar4 = FUN_005a4bd0("stderr.txt",0x1c0);
    if (iVar4 != 0) {
      _DAT_01d71de0 = "..\\core\\main.c";
      _DAT_01d71de4 = 0x3b8;
      FUN_004e4330();
    }
  }
  FUN_005a4484("stderr.txt",&DAT_005c6bee,&DAT_006076ac);
  FUN_004ad4c0();
  FUN_004d8e70();
  _DAT_02cf5fd8 = 2;
  FUN_00514600();
  FUN_00465680();
  FUN_00465680();
  FUN_005084c0();
  FUN_004f7c30();
  if (_DAT_01c6e2a0 == 0) {
    _DAT_01d71de0 = "..\\core\\main.c";
    _DAT_01d71de4 = 0x3df;
    FUN_00508960();
    FUN_004e4330();
  }
  pcVar10 = acStack_728;
  FUN_004e4d00();
  thunk_FUN_0056a960();
  FUN_00401010();
  FUN_00580460();
  FUN_00581c80();
  iVar4 = FUN_00579bb0(0x280,0x1e0,0x20);
  if (iVar4 == 0) {
    _DAT_01d71de0 = "..\\core\\main.c";
    _DAT_01d71de4 = 0x3f7;
    FUN_004e4330();
  }
  FUN_00459f50();
  if (_DAT_02d21b88 < 0x3c00000) {
    pcVar5 = (char *)FUN_00508960();
    pcVar8 = acStack_528;
    do {
      cVar2 = *pcVar5;
      *pcVar8 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar8[1] = cVar2;
      pcVar8 = pcVar8 + 2;
    } while (cVar2 != '\0');
    FUN_005a28c0(acStack_328,&DAT_005c6cf1,(double)((float)_DAT_02d21b88 * _DAT_005c6ea6));
    pcVar8 = acStack_328;
    iVar4 = -1;
    pcVar5 = acStack_528;
    do {
      pcVar9 = pcVar5;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar9 = pcVar5 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar2 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar9 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar9[1] = cVar2;
      pcVar9 = pcVar9 + 2;
    } while (cVar2 != '\0');
    pcVar5 = (char *)FUN_00508960();
    iVar4 = -1;
    pcVar8 = acStack_528;
    do {
      pcVar9 = pcVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar2 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar2 = *pcVar5;
      *pcVar9 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar9[1] = cVar2;
      pcVar9 = pcVar9 + 2;
    } while (cVar2 != '\0');
    pcVar5 = &DAT_005c6d08;
    iVar4 = -1;
    pcVar8 = acStack_528;
    do {
      pcVar9 = pcVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar2 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar2 = *pcVar5;
      *pcVar9 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar9[1] = cVar2;
      pcVar9 = pcVar9 + 2;
    } while (cVar2 != '\0');
    pcVar5 = (char *)FUN_00508960();
    iVar4 = -1;
    pcVar8 = acStack_528;
    do {
      pcVar9 = pcVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar2 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar2 = *pcVar5;
      *pcVar9 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar9[1] = cVar2;
      pcVar9 = pcVar9 + 2;
    } while (cVar2 != '\0');
    pcVar5 = &DAT_005c6d3e;
    iVar4 = -1;
    pcVar8 = acStack_528;
    do {
      pcVar9 = pcVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar2 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar2 = *pcVar5;
      *pcVar9 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar9[1] = cVar2;
      pcVar9 = pcVar9 + 2;
    } while (cVar2 != '\0');
    pcVar5 = (char *)FUN_00508960();
    iVar4 = -1;
    pcVar8 = acStack_528;
    do {
      pcVar9 = pcVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar2 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar2 = *pcVar5;
      *pcVar9 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar9[1] = cVar2;
      pcVar9 = pcVar9 + 2;
    } while (cVar2 != '\0');
    pcVar5 = &DAT_005c6d72;
    iVar4 = -1;
    pcVar8 = acStack_528;
    do {
      pcVar9 = pcVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar2 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar2 = *pcVar5;
      *pcVar9 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar9[1] = cVar2;
      pcVar9 = pcVar9 + 2;
    } while (cVar2 != '\0');
    pcVar5 = (char *)FUN_00508960();
    iVar4 = -1;
    pcVar8 = acStack_528;
    do {
      pcVar9 = pcVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar2 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar2 = *pcVar5;
      *pcVar9 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar9[1] = cVar2;
      pcVar9 = pcVar9 + 2;
    } while (cVar2 != '\0');
    pcVar5 = &DAT_005c6d8e;
    iVar4 = -1;
    pcVar8 = acStack_528;
    do {
      pcVar9 = pcVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar2 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar2 = *pcVar5;
      *pcVar9 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar9[1] = cVar2;
      pcVar9 = pcVar9 + 2;
    } while (cVar2 != '\0');
    pcVar5 = (char *)FUN_00508960();
    iVar4 = -1;
    pcVar8 = acStack_528;
    do {
      pcVar9 = pcVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar2 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar2 = *pcVar5;
      *pcVar9 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar9[1] = cVar2;
      pcVar9 = pcVar9 + 2;
    } while (cVar2 != '\0');
    FUN_0047cee0(0x01C5B0E4,acStack_528);
  }
  if (_DAT_02d21b8c < 0xc800000) {
    pcVar8 = (char *)FUN_00508960();
    do {
      cVar2 = *pcVar8;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    FUN_005a28c0(acStack_128,&DAT_005c6dcb,(double)((float)_DAT_02d21b8c * _DAT_005c6ea6));
    pcVar10 = acStack_128;
    iVar4 = -1;
    pcVar8 = acStack_728;
    do {
      pcVar5 = pcVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar8 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar5;
    } while (cVar2 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar2 = *pcVar10;
      *pcVar5 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar5[1] = cVar2;
      pcVar5 = pcVar5 + 2;
    } while (cVar2 != '\0');
    pcVar8 = (char *)FUN_00508960();
    iVar4 = -1;
    pcVar10 = acStack_728;
    do {
      pcVar5 = pcVar10;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar10 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar5;
    } while (cVar2 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar5 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar5[1] = cVar2;
      pcVar5 = pcVar5 + 2;
    } while (cVar2 != '\0');
    pcVar8 = &DAT_005c6dec;
    iVar4 = -1;
    pcVar10 = acStack_728;
    do {
      pcVar5 = pcVar10;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar10 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar5;
    } while (cVar2 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar5 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar5[1] = cVar2;
      pcVar5 = pcVar5 + 2;
    } while (cVar2 != '\0');
    pcVar8 = (char *)FUN_00508960();
    iVar4 = -1;
    pcVar10 = acStack_728;
    do {
      pcVar5 = pcVar10;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar10 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar5;
    } while (cVar2 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar5 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar5[1] = cVar2;
      pcVar5 = pcVar5 + 2;
    } while (cVar2 != '\0');
    pcVar8 = &DAT_005c6e20;
    iVar4 = -1;
    pcVar10 = acStack_728;
    do {
      pcVar5 = pcVar10;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar10 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar5;
    } while (cVar2 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar5 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar5[1] = cVar2;
      pcVar5 = pcVar5 + 2;
    } while (cVar2 != '\0');
    pcVar8 = (char *)FUN_00508960();
    iVar4 = -1;
    pcVar10 = acStack_728;
    do {
      pcVar5 = pcVar10;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar10 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar5;
    } while (cVar2 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar5 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar5[1] = cVar2;
      pcVar5 = pcVar5 + 2;
    } while (cVar2 != '\0');
    FUN_0047cee0(0x01C5B0E4,acStack_728);
  }
  puVar1 = 0x01D2130C;
  if (_DAT_01d5bc7c != 0) {
    _DAT_01d5bc7c = 0;
    *0x01D2130C = 0x280;
    puVar1[1] = 0x1e0;
    _DAT_02cf5fcc = 0;
    puVar1[2] = 0x20;
    FUN_004e84d0();
  }
  FUN_00582eb0("video","opening.avi");
  FUN_00560d70();
  pcVar8 = (char *)FUN_00508960();
  pcVar10 = acStack_228;
  do {
    cVar2 = *pcVar8;
    *pcVar10 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar10[1] = cVar2;
    pcVar10 = pcVar10 + 2;
  } while (cVar2 != '\0');
  FUN_004b2a80(_DAT_01549aa8,acStack_228);
  FUN_004b30f0(_DAT_01549aa8,0x58);
  FUN_0040d2e0();
  FUN_0040d460(auStack_28,"fangs",0x280,0x1e0);
  FUN_0040d6f0(auStack_28,0,0,0x8000);
  FUN_0057a8a0();
  FUN_0040d300(auStack_28,0);
  FUN_0055fc60();
  iVar4 = 0;
  FUN_004f5aa0();
  iStack_14 = 0;
  do {
    puVar1 = (uint *)((int)&DAT_005f18dc + iVar4);
    iVar4 = iVar4 + 4;
    iVar6 = iStack_14 + 1;
    FUN_00459b80(*puVar1,(float)iStack_14 * (float)_DAT_005c6eaa + (float)_DAT_005c6eaa,0);
    iStack_14 = iVar6;
  } while (iVar6 < 8);
  iVar6 = 0;
  iVar4 = 0;
  do {
    **(uint **)((int)&DAT_005f18fc + iVar6) = 0x100;
    fVar3 = (float)_DAT_005c6eb2;
    *(uint *)(*(int *)((int)&DAT_005f18fc + iVar6) + 4) = 0x100;
    puVar1 = (uint *)((int)&DAT_005f18fc + iVar6);
    iVar6 = iVar6 + 4;
    iVar7 = iVar4 + 1;
    iStack_14 = iVar4;
    FUN_00459b80(*puVar1,(float)iVar4 * fVar3 + (float)_DAT_005c6eb2,0);
    iVar4 = iVar7;
  } while (iVar7 < 4);
  FUN_00508b90();
  FUN_00503e20();
  FUN_004119e0();
  FUN_00581bf0("SOFTWARE\\Matrox\\PowerDesk\\Current Settings","Flip on VBlank",&DAT_005c6e6a);
  return;
}
