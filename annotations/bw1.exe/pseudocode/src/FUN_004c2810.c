// Name: FUN_004c2810
// Address: 004c2810
// Address Range: [[004c2810, 004c3e9a]]
// Convention: unknown
// Signature: int FUN_004c2810(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004c2810(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

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
  iVar3 = *(int *)(param_1 + 0x35e8 + param_2 * 4) + *(int *)(param_1 + 0x41f4);
  if (*(int *)(param_1 + 0x1de8 + param_2 * 4) == 0) {
    return iVar3;
  }
  if ((*(int *)(param_1 + 0x420c) == 0) && (param_6 != -1)) {
    FUN_004c2810(param_1,param_2,param_3 + *(int *)(param_1 + 0x41fc),
                 param_4 + *(int *)(param_1 + 0x4200),param_6,0xffffffff);
  }
  iVar6 = param_2 * 4 + param_1;
  local_d4 = *(byte **)(iVar6 + 0x1de8);
  param_4 = param_4 + *(int *)(iVar6 + 0x3de8);
  local_d0 = param_3 + *(int *)(iVar6 + 0x35e8) + -1;
  local_cc = param_4 + -1 + *(int *)(iVar6 + 0x39e8);
  local_c8 = *(int *)(iVar6 + 0x21e8);
  iVar7 = *(int *)(param_1 + 0x1a4 + local_c8 * 4);
  if (*(int *)(param_1 + 0x4204) == 0) {
    if (param_3 < _DAT_01c4f008) {
      return iVar3;
    }
    if (param_4 < _DAT_01c4f00c) {
      return iVar3;
    }
    if ((_DAT_01c4f010 + 1) - *(int *)(iVar6 + 0x35e8) < param_3) {
      return iVar3;
    }
    if ((_DAT_01c4f014 + 1) - *(int *)(iVar6 + 0x39e8) < param_4) {
      return iVar3;
    }
  }
  else {
    iVar6 = FUN_004c0a80(&local_d4,&param_3,&param_4,&local_d0,&local_cc,iVar7);
    if (iVar6 != 0) {
      return iVar3;
    }
  }
  local_c4 = iVar7 - ((local_d0 - param_3) + 1);
  if (DAT_0061b4a0 == 8) {
    if (param_5 == -1) {
      local_c0 = param_4;
      if (param_4 <= local_cc) {
        param_4 = param_4 * 4;
        do {
          pbVar4 = (byte *)(*(int *)(&DAT_01c4354c + param_4) + param_3);
          for (iVar7 = param_3; iVar7 <= local_d0; iVar7 = iVar7 + 1) {
            if ((uint)*local_d4 != *(uint *)(param_1 + 0x4208)) {
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
          puVar8 = (byte *)(*(int *)(&DAT_01c4354c + param_4) + param_3);
          for (iVar7 = param_3; iVar7 <= local_d0; iVar7 = iVar7 + 1) {
            if ((uint)*local_d4 != *(uint *)(param_1 + 0x4208)) {
              *puVar8 = DAT_01cc8cd0;
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
          puVar8 = (byte *)(*(int *)(&DAT_01c4354c + param_4) + param_3);
          for (iVar7 = param_3; iVar7 <= local_d0; iVar7 = iVar7 + 1) {
            if ((uint)*local_d4 != *(uint *)(param_1 + 0x4208)) {
              *puVar8 = DAT_01cc8ce4;
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
          puVar8 = (byte *)(*(int *)(&DAT_01c4354c + param_4) + param_3);
          for (iVar7 = param_3; iVar7 <= local_d0; iVar7 = iVar7 + 1) {
            if ((uint)*local_d4 != *(uint *)(param_1 + 0x4208)) {
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
    if (DAT_0061b4a0 == 0x10) {
      if (param_5 == -1) {
        if (*(int *)(param_1 + 0x1de4) == 0) {
          if (param_4 <= local_cc) {
            iVar7 = param_4 * 4;
            do {
              puVar5 = (ushort *)(*(int *)(&DAT_01c4354c + iVar7) + param_3 * 2);
              for (iVar6 = param_3; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
                if ((uint)*local_d4 != *(uint *)(param_1 + 0x4208)) {
                  *puVar5 = *(ushort *)
                             (local_c8 * 0x400 + param_1 + 0xdb4 + (uint)*local_d4 * 4);
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
              puVar14 = (ushort *)(*(int *)(&DAT_01c4354c + local_28) + param_3 * 2);
              for (iVar7 = param_3; iVar7 <= local_d0; iVar7 = iVar7 + 1) {
                iVar6 = DAT_0061b4b8 *
                        (uint)*(byte *)((uint)*local_d4 * 3 + param_1 + local_c8 * 0x300 + 0x1b4);
                iVar9 = iVar6 >> 0x1f;
                iVar6 = (int)((iVar6 + iVar9 * -0x100) - (uint)(iVar9 << 7 < 0)) >> 8;
                if (iVar6 != 0) {
                  iVar15 = param_1 + local_c8 * 0x400 + (uint)*local_d4 * 4;
                  uVar10 = (uint)*puVar14;
                  iVar9 = 0xff - iVar6;
                  *puVar14 = (ushort)(((((*(uint *)(iVar15 + 0xdb4) & DAT_00623f28) >>
                                        (DAT_01c4e9e0 & 0x1f)) << (DAT_01c4e9e8 & 0x1f) & 0xff) *
                                       iVar6 + (((DAT_00623f28 & uVar10) >> (DAT_01c4e9e0 & 0x1f))
                                                << (DAT_01c4e9e8 & 0x1f) & 0xff) * iVar9 >> 8) /
                                      _DAT_01c4e9e4 << (DAT_01c4e9e0 & 0x1f)) |
                             (ushort)(((((*(uint *)(iVar15 + 0xdb4) & DAT_00623f20) >>
                                        (DAT_01c4e9d4 & 0x1f)) << (DAT_01c4e9dc & 0x1f) & 0xff) *
                                       iVar6 + (((DAT_00623f20 & uVar10) >> (DAT_01c4e9d4 & 0x1f))
                                                << (DAT_01c4e9dc & 0x1f) & 0xff) * iVar9 >> 8) /
                                      _DAT_01c4e9d8 << (DAT_01c4e9d4 & 0x1f)) |
                             (ushort)(((((*(uint *)(iVar15 + 0xdb4) & DAT_00623f30) >>
                                        (DAT_01c4e9ec & 0x1f)) << (DAT_01c4e9f4 & 0x1f) & 0xff) *
                                       iVar6 + iVar9 * (((DAT_00623f30 & uVar10) >>
                                                        (DAT_01c4e9ec & 0x1f)) <<
                                                        (DAT_01c4e9f4 & 0x1f) & 0xff) >> 8) /
                                      _DAT_01c4e9f0 << (DAT_01c4e9ec & 0x1f));
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
        if (*(int *)(param_1 + 0x1de4) == 0) {
          if (param_4 <= local_cc) {
            iVar7 = param_4 * 4;
            do {
              puVar14 = (ushort *)(*(int *)(&DAT_01c4354c + iVar7) + param_3 * 2);
              for (iVar6 = param_3; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
                if ((uint)*local_d4 != *(uint *)(param_1 + 0x4208)) {
                  *puVar14 = _DAT_01cc8cd2;
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
              puVar14 = (ushort *)(param_3 * 2 + *(int *)(&DAT_01c4354c + local_2c));
              for (iVar7 = param_3; iVar7 <= local_d0; iVar7 = iVar7 + 1) {
                iVar6 = DAT_0061b4b8 *
                        (uint)*(byte *)((uint)*local_d4 * 3 + param_1 + local_c8 * 0x300 + 0x1b4);
                iVar9 = iVar6 >> 0x1f;
                iVar6 = (int)((iVar6 + iVar9 * -0x100) - (uint)(iVar9 << 7 < 0)) >> 8;
                if (iVar6 != 0) {
                  uVar10 = (uint)_DAT_01cc8cd2;
                  uVar11 = (uint)*puVar14;
                  iVar9 = 0xff - iVar6;
                  *puVar14 = (ushort)(((((DAT_00623f28 & uVar10) >> (DAT_01c4e9e0 & 0x1f)) <<
                                        (DAT_01c4e9e8 & 0x1f) & 0xff) * iVar6 +
                                       (((DAT_00623f28 & uVar11) >> (DAT_01c4e9e0 & 0x1f)) <<
                                        (DAT_01c4e9e8 & 0x1f) & 0xff) * iVar9 >> 8) / _DAT_01c4e9e4
                                     << (DAT_01c4e9e0 & 0x1f)) |
                             (ushort)(((((DAT_00623f20 & uVar10) >> (DAT_01c4e9d4 & 0x1f)) <<
                                        (DAT_01c4e9dc & 0x1f) & 0xff) * iVar6 +
                                       (((DAT_00623f20 & uVar11) >> (DAT_01c4e9d4 & 0x1f)) <<
                                        (DAT_01c4e9dc & 0x1f) & 0xff) * iVar9 >> 8) / _DAT_01c4e9d8
                                     << (DAT_01c4e9d4 & 0x1f)) |
                             (ushort)(((((DAT_00623f30 & uVar10) >> (DAT_01c4e9ec & 0x1f)) <<
                                        (DAT_01c4e9f4 & 0x1f) & 0xff) * iVar6 +
                                       iVar9 * (((DAT_00623f30 & uVar11) >> (DAT_01c4e9ec & 0x1f))
                                                << (DAT_01c4e9f4 & 0x1f) & 0xff) >> 8) /
                                      _DAT_01c4e9f0 << (DAT_01c4e9ec & 0x1f));
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
        if (*(int *)(param_1 + 0x1de4) == 0) {
          if (param_4 <= local_cc) {
            iVar7 = param_4 * 4;
            do {
              puVar5 = (ushort *)(param_3 * 2 + *(int *)(&DAT_01c4354c + iVar7));
              for (iVar6 = param_3; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
                if ((uint)*local_d4 != *(uint *)(param_1 + 0x4208)) {
                  *puVar5 = _DAT_01cc8ce4;
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
              puVar14 = (ushort *)(*(int *)(&DAT_01c4354c + local_30) + param_3 * 2);
              for (iVar7 = param_3; iVar7 <= local_d0; iVar7 = iVar7 + 1) {
                iVar6 = DAT_0061b4b8 *
                        (uint)*(byte *)((uint)*local_d4 * 3 + param_1 + local_c8 * 0x300 + 0x1b4);
                iVar9 = iVar6 >> 0x1f;
                iVar6 = (int)((iVar6 + iVar9 * -0x100) - (uint)(iVar9 << 7 < 0)) >> 8;
                if (iVar6 != 0) {
                  uVar10 = (uint)*puVar14;
                  iVar9 = 0xff - iVar6;
                  *puVar14 = (ushort)(((((_DAT_01cc8ce4 & DAT_00623f20) >> (DAT_01c4e9d4 & 0x1f)) <<
                                        (DAT_01c4e9dc & 0x1f) & 0xff) * iVar6 +
                                       (((uVar10 & DAT_00623f20) >> (DAT_01c4e9d4 & 0x1f)) <<
                                        (DAT_01c4e9dc & 0x1f) & 0xff) * iVar9 >> 8) / _DAT_01c4e9d8
                                     << (DAT_01c4e9d4 & 0x1f)) |
                             (ushort)(((((DAT_00623f28 & _DAT_01cc8ce4) >> (DAT_01c4e9e0 & 0x1f)) <<
                                        (DAT_01c4e9e8 & 0x1f) & 0xff) * iVar6 +
                                       (((uVar10 & DAT_00623f28) >> (DAT_01c4e9e0 & 0x1f)) <<
                                        (DAT_01c4e9e8 & 0x1f) & 0xff) * iVar9 >> 8) / _DAT_01c4e9e4
                                     << (DAT_01c4e9e0 & 0x1f)) |
                             (ushort)(((((_DAT_01cc8ce4 & DAT_00623f30) >> (DAT_01c4e9ec & 0x1f)) <<
                                        (DAT_01c4e9f4 & 0x1f) & 0xff) * iVar6 +
                                       iVar9 * (((uVar10 & DAT_00623f30) >> (DAT_01c4e9ec & 0x1f))
                                                << (DAT_01c4e9f4 & 0x1f) & 0xff) >> 8) /
                                      _DAT_01c4e9f0 << (DAT_01c4e9ec & 0x1f));
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
        uVar1 = *(ushort *)(param_5 * 2 + 0x1c4dad0);
        if (*(int *)(param_1 + 0x1de4) == 0) {
          for (; param_4 <= local_cc; param_4 = param_4 + 1) {
            puVar14 = (ushort *)(param_3 * 2 + *(int *)(&DAT_01c4354c + iVar7));
            for (iVar6 = param_3; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
              if ((uint)*local_d4 != *(uint *)(param_1 + 0x4208)) {
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
              puVar14 = (ushort *)(*(int *)(&DAT_01c4354c + local_34) + param_3 * 2);
              for (iVar7 = param_3; iVar7 <= local_d0; iVar7 = iVar7 + 1) {
                iVar6 = DAT_0061b4b8 *
                        (uint)*(byte *)((uint)*local_d4 * 3 + param_1 + local_c8 * 0x300 + 0x1b4);
                iVar9 = iVar6 >> 0x1f;
                iVar6 = (int)((iVar6 + iVar9 * -0x100) - (uint)(iVar9 << 7 < 0)) >> 8;
                if (iVar6 != 0) {
                  uVar10 = (uint)uVar1;
                  uVar11 = (uint)*puVar14;
                  iVar9 = 0xff - iVar6;
                  *puVar14 = (ushort)(((((DAT_00623f28 & uVar10) >> (DAT_01c4e9e0 & 0x1f)) <<
                                        (DAT_01c4e9e8 & 0x1f) & 0xff) * iVar6 +
                                       (((DAT_00623f28 & uVar11) >> (DAT_01c4e9e0 & 0x1f)) <<
                                        (DAT_01c4e9e8 & 0x1f) & 0xff) * iVar9 >> 8) / _DAT_01c4e9e4
                                     << (DAT_01c4e9e0 & 0x1f)) |
                             (ushort)(((((DAT_00623f20 & uVar10) >> (DAT_01c4e9d4 & 0x1f)) <<
                                        (DAT_01c4e9dc & 0x1f) & 0xff) * iVar6 +
                                       (((DAT_00623f20 & uVar11) >> (DAT_01c4e9d4 & 0x1f)) <<
                                        (DAT_01c4e9dc & 0x1f) & 0xff) * iVar9 >> 8) / _DAT_01c4e9d8
                                     << (DAT_01c4e9d4 & 0x1f)) |
                             (ushort)((iVar6 * (((uVar10 & DAT_00623f30) >> (DAT_01c4e9ec & 0x1f))
                                                << (DAT_01c4e9f4 & 0x1f) & 0xff) +
                                       iVar9 * (((DAT_00623f30 & uVar11) >> (DAT_01c4e9ec & 0x1f))
                                                << (DAT_01c4e9f4 & 0x1f) & 0xff) >> 8) /
                                      _DAT_01c4e9f0 << (DAT_01c4e9ec & 0x1f));
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
    else if (DAT_0061b4a0 == 0x20) {
      iVar6 = param_1 + 0xdb4 + local_c8 * 0x400;
      if (param_5 == -1) {
        iVar9 = param_1 + local_c8 * 0x400;
        if (*(int *)(param_1 + 0x1de4) == 0) {
          for (; param_4 <= local_cc; param_4 = param_4 + 1) {
            puVar12 = (uint *)(*(int *)(&DAT_01c4354c + iVar7) + param_3 * 4);
            for (iVar6 = param_3; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
              if ((uint)*local_d4 != *(uint *)(param_1 + 0x4208)) {
                *puVar12 = *(uint *)(iVar9 + 0xdb4 + (uint)*local_d4 * 4);
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
              FUN_004c26c0(*(int *)(&DAT_01c4354c + iVar7) + param_3 * 4,local_d4,iVar6,
                           (local_d0 - param_3) + 1,
                           *(uint *)(iVar9 + 0xdb4 + (uint)*local_d4 * 4));
              iVar7 = iVar7 + 4;
              local_d4 = local_d4 + local_c4 + (local_d0 - param_3) + 1;
              iVar15 = iVar15 + 1;
            } while (iVar15 <= local_cc);
            return iVar3;
          }
        }
      }
      else if (param_5 == -2) {
        if (*(int *)(param_1 + 0x1de4) == 0) {
          for (; param_4 <= local_cc; param_4 = param_4 + 1) {
            puVar12 = (uint *)(param_3 * 4 + *(int *)(&DAT_01c4354c + iVar7));
            for (iVar6 = param_3; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
              if ((uint)*local_d4 != *(uint *)(param_1 + 0x4208)) {
                *puVar12 = _DAT_01cc8cd4;
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
              FUN_004c26c0(param_3 * 4 + *(int *)(&DAT_01c4354c + iVar7),local_d4,iVar6,
                           (local_d0 - param_3) + 1,_DAT_01cc8cd4);
              iVar7 = iVar7 + 4;
              iVar9 = iVar9 + 1;
              local_d4 = local_d4 + local_c4 + (local_d0 - param_3) + 1;
            } while (iVar9 <= local_cc);
            return iVar3;
          }
        }
      }
      else if (param_5 == -3) {
        if (*(int *)(param_1 + 0x1de4) == 0) {
          for (; param_4 <= local_cc; param_4 = param_4 + 1) {
            puVar13 = (uint *)(param_3 * 4 + *(int *)(&DAT_01c4354c + iVar7));
            for (iVar6 = param_3; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
              if ((uint)*local_d4 != *(uint *)(param_1 + 0x4208)) {
                *puVar13 = _DAT_01cc8ce4;
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
              FUN_004c26c0(*(int *)(&DAT_01c4354c + iVar7) + param_3 * 4,local_d4,iVar6,
                           (local_d0 - param_3) + 1,_DAT_01cc8ce4);
              iVar7 = iVar7 + 4;
              iVar9 = iVar9 + 1;
              local_d4 = local_d4 + local_c4 + (local_d0 - param_3) + 1;
            } while (iVar9 <= local_cc);
            return iVar3;
          }
        }
      }
      else {
        uVar2 = *(uint *)(param_5 * 4 + 0x1c4dcd0);
        if (*(int *)(param_1 + 0x1de4) == 0) {
          for (; param_4 <= local_cc; param_4 = param_4 + 1) {
            puVar12 = (uint *)(*(int *)(&DAT_01c4354c + iVar7) + param_3 * 4);
            for (iVar6 = param_3; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
              if ((uint)*local_d4 != *(uint *)(param_1 + 0x4208)) {
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
              FUN_004c26c0(param_3 * 4 + *(int *)(&DAT_01c4354c + iVar7),local_d4,iVar6,
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
