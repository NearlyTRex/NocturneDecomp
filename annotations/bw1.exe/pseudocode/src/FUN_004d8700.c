// Name: FUN_004d8700
// Address: 004d8700
// Address Range: [[004d8700, 004d8a8d]]
// Convention: unknown
// Signature: void FUN_004d8700(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d8700(int param_1)

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
  FUN_0040d0a0(local_48);
  FUN_0040d220(local_48,"stats",0x280,0x1e0);
  pcVar9 = local_548;
  FUN_0057dc40();
  FUN_0040d4b0(local_48,0,0,0xffff);
  *(float *)(param_1 + 0x268) = *(float *)(param_1 + 0x270) + *(float *)(param_1 + 0x268);
  fVar12 = (float10)*(float *)(param_1 + 0x270);
  fVar13 = fVar12 * (float10)_DAT_005e34ec;
  FUN_005c03a0();
  local_20 = (int)ROUND(fVar13);
  fVar12 = fVar12 - (float10)local_20 * (float10)_DAT_005e34f4;
  fVar13 = fVar12 * (float10)_DAT_005e34fc;
  local_14 = local_20;
  FUN_005c03a0();
  local_2c = (int)ROUND(fVar13);
  fVar12 = fVar12 - (float10)local_2c * (float10)_DAT_005e3504;
  *(float *)(extraout_ECX + 0x270) = (float)fVar12;
  local_14 = local_2c;
  FUN_005c03a0();
  local_28 = (int)ROUND(fVar12);
  fVar13 = (float10)*(float *)(extraout_ECX_00 + 0x270) - (float10)local_28;
  *(float *)(extraout_ECX_00 + 0x270) = (float)fVar13;
  fVar13 = fVar13 * (float10)_DAT_005e350c;
  *(uint *)(extraout_ECX_00 + 0x274) = extraout_EDX;
  local_14 = local_28;
  FUN_005c03a0("Level time");
  local_24 = (int)ROUND(fVar13);
  pcVar3 = (char *)FUN_00531090();
  do {
    cVar1 = *pcVar3;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  pcVar9 = &DAT_005e34bd;
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
  FUN_005bfb40(local_148,"%2d:%2d:%2d.%2d\n\n",local_20,local_2c,local_28,local_24);
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
  pcVar9 = (char *)FUN_00531090("Body count");
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
  pcVar9 = "\n\n";
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
  FUN_005bfb40(local_148,&DAT_005e34e0,*(uint *)(param_1 + 0x26c));
  uVar2 = _DAT_0152d244;
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
  FUN_00406bd0(0xffff);
  iVar4 = FUN_004c4260(uVar2,local_548,0x1cc9bb0,0x14,0x100,0xc0);
  iVar6 = 0;
  local_18 = iVar4;
  local_1c = FUN_004c4510(uVar2,0x58);
  iVar8 = 0xf0;
  if (0 < iVar4) {
    iVar4 = 0x1cc9bb0;
    do {
      iVar6 = iVar6 + 1;
      FUN_004c2350(uVar2,0x1c0,0x27f,iVar8,0xf8,0,iVar4);
      iVar4 = iVar4 + 0x100;
      iVar8 = iVar8 + local_1c;
    } while (iVar6 < local_18);
  }
  *(uint *)(param_1 + 0x270) = 0;
  FUN_0040d0c0(local_48,0);
  return;
}
