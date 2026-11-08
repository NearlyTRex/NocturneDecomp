// Name: FUN_0057c890
// Address: 0057c890
// Address Range: [[0057c890, 0057d04c]]
// Convention: unknown
// Signature: void FUN_0057c890(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057c890(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  byte bVar7;
  uint auStackY_1078 [984];
  byte local_f4 [4];
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  uint local_90;
  uint local_8c [5];
  uint local_78;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
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
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  float local_14;
  float local_10;
  int local_c;
  int local_8;
  
  bVar7 = 0;
  if (*param_1 != 0) {
    FUN_0046d250(DAT_005f2afc);
    local_8c[2] = local_78;
    local_8c[(uint)bVar7 * -2 + 3] = local_8c[(uint)bVar7 * -2 + 6];
    local_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         local_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
    if ((*param_1 == 1) || (*param_1 == 5)) {
      local_8c[2] = 0;
    }
    if ((*param_1 == 1) || (*param_1 == 5)) {
      FUN_0046e5e0(DAT_005f2afc,&DAT_006071f4);
      piVar2 = DAT_005f2afc;
      *(uint *)(*DAT_005f2afc + 0x18) = 0x80000;
      *(uint *)(*piVar2 + 0x1c) = 0x80000;
      *(uint *)(*piVar2 + 0x48) = 0x780000;
      *(uint *)(*piVar2 + 0x4c) = 0x80000;
      *(uint *)(*piVar2 + 0x78) = 0x780000;
      *(uint *)(*piVar2 + 0x7c) = 0xf80000;
      *(uint *)(*piVar2 + 0xa8) = 0x80000;
      *(uint *)(*piVar2 + 0xac) = 0xf80000;
    }
    else {
      FUN_0046e5e0(DAT_005f2afc,&DAT_00607224);
    }
    FUN_005375c0(0x01ED78C8,0,0,0,0,0);
    local_10 = 0.1;
    local_14 = 0.1;
    if ((*param_1 == 1) || (*param_1 == 5)) {
      local_14 = -0.4;
      local_10 = 0.05;
    }
    local_f0 = 4;
    local_e0 = 0;
    local_e4 = 0;
    local_e8 = 0;
    local_ec = 0;
    local_dc = 0;
    local_d8 = 1;
    local_d4 = 2;
    local_d0 = 3;
    FUN_0046d4b0(DAT_005f2afc,1);
    FUN_0046d4c0(DAT_005f2afc,0x8000);
    uVar6 = 0;
    if (0 < param_1[0xe]) {
      pfVar5 = (float *)&DAT_02d0c208;
      do {
        iVar3 = *DAT_005f2afc;
        local_c0 = (int)ROUND(*pfVar5 * _DAT_005e6360);
        local_bc = (int)ROUND(pfVar5[1] * _DAT_005e6360);
        local_b8 = (int)ROUND(pfVar5[2] * _DAT_005e6360);
        FUN_0056356c(iVar3,&local_c0);
        iVar3 = FUN_0046e6b0(DAT_005f2afc,iVar3);
        if (iVar3 != 0) {
          FUN_0046ce90(DAT_005f2afc,pfVar5);
          FUN_0046cf30(DAT_005f2afc,local_8c + 2,0);
          local_48 = (int)ROUND(*pfVar5 * _DAT_005e6360);
          local_44 = (int)ROUND(pfVar5[1] * _DAT_005e6360);
          local_40 = (int)ROUND(pfVar5[2] * _DAT_005e6360);
          FUN_00538400(0x01ED78C8,&local_48,0,0,4);
          piVar2 = DAT_005f2afc;
          if (*param_1 == 2) {
            local_18 = ((int)(uVar6 & 0xc) >> 2) * 0x400000;
            iVar4 = (uVar6 & 3) * 0x400000;
            iVar3 = iVar4 + 0x80000;
            *(int *)(*DAT_005f2afc + 0x18) = iVar3;
            *(int *)(*piVar2 + 0x1c) = local_18 + 0x80000;
            iVar4 = iVar4 + 0x380000;
            *(int *)(*piVar2 + 0x48) = iVar4;
            *(int *)(*piVar2 + 0x4c) = local_18 + 0x80000;
            *(int *)(*piVar2 + 0x78) = iVar4;
            *(int *)(*piVar2 + 0x7c) = local_18 + 0x380000;
            *(int *)(*piVar2 + 0xa8) = iVar3;
            *(int *)(*piVar2 + 0xac) = local_18 + 0x380000;
          }
          local_20 = -local_14;
          local_24 = local_10;
          local_1c = 0.0;
          local_54 = (int)ROUND(local_10 * _DAT_005e6360);
          local_50 = (int)ROUND(local_20 * _DAT_005e6360);
          local_4c = (int)ROUND(_DAT_005e6360 * 0.0);
          FUN_005632a3(*DAT_005f2afc,&local_54);
          local_24 = -local_24;
          local_a8 = (int)ROUND(local_24 * _DAT_005e6360);
          local_a4 = (int)ROUND(local_20 * _DAT_005e6360);
          local_a0 = (int)ROUND(local_1c * _DAT_005e6360);
          FUN_005632a3(*DAT_005f2afc + 0x30,&local_a8);
          local_20 = -local_20;
          local_60 = (int)ROUND(local_24 * _DAT_005e6360);
          local_5c = (int)ROUND(local_20 * _DAT_005e6360);
          local_58 = (int)ROUND(local_1c * _DAT_005e6360);
          FUN_005632a3(*DAT_005f2afc + 0x60,&local_60);
          local_24 = -local_24;
          local_9c = (int)ROUND(local_24 * _DAT_005e6360);
          local_98 = (int)ROUND(local_20 * _DAT_005e6360);
          local_94 = (int)ROUND(local_1c * _DAT_005e6360);
          FUN_005632a3(*DAT_005f2afc + 0x90,&local_9c);
          FUN_0046c730(DAT_005f2afc,local_f4);
          thunk_FUN_004e5ef0(DAT_005f2afc);
        }
        uVar6 = uVar6 + 1;
        pfVar5 = pfVar5 + 3;
      } while ((int)uVar6 < param_1[0xe]);
    }
    if ((*param_1 == 1) || (*param_1 == 5)) {
      FUN_0046e5e0(DAT_005f2afc,&DAT_0060720c);
      piVar2 = DAT_005f2afc;
      *(uint *)(*DAT_005f2afc + 0x18) = 0x80000;
      *(uint *)(*piVar2 + 0x1c) = 0x80000;
      *(uint *)(*piVar2 + 0x48) = 0x780000;
      *(uint *)(*piVar2 + 0x4c) = 0x80000;
      *(uint *)(*piVar2 + 0x78) = 0x780000;
      *(uint *)(*piVar2 + 0x7c) = 0xf80000;
      *(uint *)(*piVar2 + 0xa8) = 0x80000;
      *(uint *)(*piVar2 + 0xac) = 0xf80000;
      iVar3 = 0;
      if (0 < param_1[0xe]) {
        local_8 = 0;
        local_c = 0;
        do {
          if (*(char *)(iVar3 + 0x2d1fa88) != '\0') {
            uVar1 = *(uint *)(local_8 + 0x2d1db48);
            iVar4 = (uint)bVar7 * -8 + local_c;
            local_90 = *(uint *)(&DAT_02d0c208 + local_c);
            local_8c[(uint)bVar7 * -2] = *(uint *)(&DAT_02d0c20c + iVar4);
            local_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 *(uint *)((int)(&DAT_02d0c20c + iVar4) + ((uint)bVar7 * -2 + 1) * 4);
            local_8c[0] = uVar1;
            FUN_0046ce90(DAT_005f2afc,&local_90);
            FUN_0046cf30(DAT_005f2afc,local_8c + 2,0);
            local_30 = 0.2;
            local_2c = 0.0;
            local_28 = 0.0;
            local_b4 = (int)ROUND(_DAT_005e6360 * 0.2);
            local_b0 = (int)ROUND(_DAT_005e6360 * 0.0);
            local_ac = (int)ROUND(_DAT_005e6360 * 0.0);
            FUN_005632a3(*DAT_005f2afc,&local_b4);
            local_30 = -local_30;
            local_cc = (int)ROUND(local_30 * _DAT_005e6360);
            local_c8 = (int)ROUND(local_2c * _DAT_005e6360);
            local_c4 = (int)ROUND(local_28 * _DAT_005e6360);
            FUN_005632a3(*DAT_005f2afc + 0x30,&local_cc);
            local_2c = 0.4;
            local_6c = (int)ROUND(local_30 * _DAT_005e6360);
            local_68 = (int)ROUND(_DAT_005e6360 * 0.4);
            local_64 = (int)ROUND(local_28 * _DAT_005e6360);
            FUN_005632a3(*DAT_005f2afc + 0x60,local_8c + 8);
            local_30 = -local_30;
            local_3c = (int)ROUND(local_30 * _DAT_005e6360);
            local_38 = (int)ROUND(local_2c * _DAT_005e6360);
            local_34 = (int)ROUND(local_28 * _DAT_005e6360);
            FUN_005632a3(*DAT_005f2afc + 0x90,&local_3c);
            FUN_0046c730(DAT_005f2afc,local_f4);
            thunk_FUN_004e5ef0(DAT_005f2afc);
          }
          local_8 = local_8 + 4;
          iVar3 = iVar3 + 1;
          local_c = local_c + 0xc;
        } while (iVar3 < param_1[0xe]);
      }
    }
    FUN_0046d4b0(DAT_005f2afc,0);
    return;
  }
  return;
}
