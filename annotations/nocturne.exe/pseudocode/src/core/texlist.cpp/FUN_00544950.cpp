// Name: FUN_00544950
// Address: 00544950
// Address Range: [[00544950, 00544c0c]]
// Convention: unknown
// Signature: void FUN_00544950(int *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00544950(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  byte uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
  char local_12c [256];
  int local_2c;
  int local_28;
  int *local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  
  bVar10 = 0;
  pcVar9 = local_12c;
  do {
    cVar1 = *param_2;
    *pcVar9 = cVar1;
    pcVar8 = local_12c;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
    pcVar8 = local_12c;
  } while (cVar1 != '\0');
  do {
    pcVar9 = pcVar8;
    if (*pcVar8 == '.') goto LAB_005449a0;
    if (*pcVar8 == '\0') break;
    pcVar9 = pcVar8 + 1;
    if (*pcVar9 == '.') goto LAB_005449a0;
    pcVar8 = pcVar8 + 2;
  } while (*pcVar9 != '\0');
  pcVar9 = (char *)0x0;
LAB_005449a0:
  if (pcVar9 == (char *)0x0) {
    _DAT_01cc4800 = "..\\core\\texlist.cpp";
    _DAT_01cc4804 = 0x61;
    FUN_004c8440("CTextureList::load - No extension found");
  }
  pcVar8 = &DAT_00596631;
  do {
    cVar1 = *pcVar8;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  local_2c = FUN_00456a60(&DAT_00596639,local_12c,&DAT_00596636);
  if (local_2c == 0) {
    _DAT_01cc4800 = "..\\core\\texlist.cpp";
    _DAT_01cc4804 = 0x6a;
    FUN_004c8440("CTextureList::load - Bad filename!");
  }
  FUN_00563350(local_2c,&DAT_00596675,param_1);
  local_1c = 0;
  if (*param_1 < 1) {
LAB_00544bac:
    iVar4 = *param_1;
    if (iVar4 < 1000) {
      piVar5 = param_1 + iVar4;
      do {
        iVar4 = iVar4 + 1;
        piVar5[0x1771] = 0;
        piVar5 = piVar5 + 1;
      } while (iVar4 < 1000);
    }
    FUN_00563380(local_2c);
    return;
  }
  local_14 = param_1 + 1;
  local_18 = param_1;
  local_28 = 0;
  local_20 = param_1 + 3;
  local_24 = param_1;
LAB_00544a63:
  FUN_00563350(local_2c,&DAT_00596679,local_12c);
  pcVar9 = local_12c;
  do {
    pcVar8 = pcVar9;
    if (*pcVar9 == ',') goto LAB_00544a97;
    if (*pcVar9 == '\0') break;
    pcVar8 = pcVar9 + 1;
    if (*pcVar8 == ',') goto LAB_00544a97;
    pcVar9 = pcVar9 + 2;
  } while (*pcVar8 != '\0');
  pcVar8 = (char *)0x0;
LAB_00544a97:
  if (pcVar8 == (char *)0x0) {
    local_18[0x1771] = 0;
    pcVar9 = local_12c;
    piVar5 = local_20;
  }
  else {
    *pcVar8 = '\0';
    iVar4 = FUN_00566f30(pcVar8 + 1);
    local_18[0x1771] = iVar4;
    pcVar9 = local_12c;
    piVar5 = local_20;
  }
  do {
    iVar4 = local_28;
    cVar1 = *pcVar9;
    *(char *)piVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    *(char *)((int)piVar5 + 1) = cVar1;
    pcVar9 = pcVar9 + 2;
    piVar5 = (int *)((int)piVar5 + 2);
  } while (cVar1 != '\0');
  uVar7 = 0;
  local_24[2] = 0;
  do {
    uVar6 = 0xffffffff;
    pcVar9 = (char *)((int)local_14 + iVar4 + 8);
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + (uint)bVar10 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar6 - 1 <= uVar7) break;
    iVar2 = uVar7 + iVar4 + 0xc;
    uVar7 = uVar7 + 1;
    uVar3 = FUN_00565e20(*(byte *)((int)param_1 + iVar2));
    *(byte *)((int)param_1 + uVar7 + iVar4 + 0xb) = uVar3;
  } while( true );
  local_18 = local_18 + 1;
  local_28 = local_28 + 0x18;
  local_24 = local_24 + 6;
  local_20 = local_20 + 6;
  local_1c = local_1c + 1;
  if (*param_1 <= local_1c) goto LAB_00544bac;
  goto LAB_00544a63;
}
