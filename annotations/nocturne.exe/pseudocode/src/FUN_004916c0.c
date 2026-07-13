// Name: FUN_004916c0
// Address: 004916c0
// Address Range: [[004916c0, 00492d99]]
// Convention: unknown
// Signature: int FUN_004916c0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004916c0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  byte *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  ushort *puVar14;
  int iVar15;
  byte *local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_90;
  int local_74;
  int local_58;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  if ((param_2 < 0) || (0xff < param_2)) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x2568 + param_2 * 4) + *(int *)(param_1 + 0x3174);
  if (*(int *)(param_1 + 0x1d68 + param_2 * 4) == 0) {
    return iVar3;
  }
  if (param_6 != -1) {
    FUN_004916c0(param_1,param_2,param_3 + *(int *)(param_1 + 0x317c),
                 param_4 + *(int *)(param_1 + 0x3180),param_6,0xffffffff);
  }
  iVar6 = param_2 * 4 + param_1;
  local_d4 = *(byte **)(iVar6 + 0x1d68);
  param_4 = param_4 + *(int *)(iVar6 + 0x2d68);
  local_d0 = param_3 + *(int *)(iVar6 + 0x2568) + -1;
  local_cc = param_4 + -1 + *(int *)(iVar6 + 0x2968);
  local_c8 = *(int *)(iVar6 + 0x2168);
  iVar7 = *(int *)(param_1 + 0x154 + local_c8 * 4);
  if (*(int *)(param_1 + 0x3184) == 0) {
    if (param_3 < _DAT_01c00c58) {
      return iVar3;
    }
    if (param_4 < _DAT_01c00c5c) {
      return iVar3;
    }
    if ((_DAT_01c00c60 + 1) - *(int *)(iVar6 + 0x2568) < param_3) {
      return iVar3;
    }
    if ((_DAT_01c00c64 + 1) - *(int *)(iVar6 + 0x2968) < param_4) {
      return iVar3;
    }
  }
  else {
    iVar6 = FUN_0048fd50(&local_d4,&param_3,&param_4,&local_d0,&local_cc,iVar7);
    if (iVar6 != 0) {
      return iVar3;
    }
  }
  local_c4 = iVar7 - ((local_d0 - param_3) + 1);
  if ((*(int *)(param_1 + 0x318c) != 0) && (_DAT_01c02594 != 0)) {
    FUN_004911f0(param_1,param_2,param_3,param_4,local_d0,local_cc,param_5);
    return iVar3;
  }
  if (DAT_005b7624 == 8) {
    if (param_5 == -1) {
      local_c0 = param_4;
      if (param_4 <= local_cc) {
        param_4 = param_4 * 4;
        do {
          pbVar4 = (byte *)(*(int *)(&DAT_01bd2fa0 + param_4) + param_3);
          for (iVar7 = param_3; iVar7 <= local_d0; iVar7 = iVar7 + 1) {
            if ((uint)*local_d4 != *(uint *)(param_1 + 0x3188)) {
              *pbVar4 = *local_d4;
            }
            pbVar4 = pbVar4 + 1;
            local_d4 = local_d4 + 1;
          }
          local_c0 = local_c0 + 1;
          param_4 = param_4 + 4;
          local_d4 = local_d4 + local_c4;
        } while (local_c0 <= local_cc);
      }
    }
    else if (param_5 == -2) {
      local_bc = param_4;
      if (param_4 <= local_cc) {
        param_4 = param_4 * 4;
        do {
          puVar8 = (byte *)(*(int *)(&DAT_01bd2fa0 + param_4) + param_3);
          for (iVar7 = param_3; iVar7 <= local_d0; iVar7 = iVar7 + 1) {
            if ((uint)*local_d4 != *(uint *)(param_1 + 0x3188)) {
              *puVar8 = DAT_01c70f5c;
            }
            puVar8 = puVar8 + 1;
            local_d4 = local_d4 + 1;
          }
          local_bc = local_bc + 1;
          param_4 = param_4 + 4;
          local_d4 = local_d4 + local_c4;
        } while (local_bc <= local_cc);
      }
    }
    else if (param_5 == -3) {
      local_b8 = param_4;
      if (param_4 <= local_cc) {
        param_4 = param_4 * 4;
        do {
          puVar8 = (byte *)(*(int *)(&DAT_01bd2fa0 + param_4) + param_3);
          for (iVar7 = param_3; iVar7 <= local_d0; iVar7 = iVar7 + 1) {
            if ((uint)*local_d4 != *(uint *)(param_1 + 0x3188)) {
              *puVar8 = DAT_01c70f70;
            }
            puVar8 = puVar8 + 1;
            local_d4 = local_d4 + 1;
          }
          local_b8 = local_b8 + 1;
          param_4 = param_4 + 4;
          local_d4 = local_d4 + local_c4;
        } while (local_b8 <= local_cc);
      }
    }
    else {
      local_b4 = param_4;
      if (param_4 <= local_cc) {
        param_4 = param_4 * 4;
        do {
          puVar8 = (byte *)(*(int *)(&DAT_01bd2fa0 + param_4) + param_3);
          for (iVar7 = param_3; iVar7 <= local_d0; iVar7 = iVar7 + 1) {
            if ((uint)*local_d4 != *(uint *)(param_1 + 0x3188)) {
              *puVar8 = (byte)param_5;
            }
            puVar8 = puVar8 + 1;
            local_d4 = local_d4 + 1;
          }
          local_b4 = local_b4 + 1;
          param_4 = param_4 + 4;
          local_d4 = local_d4 + local_c4;
        } while (local_b4 <= local_cc);
      }
    }
  }
  else {
    iVar7 = param_4 << 2;
    if (DAT_005b7624 == 0x10) {
      if (param_5 == -1) {
        if (*(int *)(param_1 + 0x1d64) == 0) {
          if (param_4 <= local_cc) {
            iVar7 = param_4 * 4;
            do {
              puVar5 = (ushort *)(*(int *)(&DAT_01bd2fa0 + iVar7) + param_3 * 2);
              for (iVar6 = param_3; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
                if ((uint)*local_d4 != *(uint *)(param_1 + 0x3188)) {
                  *puVar5 = *(ushort *)
                             (local_c8 * 0x400 + param_1 + 0xd64 + (uint)*local_d4 * 4);
                }
                local_d4 = local_d4 + 1;
                puVar5 = puVar5 + 1;
              }
              iVar7 = iVar7 + 4;
              local_d4 = local_d4 + local_c4;
              param_4 = param_4 + 1;
            } while (param_4 <= local_cc);
          }
        }
        else {
          local_b0 = param_4;
          if (param_4 <= local_cc) {
            local_28 = param_4 << 2;
            do {
              puVar14 = (ushort *)(*(int *)(&DAT_01bd2fa0 + local_28) + param_3 * 2);
              for (iVar7 = param_3; iVar7 <= local_d0; iVar7 = iVar7 + 1) {
                iVar6 = DAT_005b763c *
                        (uint)*(byte *)((uint)*local_d4 * 3 + param_1 + local_c8 * 0x300 + 0x164);
                iVar9 = iVar6 >> 0x1f;
                iVar6 = (int)((iVar6 + iVar9 * -0x100) - (uint)(iVar9 << 7 < 0)) >> 8;
                if (iVar6 != 0) {
                  iVar15 = param_1 + local_c8 * 0x400 + (uint)*local_d4 * 4;
                  uVar10 = (uint)*puVar14;
                  iVar9 = 0xff - iVar6;
                  *puVar14 = (ushort)(((((*(uint *)(iVar15 + 0xd64) & DAT_005bf5c0) >>
                                        (DAT_01c00630 & 0x1f)) << (DAT_01c00638 & 0x1f) & 0xff) *
                                       iVar6 + (((DAT_005bf5c0 & uVar10) >> (DAT_01c00630 & 0x1f))
                                                << (DAT_01c00638 & 0x1f) & 0xff) * iVar9 >> 8) /
                                      _DAT_01c00634 << (DAT_01c00630 & 0x1f)) |
                             (ushort)(((((*(uint *)(iVar15 + 0xd64) & DAT_005bf5b8) >>
                                        (DAT_01c00624 & 0x1f)) << (DAT_01c0062c & 0x1f) & 0xff) *
                                       iVar6 + (((DAT_005bf5b8 & uVar10) >> (DAT_01c00624 & 0x1f))
                                                << (DAT_01c0062c & 0x1f) & 0xff) * iVar9 >> 8) /
                                      _DAT_01c00628 << (DAT_01c00624 & 0x1f)) |
                             (ushort)(((((*(uint *)(iVar15 + 0xd64) & DAT_005bf5c8) >>
                                        (DAT_01c0063c & 0x1f)) << (DAT_01c00644 & 0x1f) & 0xff) *
                                       iVar6 + iVar9 * (((DAT_005bf5c8 & uVar10) >>
                                                        (DAT_01c0063c & 0x1f)) <<
                                                        (DAT_01c00644 & 0x1f) & 0xff) >> 8) /
                                      _DAT_01c00640 << (DAT_01c0063c & 0x1f));
                }
                puVar14 = puVar14 + 1;
                local_d4 = local_d4 + 1;
              }
              local_28 = local_28 + 4;
              local_b0 = local_b0 + 1;
              local_d4 = local_d4 + local_c4;
            } while (local_b0 <= local_cc);
          }
        }
      }
      else if (param_5 == -2) {
        if (*(int *)(param_1 + 0x1d64) == 0) {
          if (param_4 <= local_cc) {
            iVar7 = param_4 * 4;
            do {
              puVar14 = (ushort *)(*(int *)(&DAT_01bd2fa0 + iVar7) + param_3 * 2);
              for (iVar6 = param_3; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
                if ((uint)*local_d4 != *(uint *)(param_1 + 0x3188)) {
                  *puVar14 = _DAT_01c70f5e;
                }
                puVar14 = puVar14 + 1;
                local_d4 = local_d4 + 1;
              }
              iVar7 = iVar7 + 4;
              local_d4 = local_d4 + local_c4;
              param_4 = param_4 + 1;
            } while (param_4 <= local_cc);
          }
        }
        else {
          local_90 = param_4;
          if (param_4 <= local_cc) {
            local_2c = param_4 << 2;
            do {
              puVar14 = (ushort *)(param_3 * 2 + *(int *)(&DAT_01bd2fa0 + local_2c));
              for (iVar7 = param_3; iVar7 <= local_d0; iVar7 = iVar7 + 1) {
                iVar6 = DAT_005b763c *
                        (uint)*(byte *)((uint)*local_d4 * 3 + param_1 + local_c8 * 0x300 + 0x164);
                iVar9 = iVar6 >> 0x1f;
                iVar6 = (int)((iVar6 + iVar9 * -0x100) - (uint)(iVar9 << 7 < 0)) >> 8;
                if (iVar6 != 0) {
                  uVar10 = (uint)_DAT_01c70f5e;
                  uVar11 = (uint)*puVar14;
                  iVar9 = 0xff - iVar6;
                  *puVar14 = (ushort)(((((DAT_005bf5c0 & uVar10) >> (DAT_01c00630 & 0x1f)) <<
                                        (DAT_01c00638 & 0x1f) & 0xff) * iVar6 +
                                       (((DAT_005bf5c0 & uVar11) >> (DAT_01c00630 & 0x1f)) <<
                                        (DAT_01c00638 & 0x1f) & 0xff) * iVar9 >> 8) / _DAT_01c00634
                                     << (DAT_01c00630 & 0x1f)) |
                             (ushort)(((((DAT_005bf5b8 & uVar10) >> (DAT_01c00624 & 0x1f)) <<
                                        (DAT_01c0062c & 0x1f) & 0xff) * iVar6 +
                                       (((DAT_005bf5b8 & uVar11) >> (DAT_01c00624 & 0x1f)) <<
                                        (DAT_01c0062c & 0x1f) & 0xff) * iVar9 >> 8) / _DAT_01c00628
                                     << (DAT_01c00624 & 0x1f)) |
                             (ushort)(((((DAT_005bf5c8 & uVar10) >> (DAT_01c0063c & 0x1f)) <<
                                        (DAT_01c00644 & 0x1f) & 0xff) * iVar6 +
                                       iVar9 * (((DAT_005bf5c8 & uVar11) >> (DAT_01c0063c & 0x1f))
                                                << (DAT_01c00644 & 0x1f) & 0xff) >> 8) /
                                      _DAT_01c00640 << (DAT_01c0063c & 0x1f));
                }
                puVar14 = puVar14 + 1;
                local_d4 = local_d4 + 1;
              }
              local_2c = local_2c + 4;
              local_90 = local_90 + 1;
              local_d4 = local_d4 + local_c4;
            } while (local_90 <= local_cc);
          }
        }
      }
      else if (param_5 == -3) {
        if (*(int *)(param_1 + 0x1d64) == 0) {
          if (param_4 <= local_cc) {
            iVar7 = param_4 * 4;
            do {
              puVar5 = (ushort *)(param_3 * 2 + *(int *)(&DAT_01bd2fa0 + iVar7));
              for (iVar6 = param_3; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
                if ((uint)*local_d4 != *(uint *)(param_1 + 0x3188)) {
                  *puVar5 = _DAT_01c70f70;
                }
                local_d4 = local_d4 + 1;
                puVar5 = puVar5 + 1;
              }
              iVar7 = iVar7 + 4;
              local_d4 = local_d4 + local_c4;
              param_4 = param_4 + 1;
            } while (param_4 <= local_cc);
          }
        }
        else {
          local_74 = param_4;
          if (param_4 <= local_cc) {
            local_30 = param_4 << 2;
            do {
              puVar14 = (ushort *)(*(int *)(&DAT_01bd2fa0 + local_30) + param_3 * 2);
              for (iVar7 = param_3; iVar7 <= local_d0; iVar7 = iVar7 + 1) {
                iVar6 = DAT_005b763c *
                        (uint)*(byte *)((uint)*local_d4 * 3 + param_1 + local_c8 * 0x300 + 0x164);
                iVar9 = iVar6 >> 0x1f;
                iVar6 = (int)((iVar6 + iVar9 * -0x100) - (uint)(iVar9 << 7 < 0)) >> 8;
                if (iVar6 != 0) {
                  uVar10 = (uint)*puVar14;
                  iVar9 = 0xff - iVar6;
                  *puVar14 = (ushort)(((((_DAT_01c70f70 & DAT_005bf5b8) >> (DAT_01c00624 & 0x1f)) <<
                                        (DAT_01c0062c & 0x1f) & 0xff) * iVar6 +
                                       (((uVar10 & DAT_005bf5b8) >> (DAT_01c00624 & 0x1f)) <<
                                        (DAT_01c0062c & 0x1f) & 0xff) * iVar9 >> 8) / _DAT_01c00628
                                     << (DAT_01c00624 & 0x1f)) |
                             (ushort)(((((DAT_005bf5c0 & _DAT_01c70f70) >> (DAT_01c00630 & 0x1f)) <<
                                        (DAT_01c00638 & 0x1f) & 0xff) * iVar6 +
                                       (((uVar10 & DAT_005bf5c0) >> (DAT_01c00630 & 0x1f)) <<
                                        (DAT_01c00638 & 0x1f) & 0xff) * iVar9 >> 8) / _DAT_01c00634
                                     << (DAT_01c00630 & 0x1f)) |
                             (ushort)(((((_DAT_01c70f70 & DAT_005bf5c8) >> (DAT_01c0063c & 0x1f)) <<
                                        (DAT_01c00644 & 0x1f) & 0xff) * iVar6 +
                                       iVar9 * (((uVar10 & DAT_005bf5c8) >> (DAT_01c0063c & 0x1f))
                                                << (DAT_01c00644 & 0x1f) & 0xff) >> 8) /
                                      _DAT_01c00640 << (DAT_01c0063c & 0x1f));
                }
                puVar14 = puVar14 + 1;
                local_d4 = local_d4 + 1;
              }
              local_30 = local_30 + 4;
              local_74 = local_74 + 1;
              local_d4 = local_d4 + local_c4;
            } while (local_74 <= local_cc);
          }
        }
      }
      else {
        uVar1 = *(ushort *)(&DAT_01bff720 + param_5 * 2);
        if (*(int *)(param_1 + 0x1d64) == 0) {
          for (; param_4 <= local_cc; param_4 = param_4 + 1) {
            puVar14 = (ushort *)(param_3 * 2 + *(int *)(&DAT_01bd2fa0 + iVar7));
            for (iVar6 = param_3; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
              if ((uint)*local_d4 != *(uint *)(param_1 + 0x3188)) {
                *puVar14 = uVar1;
              }
              local_d4 = local_d4 + 1;
              puVar14 = puVar14 + 1;
            }
            iVar7 = iVar7 + 4;
            local_d4 = local_d4 + local_c4;
          }
        }
        else {
          local_58 = param_4;
          if (param_4 <= local_cc) {
            local_34 = param_4 << 2;
            do {
              puVar14 = (ushort *)(*(int *)(&DAT_01bd2fa0 + local_34) + param_3 * 2);
              for (iVar7 = param_3; iVar7 <= local_d0; iVar7 = iVar7 + 1) {
                iVar6 = DAT_005b763c *
                        (uint)*(byte *)((uint)*local_d4 * 3 + param_1 + local_c8 * 0x300 + 0x164);
                iVar9 = iVar6 >> 0x1f;
                iVar6 = (int)((iVar6 + iVar9 * -0x100) - (uint)(iVar9 << 7 < 0)) >> 8;
                if (iVar6 != 0) {
                  uVar10 = (uint)uVar1;
                  uVar11 = (uint)*puVar14;
                  iVar9 = 0xff - iVar6;
                  *puVar14 = (ushort)(((((DAT_005bf5c0 & uVar10) >> (DAT_01c00630 & 0x1f)) <<
                                        (DAT_01c00638 & 0x1f) & 0xff) * iVar6 +
                                       (((DAT_005bf5c0 & uVar11) >> (DAT_01c00630 & 0x1f)) <<
                                        (DAT_01c00638 & 0x1f) & 0xff) * iVar9 >> 8) / _DAT_01c00634
                                     << (DAT_01c00630 & 0x1f)) |
                             (ushort)(((((DAT_005bf5b8 & uVar10) >> (DAT_01c00624 & 0x1f)) <<
                                        (DAT_01c0062c & 0x1f) & 0xff) * iVar6 +
                                       (((DAT_005bf5b8 & uVar11) >> (DAT_01c00624 & 0x1f)) <<
                                        (DAT_01c0062c & 0x1f) & 0xff) * iVar9 >> 8) / _DAT_01c00628
                                     << (DAT_01c00624 & 0x1f)) |
                             (ushort)((iVar6 * (((uVar10 & DAT_005bf5c8) >> (DAT_01c0063c & 0x1f))
                                                << (DAT_01c00644 & 0x1f) & 0xff) +
                                       iVar9 * (((DAT_005bf5c8 & uVar11) >> (DAT_01c0063c & 0x1f))
                                                << (DAT_01c00644 & 0x1f) & 0xff) >> 8) /
                                      _DAT_01c00640 << (DAT_01c0063c & 0x1f));
                }
                puVar14 = puVar14 + 1;
                local_d4 = local_d4 + 1;
              }
              local_34 = local_34 + 4;
              local_58 = local_58 + 1;
              local_d4 = local_d4 + local_c4;
            } while (local_58 <= local_cc);
          }
        }
      }
    }
    else if (DAT_005b7624 == 0x20) {
      iVar6 = param_1 + 0xd64 + local_c8 * 0x400;
      if (param_5 == -1) {
        iVar9 = param_1 + local_c8 * 0x400;
        if (*(int *)(param_1 + 0x1d64) == 0) {
          for (; param_4 <= local_cc; param_4 = param_4 + 1) {
            puVar12 = (uint *)(*(int *)(&DAT_01bd2fa0 + iVar7) + param_3 * 4);
            for (iVar6 = param_3; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
              if ((uint)*local_d4 != *(uint *)(param_1 + 0x3188)) {
                *puVar12 = *(uint *)(iVar9 + 0xd64 + (uint)*local_d4 * 4);
              }
              local_d4 = local_d4 + 1;
              puVar12 = puVar12 + 1;
            }
            iVar7 = iVar7 + 4;
            local_d4 = local_d4 + local_c4;
          }
        }
        else {
          iVar15 = param_4;
          if (param_4 <= local_cc) {
            do {
              FUN_00491160(*(int *)(&DAT_01bd2fa0 + iVar7) + param_3 * 4,local_d4,iVar6,
                           (local_d0 - param_3) + 1,
                           *(uint *)(iVar9 + 0xd64 + (uint)*local_d4 * 4));
              iVar7 = iVar7 + 4;
              local_d4 = local_d4 + local_c4 + (local_d0 - param_3) + 1;
              iVar15 = iVar15 + 1;
            } while (iVar15 <= local_cc);
            return iVar3;
          }
        }
      }
      else if (param_5 == -2) {
        if (*(int *)(param_1 + 0x1d64) == 0) {
          for (; param_4 <= local_cc; param_4 = param_4 + 1) {
            puVar12 = (uint *)(param_3 * 4 + *(int *)(&DAT_01bd2fa0 + iVar7));
            for (iVar6 = param_3; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
              if ((uint)*local_d4 != *(uint *)(param_1 + 0x3188)) {
                *puVar12 = _DAT_01c70f60;
              }
              local_d4 = local_d4 + 1;
              puVar12 = puVar12 + 1;
            }
            iVar7 = iVar7 + 4;
            local_d4 = local_d4 + local_c4;
          }
        }
        else {
          iVar9 = param_4;
          if (param_4 <= local_cc) {
            do {
              FUN_00491160(param_3 * 4 + *(int *)(&DAT_01bd2fa0 + iVar7),local_d4,iVar6,
                           (local_d0 - param_3) + 1,_DAT_01c70f60);
              iVar7 = iVar7 + 4;
              iVar9 = iVar9 + 1;
              local_d4 = local_d4 + local_c4 + (local_d0 - param_3) + 1;
            } while (iVar9 <= local_cc);
            return iVar3;
          }
        }
      }
      else if (param_5 == -3) {
        if (*(int *)(param_1 + 0x1d64) == 0) {
          for (; param_4 <= local_cc; param_4 = param_4 + 1) {
            puVar13 = (uint *)(param_3 * 4 + *(int *)(&DAT_01bd2fa0 + iVar7));
            for (iVar6 = param_3; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
              if ((uint)*local_d4 != *(uint *)(param_1 + 0x3188)) {
                *puVar13 = _DAT_01c70f70;
              }
              local_d4 = local_d4 + 1;
              puVar13 = puVar13 + 1;
            }
            iVar7 = iVar7 + 4;
            local_d4 = local_d4 + local_c4;
          }
        }
        else {
          iVar9 = param_4;
          if (param_4 <= local_cc) {
            do {
              FUN_00491160(*(int *)(&DAT_01bd2fa0 + iVar7) + param_3 * 4,local_d4,iVar6,
                           (local_d0 - param_3) + 1,_DAT_01c70f70);
              iVar7 = iVar7 + 4;
              iVar9 = iVar9 + 1;
              local_d4 = local_d4 + local_c4 + (local_d0 - param_3) + 1;
            } while (iVar9 <= local_cc);
            return iVar3;
          }
        }
      }
      else {
        uVar2 = *(uint *)(param_5 * 4 + 0x1bff920);
        if (*(int *)(param_1 + 0x1d64) == 0) {
          for (; param_4 <= local_cc; param_4 = param_4 + 1) {
            puVar12 = (uint *)(*(int *)(&DAT_01bd2fa0 + iVar7) + param_3 * 4);
            for (iVar6 = param_3; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
              if ((uint)*local_d4 != *(uint *)(param_1 + 0x3188)) {
                *puVar12 = uVar2;
              }
              local_d4 = local_d4 + 1;
              puVar12 = puVar12 + 1;
            }
            iVar7 = iVar7 + 4;
            local_d4 = local_d4 + local_c4;
          }
        }
        else {
          iVar9 = param_4;
          if (param_4 <= local_cc) {
            do {
              FUN_00491160(param_3 * 4 + *(int *)(&DAT_01bd2fa0 + iVar7),local_d4,iVar6,
                           (local_d0 - param_3) + 1,uVar2);
              iVar7 = iVar7 + 4;
              local_d4 = local_d4 + local_c4 + (local_d0 - param_3) + 1;
              iVar9 = iVar9 + 1;
            } while (iVar9 <= local_cc);
            return iVar3;
          }
        }
      }
    }
  }
  return iVar3;
}
