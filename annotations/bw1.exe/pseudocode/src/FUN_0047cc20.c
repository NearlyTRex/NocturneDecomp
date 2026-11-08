// Name: FUN_0047cc20
// Address: 0047cc20
// Address Range: [[0047cc20, 0047cf19]]
// Convention: unknown
// Signature: void FUN_0047cc20(int param_1,float *param_2,float param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047cc20(int param_1,float *param_2,float param_3,uint param_4)

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
  float local_dc [6];
  float local_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  uint uStack_ac;
  float afStack_a8 [5];
  float local_94;
  float local_88 [3];
  float afStack_7c [3];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  uint local_64;
  uint local_60;
  float local_5c;
  float local_58;
  float local_54 [4];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  uint local_34;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar4 = 0;
  local_108 = param_3;
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
            local_24 = fVar5;
            local_58 = local_94;
            local_54[(uint)bVar4 * -2] = afStack_a8[(uint)bVar4 * -2 + 6];
            fVar6 = local_108;
            local_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
                 afStack_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
            local_18 = (float)FUN_0040cc00(fVar5,fVar6);
            local_54[0] = local_18 + local_54[0];
            local_18 = (float)FUN_0040cc00(local_24,local_108);
            local_58 = local_18 + local_58;
            FUN_0045f3e0(local_104,&local_58);
            local_5c = SQRT(param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1])
            ;
            local_64 = 0;
            local_60 = 0;
            local_28 = local_5c;
            FUN_0045f690(local_104,afStack_a8 + 0x11);
            local_88[0] = (float)local_34;
            afStack_a8[(uint)bVar4 * -2 + 9] = local_54[(uint)bVar4 * -2 + 9];
            afStack_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
                 local_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
            pfVar2 = afStack_a8 + 8;
          }
          FUN_0047cf20(param_1,local_1c,pfVar2,param_4);
          local_1c = local_1c + 1;
        } while (local_1c < local_20);
      }
    }
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
  pfVar2 = local_dc;
  pfVar3 = &local_c4;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
    pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
  }
  fStack_40 = local_c4 + fStack_b8;
  fStack_3c = fStack_c0 + fStack_b4;
  fStack_38 = fStack_bc + fStack_b0;
  fStack_70 = local_c4 + fStack_b8;
  afStack_a8[(uint)bVar4 * -2 + 0xf] = local_54[(uint)bVar4 * -2 + 6];
  afStack_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
       local_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  pfVar2 = afStack_a8 + 0xb;
  local_54[2] = fStack_70 * _DAT_005daeb5;
  local_54[3] = fStack_6c * _DAT_005daeb5;
  fStack_44 = fStack_68 * _DAT_005daeb5;
  afStack_7c[0] = fStack_70 * _DAT_005daeb5;
  afStack_a8[(uint)bVar4 * -2 + 0xc] = local_54[(uint)bVar4 * -2 + 3];
  afStack_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
       local_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  FUN_00408b40(param_1,pfVar2);
  afStack_a8[2] = (float)uStack_ac;
  afStack_a8[(uint)bVar4 * -2 + 3] = afStack_a8[(uint)bVar4 * -2];
  afStack_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  if (*(int *)(param_1 + 0xb9e8) == 0) {
    FUN_004e6060(0x01CD0E3C,afStack_a8 + 2,param_2,100,*(uint *)(param_1 + 0x27a0));
    return;
  }
  *(uint *)(param_1 + 0x3120) = 0;
  return;
}
