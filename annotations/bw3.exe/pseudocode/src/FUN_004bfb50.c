// Name: FUN_004bfb50
// Address: 004bfb50
// Address Range: [[004bfb50, 004bfedd]]
// Convention: unknown
// Signature: void FUN_004bfb50(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bfb50(int param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar4;
  uint uVar5;
  uint extraout_EDX;
  int iVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  float10 fVar12;
  float10 fVar13;
  char local_548 [1024];
  char local_148 [256];
  byte local_48 [28];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar11 = 0;
  FUN_0040d2e0(local_48);
  FUN_0040d460(local_48,"stats",0x280,0x1e0);
  pcVar9 = local_548;
  FUN_00560d70();
  FUN_0040d6f0(local_48,0,0,0xffff);
  *(float *)(param_1 + 0x270) = *(float *)(param_1 + 0x278) + *(float *)(param_1 + 0x270);
  fVar12 = (float10)*(float *)(param_1 + 0x278);
  fVar13 = fVar12 * (float10)_DAT_005c3af0;
  FUN_005a3120();
  local_20 = (int)ROUND(fVar13);
  fVar12 = fVar12 - (float10)local_20 * (float10)_DAT_005c3af8;
  fVar13 = fVar12 * (float10)_DAT_005c3b00;
  local_14 = local_20;
  FUN_005a3120();
  local_2c = (int)ROUND(fVar13);
  fVar12 = fVar12 - (float10)local_2c * (float10)_DAT_005c3b08;
  *(float *)(extraout_ECX + 0x278) = (float)fVar12;
  local_14 = local_2c;
  FUN_005a3120();
  local_28 = (int)ROUND(fVar12);
  fVar13 = (float10)*(float *)(extraout_ECX_00 + 0x278) - (float10)local_28;
  *(float *)(extraout_ECX_00 + 0x278) = (float)fVar13;
  fVar13 = fVar13 * (float10)_DAT_005c3b10;
  *(uint *)(extraout_ECX_00 + 0x27c) = extraout_EDX;
  local_14 = local_28;
  FUN_005a3120("Level time");
  local_24 = (int)ROUND(fVar13);
  pcVar3 = (char *)FUN_00508960();
  do {
    cVar1 = *pcVar3;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  pcVar9 = &DAT_005c3ac1;
  iVar4 = -1;
  pcVar3 = local_548;
  do {
    pcVar10 = pcVar3;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
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
  uVar7 = 0;
  FUN_005a28c0(local_148,"%2d:%2d:%2d.%2d\n\n",local_20,local_2c,local_28,local_24);
  do {
    uVar5 = 0xffffffff;
    pcVar3 = local_148;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + (uint)bVar11 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar5 - 1 <= uVar7) break;
    if (local_148[uVar7] == ' ') {
      local_148[uVar7] = '0';
    }
    uVar7 = uVar7 + 1;
  } while( true );
  pcVar3 = local_148;
  iVar4 = -1;
  pcVar9 = local_548;
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
  pcVar9 = (char *)FUN_00508960("Body count");
  iVar4 = -1;
  pcVar3 = local_548;
  do {
    pcVar10 = pcVar3;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
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
  pcVar9 = &DAT_005c3ae1;
  iVar4 = -1;
  pcVar3 = local_548;
  do {
    pcVar10 = pcVar3;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
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
  FUN_005a28c0(local_148,&DAT_005c3ae4,*(uint *)(param_1 + 0x274));
  uVar2 = _DAT_01549aa8;
  pcVar3 = local_148;
  iVar4 = -1;
  pcVar9 = local_548;
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
  FUN_00406bf0(0xffff);
  iVar4 = FUN_004b2e40(uVar2,local_548,0x1d1bb20,0x14,0x100,0xc0);
  iVar6 = 0;
  local_18 = iVar4;
  local_1c = FUN_004b30f0(uVar2,0x58);
  iVar8 = 0xf0;
  if (0 < iVar4) {
    iVar4 = 0x1d1bb20;
    do {
      iVar6 = iVar6 + 1;
      FUN_004b0fa0(uVar2,0x1c0,0x27f,iVar8,0xf8,0,iVar4);
      iVar4 = iVar4 + 0x100;
      iVar8 = iVar8 + local_1c;
    } while (iVar6 < local_18);
  }
  *(uint *)(param_1 + 0x278) = 0;
  FUN_0040d300(local_48,0);
  return;
}
