// Name: FUN_00500c80
// Address: 00500c80
// Address Range: [[00500c80, 005019e1]]
// Convention: unknown
// Signature: void FUN_00500c80(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4,int *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00500c80(uint *param_1,uint *param_2,int param_3,int param_4,int *param_5)

{
  int *piVar1;
  uint uVar2;
  short sVar3;
  ushort uVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  float10 fVar22;
  uint local_100;
  uint local_fc;
  int local_f8;
  int local_f4;
  int local_e4;
  int local_dc;
  int local_d8;
  int local_c0;
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
  int local_5c;
  uint *local_58;
  uint *local_50;
  int local_4c;
  uint *local_40;
  uint *local_3c;
  int local_38;
  int local_34;
  int local_20;
  int local_1c;
  
  iVar17 = param_5[4];
  if ((*(int *)(*param_5 + 0x1c) == 1) && ((*(byte *)(*param_5 + 0x20) & 2) != 0)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if ((*(int *)(*param_5 + 0x1c) == 1) && ((*(byte *)(*param_5 + 0x20) & 1) != 0)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  bVar21 = *(int *)*param_5 != 0;
  if ((*(uint *)(param_4 + 0xc) & 1) == 1) {
    local_100 = 0x667f6ee7;
    local_fc = 0x3fe6a09e;
  }
  else {
    local_100 = 0x995b2417;
    local_fc = 0x3feae89f;
  }
  iVar13 = ((int *)*param_5)[4] + *(int *)*param_5 * 3;
  iVar14 = 0;
  do {
    iVar8 = iVar14 + 2;
    *(ushort *)(iVar14 + 0x1d91098) = 7;
    iVar14 = iVar8;
  } while (iVar8 != 0x480);
  if ((iVar17 == 2) && (bVar7)) {
    if ((*(int *)(param_4 + 0x10) == 0) || (*(int *)(param_4 + 0x14) != 2)) {
      iVar8 = 0x1f;
      iVar16 = 0x11;
      iVar14 = 0;
      puVar18 = param_1 + 0x22e;
      do {
        if ((puVar18[iVar16 + 0x240] & 0x7fffffff) != 0) {
          iVar14 = iVar8 * 0x12 + iVar16;
          break;
        }
        iVar16 = iVar16 + -1;
        if (iVar16 < 0) {
          puVar18 = puVar18 + -0x12;
          iVar8 = iVar8 + -1;
          iVar16 = 0x11;
        }
      } while (-1 < iVar8);
      iVar16 = iVar13 * 0x94;
      iVar19 = 0;
      iVar8 = *(int *)(&DAT_00601668 + iVar16);
      while (iVar8 <= iVar14) {
        iVar19 = iVar19 + 1;
        piVar1 = (int *)(&DAT_0060166c + iVar16);
        iVar16 = iVar16 + 4;
        iVar8 = *piVar1;
      }
      iVar14 = *(int *)(&DAT_00601668 + iVar16);
      iVar13 = iVar13 * 0x94;
      local_84 = iVar19 * 4;
      local_88 = iVar13 + local_84;
      if (iVar19 < 0x15) {
        do {
          iVar8 = *(int *)(&DAT_0060166c + local_88) - *(int *)(&DAT_00601668 + local_88);
          if (0 < iVar8) {
            iVar16 = iVar14 * 2;
            local_8c = iVar14 * 4;
            do {
              sVar3 = *(short *)(param_3 + local_84 + 0xf8);
              *(short *)(iVar16 + 0x1d91098) = sVar3;
              if (sVar3 != 7) {
                if (bVar21) {
                  fVar22 = (float10)fptan((float10)*(short *)(iVar16 + 0x1d91098) *
                                          (float10)_DAT_005ca2cf);
                  *(float *)(local_8c + 0x1d91518) = (float)fVar22;
                }
                else {
                  FUN_00500be0(*(int *)(iVar16 + 0x1d91096) >> 0x10,local_100,local_fc,iVar14,
                               0x1d91e18);
                }
              }
              iVar16 = iVar16 + 2;
              iVar14 = iVar14 + 1;
              local_8c = local_8c + 4;
              iVar8 = iVar8 + -1;
            } while (0 < iVar8);
          }
          local_88 = local_88 + 4;
          local_84 = local_84 + 4;
        } while (local_84 < 0x54);
      }
      iVar8 = 0x240 - *(int *)(&DAT_006016bc + iVar13);
      iVar13 = *(int *)(&DAT_006016b8 + iVar13);
      if (0 < iVar8) {
        iVar19 = iVar13 * 4;
        iVar16 = iVar14 * 4;
        local_80 = iVar14 * 2;
        do {
          uVar2 = *(uint *)(iVar19 + 0x1d91518);
          iVar8 = iVar8 + -1;
          *(uint *)(iVar16 + 0x1d91e18) = *(uint *)(iVar19 + 0x1d91e18);
          *(uint *)(iVar16 + 0x1d91518) = uVar2;
          uVar4 = *(ushort *)(iVar13 * 2 + 0x1d91098);
          *(uint *)(iVar16 + 0x1d92718) = *(uint *)(iVar19 + 0x1d92718);
          *(ushort *)(local_80 + 0x1d91098) = uVar4;
          iVar16 = iVar16 + 4;
          local_80 = local_80 + 2;
        } while (0 < iVar8);
      }
    }
    else {
      iVar14 = iVar13 * 0x94;
      if (*(int *)(param_4 + 0x18) == 0) {
        local_70 = param_3;
        local_e4 = 0;
        do {
          iVar13 = 0xc;
          local_c0 = -1;
          do {
            iVar16 = iVar13 * 4 + iVar14;
            iVar8 = *(int *)(iVar16 + 0x6016c4);
            iVar16 = *(int *)(&DAT_006016c8 + iVar16) - iVar8;
            iVar8 = iVar8 * 3 + (local_e4 + 1) * iVar16;
            for (; 0 < iVar16; iVar16 = iVar16 + -1) {
              iVar8 = iVar8 + -1;
              iVar19 = iVar13;
              if ((param_1[(iVar8 / 0x12) * 0x12 + iVar8 % 0x12 + 0x240] & 0x7fffffff) != 0) {
                iVar19 = -10;
                iVar16 = -10;
                local_c0 = iVar13;
              }
              iVar13 = iVar19;
            }
            iVar13 = iVar13 + -1;
          } while (-1 < iVar13);
          local_74 = (local_c0 + 1) * 4;
          local_78 = iVar14 + local_74;
          if (local_c0 + 1 < 0xc) {
            do {
              iVar13 = *(int *)(&DAT_006016c8 + local_78) - *(int *)(local_78 + 0x6016c4);
              iVar8 = local_e4 * iVar13 + *(int *)(local_78 + 0x6016c4) * 3;
              if (0 < iVar13) {
                iVar16 = iVar8 * 2;
                local_7c = iVar8 * 4;
                do {
                  sVar3 = *(short *)(local_70 + local_74 + 0x154);
                  *(short *)(iVar16 + 0x1d91098) = sVar3;
                  if (sVar3 != 7) {
                    if (bVar21) {
                      fVar22 = (float10)fptan((float10)*(short *)(iVar16 + 0x1d91098) *
                                              (float10)_DAT_005ca2cf);
                      *(float *)(local_7c + 0x1d91518) = (float)fVar22;
                    }
                    else {
                      FUN_00500be0(*(int *)(iVar16 + 0x1d91096) >> 0x10,local_100,local_fc,iVar8,
                                   0x1d91e18);
                    }
                  }
                  iVar16 = iVar16 + 2;
                  iVar8 = iVar8 + 1;
                  local_7c = local_7c + 4;
                  iVar13 = iVar13 + -1;
                } while (0 < iVar13);
              }
              local_78 = local_78 + 4;
              local_74 = local_74 + 4;
            } while (local_74 < 0x30);
          }
          iVar16 = *(int *)(&DAT_006016f8 + iVar14) - *(int *)(&DAT_006016f4 + iVar14);
          iVar13 = *(int *)(&DAT_006016f0 + iVar14) * 3;
          iVar8 = local_e4 * (*(int *)(&DAT_006016f4 + iVar14) - *(int *)(&DAT_006016f0 + iVar14)) +
                  iVar13;
          iVar13 = iVar13 + local_e4 * iVar16;
          if (0 < iVar16) {
            iVar20 = iVar8 * 4;
            iVar19 = iVar13 * 4;
            iVar13 = iVar13 * 2;
            do {
              uVar2 = *(uint *)(iVar20 + 0x1d91518);
              iVar16 = iVar16 + -1;
              uVar4 = *(ushort *)(iVar8 * 2 + 0x1d91098);
              *(uint *)(iVar19 + 0x1d91e18) = *(uint *)(iVar20 + 0x1d91e18);
              *(uint *)(iVar19 + 0x1d91518) = uVar2;
              *(ushort *)(iVar13 + 0x1d91098) = uVar4;
              *(uint *)(iVar19 + 0x1d92718) = *(uint *)(iVar20 + 0x1d92718);
              iVar19 = iVar19 + 4;
              iVar13 = iVar13 + 2;
            } while (0 < iVar16);
          }
          local_e4 = local_e4 + 1;
          local_70 = local_70 + 0x34;
        } while (local_e4 < 3);
      }
      else {
        local_dc = 0;
        local_f4 = 0;
        local_64 = param_3;
        do {
          iVar8 = 0xc;
          local_d8 = 2;
          do {
            iVar19 = iVar8 * 4 + iVar14;
            iVar16 = *(int *)(iVar19 + 0x6016c4);
            iVar19 = *(int *)(&DAT_006016c8 + iVar19) - iVar16;
            iVar16 = (local_f4 + 1) * iVar19 + iVar16 * 3;
            for (; 0 < iVar19; iVar19 = iVar19 + -1) {
              iVar16 = iVar16 + -1;
              iVar20 = iVar8;
              if ((param_1[(iVar16 / 0x12) * 0x12 + iVar16 % 0x12 + 0x240] & 0x7fffffff) != 0) {
                iVar20 = -10;
                iVar19 = -10;
                local_d8 = iVar8;
              }
              iVar8 = iVar20;
            }
            iVar8 = iVar8 + -1;
          } while (2 < iVar8);
          local_34 = local_d8 + 1;
          if (local_dc < local_34) {
            local_dc = local_34;
          }
          local_68 = local_34 * 4 + iVar14;
          for (; local_34 < 0xc; local_34 = local_34 + 1) {
            iVar8 = *(int *)(&DAT_006016c8 + local_68) - *(int *)(local_68 + 0x6016c4);
            iVar16 = *(int *)(local_68 + 0x6016c4) * 3 + local_f4 * iVar8;
            if (0 < iVar8) {
              iVar19 = iVar16 * 2;
              local_6c = iVar16 * 4;
              do {
                sVar3 = *(short *)(local_64 + local_34 * 4 + 0x154);
                *(short *)(iVar19 + 0x1d91098) = sVar3;
                if (sVar3 != 7) {
                  if (bVar21) {
                    fVar22 = (float10)fptan((float10)*(short *)(iVar19 + 0x1d91098) *
                                            (float10)_DAT_005ca2cf);
                    *(float *)(local_6c + 0x1d91518) = (float)fVar22;
                  }
                  else {
                    FUN_00500be0(*(int *)(iVar19 + 0x1d91096) >> 0x10,local_100,local_fc,iVar16,
                                 0x1d91e18);
                  }
                }
                iVar19 = iVar19 + 2;
                iVar16 = iVar16 + 1;
                local_6c = local_6c + 4;
                iVar8 = iVar8 + -1;
              } while (0 < iVar8);
            }
            local_68 = local_68 + 4;
          }
          iVar19 = *(int *)(&DAT_006016f8 + iVar14) - *(int *)(&DAT_006016f4 + iVar14);
          iVar8 = *(int *)(&DAT_006016f0 + iVar14) * 3;
          iVar16 = local_f4 * (*(int *)(&DAT_006016f4 + iVar14) - *(int *)(&DAT_006016f0 + iVar14))
                   + iVar8;
          iVar8 = iVar8 + local_f4 * iVar19;
          if (0 < iVar19) {
            iVar20 = iVar16 * 4;
            iVar10 = iVar8 * 4;
            iVar8 = iVar8 * 2;
            do {
              uVar2 = *(uint *)(iVar20 + 0x1d91518);
              iVar19 = iVar19 + -1;
              uVar4 = *(ushort *)(iVar16 * 2 + 0x1d91098);
              *(uint *)(iVar10 + 0x1d91e18) = *(uint *)(iVar20 + 0x1d91e18);
              *(uint *)(iVar10 + 0x1d91518) = uVar2;
              *(ushort *)(iVar8 + 0x1d91098) = uVar4;
              *(uint *)(iVar10 + 0x1d92718) = *(uint *)(iVar20 + 0x1d92718);
              iVar10 = iVar10 + 4;
              iVar8 = iVar8 + 2;
            } while (0 < iVar19);
          }
          local_f4 = local_f4 + 1;
          local_64 = local_64 + 0x34;
        } while (local_f4 < 3);
        if (local_dc < 4) {
          iVar14 = 2;
          iVar8 = 0x11;
          local_1c = -1;
          puVar18 = param_1 + 0x24;
          do {
            if ((puVar18[iVar8 + 0x240] & 0x7fffffff) != 0) {
              local_1c = iVar14 * 0x12 + iVar8;
              break;
            }
            iVar8 = iVar8 + -1;
            if (iVar8 < 0) {
              puVar18 = puVar18 + -0x12;
              iVar14 = iVar14 + -1;
              iVar8 = 0x11;
            }
          } while (-1 < iVar14);
          iVar8 = iVar13 * 0x94;
          local_f8 = 0;
          iVar14 = *(int *)(&DAT_00601668 + iVar8);
          while (iVar14 <= local_1c) {
            local_f8 = local_f8 + 1;
            piVar1 = (int *)(&DAT_0060166c + iVar8);
            iVar8 = iVar8 + 4;
            iVar14 = *piVar1;
          }
          iVar14 = *(int *)(&DAT_00601668 + iVar8);
          if (local_f8 < 8) {
            local_5c = local_f8 * 4 + iVar13 * 0x94;
            do {
              iVar13 = *(int *)(&DAT_0060166c + local_5c) - *(int *)(&DAT_00601668 + local_5c);
              if (0 < iVar13) {
                iVar8 = iVar14 * 2;
                local_60 = iVar14 * 4;
                do {
                  sVar3 = *(short *)(param_3 + local_f8 * 4 + 0xf8);
                  *(short *)(iVar8 + 0x1d91098) = sVar3;
                  if (sVar3 != 7) {
                    if (bVar21) {
                      fVar22 = (float10)fptan((float10)*(short *)(iVar8 + 0x1d91098) *
                                              (float10)_DAT_005ca2cf);
                      *(float *)(local_60 + 0x1d91518) = (float)fVar22;
                    }
                    else {
                      FUN_00500be0(*(int *)(iVar8 + 0x1d91096) >> 0x10,local_100,local_fc,iVar14,
                                   0x1d91e18);
                    }
                  }
                  iVar8 = iVar8 + 2;
                  iVar14 = iVar14 + 1;
                  local_60 = local_60 + 4;
                  iVar13 = iVar13 + -1;
                } while (0 < iVar13);
              }
              local_5c = local_5c + 4;
              local_f8 = local_f8 + 1;
            } while (local_f8 < 8);
          }
        }
      }
    }
  }
  local_58 = param_2;
  do {
    iVar14 = 0;
    puVar18 = local_58;
    do {
      puVar18 = puVar18 + 0x12;
      puVar12 = local_58 + iVar14 * 0x12;
      do {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      } while (puVar12 != puVar18);
      iVar14 = iVar14 + 1;
    } while (iVar14 < 0x20);
    local_58 = local_58 + 0x240;
  } while (local_58 != param_2 + 0x480);
  if (iVar17 == 2) {
    local_20 = 0;
    local_40 = param_1;
    local_38 = 0;
    local_3c = param_2;
    do {
      local_4c = local_38;
      iVar14 = 0;
      iVar17 = 0;
      do {
        pfVar15 = (float *)((int)local_3c + iVar17);
        pfVar9 = (float *)((int)local_40 + iVar17);
        if (*(short *)(local_4c + 0x1d91098) == 7) {
          if (bVar6) {
            fVar5 = (float)_DAT_005ca2d7;
            *pfVar15 = (*pfVar9 + pfVar9[0x240]) * fVar5;
            fVar5 = (*pfVar9 - pfVar9[0x240]) * fVar5;
LAB_00500e7c:
            pfVar15[0x240] = fVar5;
          }
          else {
            *pfVar15 = *pfVar9;
            pfVar15[0x240] = pfVar9[0x240];
          }
        }
        else {
          if (bVar7) {
            iVar13 = (local_20 * 0x12 + iVar14) * 4;
            if (bVar21) {
              *pfVar15 = (*(float *)(iVar13 + 0x1d91518) / (*(float *)(iVar13 + 0x1d91518) + 1.0)) *
                         *pfVar9;
              fVar5 = (1.0 / (*(float *)(iVar13 + 0x1d91518) + 1.0)) * *pfVar9;
            }
            else {
              *pfVar15 = *pfVar9 * *(float *)(iVar13 + 0x1d91e18);
              fVar5 = *pfVar9 * *(float *)(iVar13 + 0x1d92718);
            }
            goto LAB_00500e7c;
          }
          _DAT_01d71de0 = "..\\sound\\mp3.cpp";
          _DAT_01d71de4 = 0xa3a;
          FUN_004e4330("Error in streo processing.  File: %s",&DAT_01d94b98);
        }
        iVar14 = iVar14 + 1;
        local_4c = local_4c + 2;
        iVar17 = iVar17 + 4;
      } while (iVar14 < 0x12);
      local_38 = local_38 + 0x24;
      local_20 = local_20 + 1;
      local_3c = local_3c + 0x12;
      local_40 = local_40 + 0x12;
    } while (local_20 < 0x20);
  }
  else {
    iVar17 = 0;
    local_50 = param_2;
    puVar18 = param_1;
    do {
      puVar18 = puVar18 + 0x12;
      puVar11 = param_1 + iVar17 * 0x12;
      puVar12 = local_50;
      do {
        uVar2 = *puVar11;
        puVar11 = puVar11 + 1;
        *puVar12 = uVar2;
        puVar12 = puVar12 + 1;
      } while (puVar11 != puVar18);
      iVar17 = iVar17 + 1;
      local_50 = local_50 + 0x12;
    } while (iVar17 < 0x20);
  }
  return;
}
