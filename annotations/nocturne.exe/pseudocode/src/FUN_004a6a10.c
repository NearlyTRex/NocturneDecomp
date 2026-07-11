// Name: FUN_004a6a10
// Address: 004a6a10
// Address Range: [[004a6a10, 004a6e8c]]
// Convention: unknown
// Signature: void FUN_004a6a10(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a6a10(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  byte bVar12;
  float10 fVar13;
  float10 fVar14;
  float local_550;
  char local_54c [1024];
  char local_14c [256];
  byte local_4c [28];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  bVar12 = 0;
  if (*(int *)(param_1 + 600) == 2) {
    uVar8 = _DAT_014b9900;
    if (_DAT_01fb8644 < 0x1e0) {
      uVar8 = _DAT_014b9904;
    }
    iVar2 = FUN_004930e0(uVar8,0x58);
    FUN_0049a890(param_1);
    for (local_550 = 5.0; 0.0 < local_550; local_550 = local_550 - *(float *)(param_1 + 0x264)) {
      FUN_0052ee70();
      uVar3 = FUN_004ee370("Y@To be continued..." + 2);
      FUN_00490de0(uVar8,0,DAT_005b761c + -1,(DAT_005b7620 - iVar2) / 2,0xf8,0,uVar3);
      FUN_00553910();
      FUN_0049a8a0(param_1);
    }
    FUN_00403f50();
    FUN_004a6e90(param_1);
    return;
  }
  *(float *)(param_1 + 0x248) = *(float *)(param_1 + 0x250) + *(float *)(param_1 + 0x248);
  *(int *)(param_1 + 0x254) = *(int *)(param_1 + 0x254) + *(int *)(param_1 + 0x24c);
  FUN_0040e320(local_4c);
  FUN_0040e3c0(local_4c,"stats",0x280,0x1e0);
  FUN_0052ee70();
  FUN_0040e710(local_4c,0,0,0xffff);
  fVar13 = (float10)*(float *)(param_1 + 0x248);
  fVar14 = fVar13 * (float10)_DAT_0058464a;
  FUN_00563a30();
  local_28 = (int)ROUND(fVar14);
  fVar13 = fVar13 - (float10)local_28 * (float10)_DAT_00584652;
  *(float *)(param_1 + 0x248) = (float)fVar13;
  fVar14 = fVar13 * (float10)_DAT_0058465a;
  local_14 = local_28;
  FUN_00563a30();
  local_30 = (int)ROUND(fVar14);
  fVar13 = fVar13 - (float10)local_30 * (float10)_DAT_00584662;
  *(float *)(param_1 + 0x248) = (float)fVar13;
  local_14 = local_30;
  FUN_00563a30();
  local_18 = (int)ROUND(fVar13);
  fVar14 = (float10)*(float *)(param_1 + 0x248) - (float10)local_18;
  *(float *)(param_1 + 0x248) = (float)fVar14;
  fVar14 = fVar14 * (float10)_DAT_0058466a;
  local_14 = local_18;
  FUN_00563a30("Mission time");
  local_2c = (int)ROUND(fVar14);
  pcVar4 = (char *)FUN_004ee370();
  pcVar9 = local_54c;
  do {
    cVar1 = *pcVar4;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  iVar2 = local_2c;
  pcVar4 = &DAT_00584618;
  iVar5 = -1;
  pcVar9 = local_54c;
  do {
    pcVar10 = pcVar9;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  uVar7 = 0;
  FUN_00563c90(local_14c,"%2d:%2d:%2d.%2d\n\n",local_28,local_30,local_18,iVar2);
  do {
    uVar6 = 0xffffffff;
    pcVar9 = local_14c;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + (uint)bVar12 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar6 - 1 <= uVar7) break;
    if (local_14c[uVar7] == ' ') {
      local_14c[uVar7] = '0';
    }
    uVar7 = uVar7 + 1;
  } while( true );
  pcVar9 = local_14c;
  iVar2 = -1;
  pcVar4 = local_54c;
  do {
    pcVar10 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar10 = pcVar4 + (uint)bVar12 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar9;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  pcVar4 = (char *)FUN_004ee370("Total body count");
  iVar2 = -1;
  pcVar9 = local_54c;
  do {
    pcVar10 = pcVar9;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  pcVar4 = &DAT_0058463e;
  iVar2 = -1;
  pcVar9 = local_54c;
  do {
    pcVar10 = pcVar9;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  FUN_00563c90(local_14c,&DAT_00584641,*(uint *)(param_1 + 0x254));
  pcVar9 = local_14c;
  iVar2 = -1;
  pcVar4 = local_54c;
  do {
    pcVar10 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar10 = pcVar4 + (uint)bVar12 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar9;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  local_1c = _DAT_014b9900;
  FUN_00408370(0xffff);
  uVar8 = local_1c;
  iVar2 = FUN_00492f30(local_1c,local_54c,0x1c73240,0x14,0x100,0xc0);
  iVar11 = 0;
  local_24 = iVar2;
  local_20 = FUN_004930e0(uVar8,0x58);
  iVar5 = 0xf0;
  if (0 < iVar2) {
    iVar2 = 0x1c73240;
    do {
      iVar11 = iVar11 + 1;
      FUN_00490de0(local_1c,0x1c0,0x27f,iVar5,0xf8,0,iVar2);
      iVar2 = iVar2 + 0x100;
      iVar5 = iVar5 + local_20;
    } while (iVar11 < local_24);
  }
  FUN_00553910();
  FUN_00403f50();
  FUN_00558b00();
  FUN_00403f50();
  FUN_0040e340(local_4c,0);
  return;
}
