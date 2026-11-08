// Name: FUN_0051e5d0
// Address: 0051e5d0
// Address Range: [[0051e5d0, 0051eab7]]
// Convention: unknown
// Signature: undefined4 FUN_0051e5d0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0051e5d0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_1098 [988];
  uint uVar8;
  float *pfVar9;
  uint uVar10;
  uint uVar11;
  float fStack_110;
  float fStack_10c;
  int aiStack_108 [10];
  uint auStack_e0 [2];
  float fStack_d8;
  byte auStack_d4 [12];
  uint auStack_c8 [6];
  uint uStack_b0;
  float afStack_ac [4];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float afStack_8c [4];
  float afStack_7c [4];
  float fStack_6c;
  uint uStack_68;
  float afStack_5c [3];
  uint uStack_50;
  float afStack_44 [5];
  float fStack_30;
  int local_2c;
  float *local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  
  bVar7 = 0;
  if (*(int *)(param_1 + 0xc1dc) == 0) {
    fVar1 = *(float *)(param_1 + 0xc26c) - param_2;
    *(float *)(param_1 + 0xc26c) = fVar1;
    if (0.0 < fVar1) {
      *(int *)(param_1 + 0xc268) = *(int *)(param_1 + 0xc268) + 1;
      local_18 = FUN_0040cc00(0x40a00000,0x41200000);
      *(uint *)(param_1 + 0xc26c) = local_18;
    }
    if ((*(int *)(*(int *)(param_1 + 0x2624) * 4 + param_1 + 0x2298) != 0) &&
       (*(int *)(param_1 + 0x2628) == 0)) {
      if (0.0 < *(float *)(param_1 + 0xc270)) {
        param_2 = *(float *)(param_1 + 0xc270) - param_2;
        *(float *)(param_1 + 0xc270) = param_2;
        if (param_2 < 0.0) {
          *(uint *)(param_1 + 0xc270) = 0;
          return 0;
        }
      }
      else {
        iVar4 = *(int *)(param_1 + 0xc274);
        if (iVar4 == 0) {
          local_2c = 0;
          local_20 = 0;
          local_1c = 0;
          local_28 = (float *)(param_1 + 0x20);
          for (local_24 = 0; local_24 < *(int *)(0x01E82168 + 0x14d164); local_24 = local_24 + 1)
          {
            iVar4 = *(int *)(0x01E82168 + local_20 + 0x14d168);
            iVar3 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x94))(iVar4);
            if ((iVar3 == 0) && (iVar3 = FUN_0040c550(iVar4,"CTommyGun"), iVar3 != 0)) {
              afStack_7c[2] = *(float *)(iVar4 + 0x20) - *local_28;
              afStack_7c[3] = *(float *)(iVar4 + 0x24) - local_28[1];
              fStack_6c = *(float *)(iVar4 + 0x28) - local_28[2];
              fStack_98 = afStack_7c[2];
              afStack_ac[(uint)bVar7 * -2 + 6] = afStack_7c[(uint)bVar7 * -2 + 3];
              afStack_ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
                   afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
              fStack_94 = fStack_94 * fStack_94 * fStack_94 * fStack_94;
              fStack_110 = SQRT(fStack_90 * fStack_90 +
                                fStack_98 * fStack_98 + fStack_94 * fStack_94);
              if (((float)_DAT_005e9e8a <= fStack_110) && ((int)fStack_110 < 0x41700001)) {
                *(int *)((int)aiStack_108 + local_1c) = iVar4;
                local_1c = local_1c + 4;
                local_2c = local_2c + 1;
                if (0x27 < local_1c) break;
              }
            }
            local_20 = local_20 + 4;
          }
          if (0 < local_2c) {
            iVar4 = FUN_0040cc60(0,local_2c + -1);
            iVar4 = aiStack_108[iVar4];
            *(uint *)(param_1 + 0xc270) = 0xc2200000;
            *(int *)(param_1 + 0xc274) = iVar4;
            *(int *)(param_1 + 0xc268) = *(int *)(param_1 + 0xc268) + 1;
            FUN_005247c0(param_1 + 0x158,1,1);
            return 1;
          }
        }
        else {
          iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x94))(iVar4);
          if (iVar4 != 0) {
            *(uint *)(param_1 + 0xc274) = 0;
            *(uint *)(param_1 + 0xc270) = 0;
            FUN_005247c0(param_1 + 0x158,1,1);
            return 0;
          }
          fVar1 = *(float *)(param_1 + 0x20) - *(float *)(*(int *)(param_1 + 0xc274) + 0x20);
          fVar2 = *(float *)(param_1 + 0x28) - *(float *)(*(int *)(param_1 + 0xc274) + 0x28);
          fStack_10c = (float)_DAT_005e9e8a -
                       SQRT(fVar2 * fVar2 + fVar1 * fVar1) * (float)_DAT_005e9e82;
          if (fStack_10c < 1.0) {
            fStack_10c = 1.0;
          }
          fVar1 = param_2 * fStack_10c + *(float *)(param_1 + 0xc270);
          iVar4 = -1;
          *(float *)(param_1 + 0xc270) = fVar1;
          if ((fVar1 < 0.0) &&
             (iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc274) + 0x154) + 0x84))
                                (*(int *)(param_1 + 0xc274),param_1), iVar3 == 3)) {
            iVar4 = *(int *)(param_1 + 0xc274);
            (**(code **)(*(int *)(iVar4 + 0x154) + 0x1c))(iVar4);
            puVar5 = auStack_c8;
            puVar6 = auStack_e0;
            for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
              puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
            }
            fStack_30 = 0.5;
            FUN_0041b020(auStack_e0,auStack_d4,afStack_7c + 0x13);
            afStack_5c[0] = (float)uStack_b0;
            afStack_7c[(uint)bVar7 * -2 + 9] = afStack_ac[(uint)bVar7 * -2];
            afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
                 afStack_ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            FUN_0041afa0(afStack_7c + 8);
            pfVar9 = afStack_7c + 0xe;
            afStack_ac[2] = (float)uStack_68;
            afStack_ac[(uint)bVar7 * -2 + 3] = afStack_7c[(uint)bVar7 * -2 + 6];
            afStack_ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
                 afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
            fStack_9c = fStack_d8 + (float)_DAT_005e9e92;
            afStack_44[0] = afStack_ac[2];
            afStack_7c[(uint)bVar7 * -2 + 0xf] = afStack_ac[(uint)bVar7 * -2 + 3];
            afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
                 afStack_ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
            FUN_00408b40(iVar4,pfVar9);
            uVar11 = 0x3d0efa35;
            uVar10 = 0x3e99999a;
            afStack_8c[1] = 0.0;
            afStack_8c[2] = 0.0;
            pfVar9 = afStack_ac + 8;
            uVar8 = 0;
            afStack_8c[3] = (float)uStack_50;
            afStack_7c[(uint)bVar7 * -2] = afStack_7c[(uint)bVar7 * -2 + 0xc];
            afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
            afStack_8c[0] = 1.5;
            iVar4 = FUN_0042ccf0(param_1,afStack_ac + 0xb,uVar8,pfVar9,uVar10,uVar11);
          }
          if (-1 < iVar4) {
            if (iVar4 < 1) {
              return 1;
            }
            FUN_005247c0(param_1 + 0x158,7,1);
            return 1;
          }
          *(uint *)(param_1 + 0xc274) = 0;
          *(uint *)(param_1 + 0xc270) = 0x41a00000;
          FUN_005247c0(param_1 + 0x158,1,1);
        }
      }
    }
  }
  return 0;
}
