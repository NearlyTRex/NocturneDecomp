// Name: FUN_004e46c0
// Address: 004e46c0
// Address Range: [[004e46c0, 004e4e1d]]
// Convention: unknown
// Signature: void FUN_004e46c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e46c0(void)

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
  byte auStack_228 [256];
  char acStack_128 [256];
  byte auStack_28 [20];
  int iStack_14;
  
  bVar11 = 0;
  _DAT_01c38b50 = 0;
  _DAT_0061e28c = 0x10000;
  _DAT_0061e280 = 1;
  iVar4 = FUN_005b910c("stderr.txt",&DAT_005dc18a);
  if (iVar4 != 0) {
    FUN_005b89c0();
    iVar4 = FUN_005b99e0("stderr.txt",0x1c0);
    if (iVar4 != 0) {
      _DAT_01d046a0 = "..\\core\\main.c";
      _DAT_01d046a4 = 0x3b5;
      FUN_004e4500();
    }
  }
  FUN_005b91a4("stderr.txt",&DAT_005dc1da,&DAT_0061ef88);
  FUN_004a67a0();
  FUN_004d8d60();
  _DAT_0264bbac = 2;
  FUN_0051b320();
  FUN_00460930();
  FUN_00460930();
  FUN_0050f9e0();
  FUN_004fd490();
  if (_DAT_01c38b40 == 0) {
    _DAT_01d046a0 = "..\\core\\main.c";
    _DAT_01d046a4 = 0x3da;
    FUN_0050fe80();
    FUN_004e4500();
  }
  pcVar10 = acStack_728;
  FUN_004e8620();
  thunk_FUN_00574d50();
  FUN_00401010();
  FUN_0058e7a0();
  FUN_0058ffd0();
  iVar4 = FUN_00588a50(0x280,0x1e0,0x20);
  if (iVar4 == 0) {
    _DAT_01d046a0 = "..\\core\\main.c";
    _DAT_01d046a4 = 0x3f2;
    FUN_004e4500();
  }
  FUN_00447ea0();
  if (_DAT_02664638 < 0x3c00000) {
    pcVar5 = (char *)FUN_0050fe80();
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
    FUN_005b7790(acStack_328,&DAT_005dc2dd,(double)((float)_DAT_02664638 * _DAT_005dc481));
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
    pcVar5 = (char *)FUN_0050fe80();
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
    pcVar5 = &DAT_005dc2f4;
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
    pcVar5 = (char *)FUN_0050fe80();
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
    pcVar5 = &DAT_005dc325;
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
    pcVar5 = (char *)FUN_0050fe80();
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
    pcVar5 = &DAT_005dc359;
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
    pcVar5 = (char *)FUN_0050fe80();
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
    pcVar5 = &DAT_005dc375;
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
    pcVar5 = (char *)FUN_0050fe80();
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
    FUN_0047bdf0(0x01C25594,acStack_528);
  }
  if (_DAT_0266463c < 0xc800000) {
    pcVar8 = (char *)FUN_0050fe80();
    do {
      cVar2 = *pcVar8;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    FUN_005b7790(acStack_128,&DAT_005dc3b2,(double)((float)_DAT_0266463c * _DAT_005dc481));
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
    pcVar8 = (char *)FUN_0050fe80();
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
    pcVar8 = &DAT_005dc3d3;
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
    pcVar8 = (char *)FUN_0050fe80();
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
    pcVar8 = &DAT_005dc402;
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
    pcVar8 = (char *)FUN_0050fe80();
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
    FUN_0047bdf0(0x01C25594,acStack_728);
  }
  puVar1 = 0x01CB6900;
  if (_DAT_01cee1a8 != 0) {
    _DAT_01cee1a8 = 0;
    *0x01CB6900 = 0x280;
    puVar1[1] = 0x1e0;
    _DAT_0264bba0 = 0;
    puVar1[2] = 0x20;
    FUN_004ebe30();
  }
  FUN_00591190("video","opening.avi");
  FUN_0055b1f0();
  FUN_004aaf00(_DAT_01511cc0,auStack_228);
  FUN_004ab560(_DAT_01511cc0,0x58);
  FUN_0040d420();
  FUN_0040d5a0(auStack_28,"test_logo",0x280,0x1e0);
  FUN_0040d900(auStack_28,0,0,0xffff);
  FUN_00589560();
  FUN_0040d440(auStack_28,0);
  FUN_0055a100();
  iVar4 = 0;
  FUN_004fb380();
  iStack_14 = 0;
  do {
    puVar1 = (uint *)((int)&DAT_0060a084 + iVar4);
    iVar4 = iVar4 + 4;
    iVar6 = iStack_14 + 1;
    FUN_00447ad0(*puVar1,(float)iStack_14 * (float)_DAT_005dc485 + (float)_DAT_005dc485,0);
    iStack_14 = iVar6;
  } while (iVar6 < 8);
  iVar6 = 0;
  iVar4 = 0;
  do {
    **(uint **)((int)&DAT_0060a0a4 + iVar6) = 0x100;
    fVar3 = (float)_DAT_005dc48d;
    *(uint *)(*(int *)((int)&DAT_0060a0a4 + iVar6) + 4) = 0x100;
    puVar1 = (uint *)((int)&DAT_0060a0a4 + iVar6);
    iVar6 = iVar6 + 4;
    iVar7 = iVar4 + 1;
    iStack_14 = iVar4;
    FUN_00447ad0(*puVar1,(float)iVar4 * fVar3 + (float)_DAT_005dc48d,0);
    iVar4 = iVar7;
  } while (iVar7 < 4);
  FUN_005100b0();
  FUN_0050b340();
  FUN_0059abb0();
  FUN_0058ff40("SOFTWARE\\Matrox\\PowerDesk\\Current Settings","Flip on VBlank",&DAT_005dc445);
  return;
}
