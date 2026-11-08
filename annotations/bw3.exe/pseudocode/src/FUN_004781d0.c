// Name: FUN_004781d0
// Address: 004781d0
// Address Range: [[004781d0, 0047849a]]
// Convention: unknown
// Signature: void FUN_004781d0(int param_1,float *param_2,undefined4 param_3,float *param_4,float *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004781d0(int param_1,float *param_2,uint param_3,float *param_4,float *param_5)

{
  float fVar1;
  int iVar2;
  byte bVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float afStackY_1068 [1000];
  float local_c0;
  float local_bc;
  float local_b8;
  byte local_b4 [40];
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c [4];
  uint local_6c;
  float local_68;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar3 = 0;
  FUN_0045b550(local_b4,param_3);
  local_80 = *param_5 - *param_4;
  local_7c[0] = param_5[1] - param_4[1];
  local_7c[1] = param_5[2] - param_4[2];
  local_5c = *param_5 - *param_4;
  local_7c[(uint)bVar3 * -2 + 9] = local_7c[(uint)bVar3 * -2];
  local_7c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10] =
       local_7c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  fVar4 = (float10)local_58 / (float10)*(float *)(param_1 + 0x38);
  fVar5 = (float10)local_54 / (float10)*(float *)(param_1 + 0x3c);
  fVar6 = (float10)_DAT_005bcbf9;
  fVar7 = (float10)1 + ((float10)local_5c / (float10)*(float *)(param_1 + 0x34)) * fVar6;
  FUN_005a3120();
  local_2c = (int)ROUND(fVar7);
  fVar7 = (float10)local_5c / (float10)local_2c;
  fVar4 = (float10)1 + fVar4 * fVar6;
  local_18 = local_2c;
  FUN_005a3120();
  local_28 = (int)ROUND(fVar4);
  fVar4 = (float10)local_58 / (float10)local_28;
  fVar5 = (float10)1 + fVar5 * fVar6;
  local_18 = local_28;
  FUN_005a3120();
  local_20 = (int)ROUND(fVar5);
  local_b8 = local_54 / (float)local_20;
  local_24 = 0;
  local_c0 = (float)fVar7;
  local_bc = (float)fVar4;
  if (0 < local_2c) {
    do {
      local_1c = 0;
      if (0 < local_28) {
        do {
          iVar2 = 0;
          if (0 < local_20) {
            do {
              fVar1 = (float)_DAT_005bcc01;
              local_8c = local_c0 * fVar1 + (float)local_24 * local_c0 + *param_4;
              local_88 = local_bc * fVar1 + (float)local_1c * local_bc + param_4[1];
              local_84 = local_b8 * fVar1 + (float)iVar2 * local_b8 + param_4[2];
              local_18 = iVar2;
              FUN_0045b800(local_b4,&local_8c);
              local_44 = local_68;
              local_7c[(uint)bVar3 * -2 + 0xf] = local_7c[(uint)bVar3 * -2 + 6];
              local_7c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x10] =
                   local_7c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7];
              local_50 = local_44 + *param_2;
              local_4c = local_40 + param_2[1];
              local_48 = local_3c + param_2[2];
              local_7c[2] = local_44 + *param_2;
              local_7c[(uint)bVar3 * -2 + 3] = local_7c[(uint)bVar3 * -2 + 0xc];
              local_7c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
                   local_7c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd];
              if (local_7c + 0x11 != local_7c + 2) {
                local_38 = local_7c[2];
                local_34 = local_7c[3];
                local_30 = local_6c;
              }
              FUN_004785c0(param_1,local_7c + 0x11);
              iVar2 = iVar2 + 1;
            } while (iVar2 < local_20);
          }
          local_1c = local_1c + 1;
        } while (local_1c < local_28);
      }
      local_24 = local_24 + 1;
    } while (local_24 < local_2c);
  }
  return;
}
