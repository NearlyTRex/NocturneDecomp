// Name: FUN_0049c8e0
// Address: 0049c8e0
// Address Range: [[0049c8e0, 0049cc9a]]
// Convention: unknown
// Signature: void FUN_0049c8e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049c8e0(int param_1)

{
  byte *puVar1;
  int extraout_ECX;
  byte bVar2;
  float10 fVar3;
  float10 fVar4;
  float afStackY_1054 [1002];
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  byte local_94 [4];
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  float afStack_68 [3];
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  float afStack_2c [4];
  float local_1c;
  float local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  bVar2 = 0;
  if ((*(uint *)(param_1 + 0xc) & 0x7fffffff) != 0) {
    fVar3 = ((float10)1 - (float10)*(float *)(param_1 + 0xc)) * (float10)_DAT_005c0690;
    FUN_005a3120();
    local_14 = (int)ROUND(fVar3);
    if (*(int *)(param_1 + 0x1c) == 3) {
      puVar1 = &DAT_005fd084;
    }
    else {
      puVar1 = &DAT_005fcb14;
    }
    FUN_0046e5e0(DAT_005f2afc,puVar1 + local_14 * 0x30);
    FUN_0046ce90(DAT_005f2afc,param_1);
    FUN_0046d250(DAT_005f2afc);
    uVar7 = 0;
    puVar6 = &local_6c;
    local_6c = local_30;
    afStack_68[(uint)bVar2 * -2] = afStack_2c[(uint)bVar2 * -2];
    piVar5 = DAT_005f2afc;
    afStack_68[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         afStack_2c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    FUN_0046cf30(piVar5,puVar6,uVar7);
    fVar3 = (float10)*(float *)(param_1 + 0x10) * (float10)_DAT_005c06a8 * (float10)_DAT_005c06a0;
    fVar4 = -(float10)*(float *)(param_1 + 0x10) * (float10)_DAT_005c0698 * (float10)_DAT_005c06a0;
    FUN_005a3120();
    FUN_005a3120();
    local_10 = (int)ROUND(fVar3);
    local_c = (int)ROUND(fVar4);
    if (extraout_ECX != 0) {
      local_10 = -local_10;
      local_c = -local_c;
    }
    local_8 = local_c;
    afStack_2c[2] = (float)local_c;
    afStack_2c[3] = *(float *)(param_1 + 0x10) * _DAT_005c06b0 * (float)_DAT_005c06a0;
    local_1c = 0.0;
    afStack_68[2] = (float)(int)ROUND(afStack_2c[2] * _DAT_005df8e4);
    local_5c = (int)ROUND(afStack_2c[3] * _DAT_005df8e4);
    local_58 = (int)ROUND(_DAT_005df8e4 * 0.0);
    local_18 = afStack_2c[2];
    FUN_005632a3(*DAT_005f2afc,afStack_68 + 2);
    local_8 = local_10;
    afStack_2c[2] = (float)local_10;
    local_3c = (int)ROUND(afStack_2c[2] * _DAT_005df8e4);
    local_38 = (int)ROUND(afStack_2c[3] * _DAT_005df8e4);
    local_34 = (int)ROUND(local_1c * _DAT_005df8e4);
    FUN_005632a3(*DAT_005f2afc + 0x30,&local_3c);
    afStack_2c[3] = -*(float *)(param_1 + 0x10) * (float)_DAT_005c06b8 * (float)_DAT_005c06a0;
    local_48 = (int)ROUND(afStack_2c[2] * _DAT_005df8e4);
    local_44 = (int)ROUND(afStack_2c[3] * _DAT_005df8e4);
    local_40 = (int)ROUND(local_1c * _DAT_005df8e4);
    FUN_005632a3(*DAT_005f2afc + 0x60,&local_48);
    afStack_2c[2] = local_18;
    local_54 = (int)ROUND(local_18 * _DAT_005df8e4);
    local_50 = (int)ROUND(afStack_2c[3] * _DAT_005df8e4);
    local_4c = (int)ROUND(local_1c * _DAT_005df8e4);
    FUN_005632a3(*DAT_005f2afc + 0x90,&local_54);
    piVar5 = DAT_005f2afc;
    *(uint *)(*DAT_005f2afc + 0x18) = 0x20000;
    *(uint *)(*piVar5 + 0x1c) = 0x20000;
    *(uint *)(*piVar5 + 0x48) = 0xfe0000;
    *(uint *)(*piVar5 + 0x4c) = 0x20000;
    *(uint *)(*piVar5 + 0x78) = 0xfe0000;
    *(uint *)(*piVar5 + 0x7c) = 0xfe0000;
    *(uint *)(*piVar5 + 0xa8) = 0x20000;
    *(uint *)(*piVar5 + 0xac) = 0xfe0000;
    *(uint *)(*piVar5 + 0x2c) = 0x8000;
    *(uint *)(*piVar5 + 0x5c) = 0x8000;
    *(uint *)(*piVar5 + 0x8c) = 0x8000;
    *(uint *)(*piVar5 + 0xbc) = 0x8000;
    local_90 = 4;
    local_80 = 0;
    local_84 = 0;
    local_88 = 0;
    local_8c = 0;
    local_7c = 0;
    local_74 = 2;
    local_70 = 3;
    local_78 = 1;
    FUN_0046d4b0(piVar5,1);
    FUN_0046b850(DAT_005f2afc,local_94,0x123);
    FUN_0046d4b0(DAT_005f2afc,0);
    thunk_FUN_004e5ef0(DAT_005f2afc);
  }
  return;
}
