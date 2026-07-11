// Name: FUN_0044f430
// Address: 0044f430
// Address Range: [[0044f430, 0044f9a3]]
// Convention: unknown
// Signature: void FUN_0044f430(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044f430(int param_1)

{
  longlong lVar1;
  float fVar2;
  int *piVar3;
  uint uVar4;
  byte bVar5;
  float10 fVar6;
  ulonglong uVar7;
  float afStackY_1064 [992];
  float local_d8;
  byte local_d4 [4];
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  float afStack_78 [4];
  float local_68;
  int local_64;
  float local_60;
  int local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  int local_40;
  int local_3c;
  int local_38;
  byte local_34 [12];
  int local_28;
  int local_24;
  int local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  bVar5 = 0;
  if (*(int *)(param_1 + 0x1cbc) == 0) {
    return;
  }
  FUN_00460a00(DAT_005ae704,(float *)(param_1 + 0x104));
  FUN_00460db0(DAT_005ae704,local_34);
  FUN_00460aa0(DAT_005ae704,local_34,0);
  FUN_00460d10(DAT_005ae704);
  local_64 = local_7c;
  (&local_60)[(uint)bVar5 * -2] = afStack_78[(uint)bVar5 * -2];
  (&local_60)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_78[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  local_68 = (float)_DAT_0057c7de;
  afStack_78[2] = (float)local_64 * local_68;
  local_14 = local_5c;
  afStack_78[3] = (float)(int)local_60 * local_68;
  local_68 = (float)local_5c * local_68;
  local_a0 = *(float *)(param_1 + 0x104) - afStack_78[2];
  local_9c = *(float *)(param_1 + 0x108) - afStack_78[3];
  local_98 = *(float *)(param_1 + 0x10c) - local_68;
  if (&local_58 != &local_a0) {
    local_58 = local_a0;
    local_54 = local_9c;
    local_50 = local_98;
  }
  local_4c = *(float *)(param_1 + 0x118);
  local_48 = *(float *)(param_1 + 0x124);
  local_44 = *(float *)(param_1 + 0x130);
  local_d8 = SQRT(local_50 * local_50 + local_58 * local_58 + local_54 * local_54);
  if (local_d8 <= 0.0) {
    local_54 = 0.0;
    local_58 = 0.0;
    local_50 = 0.0;
  }
  else {
    fVar2 = 1.0 / local_d8;
    local_58 = local_58 * fVar2;
    local_54 = local_54 * fVar2;
    local_50 = local_50 * fVar2;
  }
  fVar6 = -((float10)local_50 * (float10)local_44 +
           (float10)local_58 * (float10)local_4c + (float10)local_54 * (float10)local_48);
  local_1c = (float)fVar6;
  fVar6 = fVar6 * (float10)local_1c * (float10)local_1c * (float10)local_1c * (float10)_DAT_0057c7e6
  ;
  uVar7 = FUN_00563a30();
  local_18 = (int)ROUND(fVar6);
  lVar1 = (longlong)((int)((ulonglong)uVar7 >> 0x20) - (int)uVar7) * (longlong)local_18;
  uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  if (0.0 < local_1c) {
    local_ac = 0x3f000000;
    local_a8 = 0x3f000000;
    local_a4 = 0xbf000000;
    local_40 = (int)ROUND(_DAT_0059c030 * 0.5);
    local_3c = (int)ROUND(_DAT_0059c030 * 0.5);
    local_38 = (int)ROUND(_DAT_0059c030 * -0.5);
    FUN_0053075c(*DAT_005ae704,&local_40);
    local_ac = 0xbf000000;
    local_a8 = 0x3f000000;
    local_a4 = 0xbf000000;
    local_28 = (int)ROUND(_DAT_0059c030 * -0.5);
    local_24 = (int)ROUND(_DAT_0059c030 * 0.5);
    local_20 = (int)ROUND(_DAT_0059c030 * -0.5);
    FUN_0053075c(*DAT_005ae704 + 0x30,&local_28);
    local_ac = 0xbf000000;
    local_a8 = 0xbf000000;
    local_a4 = 0xbf000000;
    local_88 = (int)ROUND(_DAT_0059c030 * -0.5);
    local_84 = (int)ROUND(_DAT_0059c030 * -0.5);
    local_80 = (int)ROUND(_DAT_0059c030 * -0.5);
    FUN_0053075c(*DAT_005ae704 + 0x60,&local_88);
    local_ac = 0x3f000000;
    local_a4 = 0xbf000000;
    local_a8 = 0xbf000000;
    local_94 = (int)ROUND(_DAT_0059c030 * 0.5);
    local_90 = (int)ROUND(_DAT_0059c030 * -0.5);
    local_8c = (int)ROUND(_DAT_0059c030 * -0.5);
    FUN_0053075c(*DAT_005ae704 + 0x90,&local_94);
    piVar3 = DAT_005ae704;
    *(uint *)(*DAT_005ae704 + 0x18) = 0xf80000;
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
    FUN_00461eb0(piVar3,&DAT_005ae470);
    FUN_00461000(DAT_005ae704,1);
    local_d0 = 4;
    local_cc = 0;
    local_c8 = 0;
    local_c4 = 0xffff0001;
    local_c0 = 0xffff8001;
    local_bc = 0;
    local_b0 = 3;
    local_b8 = 1;
    local_b4 = 2;
    FUN_00460080(DAT_005ae704,local_d4);
  }
  FUN_00461000(DAT_005ae704,0);
  thunk_FUN_004cdbc0(DAT_005ae704);
  FUN_00450520(param_1);
  return;
}
