// Name: FUN_00419520
// Address: 00419520
// Address Range: [[00419520, 00419b40]]
// Convention: unknown
// Signature: undefined4 FUN_00419520(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00419520(int param_1,float param_2)

{
  float fVar1;
  byte *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  float *pfVar6;
  uint *puVar7;
  float *pfVar8;
  byte bVar9;
  float afStackY_10b4 [975];
  uint uVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  int aiStack_154 [10];
  float local_12c;
  float fStack_128;
  float fStack_124;
  float afStack_120 [3];
  float afStack_114 [6];
  uint auStack_fc [2];
  float fStack_f4;
  byte auStack_f0 [12];
  uint auStack_e4 [6];
  float fStack_cc;
  float afStack_c8 [4];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  uint uStack_a8;
  float afStack_9c [3];
  uint uStack_90;
  float fStack_88;
  float afStack_84 [3];
  float afStack_78 [4];
  float afStack_68 [5];
  uint uStack_54;
  float afStack_48 [5];
  float fStack_34;
  float *local_30;
  int local_2c;
  float *local_28;
  int local_24;
  int local_1c;
  int local_18;
  uint local_14;
  
  bVar9 = 0;
  fVar1 = *(float *)(param_1 + 0x10afc) - param_2;
  *(float *)(param_1 + 0x10afc) = fVar1;
  if (0.0 < fVar1) {
    *(int *)(param_1 + 0x10af8) = *(int *)(param_1 + 0x10af8) + 1;
    local_14 = FUN_0040cf60(0x40a00000,0x41200000);
    *(uint *)(param_1 + 0x10afc) = local_14;
  }
  if (*(int *)(param_1 + 0x2698) == 0) {
    if (*(float *)(param_1 + 0x10b00) <= 0.0) {
      iVar4 = *(int *)(param_1 + 0x10b04);
      local_30 = (float *)(param_1 + 0x20);
      if (iVar4 != 0) {
        iVar4 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x9c))(iVar4);
        if (iVar4 != 0) {
          FUN_00436710(PTR_DAT_00609ed0,"?%s can't pick up %s, sombody else beat me to it!\n" + 1,param_1,
                       *(uint *)(param_1 + 0x10b04));
          *(uint *)(param_1 + 0x10b04) = 0;
          *(uint *)(param_1 + 0x10b00) = 0;
          FUN_00503620(param_1 + 0x2b4,1,1);
          return 0;
        }
        iVar4 = -1;
        if (*(float *)(param_1 + 0x10b00) < 0.0) {
          iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10b04) + 0x2b0) + 0x8c))
                            (*(int *)(param_1 + 0x10b04),param_1);
          if (iVar3 == 3) {
            iVar4 = *(int *)(param_1 + 0x10b04);
            (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x24))(iVar4);
            fStack_34 = 0.5;
            puVar5 = auStack_e4;
            puVar7 = auStack_fc;
            for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar7 = *puVar5;
              puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
              puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
            }
            FUN_00417ba0(auStack_fc,auStack_f0,afStack_68 + 0xd);
            afStack_48[0] = (float)uStack_a8;
            afStack_68[(uint)bVar9 * -2 + 9] = afStack_c8[(uint)bVar9 * -2 + 9];
            afStack_68[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
                 afStack_c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
            FUN_00417b20(afStack_68 + 8);
            pfVar11 = afStack_c8 + 0x11;
            uStack_90 = afStack_68[2];
            afStack_c8[(uint)bVar9 * -2 + 0xf] = afStack_68[(uint)bVar9 * -2 + 3];
            afStack_c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
                 afStack_68[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
            fStack_88 = fStack_f4 + (float)_DAT_005cc2b2;
            afStack_84[0] = (float)uStack_90;
            afStack_c8[(uint)bVar9 * -2 + 0x12] = afStack_c8[(uint)bVar9 * -2 + 0xf];
            afStack_c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13] =
                 afStack_c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
            FUN_00408d70(iVar4,pfVar11);
            uVar13 = 0;
            pfVar11 = afStack_c8 + 0x14;
            uVar12 = 0;
            uVar10 = 0;
            afStack_9c[0] = (float)uStack_54;
            afStack_c8[(uint)bVar9 * -2 + 0xc] = afStack_68[(uint)bVar9 * -2 + 6];
            afStack_c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
                 afStack_68[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
            afStack_78[0] = 1.5;
            afStack_78[1] = 0.0;
            afStack_78[2] = 0.0;
            iVar4 = FUN_00423000(param_1,afStack_c8 + 0xb,uVar10,pfVar11,uVar12,uVar13);
          }
        }
        if (-1 < iVar4) {
          if (iVar4 < 1) {
            return 1;
          }
          FUN_00436710(PTR_DAT_00609ed0,"%s beginning to pickup %s\n",param_1,
                       *(uint *)(param_1 + 0x10b04));
          FUN_00503620(param_1 + 0x2b4,7,1);
          return 1;
        }
        FUN_00436710(PTR_DAT_00609ed0,"%s can't pick up %s, giving up!!!!\n",param_1,
                     *(uint *)(param_1 + 0x10b04));
        *(uint *)(param_1 + 0x10b04) = 0;
        *(uint *)(param_1 + 0x10b00) = 0x41a00000;
        FUN_00503620(param_1 + 0x2b4,1,1);
        return 0;
      }
      local_28 = afStack_120;
      local_2c = 0;
      local_1c = 0;
      local_18 = 0;
      for (local_24 = 0; local_24 < *(int *)(0x01E661B8 + 0x14d164); local_24 = local_24 + 1) {
        iVar4 = *(int *)(0x01E661B8 + local_2c + 0x14d168);
        iVar3 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x9c))(iVar4);
        if (iVar3 == 0) {
          iVar3 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x8c))(iVar4,param_1);
          if (iVar3 == 3) {
            (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x24))(iVar4);
            pfVar11 = local_28;
            pfVar6 = afStack_114;
            pfVar8 = &local_12c;
            for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
              *pfVar8 = *pfVar6;
              pfVar6 = pfVar6 + (uint)bVar9 * -2 + 1;
              pfVar8 = pfVar8 + (uint)bVar9 * -2 + 1;
            }
            afStack_78[3] = *pfVar11 - local_12c;
            afStack_68[0] = pfVar11[1] - fStack_128;
            afStack_68[1] = pfVar11[2] - fStack_124;
            fStack_cc = *pfVar11 - local_12c;
            afStack_c8[(uint)bVar9 * -2] = afStack_68[(uint)bVar9 * -2];
            afStack_c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
                 afStack_68[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
            if ((((fStack_cc < 1.0) && (afStack_c8[0] < 1.0)) &&
                ((float)_DAT_005cc2ba < afStack_c8[1])) && ((double)afStack_c8[1] < _DAT_005cc2c2))
            {
              iVar3 = FUN_0040c840(iVar4,"CBodyPart");
              if (iVar3 == 0) {
                fStack_b4 = *(float *)(iVar4 + 0x20) - *local_30;
                fStack_b0 = *(float *)(iVar4 + 0x24) - local_30[1];
                fStack_ac = *(float *)(iVar4 + 0x28) - local_30[2];
                afStack_c8[2] = fStack_b4;
                afStack_c8[(uint)bVar9 * -2 + 3] = afStack_c8[(uint)bVar9 * -2 + 6];
                afStack_c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
                     afStack_c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
                afStack_c8[3] = afStack_c8[3] * afStack_c8[3] * afStack_c8[3] * afStack_c8[3];
                fVar1 = SQRT(fStack_b8 * fStack_b8 +
                             afStack_c8[2] * afStack_c8[2] + afStack_c8[3] * afStack_c8[3]);
                if (((float)_DAT_005cc2aa <= fVar1) && ((int)fVar1 < 0x41700001)) {
                  iVar3 = local_18 + 1;
                  *(int *)((int)aiStack_154 + local_1c) = iVar4;
                  local_1c = local_1c + 4;
                  local_18 = iVar3;
                  if (0x27 < local_1c) break;
                }
              }
            }
          }
        }
        local_2c = local_2c + 4;
      }
      if (0 < local_18) {
        iVar4 = FUN_0040cfc0(0,local_18 + -1);
        *(int *)(param_1 + 0x10b04) = aiStack_154[iVar4];
        puVar2 = PTR_DAT_00609ed0;
        *(uint *)(param_1 + 0x10b00) = 0xc2200000;
        *(int *)(param_1 + 0x10af8) = *(int *)(param_1 + 0x10af8) + 1;
        FUN_00436710(puVar2,"%s is going to try to pick up %s\n",param_1,
                     *(uint *)(param_1 + 0x10b04));
        return 1;
      }
    }
    else {
      param_2 = *(float *)(param_1 + 0x10b00) - param_2;
      *(float *)(param_1 + 0x10b00) = param_2;
      if (param_2 < 0.0) {
        *(uint *)(param_1 + 0x10b00) = 0;
      }
    }
  }
  return 0;
}
