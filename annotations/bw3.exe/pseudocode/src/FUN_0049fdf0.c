// Name: FUN_0049fdf0
// Address: 0049fdf0
// Address Range: [[0049fdf0, 004a0468]]
// Convention: unknown
// Signature: int * FUN_0049fdf0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0049fdf0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  float *pfVar8;
  uint extraout_EDX;
  int *piVar9;
  int *piVar10;
  byte bVar11;
  float10 fVar12;
  float afStackY_10d8 [991];
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  byte local_138 [4];
  float local_134;
  uint local_108;
  float local_fc;
  uint local_f8;
  int local_f4;
  float local_f0;
  float local_ec [4];
  float local_dc;
  float local_d8 [2];
  float local_d0;
  float local_cc;
  uint local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  float local_b4 [3];
  uint local_a8;
  float local_a4 [5];
  int local_90;
  int local_8c;
  int local_88;
  float local_84;
  float local_80 [4];
  float local_70;
  float local_6c;
  int local_68;
  uint local_64;
  float local_60;
  float local_5c [2];
  double local_54;
  double local_4c;
  float local_44;
  int local_40;
  uint local_3c;
  int local_38;
  float *local_34;
  int local_30;
  float local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  float local_18;
  float local_14;
  
  bVar11 = 0;
  FUN_0042abb0(local_138);
  fVar1 = (float)param_1[5];
  piVar7 = (int *)(uint)(ushort)((ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                                (ushort)(fVar1 == 0.0) << 0xe);
  if (0.0 < fVar1) {
    fVar2 = *(float *)(0x01D2130C + 0x314);
    local_44 = fVar2;
    local_2c = fVar2;
    fVar1 = (float)param_1[5];
    param_1[5] = (int)(fVar1 - fVar2);
    fVar3 = _DAT_005c0908;
    piVar7 = param_1;
    if (fVar1 - fVar2 < 0.0) {
      param_1[5] = 0;
    }
    else if ((param_1[5] & 0x7fffffffU) != 0) {
      pfVar4 = (float *)(param_1 + 0xc);
      pfVar8 = (float *)(param_1 + 0x3c);
      do {
        local_ec[2] = *pfVar8 * fVar3;
        local_ec[3] = pfVar8[1] * fVar3;
        local_dc = pfVar8[2] * fVar3;
        local_80[2] = *pfVar8 * fVar3;
        local_80[(uint)bVar11 * -2 + 3] = local_ec[(uint)bVar11 * -2 + 3];
        local_80[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
             local_ec[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
        local_84 = local_80[2] * fVar2;
        local_80[0] = local_80[3] * fVar2;
        local_80[1] = local_70 * fVar2;
        local_f0 = local_80[2] * fVar2;
        local_ec[(uint)bVar11 * -2] = local_80[(uint)bVar11 * -2];
        local_ec[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             local_80[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        pfVar8 = pfVar8 + 3;
        *pfVar4 = *pfVar4 + local_f0;
        pfVar4[1] = pfVar4[1] + local_ec[0];
        pfVar4[2] = pfVar4[2] + local_ec[1];
        pfVar4 = pfVar4 + 3;
      } while (pfVar8 != (float *)(param_1 + 0x6c));
      fVar1 = (float)param_1[0x3c];
      fVar1 = SQRT((float)param_1[0x3e] * (float)param_1[0x3e] +
                   fVar1 * fVar1 + (float)param_1[0x3d] * (float)param_1[0x3d]) * _DAT_005c0908;
      param_1[0x6c] = (int)((float)param_1[0x6c] - local_2c);
      param_1[0x6d] = (int)(fVar1 * local_2c + (float)param_1[0x6d]);
      fVar1 = (float)param_1[0x6c];
      piVar7 = (int *)(uint)(ushort)((ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                                    (ushort)(fVar1 == 0.0) << 0xe);
      if (0.0 >= fVar1) {
        piVar7 = param_1 + 0xc;
        local_28 = 0;
        piVar10 = param_1 + 0xf;
        piVar9 = piVar7;
        do {
          if (&local_c0 != piVar9) {
            local_c0 = *piVar9;
            local_bc = piVar9[1];
            local_b8 = piVar9[2];
          }
          if (local_28 == 0xf) {
            if (&local_90 != piVar7) {
              local_90 = *piVar7;
              local_8c = param_1[0xd];
              local_88 = param_1[0xe];
            }
          }
          else if (&local_90 != piVar10) {
            local_90 = *piVar10;
            local_8c = piVar10[1];
            local_88 = piVar10[2];
          }
          if (*param_1 == 0) {
            fVar12 = (float10)(float)param_1[5] * (float10)_DAT_005c0910 * (float10)_DAT_005c0918;
            FUN_005a3120();
            iVar5 = (int)ROUND(fVar12);
            uVar16 = 2;
            uVar15 = 0x40400000;
            uVar13 = 0x40400000;
            uVar14 = extraout_EDX;
            local_40 = iVar5;
          }
          else {
            iVar5 = 0xffff;
            uVar16 = 5;
            uVar15 = 0x40000000;
            uVar13 = 0x40000000;
            uVar14 = 0;
          }
          FUN_004a3c50(0x01C73654,&local_c0,&local_90,uVar14,uVar13,uVar15,uVar16,0x3d4ccccd,iVar5
                      );
          piVar10 = piVar10 + 3;
          local_28 = local_28 + 1;
          piVar9 = piVar9 + 3;
        } while (local_28 < 0x10);
        local_38 = 0;
        local_34 = (float *)(param_1 + 1);
        local_30 = 0;
        do {
          if (*(int *)(0x01ED78C8 + 0x14d164) <= local_38) {
            param_1[0x6c] = 0x3d4ccccd;
            return param_1;
          }
          iVar5 = FUN_0040c840(*(uint *)(0x01ED78C8 + local_30 + 0x14d168),DAT_007e2cec);
          local_24 = iVar5;
          if (((iVar5 != 0) &&
              (iVar6 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x10c))(iVar5), iVar6 == 0)) &&
             (iVar5 != param_1[0xb])) {
            local_60 = *local_34 - *(float *)(iVar5 + 0x20);
            local_5c[0] = local_34[1] - *(float *)(iVar5 + 0x24);
            local_5c[1] = local_34[2] - *(float *)(iVar5 + 0x28);
            local_d8[0] = local_60;
            local_ec[(uint)bVar11 * -2 + 6] = local_5c[(uint)bVar11 * -2];
            iVar5 = local_24;
            local_ec[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
                 local_5c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
            if (local_b4 != local_ec + 5) {
              local_b4[0] = local_d8[0];
              local_b4[2] = local_d0;
            }
            fVar1 = SQRT(local_b4[2] * local_b4[2] + local_b4[0] * local_b4[0]);
            iVar6 = 0;
            local_b4[1] = 0.0;
            local_4c = (double)(float)param_1[0x6d];
            local_54 = (double)fVar1;
            if (((float)param_1[0x6d] + (float)_DAT_005c0928 < fVar1) && (local_54 < local_4c + 1.0)
               ) {
              piVar7 = param_1;
              if (0 < param_1[0x78]) {
                do {
                  if (local_24 == piVar7[0x6e]) goto LAB_004a0042;
                  iVar6 = iVar6 + 1;
                  piVar7 = piVar7 + 1;
                } while (iVar6 < param_1[0x78]);
              }
              if (param_1[0x78] < 10) {
                if (*param_1 == 0) {
                  local_108 = 0x66;
                  local_134 = (float)param_1[5] * _DAT_005c0920 * (float)_DAT_005c0910 +
                              (float)_DAT_005c0930;
                  (**(code **)(*(int *)(local_24 + 0x154) + 0x108))(local_24,local_138);
                  if (*(int *)(iVar5 + 0x27c0) != 0) {
                    uVar17 = 0x40a00000;
                    uVar16 = 1;
                    uVar15 = 0x3f800000;
                    local_a8 = *(uint *)(iVar5 + 0x20);
                    uVar13 = 0;
                    uVar14 = 0;
                    local_a4[1] = (float)*(uint *)(iVar5 + 0x28);
                    pfVar4 = local_a4 + 2;
                    local_a4[0] = *(float *)(iVar5 + 0x24) + _DAT_005c0938;
                    local_a4[2] = (float)*(uint *)(iVar5 + 0x20);
                    local_a4[(uint)bVar11 * -2 + 3] = local_a4[(uint)bVar11 * -2];
                    local_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
                         local_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
                    FUN_0042fbd0(iVar5,pfVar4,uVar14,uVar13,uVar15,uVar16,uVar17);
                  }
                }
                else if ((*param_1 == 1) &&
                        (iVar6 = FUN_0040c840(local_24,_DAT_01d5ba70), iVar6 == 0)) {
                  iVar6 = FUN_0040c840(iVar5,_DAT_02d24cb4);
                  if (((iVar6 == 0) &&
                      (((iVar6 = FUN_0040c840(iVar5,_DAT_02d24a14), iVar6 == 0 &&
                        (iVar6 = FUN_0040c840(iVar5,_DAT_02d24d40), iVar6 == 0)) &&
                       (iVar6 = FUN_0040c840(iVar5,_DAT_02d24a50), iVar6 == 0)))) &&
                     (iVar6 = FUN_0040c840(iVar5,_DAT_02d24ae0), iVar6 == 0)) {
                    *(uint *)(iVar5 + 0x3254) = 0x41200000;
                    *(uint *)(local_24 + 0x3258) = 0;
                  }
                  else {
                    *(uint *)(local_24 + 0x3254) = 0x40a00000;
                    *(uint *)(local_24 + 0x3258) = 0;
                  }
                }
                param_1[param_1[0x78] + 0x6e] = local_24;
                param_1[0x78] = param_1[0x78] + 1;
                if (*param_1 == 0) {
                  if (local_80 + 5 != (float *)(local_24 + 0x20)) {
                    local_6c = *(float *)(local_24 + 0x20);
                    local_64 = *(uint *)(local_24 + 0x28);
                  }
                  local_68 = param_1[2];
                  iVar5 = 0;
                  do {
                    local_40 = FUN_0040ce40(0xc0f00000,0x40f00000);
                    local_3c = FUN_0040ce40(0x41200000,0x41700000);
                    local_cc = (float)FUN_0040ce40(0xc0f00000,0x40f00000);
                    local_20 = local_3c;
                    local_1c = local_40;
                    local_c8 = local_3c;
                    local_c4 = local_40;
                    if (&local_fc != local_ec + 8) {
                      local_f8 = local_3c;
                      local_f4 = local_40;
                      local_fc = local_cc;
                    }
                    iVar5 = iVar5 + 1;
                    local_18 = local_cc;
                    local_14 = local_cc;
                    FUN_004a23c0(0x01C73654,local_80 + 5,&local_fc,0x20000,0x10000,4,0xffff);
                  } while (iVar5 < 0x20);
                }
              }
            }
          }
LAB_004a0042:
          local_38 = local_38 + 1;
          local_30 = local_30 + 4;
        } while( true );
      }
    }
  }
  return piVar7;
}
