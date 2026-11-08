// Name: FUN_0049a500
// Address: 0049a500
// Address Range: [[0049a500, 0049aaa9]]
// Convention: unknown
// Signature: void FUN_0049a500(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049a500(float *param_1)

{
  float fVar1;
  float10 fVar2;
  int *piVar3;
  int iVar4;
  int *extraout_EDX;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float afStackY_10a8 [999];
  uint uVar12;
  float local_f4;
  byte local_e8 [4];
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  float local_c0;
  float local_bc [2];
  int local_b4;
  int local_b0;
  int local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float afStack_98 [5];
  float local_84;
  float local_80;
  float local_7c;
  uint local_78;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  float local_54;
  float local_50 [2];
  int local_48;
  int local_44;
  int local_40;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar5 = 0;
  if (*param_1 <= 0.0) {
    return;
  }
  fVar6 = (float10)param_1[7];
  FUN_005b7ff0();
  local_28 = (float)(int)ROUND(fVar6);
  FUN_0046ca00(DAT_0060b280,(int)local_28 * 0x18 + 0x1c3f3c8);
  FUN_0046b2b0(DAT_0060b280,param_1 + 1);
  FUN_0046b670(DAT_0060b280);
  uVar12 = 0;
  afStack_98[2] = (float)local_78;
  afStack_98[(uint)bVar5 * -2 + 3] = afStack_98[(uint)bVar5 * -2 + 9];
  afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
  FUN_0046b350(DAT_0060b280,afStack_98 + 2,uVar12);
  fVar6 = ((float10)_DAT_005f6500 - (float10)*param_1) / (float10)_DAT_005f6500;
  fVar1 = (float)(fVar6 * (float10)_DAT_005d56d2 + (float10)_DAT_005d56da);
  local_f4 = fVar1;
  if ((float10)(double)fVar6 < (float10)_DAT_005d56da) {
    FUN_0046b5e0(DAT_0060b280);
    local_54 = local_9c;
    local_50[(uint)bVar5 * -2] = afStack_98[(uint)bVar5 * -2];
    local_50[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    local_c0 = local_54 - param_1[1];
    local_bc[0] = local_50[0] - param_1[2];
    local_bc[1] = local_50[1] - param_1[3];
    local_84 = local_c0;
    afStack_98[(uint)bVar5 * -2 + 6] = local_bc[(uint)bVar5 * -2];
    afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
         local_bc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    local_f4 = (float)(((float10)1 +
                       ((float10)1 - (float10)(double)fVar6 * (float10)_DAT_005d56e2) *
                       ((float10)1 -
                       (float10)ABS(local_7c * param_1[6] +
                                    local_84 * param_1[4] + local_80 * param_1[5]) /
                       (SQRT((float10)param_1[6] * (float10)param_1[6] +
                             (float10)param_1[4] * (float10)param_1[4] +
                             (float10)param_1[5] * (float10)param_1[5]) *
                       SQRT((float10)local_7c * (float10)local_7c +
                            (float10)local_84 * (float10)local_84 +
                            (float10)local_80 * (float10)local_80))) * (float10)_DAT_005d56ea) *
                      (float10)fVar1);
  }
  local_a4 = fVar1 * _DAT_005d56f2 * (float)_DAT_005d56fa;
  local_a8 = -local_f4 * _DAT_005d56f2 * (float)_DAT_005d56fa;
  local_a0 = 0.0;
  local_48 = (int)ROUND(local_a8 * _DAT_005f64e4);
  local_44 = (int)ROUND(local_a4 * _DAT_005f64e4);
  local_40 = (int)ROUND(_DAT_005f64e4 * 0.0);
  local_28 = local_a8;
  FUN_0055d723(*DAT_0060b280,&local_48);
  local_a8 = local_f4 * (float)_DAT_005d5702 * (float)_DAT_005d56fa;
  local_6c = (int)ROUND(local_a8 * _DAT_005f64e4);
  local_68 = (int)ROUND(local_a4 * _DAT_005f64e4);
  local_64 = (int)ROUND(local_a0 * _DAT_005f64e4);
  FUN_0055d723(*DAT_0060b280 + 0x30,&local_6c);
  local_a4 = -fVar1 * (float)_DAT_005d5702 * (float)_DAT_005d56fa;
  local_b4 = (int)ROUND(local_a8 * _DAT_005f64e4);
  local_b0 = (int)ROUND(local_a4 * _DAT_005f64e4);
  local_ac = (int)ROUND(local_a0 * _DAT_005f64e4);
  FUN_0055d723(*DAT_0060b280 + 0x60,&local_b4);
  local_a8 = local_28;
  local_60 = (int)ROUND(local_28 * _DAT_005f64e4);
  local_5c = (int)ROUND(local_a4 * _DAT_005f64e4);
  local_58 = (int)ROUND(local_a0 * _DAT_005f64e4);
  FUN_0055d723(*DAT_0060b280 + 0x90,&local_60);
  piVar3 = DAT_0060b280;
  fVar6 = (float10)(float)fVar6;
  fVar11 = ((float10)_DAT_005d570e - fVar6) * fVar6;
  fVar7 = ((float10)1 - fVar6) * (float10)_DAT_005d570a;
  fVar6 = (float10)_DAT_005d5716;
  fVar10 = (float10)_DAT_005d571e;
  fVar2 = (float10)_DAT_005d5722;
  *(uint *)(*DAT_0060b280 + 0x18) = 0x20000;
  fVar8 = ((float10)1 - fVar11) * (float10)_DAT_005d5712;
  *(uint *)(*piVar3 + 0x1c) = 0x20000;
  fVar9 = (float10)_DAT_005d571a;
  fVar6 = (fVar11 * fVar6 + fVar8) * fVar9;
  *(uint *)(*piVar3 + 0x48) = 0xfe0000;
  fVar10 = (fVar11 * fVar10 + fVar8) * fVar9;
  *(uint *)(*piVar3 + 0x4c) = 0x20000;
  fVar9 = fVar9 * (fVar11 * fVar2 + fVar8);
  *(uint *)(*piVar3 + 0x78) = 0xfe0000;
  iVar4 = FUN_005b7ff0();
  *(uint *)(iVar4 + 0x7c) = 0xfe0000;
  FUN_005b7ff0();
  iVar4 = FUN_005b7ff0();
  *(uint *)(iVar4 + 0xa8) = 0x20000;
  FUN_005b7ff0();
  local_1c = (int)ROUND(fVar6);
  *(uint *)(*extraout_EDX + 0xac) = 0xfe0000;
  local_24 = (int)ROUND(fVar10);
  *(int *)(*extraout_EDX + 0x20) = local_1c;
  local_18 = (int)ROUND(fVar9);
  *(int *)(*extraout_EDX + 0x24) = local_24;
  local_20 = (int)ROUND(fVar7);
  *(int *)(*extraout_EDX + 0x28) = local_18;
  *(int *)(*extraout_EDX + 0x2c) = local_20;
  *(int *)(*extraout_EDX + 0x50) = local_1c;
  *(int *)(*extraout_EDX + 0x54) = local_24;
  *(int *)(*extraout_EDX + 0x58) = local_18;
  *(int *)(*extraout_EDX + 0x5c) = local_20;
  *(int *)(*extraout_EDX + 0x80) = local_1c;
  *(int *)(*extraout_EDX + 0x84) = local_24;
  *(int *)(*extraout_EDX + 0x88) = local_18;
  *(int *)(*extraout_EDX + 0x8c) = local_20;
  *(int *)(*extraout_EDX + 0xb0) = local_1c;
  *(int *)(*extraout_EDX + 0xb4) = local_24;
  *(int *)(*extraout_EDX + 0xb8) = local_18;
  *(int *)(*extraout_EDX + 0xbc) = local_20;
  local_d4 = 0;
  local_d8 = 0;
  local_dc = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_e4 = 4;
  local_c8 = 2;
  local_c4 = 3;
  local_cc = 1;
  FUN_0046b8d0(extraout_EDX,1);
  FUN_0046a930(DAT_0060b280,local_e8);
  FUN_0046b8d0(DAT_0060b280,0);
  thunk_FUN_004e9810(DAT_0060b280);
  return;
}
