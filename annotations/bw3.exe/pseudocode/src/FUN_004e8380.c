// Name: FUN_004e8380
// Address: 004e8380
// Address Range: [[004e8380, 004e84c5]]
// Convention: unknown
// Signature: void FUN_004e8380(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e8380(char *param_1)

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
  pcVar2 = (char *)FUN_00508960(">  Press any key to continue." + 1);
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
  iVar5 = FUN_004b30f0(_DAT_01549ab4,0x58);
  iVar3 = FUN_004b2a80(_DAT_01549ab4,local_110);
  FUN_00560d70();
  FUN_0040d6f0(0x1d737e8,0,0,0xffff);
  FUN_004b0a20(_DAT_01549ab4,local_110,0x140 - iVar3 / 2,iVar5 * -3 + 0x1e0,0xf8,0xffffffff);
  uVar4 = FUN_00508960("Monitor calibration");
  iVar3 = FUN_004b2a80(_DAT_01549ab4,uVar4);
  FUN_004b0a20(_DAT_01549ab4,uVar4,0x140 - iVar3 / 2,iVar5 * 2,0xf8,0xffffffff);
  FUN_0057a8a0();
  FUN_004032b0();
  FUN_00580790();
  return;
}
