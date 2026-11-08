// Name: FUN_00430d90
// Address: 00430d90
// Address Range: [[00430d90, 004310a3]]
// Convention: unknown
// Signature: void FUN_00430d90(int param_1,float *param_2,float param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00430d90(int param_1,float *param_2,float param_3,uint param_4)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_1094 [990];
  float fVar5;
  float fVar6;
  float local_108;
  byte local_104 [40];
  float local_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float local_c4 [6];
  float fStack_ac;
  float afStack_a8 [5];
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88 [3];
  float afStack_7c [3];
  float afStack_70 [3];
  uint uStack_64;
  float local_58;
  float local_54;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40 [3];
  uint local_34;
  float afStack_30 [4];
  int local_20;
  int local_1c;
  float local_18;
  
  bVar4 = 0;
  local_108 = param_3;
  FUN_00573a80(*(uint *)(param_1 + 0xb9e4));
  if (*(char *)(param_1 + 0x24a8) != '\0') {
    iVar1 = FUN_00569eb0(param_1 + 0x158);
    local_20 = *(int *)(iVar1 + 0xc00);
    if (1 < local_20) {
      if (local_108 < 0.0) {
        local_108 = 20.0;
      }
      local_1c = 0;
      if (0 < local_20) {
        do {
          pfVar2 = param_2;
          if ((param_2 != (float *)0x0) && (0.0 < local_108)) {
            FUN_005a7520(param_2);
            fVar5 = -local_108;
            afStack_30[3] = fVar5;
            local_58 = afStack_a8[2];
            afStack_a8[(uint)bVar4 * -2 + 0x15] = afStack_a8[(uint)bVar4 * -2 + 3];
            fVar6 = local_108;
            afStack_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16] =
                 afStack_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
            local_18 = (float)FUN_0040cc00(fVar5,fVar6);
            local_54 = local_18 + local_54;
            local_18 = (float)FUN_0040cc00(afStack_30[3],local_108);
            local_58 = local_18 + local_58;
            FUN_0045f3e0(local_104,afStack_a8 + 0x14);
            local_40[2] = SQRT(param_2[2] * param_2[2] +
                               *param_2 * *param_2 + param_2[1] * param_2[1]);
            local_40[0] = 0.0;
            local_40[1] = 0.0;
            afStack_30[2] = local_40[2];
            FUN_0045f690(local_104,afStack_a8 + 0x1a);
            local_88[0] = (float)local_34;
            afStack_a8[(uint)bVar4 * -2 + 9] = afStack_30[(uint)bVar4 * -2];
            afStack_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
                 afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
            pfVar2 = afStack_a8 + 8;
          }
          FUN_004311a0(param_1,local_1c,pfVar2,param_4);
          local_1c = local_1c + 1;
        } while (local_1c < local_20);
      }
    }
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
  pfVar2 = local_c4;
  pfVar3 = &local_dc;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
    pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
  }
  fStack_ac = local_dc + fStack_d0;
  afStack_a8[0] = fStack_d8 + fStack_cc;
  afStack_a8[1] = fStack_d4 + fStack_c8;
  fStack_94 = local_dc + fStack_d0;
  afStack_a8[(uint)bVar4 * -2 + 6] = afStack_a8[(uint)bVar4 * -2];
  afStack_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       afStack_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  pfVar2 = afStack_a8 + 0xb;
  fStack_4c = fStack_94 * _DAT_005d5a57;
  fStack_48 = fStack_90 * _DAT_005d5a57;
  fStack_44 = fStack_8c * _DAT_005d5a57;
  afStack_7c[0] = fStack_94 * _DAT_005d5a57;
  afStack_a8[(uint)bVar4 * -2 + 0xc] = afStack_a8[(uint)bVar4 * -2 + 0x18];
  afStack_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
       afStack_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19];
  FUN_00408b40(param_1,pfVar2);
  afStack_70[0] = (float)uStack_64;
  afStack_a8[(uint)bVar4 * -2 + 0xf] = afStack_a8[(uint)bVar4 * -2 + 0x12];
  afStack_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
       afStack_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13];
  if (*(int *)(param_1 + 0xb9e8) == 0) {
    FUN_004e6060(0x01CD0E3C,afStack_a8 + 0xe,param_2,100,*(uint *)(param_1 + 0x27a0));
    *(uint *)(param_1 + 0x70) = 2;
    return;
  }
  *(uint *)(param_1 + 0x3120) = 0;
  *(uint *)(param_1 + 0x70) = 2;
  return;
}
