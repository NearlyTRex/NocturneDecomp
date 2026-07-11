// Name: FUN_004e6160
// Address: 004e6160
// Address Range: [[004e6160, 004e7028]]
// Convention: unknown
// Signature: void FUN_004e6160(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4,int *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e6160(uint *param_1,uint *param_2,int param_3,int param_4,int *param_5)

{
  int *piVar1;
  float fVar2;
  uint uVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  uint *puVar15;
  float10 fVar16;
  uint local_2080;
  uint local_207c;
  float local_2078 [576];
  float afStack_1778 [576];
  float afStack_e78 [575];
  uint uStack_57a;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  uint local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
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
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  uint *local_5c;
  uint *local_58;
  uint *local_54;
  int local_50;
  uint *local_4c;
  uint *local_48;
  uint *local_44;
  uint *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  
  local_f0 = param_5[4];
  if ((*(int *)(*param_5 + 0x1c) == 1) && ((*(byte *)(*param_5 + 0x20) & 2) != 0)) {
    local_ec = 1;
  }
  else {
    local_ec = 0;
  }
  if ((*(int *)(*param_5 + 0x1c) == 1) && ((*(byte *)(*param_5 + 0x20) & 1) != 0)) {
    local_ac = 1;
  }
  else {
    local_ac = 0;
  }
  local_e0 = (uint)(*(int *)*param_5 == 0);
  if ((*(uint *)(param_4 + 0xc) & 1) == 1) {
    local_2080 = 0x667f6ee7;
    local_207c = 0x3fe6a09e;
  }
  else {
    local_2080 = 0x995b2417;
    local_207c = 0x3feae89f;
  }
  local_f4 = ((int *)*param_5)[4] + *(int *)*param_5 * 3;
  iVar12 = 0;
  do {
    iVar7 = iVar12 + 2;
    *(ushort *)((int)&uStack_57a + iVar12 + 2) = 7;
    iVar12 = iVar7;
  } while (iVar7 != 0x480);
  if ((local_f0 == 2) && (local_ac != 0)) {
    if ((*(int *)(param_4 + 0x10) == 0) || (*(int *)(param_4 + 0x14) != 2)) {
      iVar7 = 0x1f;
      iVar14 = 0x11;
      iVar12 = 0;
      puVar15 = param_1 + 0x22e;
      do {
        if ((puVar15[iVar14 + 0x240] & 0x7fffffff) != 0) {
          iVar12 = iVar7 * 0x12 + iVar14;
          break;
        }
        iVar14 = iVar14 + -1;
        if (iVar14 < 0) {
          puVar15 = puVar15 + -0x12;
          iVar7 = iVar7 + -1;
          iVar14 = 0x11;
        }
      } while (-1 < iVar7);
      iVar14 = local_f4 * 0x94;
      local_e8 = 0;
      iVar7 = *(int *)(&DAT_005bc0f8 + iVar14);
      while (iVar7 <= iVar12) {
        local_e8 = local_e8 + 1;
        piVar1 = (int *)(&DAT_005bc0fc + iVar14);
        iVar14 = iVar14 + 4;
        iVar7 = *piVar1;
      }
      iVar12 = *(int *)(&DAT_005bc0f8 + iVar14);
      local_94 = local_f4 * 0x94;
      local_8c = local_f4 * 0x94 + local_e8 * 4;
      if (local_e8 < 0x15) {
        local_88 = local_e8 * 4;
        do {
          iVar7 = *(int *)(&DAT_005bc0fc + local_8c) - *(int *)(&DAT_005bc0f8 + local_8c);
          if (0 < iVar7) {
            iVar14 = iVar12 * 2;
            local_a8 = param_3 + local_88;
            local_90 = iVar12 * 4;
            do {
              sVar4 = *(short *)(local_a8 + 0xf8);
              *(short *)((int)&uStack_57a + iVar14 + 2) = sVar4;
              if (sVar4 != 7) {
                if (local_e0 == 0) {
                  fVar16 = (float10)fptan((float10)*(short *)((int)&uStack_57a + iVar14 + 2) *
                                          (float10)_DAT_0058b8e8);
                  *(float *)((int)afStack_e78 + local_90) = (float)fVar16;
                }
                else {
                  FUN_004e60c0(*(int *)((int)&uStack_57a + iVar14) >> 0x10,local_2080,local_207c,
                               iVar12,local_2078);
                }
              }
              iVar14 = iVar14 + 2;
              iVar12 = iVar12 + 1;
              iVar7 = iVar7 + -1;
              local_90 = local_90 + 4;
            } while (0 < iVar7);
          }
          local_88 = local_88 + 4;
          local_8c = local_8c + 4;
          local_e8 = local_e8 + 1;
        } while (local_88 < 0x54);
      }
      iVar14 = 0x240 - *(int *)(&DAT_005bc14c + local_94);
      iVar7 = *(int *)(&DAT_005bc148 + local_94);
      if (0 < iVar14) {
        local_a4 = iVar7 * 2;
        local_84 = iVar12 * 2;
        iVar12 = iVar12 * 4;
        do {
          iVar6 = local_84;
          iVar11 = local_a4;
          fVar2 = afStack_e78[iVar7];
          iVar14 = iVar14 + -1;
          *(float *)((int)local_2078 + iVar12) = local_2078[iVar7];
          *(float *)((int)afStack_e78 + iVar12) = fVar2;
          uVar5 = *(ushort *)((int)&uStack_57a + iVar11 + 2);
          *(float *)((int)afStack_1778 + iVar12) = afStack_1778[iVar7];
          local_84 = local_84 + 2;
          *(ushort *)((int)&uStack_57a + iVar6 + 2) = uVar5;
          iVar12 = iVar12 + 4;
        } while (0 < iVar14);
      }
    }
    else {
      iVar12 = local_f4 * 0x94;
      if (*(int *)(param_4 + 0x18) == 0) {
        local_9c = iVar12;
        local_bc = iVar12;
        local_e4 = *(int *)(param_4 + 0x18);
        local_74 = param_3;
        do {
          iVar12 = 0xc;
          local_c0 = -1;
          local_b8 = local_e4 + 1;
          do {
            iVar14 = iVar12 * 4 + local_bc;
            iVar7 = *(int *)(iVar14 + 0x5bc154);
            iVar14 = *(int *)(&DAT_005bc158 + iVar14) - iVar7;
            iVar7 = iVar7 * 3 + (local_e4 + 1) * iVar14;
            for (; 0 < iVar14; iVar14 = iVar14 + -1) {
              iVar7 = iVar7 + -1;
              local_18 = 0x12;
              if ((param_1[(iVar7 / 0x12) * 0x12 + iVar7 % 0x12 + 0x240] & 0x7fffffff) != 0) {
                local_c0 = iVar12;
                iVar12 = -10;
                iVar14 = -10;
              }
            }
            iVar12 = iVar12 + -1;
          } while (-1 < iVar12);
          local_30 = local_c0 + 1;
          local_b4 = local_74;
          local_7c = local_9c + local_30 * 4;
          if (local_30 < 0xc) {
            local_78 = local_30 * 4;
            do {
              iVar12 = *(int *)(&DAT_005bc158 + local_7c) - *(int *)(local_7c + 0x5bc154);
              iVar7 = *(int *)(local_7c + 0x5bc154) * 3 + local_e4 * iVar12;
              if (0 < iVar12) {
                iVar14 = iVar7 * 2;
                local_b0 = local_b4 + local_78;
                local_80 = iVar7 * 4;
                do {
                  sVar4 = *(short *)(local_b0 + 0x154);
                  *(short *)((int)&uStack_57a + iVar14 + 2) = sVar4;
                  if (sVar4 != 7) {
                    if (local_e0 == 0) {
                      fVar16 = (float10)fptan((float10)*(short *)((int)&uStack_57a + iVar14 + 2) *
                                              (float10)_DAT_0058b8e8);
                      *(float *)((int)afStack_e78 + local_80) = (float)fVar16;
                    }
                    else {
                      FUN_004e60c0(*(int *)((int)&uStack_57a + iVar14) >> 0x10,local_2080,local_207c
                                   ,iVar7,local_2078);
                    }
                  }
                  iVar14 = iVar14 + 2;
                  iVar7 = iVar7 + 1;
                  iVar12 = iVar12 + -1;
                  local_80 = local_80 + 4;
                } while (0 < iVar12);
              }
              local_78 = local_78 + 4;
              local_7c = local_7c + 4;
              local_30 = local_30 + 1;
            } while (local_78 < 0x30);
          }
          iVar7 = *(int *)(&DAT_005bc188 + local_9c) - *(int *)(&DAT_005bc184 + local_9c);
          local_28 = *(int *)(&DAT_005bc180 + local_9c) * 3;
          iVar12 = local_e4 *
                   (*(int *)(&DAT_005bc184 + local_9c) - *(int *)(&DAT_005bc180 + local_9c)) +
                   local_28;
          local_28 = local_28 + local_e4 * iVar7;
          if (0 < iVar7) {
            iVar14 = local_28 * 4;
            iVar11 = local_28 * 2;
            do {
              fVar2 = afStack_e78[iVar12];
              iVar7 = iVar7 + -1;
              uVar5 = *(ushort *)((int)&uStack_57a + iVar12 * 2 + 2);
              *(float *)((int)local_2078 + iVar14) = local_2078[iVar12];
              *(float *)((int)afStack_e78 + iVar14) = fVar2;
              *(ushort *)((int)&uStack_57a + iVar11 + 2) = uVar5;
              *(float *)((int)afStack_1778 + iVar14) = afStack_1778[iVar12];
              local_28 = local_28 + 1;
              iVar14 = iVar14 + 4;
              iVar11 = iVar11 + 2;
            } while (0 < iVar7);
          }
          local_e4 = local_e4 + 1;
          local_74 = local_74 + 0x34;
        } while (local_e4 < 3);
      }
      else {
        local_98 = iVar12;
        local_d4 = iVar12;
        local_dc = 0;
        local_24 = 0;
        local_68 = param_3;
        do {
          iVar12 = 0xc;
          local_d8 = 2;
          local_d0 = local_24 + 1;
          do {
            iVar14 = iVar12 * 4 + local_d4;
            iVar7 = *(int *)(iVar14 + 0x5bc154);
            iVar14 = *(int *)(&DAT_005bc158 + iVar14) - iVar7;
            iVar7 = (local_24 + 1) * iVar14 + iVar7 * 3;
            for (; 0 < iVar14; iVar14 = iVar14 + -1) {
              iVar7 = iVar7 + -1;
              local_18 = 0x12;
              if ((param_1[(iVar7 / 0x12) * 0x12 + iVar7 % 0x12 + 0x240] & 0x7fffffff) != 0) {
                local_d8 = iVar12;
                iVar12 = -10;
                iVar14 = -10;
              }
            }
            iVar12 = iVar12 + -1;
          } while (2 < iVar12);
          local_34 = local_d8 + 1;
          if (local_dc < local_34) {
            local_dc = local_34;
          }
          local_cc = local_68;
          local_6c = local_34 * 4 + local_98;
          for (; local_34 < 0xc; local_34 = local_34 + 1) {
            iVar12 = *(int *)(&DAT_005bc158 + local_6c) - *(int *)(local_6c + 0x5bc154);
            iVar7 = *(int *)(local_6c + 0x5bc154) * 3 + local_24 * iVar12;
            if (0 < iVar12) {
              iVar14 = iVar7 * 2;
              local_c8 = local_cc + local_34 * 4;
              local_70 = iVar7 * 4;
              do {
                sVar4 = *(short *)(local_c8 + 0x154);
                *(short *)((int)&uStack_57a + iVar14 + 2) = sVar4;
                if (sVar4 != 7) {
                  if (local_e0 == 0) {
                    fVar16 = (float10)fptan((float10)*(short *)((int)&uStack_57a + iVar14 + 2) *
                                            (float10)_DAT_0058b8e8);
                    *(float *)((int)afStack_e78 + local_70) = (float)fVar16;
                  }
                  else {
                    FUN_004e60c0(*(int *)((int)&uStack_57a + iVar14) >> 0x10,local_2080,local_207c,
                                 iVar7,local_2078);
                  }
                }
                iVar14 = iVar14 + 2;
                iVar7 = iVar7 + 1;
                iVar12 = iVar12 + -1;
                local_70 = local_70 + 4;
              } while (0 < iVar12);
            }
            local_6c = local_6c + 4;
          }
          iVar7 = *(int *)(&DAT_005bc188 + local_98) - *(int *)(&DAT_005bc184 + local_98);
          local_2c = *(int *)(&DAT_005bc180 + local_98) * 3;
          iVar12 = local_24 *
                   (*(int *)(&DAT_005bc184 + local_98) - *(int *)(&DAT_005bc180 + local_98)) +
                   local_2c;
          local_2c = local_2c + local_24 * iVar7;
          if (0 < iVar7) {
            iVar14 = local_2c * 4;
            iVar11 = local_2c * 2;
            do {
              fVar2 = afStack_e78[iVar12];
              iVar7 = iVar7 + -1;
              uVar5 = *(ushort *)((int)&uStack_57a + iVar12 * 2 + 2);
              *(float *)((int)local_2078 + iVar14) = local_2078[iVar12];
              *(float *)((int)afStack_e78 + iVar14) = fVar2;
              *(ushort *)((int)&uStack_57a + iVar11 + 2) = uVar5;
              *(float *)((int)afStack_1778 + iVar14) = afStack_1778[iVar12];
              local_2c = local_2c + 1;
              iVar14 = iVar14 + 4;
              iVar11 = iVar11 + 2;
            } while (0 < iVar7);
          }
          local_24 = local_24 + 1;
          local_68 = local_68 + 0x34;
        } while (local_24 < 3);
        if (local_dc < 4) {
          iVar12 = 2;
          iVar7 = 0x11;
          local_1c = -1;
          puVar15 = param_1 + 0x24;
          do {
            if ((puVar15[iVar7 + 0x240] & 0x7fffffff) != 0) {
              local_1c = iVar12 * 0x12 + iVar7;
              break;
            }
            iVar7 = iVar7 + -1;
            if (iVar7 < 0) {
              puVar15 = puVar15 + -0x12;
              iVar12 = iVar12 + -1;
              iVar7 = 0x11;
            }
          } while (-1 < iVar12);
          iVar7 = local_f4 * 0x94;
          local_38 = 0;
          iVar12 = *(int *)(&DAT_005bc0f8 + iVar7);
          while (iVar12 <= local_1c) {
            local_38 = local_38 + 1;
            piVar1 = (int *)(&DAT_005bc0fc + iVar7);
            iVar7 = iVar7 + 4;
            iVar12 = *piVar1;
          }
          iVar12 = *(int *)(&DAT_005bc0f8 + iVar7);
          if (local_38 < 8) {
            local_60 = local_38 * 4 + local_f4 * 0x94;
            do {
              iVar7 = *(int *)(&DAT_005bc0fc + local_60) - *(int *)(&DAT_005bc0f8 + local_60);
              if (0 < iVar7) {
                iVar14 = iVar12 * 2;
                local_c4 = param_3 + local_38 * 4;
                local_64 = iVar12 * 4;
                do {
                  sVar4 = *(short *)(local_c4 + 0xf8);
                  *(short *)((int)&uStack_57a + iVar14 + 2) = sVar4;
                  if (sVar4 != 7) {
                    if (local_e0 == 0) {
                      fVar16 = (float10)fptan((float10)*(short *)((int)&uStack_57a + iVar14 + 2) *
                                              (float10)_DAT_0058b8e8);
                      *(float *)((int)afStack_e78 + local_64) = (float)fVar16;
                    }
                    else {
                      FUN_004e60c0(*(int *)((int)&uStack_57a + iVar14) >> 0x10,local_2080,local_207c
                                   ,iVar12,local_2078);
                    }
                  }
                  iVar14 = iVar14 + 2;
                  iVar12 = iVar12 + 1;
                  iVar7 = iVar7 + -1;
                  local_64 = local_64 + 4;
                } while (0 < iVar7);
              }
              local_38 = local_38 + 1;
              local_60 = local_60 + 4;
            } while (local_38 < 8);
          }
        }
      }
    }
  }
  local_5c = param_2;
  local_58 = param_2 + 0x480;
  do {
    iVar12 = 0;
    puVar15 = local_5c;
    do {
      puVar15 = puVar15 + 0x12;
      puVar10 = local_5c + iVar12 * 0x12;
      do {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      } while (puVar10 != puVar15);
      iVar12 = iVar12 + 1;
    } while (iVar12 < 0x20);
    local_5c = local_5c + 0x240;
  } while (local_5c != param_2 + 0x480);
  if (local_f0 == 2) {
    local_20 = 0;
    local_44 = param_1;
    local_3c = 0;
    local_40 = param_2;
    do {
      local_a0 = local_20 * 0x12;
      local_50 = local_3c;
      iVar12 = 0;
      local_4c = local_40;
      iVar7 = 0;
      local_48 = local_44;
      do {
        local_f8 = local_a0 + iVar12;
        pfVar13 = (float *)((int)local_4c + iVar7);
        pfVar8 = (float *)((int)local_48 + iVar7);
        if (*(short *)((int)&uStack_57a + local_50 + 2) == 7) {
          if (local_ec == 0) {
            *pfVar13 = *pfVar8;
            pfVar13[0x240] = pfVar8[0x240];
          }
          else {
            fVar2 = (float)_DAT_0058b8f0;
            *pfVar13 = (*pfVar8 + pfVar8[0x240]) * fVar2;
            fVar2 = (*pfVar8 - pfVar8[0x240]) * fVar2;
LAB_004e6377:
            pfVar13[0x240] = fVar2;
          }
        }
        else {
          if (local_ac != 0) {
            if (local_e0 == 0) {
              *pfVar13 = (afStack_e78[local_f8] / (afStack_e78[local_f8] + 1.0)) * *pfVar8;
              fVar2 = (1.0 / (afStack_e78[local_f8] + 1.0)) * *pfVar8;
            }
            else {
              *pfVar13 = *pfVar8 * local_2078[local_f8];
              fVar2 = *pfVar8 * afStack_1778[local_f8];
            }
            goto LAB_004e6377;
          }
          _DAT_01cc4800 = "@..\\sound\\mp3.cpp" + 1;
          _DAT_01cc4804 = 0x9b8;
          FUN_004c8440("Error in streo processing.  File: %s",&DAT_01cd8b28);
        }
        iVar12 = iVar12 + 1;
        iVar7 = iVar7 + 4;
        local_50 = local_50 + 2;
      } while (iVar12 < 0x12);
      local_20 = local_20 + 1;
      local_40 = local_40 + 0x12;
      local_3c = local_3c + 0x24;
      local_44 = local_44 + 0x12;
    } while (local_20 < 0x20);
  }
  else {
    iVar12 = 0;
    local_54 = param_2;
    puVar15 = param_1;
    do {
      puVar15 = puVar15 + 0x12;
      puVar9 = param_1 + iVar12 * 0x12;
      puVar10 = local_54;
      do {
        uVar3 = *puVar9;
        puVar9 = puVar9 + 1;
        *puVar10 = uVar3;
        puVar10 = puVar10 + 1;
      } while (puVar9 != puVar15);
      iVar12 = iVar12 + 1;
      local_54 = local_54 + 0x12;
    } while (iVar12 < 0x20);
  }
  return;
}
