// Name: FUN_004bdfb0
// Address: 004bdfb0
// Address Range: [[004bdfb0, 004be42c]]
// Convention: unknown
// Signature: void FUN_004bdfb0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bdfb0(int param_1)

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
  if (*(int *)(param_1 + 0x278) == 2) {
    uVar8 = _DAT_01511cc0;
    if (_DAT_01fc797c < 0x1e0) {
      uVar8 = _DAT_01511cc4;
    }
    iVar2 = FUN_004ab560(uVar8,0x58);
    FUN_004b3000(param_1);
    for (local_550 = 0.0; 0.0 < local_550; local_550 = local_550 - *(float *)(param_1 + 0x284)) {
      FUN_0055b1f0();
      uVar3 = FUN_0050fe80("Y@To be continued..." + 2);
      FUN_004a93a0(uVar8,0,DAT_006141b8 + -1,(DAT_006141bc - iVar2) / 2,0xf8,0,uVar3);
      FUN_00589560();
      FUN_004b3010(param_1);
    }
    FUN_004032b0();
    FUN_004be430(param_1);
    return;
  }
  *(float *)(param_1 + 0x268) = *(float *)(param_1 + 0x270) + *(float *)(param_1 + 0x268);
  *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x274) + *(int *)(param_1 + 0x26c);
  FUN_0040d420(local_4c);
  FUN_0040d5a0(local_4c,"test_logo",0x280,0x1e0);
  FUN_0055b1f0();
  FUN_0040d900(local_4c,0,0,0xffff);
  fVar13 = (float10)*(float *)(param_1 + 0x268);
  fVar14 = fVar13 * (float10)_DAT_005d8a13;
  FUN_005b7ff0();
  local_28 = (int)ROUND(fVar14);
  fVar13 = fVar13 - (float10)local_28 * (float10)_DAT_005d8a1b;
  *(float *)(param_1 + 0x268) = (float)fVar13;
  fVar14 = fVar13 * (float10)_DAT_005d8a23;
  local_14 = local_28;
  FUN_005b7ff0();
  local_30 = (int)ROUND(fVar14);
  fVar13 = fVar13 - (float10)local_30 * (float10)_DAT_005d8a2b;
  *(float *)(param_1 + 0x268) = (float)fVar13;
  local_14 = local_30;
  FUN_005b7ff0();
  local_18 = (int)ROUND(fVar13);
  fVar14 = (float10)*(float *)(param_1 + 0x268) - (float10)local_18;
  *(float *)(param_1 + 0x268) = (float)fVar14;
  fVar14 = fVar14 * (float10)_DAT_005d8a33;
  local_14 = local_18;
  FUN_005b7ff0("Mission time");
  local_2c = (int)ROUND(fVar14);
  pcVar4 = (char *)FUN_0050fe80();
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
  pcVar4 = &DAT_005d89e5;
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
  FUN_005b7790(local_14c,"%2d:%2d:%2d.%2d\n\n",local_28,local_30,local_18,iVar2);
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
  pcVar4 = (char *)FUN_0050fe80("Total body count");
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
  pcVar4 = &DAT_005d8a0b;
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
  FUN_005b7790(local_14c,&DAT_005d8a0e,*(uint *)(param_1 + 0x274));
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
  local_1c = _DAT_01511cc0;
  FUN_00406da0(0xffff);
  uVar8 = local_1c;
  iVar2 = FUN_004ab2b0(local_1c,local_54c,0x1cb2520,0x14,0x100,0xc0);
  iVar11 = 0;
  local_24 = iVar2;
  local_20 = FUN_004ab560(uVar8,0x58);
  iVar5 = 0xf0;
  if (0 < iVar2) {
    iVar2 = 0x1cb2520;
    do {
      iVar11 = iVar11 + 1;
      FUN_004a93a0(local_1c,0x1c0,0x27f,iVar5,0xf8,0,iVar2);
      iVar2 = iVar2 + 0x100;
      iVar5 = iVar5 + local_20;
    } while (iVar11 < local_24);
  }
  FUN_00589560();
  FUN_004032b0();
  FUN_0058ead0();
  FUN_004032b0();
  FUN_0040d440(local_4c,0);
  return;
}
