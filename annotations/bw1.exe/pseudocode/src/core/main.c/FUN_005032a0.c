// Name: FUN_005032a0
// Address: 005032a0
// Address Range: [[005032a0, 00503a2d]]
// Convention: unknown
// Signature: void FUN_005032a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005032a0(void)

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
  _DAT_01c51d10 = 0;
  _DAT_006258dc = 0x10000;
  _DAT_006258d0 = 1;
  iVar4 = FUN_005c157c("stderr.txt",&DAT_005e70d2);
  if (iVar4 != 0) {
    FUN_005c0d10();
    iVar4 = FUN_005c1dc0("stderr.txt",0x1c0);
    if (iVar4 != 0) {
      _DAT_01d1d400 = "..\\core\\main.c";
      _DAT_01d1d404 = 0x3b8;
      FUN_005030e0();
    }
  }
  FUN_005c1614("stderr.txt","wt",&DAT_00626308);
  FUN_004bf770();
  FUN_004f4f50();
  _DAT_02c8337c = 2;
  FUN_0053c8a0();
  FUN_00478e40();
  FUN_00478e40();
  FUN_00530bf0();
  FUN_0051c450();
  if (_DAT_01c51d00 == 0) {
    _DAT_01d1d400 = "..\\core\\main.c";
    _DAT_01d1d404 = 0x3dd;
    FUN_00531090();
    FUN_005030e0();
  }
  pcVar10 = acStack_728;
  FUN_005072c0();
  thunk_FUN_00597970();
  FUN_00401010();
  FUN_005b21e0();
  FUN_005b3aa0();
  iVar4 = FUN_005ac300(0x280,0x1e0,0x20);
  if (iVar4 == 0) {
    _DAT_01d1d400 = "..\\core\\main.c";
    _DAT_01d1d404 = 0x3f5;
    FUN_005030e0();
  }
  FUN_0045e000();
  if (_DAT_02c9be78 < 0x3c00000) {
    pcVar5 = (char *)FUN_00531090();
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
    FUN_005bfb40(acStack_328,"%.1f",(double)((float)_DAT_02c9be78 * _DAT_005e73d1));
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
    pcVar5 = (char *)FUN_00531090();
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
    pcVar5 = "\n";
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
    pcVar5 = (char *)FUN_00531090();
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
    pcVar5 = "\n";
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
    pcVar5 = (char *)FUN_00531090();
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
    pcVar5 = "\n";
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
    pcVar5 = (char *)FUN_00531090();
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
    pcVar5 = "\n";
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
    pcVar5 = (char *)FUN_00531090();
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
    FUN_00494340(0x01C3EB54,acStack_528);
  }
  if (_DAT_02c9be7c < 0xc800000) {
    pcVar8 = (char *)FUN_00531090();
    do {
      cVar2 = *pcVar8;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    FUN_005bfb40(acStack_128,"%.1f",(double)((float)_DAT_02c9be7c * _DAT_005e73d1));
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
    pcVar8 = (char *)FUN_00531090();
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
    pcVar8 = "\n";
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
    pcVar8 = (char *)FUN_00531090();
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
    pcVar8 = "\n";
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
    pcVar8 = (char *)FUN_00531090();
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
    FUN_00494340(0x01C3EB54,acStack_728);
  }
  puVar1 = 0x01CCF390;
  if (_DAT_01d06d68 != 0) {
    _DAT_01d06d68 = 0;
    *0x01CCF390 = 0x280;
    puVar1[1] = 0x1e0;
    _DAT_02c83370 = 0;
    puVar1[2] = 0x20;
    FUN_0050a9c0();
  }
  FUN_005b4cd0("video","opening.avi");
  FUN_0057dc40();
  pcVar8 = (char *)FUN_00531090();
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
  FUN_004c3ea0(_DAT_0152d244,acStack_228);
  FUN_004c4510(_DAT_0152d244,0x58);
  FUN_0040d0a0();
  FUN_0040d220(auStack_28,"fangs",0x280,0x1e0);
  FUN_0040d4b0(auStack_28,0,0,0x8000);
  FUN_005acff0();
  FUN_0040d0c0(auStack_28,0);
  FUN_0057cb30();
  iVar4 = 0;
  FUN_0051a2d0();
  iStack_14 = 0;
  do {
    puVar1 = (uint *)((int)&DAT_00611328 + iVar4);
    iVar4 = iVar4 + 4;
    iVar6 = iStack_14 + 1;
    FUN_0045dc30(*puVar1,(float)iStack_14 * (float)_DAT_005e73d5 + (float)_DAT_005e73d5,0);
    iStack_14 = iVar6;
  } while (iVar6 < 8);
  iVar6 = 0;
  iVar4 = 0;
  do {
    **(uint **)((int)&DAT_00611348 + iVar6) = 0x100;
    fVar3 = (float)_DAT_005e73dd;
    *(uint *)(*(int *)((int)&DAT_00611348 + iVar6) + 4) = 0x100;
    puVar1 = (uint *)((int)&DAT_00611348 + iVar6);
    iVar6 = iVar6 + 4;
    iVar7 = iVar4 + 1;
    iStack_14 = iVar4;
    FUN_0045dc30(*puVar1,(float)iVar4 * fVar3 + (float)_DAT_005e73dd,0);
    iVar4 = iVar7;
  } while (iVar7 < 4);
  FUN_005312c0();
  FUN_0052c520();
  FUN_00415c20();
  FUN_005b3a10("SOFTWARE\\Matrox\\PowerDesk\\Current Settings","Flip on VBlank","0");
  return;
}
