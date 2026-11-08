// Name: FUN_00467c00
// Address: 00467c00
// Address Range: [[00467c00, 0046815e]]
// Convention: unknown
// Signature: float FUN_00467c00(int param_1,int param_2,undefined4 param_3,undefined4 param_4,float *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00467c00(int param_1,int param_2,uint param_3,uint param_4,float *param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  float afStackY_10c8 [992];
  float *pfVar5;
  byte local_118 [36];
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e0;
  float local_dc [5];
  float local_c8 [3];
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  uint local_a4;
  float afStack_a0 [5];
  float local_8c;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70 [4];
  float local_60;
  uint local_5c;
  float afStack_58 [4];
  float local_48;
  float local_44;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar4 = 0;
  if (*(int *)(param_1 + 0x100) <= param_2) {
    param_2 = *(int *)(param_1 + 0x100) + -1;
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  local_18 = (float)FUN_00420ee0(param_2 * 0x18 + *(int *)(param_1 + 0x350),param_3,param_4,0);
  if ((0.0 <= local_18) && (local_18 <= 1.0)) {
    local_44 = 2.0;
    if (*(int *)(param_1 + 0x358) == 0) {
      local_28 = FUN_004672b0(param_1,param_2);
      local_34 = 0;
      if (0 < *(int *)(param_1 + 0x110)) {
        local_30 = 0;
        do {
          local_24 = local_30 + *(int *)(param_1 + 0x114);
          piVar2 = (int *)(*(int *)(local_24 + 0x18) * 0xc + local_28);
          local_b0 = (float)*piVar2 * _DAT_005fec44;
          local_ac = (float)piVar2[1] * _DAT_005fec44;
          local_a8 = (float)piVar2[2] * _DAT_005fec44;
          piVar2 = (int *)(*(int *)(local_24 + 0x24) * 0xc + local_28);
          local_80 = (float)*piVar2 * _DAT_005fec44;
          local_7c = (float)piVar2[1] * _DAT_005fec44;
          local_78 = (float)piVar2[2] * _DAT_005fec44;
          local_20 = 2;
          if (2 < *(int *)(local_24 + 4)) {
            local_1c = local_24 + 0x18;
            do {
              piVar2 = (int *)(*(int *)(local_1c + 0x18) * 0xc + local_28);
              local_70[2] = (float)*piVar2 * _DAT_005fec44;
              local_70[3] = (float)piVar2[1] * _DAT_005fec44;
              local_60 = (float)piVar2[2] * _DAT_005fec44;
              FUN_0048fed0(local_118,local_dc + 0xb,afStack_a0 + 8,local_70 + 2);
              if (afStack_a0 + 8 != local_70 + 2) {
                local_80 = local_70[2];
                local_7c = local_70[3];
                local_78 = local_60;
              }
              local_18 = (float)FUN_0048ff40(local_118,param_3,param_4);
              if (((local_18 <= local_44) && (0.0 <= local_18)) &&
                 ((local_18 <= 1.0 && (local_44 = local_18, param_5 != (float *)0x0)))) {
                local_70[0] = -local_f0;
                local_70[1] = -local_ec;
                local_74 = -local_f4;
                local_e0 = -local_f4;
                local_dc[(uint)bVar4 * -2] = local_70[(uint)bVar4 * -2];
                local_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
                     local_70[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
                if (&local_e0 != param_5) {
                  *param_5 = local_e0;
                  param_5[1] = local_dc[0];
                  param_5[2] = local_dc[1];
                }
              }
              local_20 = local_20 + 1;
              local_1c = local_1c + 0xc;
            } while (local_20 < *(int *)(local_24 + 4));
          }
          local_30 = local_30 + 0x48;
          local_34 = local_34 + 1;
        } while (local_34 < *(int *)(param_1 + 0x110));
      }
    }
    else {
      local_3c = param_1 + 0x370;
      FUN_0045f700(local_3c,param_3);
      local_dc[2] = (float)local_5c;
      local_dc[(uint)bVar4 * -2 + 3] = afStack_58[(uint)bVar4 * -2];
      local_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
           afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      FUN_0045f700(local_3c,param_4);
      local_a4 = afStack_a0[2];
      afStack_a0[(uint)bVar4 * -2] = afStack_a0[(uint)bVar4 * -2 + 3];
      afStack_a0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_a0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      iVar3 = param_2 * *(int *)(param_1 + 0x354) * 0x38 + *(int *)(param_1 + 0x358);
      local_2c = 0;
      if (0 < *(int *)(param_1 + 0x354)) {
        local_38 = local_3c;
        do {
          local_18 = (float)FUN_0048ff40(iVar3,local_dc + 2,&local_a4);
          iVar1 = local_38;
          if ((((local_18 <= local_44) && (0.0 <= local_18)) && (local_18 <= 1.0)) &&
             (local_44 = local_18, param_5 != (float *)0x0)) {
            pfVar5 = local_dc + 5;
            afStack_58[2] = -*(float *)(iVar3 + 0x24);
            afStack_58[3] = -*(float *)(iVar3 + 0x28);
            local_48 = -*(float *)(iVar3 + 0x2c);
            local_c8[0] = -*(float *)(iVar3 + 0x24);
            local_dc[(uint)bVar4 * -2 + 6] = afStack_58[(uint)bVar4 * -2 + 3];
            local_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
                 afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
            FUN_0045f690(iVar1,pfVar5);
            local_bc = local_8c;
            local_dc[(uint)bVar4 * -2 + 9] = afStack_a0[(uint)bVar4 * -2 + 6];
            local_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
                 afStack_a0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
            if (local_dc + 8 != param_5) {
              *param_5 = local_bc;
              param_5[1] = local_b8;
              param_5[2] = local_b4;
            }
          }
          local_2c = local_2c + 1;
          iVar3 = iVar3 + 0x38;
        } while (local_2c < *(int *)(param_1 + 0x354));
      }
    }
    return local_44;
  }
  return 2.0;
}
