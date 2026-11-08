// Name: FUN_004bfee0
// Address: 004bfee0
// Address Range: [[004bfee0, 004c0290]]
// Convention: unknown
// Signature: void FUN_004bfee0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bfee0(int param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  float10 fVar12;
  float10 fVar13;
  char local_53c [1024];
  char local_13c [256];
  byte local_3c [28];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  bVar11 = 0;
  if (*(int *)(param_1 + 0x284) == 2) {
    FUN_004032b0();
    FUN_004c02a0(param_1);
    return;
  }
  *(float *)(param_1 + 0x270) = *(float *)(param_1 + 0x278) + *(float *)(param_1 + 0x270);
  *(int *)(param_1 + 0x27c) = *(int *)(param_1 + 0x27c) + *(int *)(param_1 + 0x274);
  FUN_0040d2e0(local_3c);
  FUN_0040d460(local_3c,"stats",0x280,0x1e0);
  FUN_00560d70();
  FUN_0040d6f0(local_3c,0,0,0xffff);
  fVar12 = (float10)*(float *)(param_1 + 0x270);
  fVar13 = fVar12 * (float10)_DAT_005c3b60;
  FUN_005a3120();
  local_1c = (int)ROUND(fVar13);
  fVar12 = fVar12 - (float10)local_1c * (float10)_DAT_005c3b68;
  fVar13 = fVar12 * (float10)_DAT_005c3b70;
  local_8 = local_1c;
  FUN_005a3120();
  local_20 = (int)ROUND(fVar13);
  fVar12 = fVar12 - (float10)local_20 * (float10)_DAT_005c3b78;
  *(float *)(param_1 + 0x270) = (float)fVar12;
  local_8 = local_20;
  FUN_005a3120();
  local_14 = (int)ROUND(fVar12);
  fVar13 = (float10)*(float *)(param_1 + 0x270) - (float10)local_14;
  *(float *)(param_1 + 0x270) = (float)fVar13;
  fVar13 = fVar13 * (float10)_DAT_005c3b80;
  local_8 = local_14;
  FUN_005a3120("Mission time");
  local_18 = (int)ROUND(fVar13);
  pcVar3 = (char *)FUN_00508960();
  pcVar9 = local_53c;
  do {
    cVar1 = *pcVar3;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  iVar6 = local_18;
  pcVar3 = &DAT_005c3b2b;
  iVar4 = -1;
  pcVar9 = local_53c;
  do {
    pcVar10 = pcVar9;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar3;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  uVar7 = 0;
  FUN_005a28c0(local_13c,"%2d:%2d:%2d.%2d\n\n",local_1c,local_20,local_14,iVar6);
  do {
    uVar5 = 0xffffffff;
    pcVar9 = local_13c;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + (uint)bVar11 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar5 - 1 <= uVar7) break;
    if (local_13c[uVar7] == ' ') {
      local_13c[uVar7] = '0';
    }
    uVar7 = uVar7 + 1;
  } while( true );
  pcVar9 = local_13c;
  iVar6 = -1;
  pcVar3 = local_53c;
  do {
    pcVar10 = pcVar3;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar10 = pcVar3 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar10;
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
  pcVar3 = (char *)FUN_00508960("Total body count");
  iVar6 = -1;
  pcVar9 = local_53c;
  do {
    pcVar10 = pcVar9;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar3;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  pcVar3 = &DAT_005c3b51;
  iVar6 = -1;
  pcVar9 = local_53c;
  do {
    pcVar10 = pcVar9;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar3;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  FUN_005a28c0(local_13c,&DAT_005c3b54,*(uint *)(param_1 + 0x27c));
  uVar2 = _DAT_01549aa8;
  pcVar9 = local_13c;
  iVar6 = -1;
  pcVar3 = local_53c;
  do {
    pcVar10 = pcVar3;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar10 = pcVar3 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar10;
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
  FUN_00406bf0(0xffff);
  iVar6 = FUN_004b2e40(uVar2,local_53c,0x1d1cf20,0x14,0x100,0xc0);
  iVar4 = 0;
  local_c = iVar6;
  local_10 = FUN_004b30f0(uVar2,0x58);
  iVar8 = 0xf0;
  if (0 < iVar6) {
    iVar6 = 0x1d1cf20;
    do {
      iVar4 = iVar4 + 1;
      FUN_004b0fa0(uVar2,0x1c0,0x27f,iVar8,0xf8,0,iVar6);
      iVar6 = iVar6 + 0x100;
      iVar8 = iVar8 + local_10;
    } while (iVar4 < local_c);
  }
  FUN_0057a8a0();
  FUN_004032b0();
  FUN_00580790();
  FUN_004032b0();
  FUN_0040d300(local_3c,0);
  return;
}
