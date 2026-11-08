// Name: FUN_004d8a90
// Address: 004d8a90
// Address Range: [[004d8a90, 004d8e40]]
// Convention: unknown
// Signature: void FUN_004d8a90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d8a90(int param_1)

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
  if (*(int *)(param_1 + 0x27c) == 2) {
    FUN_004032b0();
    FUN_004d8e50(param_1);
    return;
  }
  *(float *)(param_1 + 0x268) = *(float *)(param_1 + 0x270) + *(float *)(param_1 + 0x268);
  *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x274) + *(int *)(param_1 + 0x26c);
  FUN_0040d0a0(local_3c);
  FUN_0040d220(local_3c,"stats",0x280,0x1e0);
  FUN_0057dc40();
  FUN_0040d4b0(local_3c,0,0,0xffff);
  fVar12 = (float10)*(float *)(param_1 + 0x268);
  fVar13 = fVar12 * (float10)_DAT_005e355c;
  FUN_005c03a0();
  local_1c = (int)ROUND(fVar13);
  fVar12 = fVar12 - (float10)local_1c * (float10)_DAT_005e3564;
  fVar13 = fVar12 * (float10)_DAT_005e356c;
  local_8 = local_1c;
  FUN_005c03a0();
  local_20 = (int)ROUND(fVar13);
  fVar12 = fVar12 - (float10)local_20 * (float10)_DAT_005e3574;
  *(float *)(param_1 + 0x268) = (float)fVar12;
  local_8 = local_20;
  FUN_005c03a0();
  local_14 = (int)ROUND(fVar12);
  fVar13 = (float10)*(float *)(param_1 + 0x268) - (float10)local_14;
  *(float *)(param_1 + 0x268) = (float)fVar13;
  fVar13 = fVar13 * (float10)_DAT_005e357c;
  local_8 = local_14;
  FUN_005c03a0("Mission time");
  local_18 = (int)ROUND(fVar13);
  pcVar3 = (char *)FUN_00531090();
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
  pcVar3 = &DAT_005e3527;
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
  FUN_005bfb40(local_13c,"%2d:%2d:%2d.%2d\n\n",local_1c,local_20,local_14,iVar6);
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
  pcVar3 = (char *)FUN_00531090("Total body count");
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
  pcVar3 = &DAT_005e354d;
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
  FUN_005bfb40(local_13c,&DAT_005e3550,*(uint *)(param_1 + 0x274));
  uVar2 = _DAT_0152d244;
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
  FUN_00406bd0(0xffff);
  iVar6 = FUN_004c4260(uVar2,local_53c,0x1ccafb0,0x14,0x100,0xc0);
  iVar4 = 0;
  local_c = iVar6;
  local_10 = FUN_004c4510(uVar2,0x58);
  iVar8 = 0xf0;
  if (0 < iVar6) {
    iVar6 = 0x1ccafb0;
    do {
      iVar4 = iVar4 + 1;
      FUN_004c2350(uVar2,0x1c0,0x27f,iVar8,0xf8,0,iVar6);
      iVar6 = iVar6 + 0x100;
      iVar8 = iVar8 + local_10;
    } while (iVar4 < local_c);
  }
  FUN_005acff0();
  FUN_004032b0();
  FUN_005b2510();
  FUN_004032b0();
  FUN_0040d0c0(local_3c,0);
  return;
}
