// Name: FUN_00451b70
// Address: 00451b70
// Address Range: [[00451b70, 00452073]]
// Convention: unknown
// Signature: void FUN_00451b70(undefined4 param_1,undefined4 param_2,float param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00451b70(uint param_1,uint param_2,float param_3,float param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  unkbyte10 Var10;
  float10 fVar11;
  ulonglong uVar12;
  byte local_b8 [4];
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  float local_90;
  float local_8c;
  float local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  float local_40;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  
  iVar2 = FUN_00461090(DAT_005ae704);
  if (iVar2 != 0) {
    return;
  }
  FUN_00460a00(DAT_005ae704,param_1);
  FUN_00460aa0(DAT_005ae704,param_2,0);
  FUN_00461eb0(DAT_005ae704,&DAT_005ae458);
  FUN_00461000(DAT_005ae704,1);
  local_30 = 1.0 / param_4;
  iVar2 = 1;
  do {
    fVar5 = (float10)iVar2 * ((float10)_DAT_0057c93e / (float10)param_3) * (float10)_DAT_0057c916;
    Var10 = fpatan(fVar5,(float10)1);
    fVar6 = (float10)fcos(Var10);
    iVar3 = 0;
    local_1c = (float)(fVar6 * (float10)param_4);
    do {
      fVar6 = (float10)iVar3 * (float10)_DAT_0057c91e * (float10)_DAT_0057c926 *
              (float10)_DAT_0057c92e;
      iVar3 = iVar3 + 1;
      fVar7 = (float10)fsin(fVar6);
      fVar11 = (float10)iVar3 * (float10)_DAT_0057c91e * (float10)_DAT_0057c926 *
               (float10)_DAT_0057c92e;
      fVar8 = (float10)fsin(fVar11);
      fVar6 = (float10)fcos(fVar6);
      fVar11 = (float10)fcos(fVar11);
      fVar9 = (float10)(float)fVar5;
      local_2c = (float)(fVar7 * fVar9);
      local_28 = (float)(fVar6 * fVar9);
      local_24 = (float)(fVar8 * fVar9);
      local_20 = (float)(fVar11 * fVar9);
      local_88 = local_1c * 0.0;
      local_90 = local_88 * local_2c;
      local_8c = local_88 * local_28;
      fVar6 = ((float10)param_4 - (float10)local_1c) * (float10)local_30 * (float10)_DAT_0057c936;
      fVar7 = ((float10)param_4 - (float10)local_88) * (float10)local_30 * (float10)_DAT_0057c936;
      local_40 = local_88;
      local_18 = iVar3;
      FUN_00563a30();
      local_34 = (int)ROUND(fVar6);
      uVar12 = FUN_00563a30();
      pfVar4 = (float *)uVar12;
      local_38 = (int)ROUND(fVar7);
      local_84 = (int)ROUND(*pfVar4 * _DAT_0059c030);
      local_80 = (int)ROUND(pfVar4[1] * _DAT_0059c030);
      local_7c = (int)ROUND(pfVar4[2] * _DAT_0059c030);
      FUN_0053075c(*(uint *)((ulonglong)uVar12 >> 0x20),&local_84);
      local_90 = local_40 * local_24;
      local_8c = local_40 * local_20;
      local_88 = local_40;
      local_78 = (int)ROUND(local_90 * _DAT_0059c030);
      local_74 = (int)ROUND(local_8c * _DAT_0059c030);
      local_70 = (int)ROUND(local_40 * _DAT_0059c030);
      FUN_0053075c(*DAT_005ae704 + 0x30,&local_78);
      local_90 = local_1c * local_24;
      local_8c = local_1c * local_20;
      local_88 = local_1c;
      local_6c = (int)ROUND(local_90 * _DAT_0059c030);
      local_68 = (int)ROUND(local_8c * _DAT_0059c030);
      local_64 = (int)ROUND(local_1c * _DAT_0059c030);
      FUN_0053075c(*DAT_005ae704 + 0x60,&local_6c);
      local_90 = local_1c * local_2c;
      local_8c = local_1c * local_28;
      local_88 = local_1c;
      local_60 = (int)ROUND(local_90 * _DAT_0059c030);
      local_5c = (int)ROUND(local_8c * _DAT_0059c030);
      local_58 = (int)ROUND(local_1c * _DAT_0059c030);
      FUN_0053075c(*DAT_005ae704 + 0x90,&local_60);
      piVar1 = DAT_005ae704;
      *(int *)(*DAT_005ae704 + 0x2c) = local_38;
      *(uint *)(*piVar1 + 0x28) = 0xffff;
      *(uint *)(*piVar1 + 0x24) = 0xffff;
      *(uint *)(*piVar1 + 0x20) = 0xffff;
      *(uint *)(*piVar1 + 0x18) = 0xf80000;
      *(uint *)(*piVar1 + 0x1c) = 0xf80000;
      *(int *)(*piVar1 + 0x5c) = local_38;
      *(uint *)(*piVar1 + 0x58) = 0xffff;
      *(uint *)(*piVar1 + 0x54) = 0xffff;
      *(uint *)(*piVar1 + 0x50) = 0xffff;
      *(uint *)(*piVar1 + 0x48) = 0x80000;
      *(uint *)(*piVar1 + 0x4c) = 0xf80000;
      *(int *)(*piVar1 + 0x8c) = local_34;
      *(uint *)(*piVar1 + 0x88) = 0xffff;
      *(uint *)(*piVar1 + 0x84) = 0xffff;
      *(uint *)(*piVar1 + 0x80) = 0xffff;
      *(uint *)(*piVar1 + 0x78) = 0x80000;
      *(uint *)(*piVar1 + 0x7c) = 0x80000;
      *(int *)(*piVar1 + 0xbc) = local_34;
      *(uint *)(*piVar1 + 0xb8) = 0xffff;
      *(uint *)(*piVar1 + 0xb4) = 0xffff;
      *(uint *)(*piVar1 + 0xb0) = 0xffff;
      *(uint *)(*piVar1 + 0xa8) = 0xf80000;
      *(uint *)(*piVar1 + 0xac) = 0x80000;
      local_b4 = 4;
      local_a4 = 0;
      local_a8 = 0;
      local_ac = 0;
      local_b0 = 0;
      local_94 = 3;
      local_a0 = 0;
      local_9c = 1;
      local_98 = 2;
      FUN_00460080(piVar1,local_b8);
    } while (iVar3 < 8);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  thunk_FUN_004cdbc0(DAT_005ae704);
  FUN_00461000(DAT_005ae704,0);
  return;
}
