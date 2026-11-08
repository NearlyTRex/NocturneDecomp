// Name: FUN_004b1460
// Address: 004b1460
// Address Range: [[004b1460, 004b2a7d]]
// Convention: unknown
// Signature: int FUN_004b1460(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004b1460(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *puVar10;
  int iVar11;
  ushort *puVar12;
  uint uVar13;
  ushort *puVar14;
  int iVar15;
  int iVar16;
  byte *local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_a4;
  int local_a0;
  int local_80;
  int local_5c;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  if ((param_2 < 0) || (0xff < param_2)) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x35e8 + param_2 * 4) + *(int *)(param_1 + 0x41f4);
  if (*(int *)(param_1 + 0x1de8 + param_2 * 4) == 0) {
    return iVar3;
  }
  if ((*(int *)(param_1 + 0x420c) == 0) && (param_6 != -1)) {
    FUN_004b1460(param_1,param_2,param_3 + *(int *)(param_1 + 0x41fc),
                 param_4 + *(int *)(param_1 + 0x4200),param_6,0xffffffff);
  }
  iVar8 = param_2 * 4 + param_1;
  local_d4 = *(byte **)(iVar8 + 0x1de8);
  param_4 = param_4 + *(int *)(iVar8 + 0x3de8);
  local_d0 = param_3 + *(int *)(iVar8 + 0x35e8) + -1;
  local_cc = param_4 + -1 + *(int *)(iVar8 + 0x39e8);
  iVar16 = *(int *)(iVar8 + 0x21e8);
  iVar4 = *(int *)(param_1 + 0x1a4 + iVar16 * 4);
  if (*(int *)(param_1 + 0x4204) == 0) {
    if (param_3 < _DAT_01c6b5a8) {
      return iVar3;
    }
    if (param_4 < _DAT_01c6b5ac) {
      return iVar3;
    }
    if ((_DAT_01c6b5b0 + 1) - *(int *)(iVar8 + 0x35e8) < param_3) {
      return iVar3;
    }
    if ((_DAT_01c6b5b4 + 1) - *(int *)(iVar8 + 0x39e8) < param_4) {
      return iVar3;
    }
  }
  else {
    iVar8 = FUN_004af6d0(&local_d4,&param_3,&param_4,&local_d0,&local_cc,iVar4);
    if (iVar8 != 0) {
      return iVar3;
    }
  }
  local_c8 = iVar4 - ((local_d0 - param_3) + 1);
  if (DAT_005fba20 == 8) {
    if (param_5 == -1) {
      if (param_4 <= local_cc) {
        iVar16 = param_4 * 4;
        do {
          pbVar9 = (byte *)(*(int *)(&DAT_01c5faec + iVar16) + param_3);
          for (iVar4 = param_3; iVar4 <= local_d0; iVar4 = iVar4 + 1) {
            if ((uint)*local_d4 != *(uint *)(param_1 + 0x4208)) {
              *pbVar9 = *local_d4;
            }
            pbVar9 = pbVar9 + 1;
            local_d4 = local_d4 + 1;
          }
          iVar16 = iVar16 + 4;
          local_d4 = local_d4 + local_c8;
          param_4 = param_4 + 1;
        } while (param_4 <= local_cc);
      }
    }
    else if (param_5 == -2) {
      if (param_4 <= local_cc) {
        iVar16 = param_4 * 4;
        do {
          puVar10 = (byte *)(*(int *)(&DAT_01c5faec + iVar16) + param_3);
          for (iVar4 = param_3; iVar4 <= local_d0; iVar4 = iVar4 + 1) {
            if ((uint)*local_d4 != *(uint *)(param_1 + 0x4208)) {
              *puVar10 = DAT_01d1ad60;
            }
            puVar10 = puVar10 + 1;
            local_d4 = local_d4 + 1;
          }
          iVar16 = iVar16 + 4;
          local_d4 = local_d4 + local_c8;
          param_4 = param_4 + 1;
        } while (param_4 <= local_cc);
      }
    }
    else if (param_5 == -3) {
      if (param_4 <= local_cc) {
        iVar16 = param_4 * 4;
        do {
          puVar10 = (byte *)(*(int *)(&DAT_01c5faec + iVar16) + param_3);
          for (iVar4 = param_3; iVar4 <= local_d0; iVar4 = iVar4 + 1) {
            if ((uint)*local_d4 != *(uint *)(param_1 + 0x4208)) {
              *puVar10 = DAT_01d1ad74;
            }
            puVar10 = puVar10 + 1;
            local_d4 = local_d4 + 1;
          }
          iVar16 = iVar16 + 4;
          local_d4 = local_d4 + local_c8;
          param_4 = param_4 + 1;
        } while (param_4 <= local_cc);
      }
    }
    else if (param_4 <= local_cc) {
      iVar16 = param_4 * 4;
      do {
        puVar10 = (byte *)(*(int *)(&DAT_01c5faec + iVar16) + param_3);
        for (iVar4 = param_3; iVar4 <= local_d0; iVar4 = iVar4 + 1) {
          if ((uint)*local_d4 != *(uint *)(param_1 + 0x4208)) {
            *puVar10 = (byte)param_5;
          }
          puVar10 = puVar10 + 1;
          local_d4 = local_d4 + 1;
        }
        iVar16 = iVar16 + 4;
        local_d4 = local_d4 + local_c8;
        param_4 = param_4 + 1;
      } while (param_4 <= local_cc);
    }
  }
  else {
    iVar4 = param_4 << 2;
    if (DAT_005fba20 == 0x10) {
      if (param_5 == -1) {
        if (*(int *)(param_1 + 0x1de4) == 0) {
          local_a4 = param_4;
          if (param_4 <= local_cc) {
            param_4 = param_4 * 4;
            do {
              puVar12 = (ushort *)(*(int *)(&DAT_01c5faec + param_4) + param_3 * 2);
              for (iVar4 = param_3; iVar4 <= local_d0; iVar4 = iVar4 + 1) {
                if ((uint)*local_d4 != *(uint *)(param_1 + 0x4208)) {
                  *puVar12 = *(ushort *)(iVar16 * 0x400 + param_1 + 0xdb4 + (uint)*local_d4 * 4)
                  ;
                }
                local_d4 = local_d4 + 1;
                puVar12 = puVar12 + 1;
              }
              local_a4 = local_a4 + 1;
              param_4 = param_4 + 4;
              local_d4 = local_d4 + local_c8;
            } while (local_a4 <= local_cc);
          }
        }
        else {
          local_c4 = param_4;
          if (param_4 <= local_cc) {
            local_20 = param_4 << 2;
            do {
              puVar14 = (ushort *)(*(int *)(&DAT_01c5faec + local_20) + param_3 * 2);
              for (iVar4 = param_3; iVar4 <= local_d0; iVar4 = iVar4 + 1) {
                iVar8 = DAT_005fba38 *
                        (uint)*(byte *)((uint)*local_d4 * 3 + param_1 + iVar16 * 0x300 + 0x1b4);
                iVar11 = iVar8 >> 0x1f;
                iVar8 = (int)((iVar8 + iVar11 * -0x100) - (uint)(iVar11 << 7 < 0)) >> 8;
                if (iVar8 != 0) {
                  iVar15 = param_1 + iVar16 * 0x400 + (uint)*local_d4 * 4;
                  uVar5 = (uint)*puVar14;
                  iVar11 = 0xff - iVar8;
                  *puVar14 = (ushort)(((((*(uint *)(iVar15 + 0xdb4) & DAT_00604e60) >>
                                        (DAT_01c6af74 & 0x1f)) << (DAT_01c6af7c & 0x1f) & 0xff) *
                                       iVar8 + (((DAT_00604e60 & uVar5) >> (DAT_01c6af74 & 0x1f)) <<
                                                (DAT_01c6af7c & 0x1f) & 0xff) * iVar11 >> 8) /
                                      _DAT_01c6af78 << (DAT_01c6af74 & 0x1f)) |
                             (ushort)(((((*(uint *)(iVar15 + 0xdb4) & DAT_00604e68) >>
                                        (DAT_01c6af80 & 0x1f)) << (DAT_01c6af88 & 0x1f) & 0xff) *
                                       iVar8 + (((DAT_00604e68 & uVar5) >> (DAT_01c6af80 & 0x1f)) <<
                                                (DAT_01c6af88 & 0x1f) & 0xff) * iVar11 >> 8) /
                                      _DAT_01c6af84 << (DAT_01c6af80 & 0x1f)) |
                             (ushort)((iVar8 * (((*(uint *)(iVar15 + 0xdb4) & DAT_00604e70) >>
                                                (DAT_01c6af8c & 0x1f)) << (DAT_01c6af94 & 0x1f) &
                                               0xff) +
                                       iVar11 * (((uVar5 & DAT_00604e70) >> (DAT_01c6af8c & 0x1f))
                                                 << (DAT_01c6af94 & 0x1f) & 0xff) >> 8) /
                                      _DAT_01c6af90 << (DAT_01c6af8c & 0x1f));
                }
                puVar14 = puVar14 + 1;
                local_d4 = local_d4 + 1;
              }
              local_20 = local_20 + 4;
              local_c4 = local_c4 + 1;
              local_d4 = local_d4 + local_c8;
            } while (local_c4 <= local_cc);
          }
        }
      }
      else if (param_5 == -2) {
        if (*(int *)(param_1 + 0x1de4) == 0) {
          if (param_4 <= local_cc) {
            iVar16 = param_4 * 4;
            do {
              puVar14 = (ushort *)(param_3 * 2 + *(int *)(&DAT_01c5faec + iVar16));
              for (iVar4 = param_3; iVar4 <= local_d0; iVar4 = iVar4 + 1) {
                if ((uint)*local_d4 != *(uint *)(param_1 + 0x4208)) {
                  *puVar14 = _DAT_01d1ad62;
                }
                puVar14 = puVar14 + 1;
                local_d4 = local_d4 + 1;
              }
              iVar16 = iVar16 + 4;
              param_4 = param_4 + 1;
              local_d4 = local_d4 + local_c8;
            } while (param_4 <= local_cc);
          }
        }
        else {
          local_a0 = param_4;
          if (param_4 <= local_cc) {
            local_24 = param_4 << 2;
            do {
              puVar14 = (ushort *)(param_3 * 2 + *(int *)(&DAT_01c5faec + local_24));
              for (iVar4 = param_3; iVar4 <= local_d0; iVar4 = iVar4 + 1) {
                iVar8 = DAT_005fba38 *
                        (uint)*(byte *)((uint)*local_d4 * 3 + param_1 + iVar16 * 0x300 + 0x1b4);
                iVar11 = iVar8 >> 0x1f;
                iVar8 = (int)((iVar8 + iVar11 * -0x100) - (uint)(iVar11 << 7 < 0)) >> 8;
                if (iVar8 != 0) {
                  uVar5 = (uint)_DAT_01d1ad62;
                  uVar13 = (uint)*puVar14;
                  iVar11 = 0xff - iVar8;
                  *puVar14 = (ushort)(((((DAT_00604e68 & uVar5) >> (DAT_01c6af80 & 0x1f)) <<
                                        (DAT_01c6af88 & 0x1f) & 0xff) * iVar8 +
                                       (((DAT_00604e68 & uVar13) >> (DAT_01c6af80 & 0x1f)) <<
                                        (DAT_01c6af88 & 0x1f) & 0xff) * iVar11 >> 8) / _DAT_01c6af84
                                     << (DAT_01c6af80 & 0x1f)) |
                             (ushort)(((((DAT_00604e60 & uVar13) >> (DAT_01c6af74 & 0x1f)) <<
                                        (DAT_01c6af7c & 0x1f) & 0xff) * iVar11 +
                                       (((DAT_00604e60 & uVar5) >> (DAT_01c6af74 & 0x1f)) <<
                                        (DAT_01c6af7c & 0x1f) & 0xff) * iVar8 >> 8) / _DAT_01c6af78
                                     << (DAT_01c6af74 & 0x1f)) |
                             (ushort)(((((uVar5 & DAT_00604e70) >> (DAT_01c6af8c & 0x1f)) <<
                                        (DAT_01c6af94 & 0x1f) & 0xff) * iVar8 +
                                       iVar11 * (((uVar13 & DAT_00604e70) >> (DAT_01c6af8c & 0x1f))
                                                 << (DAT_01c6af94 & 0x1f) & 0xff) >> 8) /
                                      _DAT_01c6af90 << (DAT_01c6af8c & 0x1f));
                }
                puVar14 = puVar14 + 1;
                local_d4 = local_d4 + 1;
              }
              local_24 = local_24 + 4;
              local_a0 = local_a0 + 1;
              local_d4 = local_d4 + local_c8;
            } while (local_a0 <= local_cc);
          }
        }
      }
      else if (param_5 == -3) {
        if (*(int *)(param_1 + 0x1de4) == 0) {
          if (param_4 <= local_cc) {
            iVar16 = param_4 * 4;
            do {
              puVar12 = (ushort *)(param_3 * 2 + *(int *)(&DAT_01c5faec + iVar16));
              for (iVar4 = param_3; iVar4 <= local_d0; iVar4 = iVar4 + 1) {
                if ((uint)*local_d4 != *(uint *)(param_1 + 0x4208)) {
                  *puVar12 = _DAT_01d1ad74;
                }
                local_d4 = local_d4 + 1;
                puVar12 = puVar12 + 1;
              }
              iVar16 = iVar16 + 4;
              param_4 = param_4 + 1;
              local_d4 = local_d4 + local_c8;
            } while (param_4 <= local_cc);
          }
        }
        else {
          local_80 = param_4;
          if (param_4 <= local_cc) {
            local_28 = param_4 << 2;
            do {
              puVar14 = (ushort *)(*(int *)(&DAT_01c5faec + local_28) + param_3 * 2);
              for (iVar4 = param_3; iVar4 <= local_d0; iVar4 = iVar4 + 1) {
                iVar8 = DAT_005fba38 *
                        (uint)*(byte *)((uint)*local_d4 * 3 + param_1 + iVar16 * 0x300 + 0x1b4);
                iVar11 = iVar8 >> 0x1f;
                iVar8 = (int)((iVar8 + iVar11 * -0x100) - (uint)(iVar11 << 7 < 0)) >> 8;
                if (iVar8 != 0) {
                  uVar5 = (uint)*puVar14;
                  iVar11 = 0xff - iVar8;
                  *puVar14 = (ushort)(((((_DAT_01d1ad74 & DAT_00604e68) >> (DAT_01c6af80 & 0x1f)) <<
                                        (DAT_01c6af88 & 0x1f) & 0xff) * iVar8 +
                                       (((uVar5 & DAT_00604e68) >> (DAT_01c6af80 & 0x1f)) <<
                                        (DAT_01c6af88 & 0x1f) & 0xff) * iVar11 >> 8) / _DAT_01c6af84
                                     << (DAT_01c6af80 & 0x1f)) |
                             (ushort)(((((_DAT_01d1ad74 & DAT_00604e60) >> (DAT_01c6af74 & 0x1f)) <<
                                        (DAT_01c6af7c & 0x1f) & 0xff) * iVar8 +
                                       (((uVar5 & DAT_00604e60) >> (DAT_01c6af74 & 0x1f)) <<
                                        (DAT_01c6af7c & 0x1f) & 0xff) * iVar11 >> 8) / _DAT_01c6af78
                                     << (DAT_01c6af74 & 0x1f)) |
                             (ushort)(((((_DAT_01d1ad74 & DAT_00604e70) >> (DAT_01c6af8c & 0x1f)) <<
                                        (DAT_01c6af94 & 0x1f) & 0xff) * iVar8 +
                                       iVar11 * (((uVar5 & DAT_00604e70) >> (DAT_01c6af8c & 0x1f))
                                                 << (DAT_01c6af94 & 0x1f) & 0xff) >> 8) /
                                      _DAT_01c6af90 << (DAT_01c6af8c & 0x1f));
                }
                puVar14 = puVar14 + 1;
                local_d4 = local_d4 + 1;
              }
              local_28 = local_28 + 4;
              local_80 = local_80 + 1;
              local_d4 = local_d4 + local_c8;
            } while (local_80 <= local_cc);
          }
        }
      }
      else {
        uVar1 = *(ushort *)(param_5 * 2 + 0x1c6a070);
        if (*(int *)(param_1 + 0x1de4) == 0) {
          for (; param_4 <= local_cc; param_4 = param_4 + 1) {
            puVar14 = (ushort *)(*(int *)(&DAT_01c5faec + iVar4) + param_3 * 2);
            for (iVar16 = param_3; iVar16 <= local_d0; iVar16 = iVar16 + 1) {
              if ((uint)*local_d4 != *(uint *)(param_1 + 0x4208)) {
                *puVar14 = uVar1;
              }
              local_d4 = local_d4 + 1;
              puVar14 = puVar14 + 1;
            }
            iVar4 = iVar4 + 4;
            local_d4 = local_d4 + local_c8;
          }
        }
        else {
          local_5c = param_4;
          if (param_4 <= local_cc) {
            local_2c = param_4 << 2;
            do {
              puVar14 = (ushort *)(*(int *)(&DAT_01c5faec + local_2c) + param_3 * 2);
              for (iVar4 = param_3; iVar4 <= local_d0; iVar4 = iVar4 + 1) {
                iVar8 = DAT_005fba38 *
                        (uint)*(byte *)((uint)*local_d4 * 3 + param_1 + iVar16 * 0x300 + 0x1b4);
                iVar11 = iVar8 >> 0x1f;
                iVar8 = (int)((iVar8 + iVar11 * -0x100) - (uint)(iVar11 << 7 < 0)) >> 8;
                if (iVar8 != 0) {
                  uVar5 = (uint)uVar1;
                  uVar13 = (uint)*puVar14;
                  iVar11 = 0xff - iVar8;
                  *puVar14 = (ushort)(((((DAT_00604e70 & uVar5) >> (DAT_01c6af8c & 0x1f)) <<
                                        (DAT_01c6af94 & 0x1f) & 0xff) * iVar8 +
                                       iVar11 * (((uVar13 & DAT_00604e70) >> (DAT_01c6af8c & 0x1f))
                                                 << (DAT_01c6af94 & 0x1f) & 0xff) >> 8) /
                                      _DAT_01c6af90 << (DAT_01c6af8c & 0x1f)) |
                             (ushort)(((((DAT_00604e68 & uVar5) >> (DAT_01c6af80 & 0x1f)) <<
                                        (DAT_01c6af88 & 0x1f) & 0xff) * iVar8 +
                                       (((DAT_00604e68 & uVar13) >> (DAT_01c6af80 & 0x1f)) <<
                                        (DAT_01c6af88 & 0x1f) & 0xff) * iVar11 >> 8) / _DAT_01c6af84
                                     << (DAT_01c6af80 & 0x1f)) |
                             (ushort)(((((DAT_00604e60 & uVar5) >> (DAT_01c6af74 & 0x1f)) <<
                                        (DAT_01c6af7c & 0x1f) & 0xff) * iVar8 +
                                       (((DAT_00604e60 & uVar13) >> (DAT_01c6af74 & 0x1f)) <<
                                        (DAT_01c6af7c & 0x1f) & 0xff) * iVar11 >> 8) / _DAT_01c6af78
                                     << (DAT_01c6af74 & 0x1f));
                }
                puVar14 = puVar14 + 1;
                local_d4 = local_d4 + 1;
              }
              local_2c = local_2c + 4;
              local_5c = local_5c + 1;
              local_d4 = local_d4 + local_c8;
            } while (local_5c <= local_cc);
          }
        }
      }
    }
    else if (DAT_005fba20 == 0x20) {
      iVar8 = param_1 + 0xdb4 + iVar16 * 0x400;
      if (param_5 == -1) {
        iVar16 = param_1 + iVar16 * 0x400;
        if (*(int *)(param_1 + 0x1de4) == 0) {
          for (; param_4 <= local_cc; param_4 = param_4 + 1) {
            puVar6 = (uint *)(param_3 * 4 + *(int *)(&DAT_01c5faec + iVar4));
            for (iVar8 = param_3; iVar8 <= local_d0; iVar8 = iVar8 + 1) {
              if ((uint)*local_d4 != *(uint *)(param_1 + 0x4208)) {
                *puVar6 = *(uint *)(iVar16 + 0xdb4 + (uint)*local_d4 * 4);
              }
              local_d4 = local_d4 + 1;
              puVar6 = puVar6 + 1;
            }
            iVar4 = iVar4 + 4;
            local_d4 = local_d4 + local_c8;
          }
        }
        else {
          iVar11 = param_4;
          local_30 = iVar16;
          if (param_4 <= local_cc) {
            do {
              FUN_004b1310(param_3 * 4 + *(int *)(&DAT_01c5faec + iVar4),local_d4,iVar8,
                           (local_d0 - param_3) + 1,
                           *(uint *)(iVar16 + 0xdb4 + (uint)*local_d4 * 4));
              iVar4 = iVar4 + 4;
              iVar11 = iVar11 + 1;
              local_d4 = local_d4 + local_c8 + (local_d0 - param_3) + 1;
            } while (iVar11 <= local_cc);
            return iVar3;
          }
        }
      }
      else if (param_5 == -2) {
        if (*(int *)(param_1 + 0x1de4) == 0) {
          for (; param_4 <= local_cc; param_4 = param_4 + 1) {
            puVar6 = (uint *)(param_3 * 4 + *(int *)(&DAT_01c5faec + iVar4));
            for (iVar16 = param_3; iVar16 <= local_d0; iVar16 = iVar16 + 1) {
              if ((uint)*local_d4 != *(uint *)(param_1 + 0x4208)) {
                *puVar6 = _DAT_01d1ad64;
              }
              local_d4 = local_d4 + 1;
              puVar6 = puVar6 + 1;
            }
            iVar4 = iVar4 + 4;
            local_d4 = local_d4 + local_c8;
          }
        }
        else {
          iVar16 = param_4;
          if (param_4 <= local_cc) {
            do {
              FUN_004b1310(param_3 * 4 + *(int *)(&DAT_01c5faec + iVar4),local_d4,iVar8,
                           (local_d0 - param_3) + 1,_DAT_01d1ad64);
              iVar4 = iVar4 + 4;
              iVar16 = iVar16 + 1;
              local_d4 = local_d4 + local_c8 + (local_d0 - param_3) + 1;
            } while (iVar16 <= local_cc);
            return iVar3;
          }
        }
      }
      else if (param_5 == -3) {
        if (*(int *)(param_1 + 0x1de4) == 0) {
          for (; param_4 <= local_cc; param_4 = param_4 + 1) {
            puVar7 = (uint *)(param_3 * 4 + *(int *)(&DAT_01c5faec + iVar4));
            for (iVar16 = param_3; iVar16 <= local_d0; iVar16 = iVar16 + 1) {
              if ((uint)*local_d4 != *(uint *)(param_1 + 0x4208)) {
                *puVar7 = _DAT_01d1ad74;
              }
              local_d4 = local_d4 + 1;
              puVar7 = puVar7 + 1;
            }
            iVar4 = iVar4 + 4;
            local_d4 = local_d4 + local_c8;
          }
        }
        else {
          iVar16 = param_4;
          if (param_4 <= local_cc) {
            do {
              FUN_004b1310(*(int *)(&DAT_01c5faec + iVar4) + param_3 * 4,local_d4,iVar8,
                           (local_d0 - param_3) + 1,_DAT_01d1ad74);
              iVar4 = iVar4 + 4;
              iVar16 = iVar16 + 1;
              local_d4 = local_d4 + local_c8 + (local_d0 - param_3) + 1;
            } while (iVar16 <= local_cc);
            return iVar3;
          }
        }
      }
      else {
        uVar2 = *(uint *)(param_5 * 4 + 0x1c6a270);
        if (*(int *)(param_1 + 0x1de4) == 0) {
          for (; param_4 <= local_cc; param_4 = param_4 + 1) {
            puVar6 = (uint *)(param_3 * 4 + *(int *)(&DAT_01c5faec + iVar4));
            for (iVar16 = param_3; iVar16 <= local_d0; iVar16 = iVar16 + 1) {
              if ((uint)*local_d4 != *(uint *)(param_1 + 0x4208)) {
                *puVar6 = uVar2;
              }
              local_d4 = local_d4 + 1;
              puVar6 = puVar6 + 1;
            }
            iVar4 = iVar4 + 4;
            local_d4 = local_d4 + local_c8;
          }
        }
        else {
          iVar16 = param_4;
          if (param_4 <= local_cc) {
            do {
              FUN_004b1310(param_3 * 4 + *(int *)(&DAT_01c5faec + iVar4),local_d4,iVar8,
                           (local_d0 - param_3) + 1,uVar2);
              iVar4 = iVar4 + 4;
              local_d4 = local_d4 + local_c8 + (local_d0 - param_3) + 1;
              iVar16 = iVar16 + 1;
            } while (iVar16 <= local_cc);
            return iVar3;
          }
        }
      }
    }
  }
  return iVar3;
}
