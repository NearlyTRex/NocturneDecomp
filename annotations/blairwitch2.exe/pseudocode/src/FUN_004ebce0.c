// Name: FUN_004ebce0
// Address: 004ebce0
// Address Range: [[004ebce0, 004ebe25]]
// Convention: unknown
// Signature: void FUN_004ebce0(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ebce0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  char local_110 [256];
  
  bVar8 = 0;
  pcVar6 = local_110;
  do {
    cVar1 = *param_1;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_1[1];
    param_1 = param_1 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pcVar2 = (char *)FUN_0050fe80(">  Press any key to continue." + 1);
  iVar5 = -1;
  pcVar6 = local_110;
  do {
    pcVar7 = pcVar6;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar7 = pcVar6 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -1;
  do {
    cVar1 = *pcVar2;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  iVar5 = FUN_004ab560(_DAT_01511cc4,0x58);
  iVar3 = FUN_004aaf00(_DAT_01511cc4,local_110);
  FUN_0055b1f0();
  FUN_0040d900(0x1d0613c,0,0,0xffff);
  FUN_004a8df0(_DAT_01511cc4,local_110,0x140 - iVar3 / 2,iVar5 * -3 + 0x1e0,0xf8,0xffffffff);
  uVar4 = FUN_0050fe80("Monitor calibration");
  iVar3 = FUN_004aaf00(_DAT_01511cc4,uVar4);
  FUN_004a8df0(_DAT_01511cc4,uVar4,0x140 - iVar3 / 2,iVar5 * 2,0xf8,0xffffffff);
  FUN_00589560();
  FUN_004032b0();
  FUN_0058ead0();
  return;
}
