// Name: core_fire.cpp_FUN_0049fdf0
// Address: 0049fdf0
// Address Range: [[0049fdf0, 004a0468]]
// Convention: unknown
// Signature: int * core_fire_cpp_FUN_0049fdf0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * core_fire_cpp_FUN_0049fdf0(int *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  float *pfVar7;
  uint extraout_EDX;
  int *piVar8;
  int *piVar9;
  byte bVar10;
  float10 fVar11;
  float afStackY_10d8 [991];
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  uint uVar17;
  SDamageInfo local_138 [4];
  float local_134;
  uint local_108;
  CVector3f local_fc;
  float local_f0;
  float local_ec [4];
  float local_dc;
  float local_d8 [2];
  float local_d0;
  CVector3f local_cc;
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
  CVector3f local_6c;
  float local_60;
  float local_5c [2];
  double local_54;
  double local_4c;
  float local_44;
  float local_40;
  float local_3c;
  int local_38;
  float *local_34;
  int local_30;
  float local_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar10 = 0;
  core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(local_138);
  fVar16 = (float)param_1[5];
  piVar6 = (int *)(uint)(ushort)((ushort)(0.0 < fVar16) << 8 | (ushort)NAN(fVar16) << 10 |
                                (ushort)(fVar16 == 0.0) << 0xe);
  if (0.0 < fVar16) {
    fVar1 = g_CGamePtr->delta_time_float;
    local_44 = fVar1;
    local_2c = fVar1;
    fVar16 = (float)param_1[5];
    param_1[5] = (int)(fVar16 - fVar1);
    fVar2 = _DAT_005c0908;
    piVar6 = param_1;
    if (fVar16 - fVar1 < 0.0) {
      param_1[5] = 0;
    }
    else if ((param_1[5] & 0x7fffffffU) != 0) {
      pfVar3 = (float *)(param_1 + 0xc);
      pfVar7 = (float *)(param_1 + 0x3c);
      do {
        local_ec[2] = *pfVar7 * fVar2;
        local_ec[3] = pfVar7[1] * fVar2;
        local_dc = pfVar7[2] * fVar2;
        local_80[2] = *pfVar7 * fVar2;
        local_80[(uint)bVar10 * -2 + 3] = local_ec[(uint)bVar10 * -2 + 3];
        local_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             local_ec[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
        local_84 = local_80[2] * fVar1;
        local_80[0] = local_80[3] * fVar1;
        local_80[1] = local_70 * fVar1;
        local_f0 = local_80[2] * fVar1;
        local_ec[(uint)bVar10 * -2] = local_80[(uint)bVar10 * -2];
        local_ec[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             local_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        pfVar7 = pfVar7 + 3;
        *pfVar3 = *pfVar3 + local_f0;
        pfVar3[1] = pfVar3[1] + local_ec[0];
        pfVar3[2] = pfVar3[2] + local_ec[1];
        pfVar3 = pfVar3 + 3;
      } while (pfVar7 != (float *)(param_1 + 0x6c));
      fVar16 = (float)param_1[0x3c];
      fVar16 = SQRT((float)param_1[0x3e] * (float)param_1[0x3e] +
                    fVar16 * fVar16 + (float)param_1[0x3d] * (float)param_1[0x3d]) * _DAT_005c0908;
      param_1[0x6c] = (int)((float)param_1[0x6c] - local_2c);
      param_1[0x6d] = (int)(fVar16 * local_2c + (float)param_1[0x6d]);
      fVar16 = (float)param_1[0x6c];
      piVar6 = (int *)(uint)(ushort)((ushort)(0.0 < fVar16) << 8 | (ushort)NAN(fVar16) << 10 |
                                    (ushort)(fVar16 == 0.0) << 0xe);
      if (0.0 >= fVar16) {
        piVar6 = param_1 + 0xc;
        local_28 = 0;
        piVar9 = param_1 + 0xf;
        piVar8 = piVar6;
        do {
          if (&local_c0 != piVar8) {
            local_c0 = *piVar8;
            local_bc = piVar8[1];
            local_b8 = piVar8[2];
          }
          if (local_28 == 0xf) {
            if (&local_90 != piVar6) {
              local_90 = *piVar6;
              local_8c = param_1[0xd];
              local_88 = param_1[0xe];
            }
          }
          else if (&local_90 != piVar9) {
            local_90 = *piVar9;
            local_8c = piVar9[1];
            local_88 = piVar9[2];
          }
          if (*param_1 == 0) {
            fVar11 = (float10)(float)param_1[5] * (float10)_DAT_005c0910 * (float10)_DAT_005c0918;
            round();
            fVar16 = (float)(int)ROUND(fVar11);
            uVar15 = 2;
            uVar14 = 0x40400000;
            uVar12 = 0x40400000;
            uVar13 = extraout_EDX;
            local_40 = fVar16;
          }
          else {
            fVar16 = 9.18341e-41;
            uVar15 = 5;
            uVar14 = 0x40000000;
            uVar12 = 0x40000000;
            uVar13 = 0;
          }
          core_fire_cpp_FUN_004a3c50
                    (0x01C73654,&local_c0,&local_90,uVar13,uVar12,uVar14,uVar15,0x3d4ccccd,fVar16)
          ;
          piVar9 = piVar9 + 3;
          local_28 = local_28 + 1;
          piVar8 = piVar8 + 3;
        } while (local_28 < 0x10);
        local_38 = 0;
        local_34 = (float *)(param_1 + 1);
        local_30 = 0;
        do {
          if (g_CDemonSetPtr->actor_count <= local_38) {
            param_1[0x6c] = 0x3d4ccccd;
            return param_1;
          }
          iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                            (*(uint *)((int)g_CDemonSetPtr->actors + local_30),
                             g_CCharacterClassInfo.name_hash);
          local_24 = iVar4;
          if (((iVar4 != 0) &&
              (iVar5 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4), iVar5 == 0)) &&
             (iVar4 != param_1[0xb])) {
            local_60 = *local_34 - *(float *)(iVar4 + 0x20);
            local_5c[0] = local_34[1] - *(float *)(iVar4 + 0x24);
            local_5c[1] = local_34[2] - *(float *)(iVar4 + 0x28);
            local_d8[0] = local_60;
            local_ec[(uint)bVar10 * -2 + 6] = local_5c[(uint)bVar10 * -2];
            iVar4 = local_24;
            local_ec[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
                 local_5c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
            if (local_b4 != local_ec + 5) {
              local_b4[0] = local_d8[0];
              local_b4[2] = local_d0;
            }
            fVar16 = SQRT(local_b4[2] * local_b4[2] + local_b4[0] * local_b4[0]);
            iVar5 = 0;
            local_b4[1] = 0.0;
            local_4c = (double)(float)param_1[0x6d];
            local_54 = (double)fVar16;
            if (((float)param_1[0x6d] + (float)_DAT_005c0928 < fVar16) &&
               (local_54 < local_4c + 1.0)) {
              piVar6 = param_1;
              if (0 < param_1[0x78]) {
                do {
                  if (local_24 == piVar6[0x6e]) goto LAB_004a0042;
                  iVar5 = iVar5 + 1;
                  piVar6 = piVar6 + 1;
                } while (iVar5 < param_1[0x78]);
              }
              if (param_1[0x78] < 10) {
                if (*param_1 == 0) {
                  local_108 = 0x66;
                  local_134 = (float)param_1[5] * _DAT_005c0920 * (float)_DAT_005c0910 +
                              (float)_DAT_005c0930;
                  (**(code **)(*(int *)(local_24 + 0x154) + 0x108))(local_24,local_138);
                  if (*(int *)(iVar4 + 0x27c0) != 0) {
                    uVar17 = 0x40a00000;
                    uVar15 = 1;
                    uVar14 = 0x3f800000;
                    local_a8 = *(uint *)(iVar4 + 0x20);
                    uVar12 = 0;
                    uVar13 = 0;
                    local_a4[1] = (float)*(uint *)(iVar4 + 0x28);
                    pfVar3 = local_a4 + 2;
                    local_a4[0] = *(float *)(iVar4 + 0x24) + _DAT_005c0938;
                    local_a4[2] = (float)*(uint *)(iVar4 + 0x20);
                    local_a4[(uint)bVar10 * -2 + 3] = local_a4[(uint)bVar10 * -2];
                    local_a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
                         local_a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
                    core_charactr_cpp_FUN_0042fbd0(iVar4,pfVar3,uVar13,uVar12,uVar14,uVar15,uVar17);
                  }
                }
                else if ((*param_1 == 1) &&
                        (iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                                           (local_24,g_CHeroClassInfo.name_hash), iVar5 == 0)) {
                  iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                                    (iVar4,g_CHinoClassInfo.name_hash);
                  if (((iVar5 == 0) &&
                      (((iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                                           (iVar4,g_CKedwardClassInfo.name_hash), iVar5 == 0 &&
                        (iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                                           (iVar4,g_CStylerDemonClassInfo.name_hash), iVar5 == 0))
                       && (iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                                             (iVar4,g_CMattanntoteClassInfo.name_hash), iVar5 == 0))
                      )) && (iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                                               (iVar4,g_CBaalClassInfo.name_hash), iVar5 == 0)) {
                    *(uint *)(iVar4 + 0x3254) = 0x41200000;
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
                  if (&local_6c != (CVector3f *)(local_24 + 0x20)) {
                    local_6c.x = ((CVector3f *)(local_24 + 0x20))->x;
                    local_6c.z = *(float *)(local_24 + 0x28);
                  }
                  local_6c.y = (float)param_1[2];
                  iVar4 = 0;
                  do {
                    local_40 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-7.5,7.5);
                    local_3c = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(10.0,15.0);
                    local_cc.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-7.5,7.5);
                    local_20 = local_3c;
                    local_1c = local_40;
                    local_cc.y = local_3c;
                    local_cc.z = local_40;
                    if (&local_fc != (CVector3f *)(local_ec + 8)) {
                      local_fc.y = local_3c;
                      local_fc.z = local_40;
                      local_fc.x = local_cc.x;
                    }
                    iVar4 = iVar4 + 1;
                    local_18 = local_cc.x;
                    local_14 = local_cc.x;
                    core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                              (0x01C73654,&local_6c,&local_fc,0x20000,0x10000,4,0xffff);
                  } while (iVar4 < 0x20);
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
  return piVar6;
}
