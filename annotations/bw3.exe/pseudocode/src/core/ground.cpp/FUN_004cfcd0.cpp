// Name: FUN_004cfcd0
// Address: 004cfcd0
// Address Range: [[004cfcd0, 004cfff0]]
// Convention: unknown
// Signature: undefined4 FUN_004cfcd0(int *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004cfcd0(int *param_1,char *param_2)

{
  char cVar1;
  byte *pbVar2;
  byte *puVar3;
  ushort uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  char local_cc [80];
  char local_7c [80];
  byte *local_2c;
  byte *local_28;
  byte *local_24;
  byte *local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  pcVar10 = local_cc;
  pcVar9 = local_cc;
  pcVar8 = param_2;
  do {
    cVar1 = *pcVar8;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  local_24 = &DAT_005c49b6;
  local_20 = &DAT_005c49af;
  do {
    pcVar8 = pcVar9;
    if (*pcVar9 == '.') goto LAB_004cfd3d;
    if (*pcVar9 == '\0') break;
    pcVar8 = pcVar9 + 1;
    if (*pcVar8 == '.') goto LAB_004cfd3d;
    pcVar9 = pcVar9 + 2;
  } while (*pcVar8 != '\0');
  pcVar8 = (char *)0x0;
LAB_004cfd3d:
  if (pcVar8 == (char *)0x0) {
    _DAT_01d71de0 = "..\\core\\ground.cpp";
    _DAT_01d71de4 = 0x40;
    FUN_004e4330("eopen - ext not found!");
  }
  puVar3 = local_20;
  pcVar8 = pcVar8 + 1;
  pcVar9 = &DAT_005c49b2;
  do {
    cVar1 = *pcVar9;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  piVar5 = (int *)FUN_004659c0(local_24,local_cc,puVar3);
  if (piVar5 == (int *)0x0) {
    _DAT_01d71de0 = "..\\core\\ground.cpp";
    _DAT_01d71de4 = 0x44;
    FUN_004e4330("eopen - Cannot open file");
  }
  local_18 = 0;
  if (0 < param_1[1]) {
    do {
      iVar11 = 0;
      if (0 < *param_1) {
        do {
          if ((piVar5[1] < 1) || (*(byte *)*piVar5 - 0xd < 0xfe)) {
            uVar4 = FUN_005a32b0(piVar5);
          }
          else {
            piVar5[1] = piVar5[1] + -1;
            pbVar2 = (byte *)*piVar5;
            *piVar5 = (int)(pbVar2 + 1);
            uVar4 = (ushort)*pbVar2;
          }
          *(ushort *)(param_1[9] + (local_18 * *param_1 + iVar11) * 4) = uVar4 << 7;
          iVar11 = iVar11 + 1;
        } while (iVar11 < *param_1);
      }
      local_18 = local_18 + 1;
    } while (local_18 < param_1[1]);
  }
  pcVar8 = local_7c;
  FUN_005a3a90(piVar5);
  local_28 = &DAT_005c49c2;
  local_2c = &DAT_005c49bb;
  pcVar9 = param_2;
  do {
    cVar1 = *pcVar9;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  pcVar8 = local_7c;
  do {
    pcVar9 = pcVar8;
    if (*pcVar8 == '.') goto LAB_004cfe87;
    if (*pcVar8 == '\0') break;
    pcVar9 = pcVar8 + 1;
    if (*pcVar9 == '.') goto LAB_004cfe87;
    pcVar8 = pcVar8 + 2;
  } while (*pcVar9 != '\0');
  pcVar9 = (char *)0x0;
LAB_004cfe87:
  if (pcVar9 == (char *)0x0) {
    _DAT_01d71de0 = "..\\core\\ground.cpp";
    _DAT_01d71de4 = 0x40;
    FUN_004e4330("eopen - ext not found!");
  }
  pcVar9 = pcVar9 + 1;
  pcVar8 = &DAT_005c49be;
  do {
    cVar1 = *pcVar8;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  local_1c = FUN_004659c0(local_28,local_7c,local_2c);
  if (local_1c == 0) {
    _DAT_01d71de0 = "..\\core\\ground.cpp";
    _DAT_01d71de4 = 0x44;
    FUN_004e4330("eopen - Cannot open file");
  }
  local_14 = 0;
  if (0 < param_1[1]) {
    do {
      iVar11 = 0;
      if (0 < *param_1) {
        do {
          iVar6 = local_14 * *param_1 + iVar11;
          iVar11 = iVar11 + 1;
          FUN_005a3890(iVar6 * 4 + param_1[9] + 2,1,2,local_1c);
        } while (iVar11 < *param_1);
      }
      local_14 = local_14 + 1;
    } while (local_14 < param_1[1]);
  }
  FUN_005a3a90(local_1c);
  uVar7 = FUN_005690c0(param_1[10],param_2);
  return uVar7;
}
