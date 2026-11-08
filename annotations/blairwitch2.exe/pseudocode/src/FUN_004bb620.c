// Name: FUN_004bb620
// Address: 004bb620
// Address Range: [[004bb620, 004bb88d]]
// Convention: unknown
// Signature: void FUN_004bb620(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bb620(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  byte local_3c [4];
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  iVar4 = DAT_006141b8;
  piVar2 = DAT_0060b280;
  if ((*(uint *)(param_1 + 0xaf4) & 0x7fffffff) != 0) {
    local_10 = DAT_006141b8;
    *(uint *)(*DAT_0060b280 + 0x10) = 0;
    *(uint *)(*piVar2 + 0x14) = 0;
    iVar3 = (iVar4 + -1) * 0x10000;
    *(int *)(*piVar2 + 0x40) = iVar3;
    *(uint *)(*piVar2 + 0x44) = 0;
    iVar4 = DAT_006141bc;
    *(int *)(*piVar2 + 0x70) = iVar3;
    iVar3 = (iVar4 + -1) * 0x10000;
    *(int *)(*piVar2 + 0x74) = iVar3;
    *(uint *)(*piVar2 + 0xa0) = 0;
    *(int *)(*piVar2 + 0xa4) = iVar3;
    fVar5 = (float10)_DAT_005d8403;
    fVar6 = (float10)*(float *)(param_1 + 0xaf4) * fVar5;
    FUN_005b7ff0();
    local_14 = (int)ROUND(fVar6);
    *(int *)(extraout_ECX + 0x2c) = local_14;
    fVar6 = (float10)*(float *)(param_1 + 0xaf4) * fVar5;
    FUN_005b7ff0();
    local_14 = (int)ROUND(fVar6);
    *(int *)(extraout_ECX_00 + 0x5c) = local_14;
    fVar6 = (float10)*(float *)(param_1 + 0xaf4) * fVar5;
    FUN_005b7ff0();
    local_14 = (int)ROUND(fVar6);
    *(int *)(extraout_ECX_01 + 0x8c) = local_14;
    fVar5 = fVar5 * (float10)*(float *)(param_1 + 0xaf4);
    FUN_005b7ff0();
    local_14 = (int)ROUND(fVar5);
    *(int *)(extraout_EDX + 0xbc) = local_14;
    iVar3 = 0;
    fVar6 = (float10)_DAT_005d8403;
    do {
      iVar1 = *piVar2;
      fVar5 = (float10)*(float *)(param_1 + 0xb08) * fVar6;
      FUN_005b7ff0();
      local_14 = (int)ROUND(fVar5);
      *(int *)(iVar1 + iVar3 + 0x20) = local_14;
      fVar5 = (float10)*(float *)(param_1 + 0xb0c) * fVar6;
      iVar3 = *piVar2;
      FUN_005b7ff0();
      local_14 = (int)ROUND(fVar5);
      *(int *)(extraout_EDX_00 + 0x24 + iVar3) = local_14;
      iVar1 = *piVar2;
      fVar5 = (float10)*(float *)(param_1 + 0xb10) * fVar6;
      FUN_005b7ff0();
      local_14 = (int)ROUND(fVar5);
      iVar3 = extraout_EDX_01 + 0x30;
      *(int *)(iVar1 + extraout_EDX_00 + 0x28) = local_14;
    } while (iVar3 != 0xc0);
    DAT_0060b280 = piVar2;
    FUN_0046ca00(piVar2,&DAT_006164ac + *(int *)(param_1 + 0xb18) * 0x18);
    piVar2 = DAT_0060b280;
    *(uint *)(*DAT_0060b280 + 0x18) = 0;
    *(uint *)(*piVar2 + 0x1c) = 0xff0000;
    *(uint *)(*piVar2 + 0x48) = 0xff0000;
    *(uint *)(*piVar2 + 0x4c) = 0xff0000;
    *(uint *)(*piVar2 + 0x78) = 0xff0000;
    *(uint *)(*piVar2 + 0x7c) = 0;
    *(uint *)(*piVar2 + 0xa8) = 0;
    *(uint *)(*piVar2 + 0xac) = 0;
    local_38 = 4;
    local_28 = 0;
    local_2c = 0;
    local_30 = 0;
    local_34 = 0;
    local_24 = 0;
    local_20 = 1;
    local_1c = 2;
    local_18 = 3;
    *(uint *)(*piVar2 + 0x10) = 0;
    *(uint *)(*piVar2 + 0x14) = 0;
    iVar3 = (local_10 + -1) * 0x10000;
    *(int *)(*piVar2 + 0x40) = iVar3;
    *(uint *)(*piVar2 + 0x44) = 0;
    *(int *)(*piVar2 + 0x70) = iVar3;
    iVar4 = (iVar4 + -1) * 0x10000;
    *(int *)(*piVar2 + 0x74) = iVar4;
    *(uint *)(*piVar2 + 0xa0) = 0;
    *(int *)(*piVar2 + 0xa4) = iVar4;
    FUN_0046ad70(piVar2,local_3c);
  }
  return;
}
