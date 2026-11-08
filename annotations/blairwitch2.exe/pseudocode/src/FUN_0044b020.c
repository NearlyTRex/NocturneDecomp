// Name: FUN_0044b020
// Address: 0044b020
// Address Range: [[0044b020, 0044b04f] [0044b051, 0044b5a7]]
// Convention: unknown
// Signature: int FUN_0044b020(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0044b020(int param_1)

{
  longlong lVar1;
  float fVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  float10 fVar7;
  ulonglong uVar8;
  float afStackY_1094 [15];
  int aiStackY_1058 [981];
  uint uVar9;
  byte auStack_f8 [4];
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8 [6];
  float local_90 [2];
  int local_88;
  int local_84;
  int local_80;
  float local_7c;
  float local_78;
  float local_74;
  uint local_70;
  int aiStack_6c [5];
  int local_58;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30 [2];
  float local_28;
  int local_24;
  float local_20;
  int local_18;
  
  bVar6 = 0;
  if (*(int *)(param_1 + 0x1cbc) == 0) {
    return param_1;
  }
  FUN_0046b2b0(DAT_0060b280,(float *)(param_1 + 4));
  FUN_0046b670(DAT_0060b280);
  uVar9 = 0;
  local_70 = aiStack_6c[2];
  aiStack_6c[(uint)bVar6 * -2] = aiStack_6c[(uint)bVar6 * -2 + 3];
  aiStack_6c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       aiStack_6c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
  FUN_0046b350(DAT_0060b280,&local_70,uVar9);
  FUN_0046b5c0(DAT_0060b280);
  local_34 = local_58;
  local_30[(uint)bVar6 * -2] = aiStack_6c[(uint)bVar6 * -2 + 6];
  local_30[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       aiStack_6c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
  fVar2 = (float)_DAT_005cf467;
  local_18 = local_30[1];
  local_7c = (float)local_34 * fVar2;
  local_ac = *(float *)(param_1 + 4) - (float)local_34 * fVar2;
  local_78 = (float)local_30[0] * fVar2;
  local_74 = (float)local_30[1] * fVar2;
  local_a8[0] = *(float *)(param_1 + 8) - (float)local_30[0] * fVar2;
  local_a8[1] = *(float *)(param_1 + 0xc) - (float)local_30[1] * fVar2;
  local_a8[5] = local_ac;
  local_90[(uint)bVar6 * -2] = local_a8[(uint)bVar6 * -2];
  local_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       local_a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  if (local_a8 + 2 != local_a8 + 5) {
    local_a8[2] = local_a8[5];
    local_a8[3] = local_90[0];
    local_a8[4] = local_90[1];
  }
  local_b8 = *(float *)(param_1 + 0x18);
  local_b4 = *(float *)(param_1 + 0x24);
  local_b0 = *(float *)(param_1 + 0x30);
  local_20 = SQRT(local_a8[4] * local_a8[4] + local_a8[2] * local_a8[2] + local_a8[3] * local_a8[3])
  ;
  if (local_20 <= 0.0) {
    local_a8[3] = 0.0;
    local_a8[2] = 0.0;
    local_a8[4] = 0.0;
  }
  else {
    fVar2 = 1.0 / local_20;
    local_a8[2] = local_a8[2] * fVar2;
    local_a8[3] = local_a8[3] * fVar2;
    local_a8[4] = local_a8[4] * fVar2;
  }
  fVar7 = -((float10)local_a8[4] * (float10)local_b0 +
           (float10)local_a8[2] * (float10)local_b8 + (float10)local_a8[3] * (float10)local_b4) *
          (float10)*(float *)(param_1 + 0x2fac);
  local_28 = (float)fVar7;
  fVar7 = fVar7 * (float10)local_28 * (float10)local_28 * (float10)local_28 * (float10)_DAT_005cf46f
  ;
  uVar8 = FUN_005b7ff0();
  local_24 = (int)ROUND(fVar7);
  lVar1 = (longlong)((int)((ulonglong)uVar8 >> 0x20) - (int)uVar8) * (longlong)local_24;
  uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  if (0.0 < local_28) {
    local_d0 = 0x3f800000;
    local_cc = 0x3f800000;
    local_c8 = 0xbf000000;
    local_40 = (int)ROUND(_DAT_005f5050 * 1.0);
    local_3c = (int)ROUND(_DAT_005f5050 * 1.0);
    local_38 = (int)ROUND(_DAT_005f5050 * -0.5);
    FUN_0055d723(*DAT_0060b280,&local_40);
    local_cc = 0x3f800000;
    local_d0 = 0xbf800000;
    local_c8 = 0xbf000000;
    local_c4 = (int)ROUND(_DAT_005f5050 * -1.0);
    local_c0 = (int)ROUND(_DAT_005f5050 * 1.0);
    local_bc = (int)ROUND(_DAT_005f5050 * -0.5);
    FUN_0055d723(*DAT_0060b280 + 0x30,&local_c4);
    local_d0 = 0xbf800000;
    local_cc = 0xbf800000;
    local_c8 = 0xbf000000;
    local_88 = (int)ROUND(_DAT_005f5050 * -1.0);
    local_84 = (int)ROUND(_DAT_005f5050 * -1.0);
    local_80 = (int)ROUND(_DAT_005f5050 * -0.5);
    FUN_0055d723(*DAT_0060b280 + 0x60,&local_88);
    local_d0 = 0x3f800000;
    local_c8 = 0xbf000000;
    local_cc = 0xbf800000;
    local_4c = (int)ROUND(_DAT_005f5050 * 1.0);
    local_48 = (int)ROUND(_DAT_005f5050 * -1.0);
    local_44 = (int)ROUND(_DAT_005f5050 * -0.5);
    FUN_0055d723(*DAT_0060b280 + 0x90,aiStack_6c + 8);
    piVar3 = DAT_0060b280;
    *(uint *)(*DAT_0060b280 + 0x18) = 0xf80000;
    *(uint *)(*piVar3 + 0x1c) = 0xf80000;
    *(uint *)(*piVar3 + 0x2c) = uVar4;
    *(uint *)(*piVar3 + 0x48) = 0x80000;
    *(uint *)(*piVar3 + 0x4c) = 0xf80000;
    *(uint *)(*piVar3 + 0x5c) = uVar4;
    *(uint *)(*piVar3 + 0x78) = 0x80000;
    *(uint *)(*piVar3 + 0x7c) = 0x80000;
    *(uint *)(*piVar3 + 0x8c) = uVar4;
    *(uint *)(*piVar3 + 0xa8) = 0xf80000;
    *(uint *)(*piVar3 + 0xac) = 0x80000;
    *(uint *)(*piVar3 + 0xbc) = uVar4;
    *(uint *)(*piVar3 + 0x20) = 0xffff;
    *(uint *)(*piVar3 + 0x24) = 0xffff;
    *(uint *)(*piVar3 + 0x28) = 0xffff;
    *(uint *)(*piVar3 + 0x50) = 0xffff;
    *(uint *)(*piVar3 + 0x54) = 0xffff;
    *(uint *)(*piVar3 + 0x58) = 0xffff;
    *(uint *)(*piVar3 + 0x80) = 0xffff;
    *(uint *)(*piVar3 + 0x84) = 0xffff;
    *(uint *)(*piVar3 + 0x88) = 0xffff;
    *(uint *)(*piVar3 + 0xb0) = 0xffff;
    *(uint *)(*piVar3 + 0xb4) = 0xffff;
    *(uint *)(*piVar3 + 0xb8) = 0xffff;
    FUN_0046ca00(piVar3,&DAT_0060afe0);
    FUN_0046b8d0(DAT_0060b280,1);
    local_f4 = 4;
    local_f0 = 0;
    local_ec = 0;
    local_e8 = 0xffff0001;
    local_e4 = 0xffff0001;
    local_e0 = 0;
    local_d4 = 3;
    local_dc = 1;
    local_d8 = 2;
    FUN_0046a930(DAT_0060b280,auStack_f8);
  }
  FUN_0046b8d0(DAT_0060b280,0);
  thunk_FUN_004e9810(DAT_0060b280);
  iVar5 = FUN_0044b960(param_1);
  return iVar5;
}
