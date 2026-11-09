// Name: engine_font.cpp_FUN_004b1460
// Address: 004b1460
// Address Range: [[004b1460, 004b2a7d]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_FUN_004b1460(CBitFont *this_ptr,int character_code,int x,int y,int color_mode,int color_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_font_cpp_FUN_004b1460(CBitFont *this_ptr,int character_code,int x,int y,int color_mode,int color_value)

{
  CBitFont *pCVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  byte *pbVar8;
  byte *puVar9;
  int iVar10;
  int iVar11;
  ushort *puVar12;
  uint uVar13;
  uint *puVar14;
  ushort *puVar15;
  int iVar16;
  CBitFont *color_table;
  byte *local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_a4;
  int local_a0;
  int local_80;
  int local_5c;
  CBitFont *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  if ((character_code < 0) || (0xff < character_code)) {
    return 0;
  }
  iVar3 = *(int *)(this_ptr + character_code * 4 + 0x35e8) + *(int *)(this_ptr + 0x41f4);
  if (*(int *)(this_ptr + character_code * 4 + 0x1de8) == 0) {
    return iVar3;
  }
  if ((*(int *)(this_ptr + 0x420c) == 0) && (color_value != -1)) {
    engine_font_cpp_FUN_004b1460
              (this_ptr,character_code,x + *(int *)(this_ptr + 0x41fc),
               y + *(int *)(this_ptr + 0x4200),color_value,-1);
  }
  local_d4 = *(byte **)(this_ptr + character_code * 4 + 0x1de8);
  y = y + *(int *)(this_ptr + character_code * 4 + 0x3de8);
  local_d0 = x + *(int *)(this_ptr + character_code * 4 + 0x35e8) + -1;
  local_cc = y + -1 + *(int *)(this_ptr + character_code * 4 + 0x39e8);
  iVar16 = *(int *)(this_ptr + character_code * 4 + 0x21e8);
  iVar4 = *(int *)(this_ptr + iVar16 * 4 + 0x1a4);
  if (*(int *)(this_ptr + 0x4204) == 0) {
    if (x < _DAT_01c6b5a8) {
      return iVar3;
    }
    if (y < _DAT_01c6b5ac) {
      return iVar3;
    }
    if ((_DAT_01c6b5b0 + 1) - *(int *)(this_ptr + character_code * 4 + 0x35e8) < x) {
      return iVar3;
    }
    if ((_DAT_01c6b5b4 + 1) - *(int *)(this_ptr + character_code * 4 + 0x39e8) < y) {
      return iVar3;
    }
  }
  else {
    iVar10 = engine_font_cpp_clipCharacter_FUN_004af6d0
                       ((int *)&local_d4,&x,&y,&local_d0,&local_cc,iVar4);
    if (iVar10 != 0) {
      return iVar3;
    }
  }
  local_c8 = iVar4 - ((local_d0 - x) + 1);
  if (DAT_005fba20 == 8) {
    if (color_mode == -1) {
      if (y <= local_cc) {
        iVar16 = y * 4;
        do {
          pbVar8 = (byte *)(*(int *)(&DAT_01c5faec + iVar16) + x);
          for (iVar4 = x; iVar4 <= local_d0; iVar4 = iVar4 + 1) {
            if ((uint)*local_d4 != *(uint *)(this_ptr + 0x4208)) {
              *pbVar8 = *local_d4;
            }
            pbVar8 = pbVar8 + 1;
            local_d4 = local_d4 + 1;
          }
          iVar16 = iVar16 + 4;
          local_d4 = local_d4 + local_c8;
          y = y + 1;
        } while (y <= local_cc);
      }
    }
    else if (color_mode == -2) {
      if (y <= local_cc) {
        iVar16 = y * 4;
        do {
          puVar9 = (byte *)(*(int *)(&DAT_01c5faec + iVar16) + x);
          for (iVar4 = x; iVar4 <= local_d0; iVar4 = iVar4 + 1) {
            if ((uint)*local_d4 != *(uint *)(this_ptr + 0x4208)) {
              *puVar9 = DAT_01d1ad60;
            }
            puVar9 = puVar9 + 1;
            local_d4 = local_d4 + 1;
          }
          iVar16 = iVar16 + 4;
          local_d4 = local_d4 + local_c8;
          y = y + 1;
        } while (y <= local_cc);
      }
    }
    else if (color_mode == -3) {
      if (y <= local_cc) {
        iVar16 = y * 4;
        do {
          puVar9 = (byte *)(*(int *)(&DAT_01c5faec + iVar16) + x);
          for (iVar4 = x; iVar4 <= local_d0; iVar4 = iVar4 + 1) {
            if ((uint)*local_d4 != *(uint *)(this_ptr + 0x4208)) {
              *puVar9 = DAT_01d1ad74;
            }
            puVar9 = puVar9 + 1;
            local_d4 = local_d4 + 1;
          }
          iVar16 = iVar16 + 4;
          local_d4 = local_d4 + local_c8;
          y = y + 1;
        } while (y <= local_cc);
      }
    }
    else if (y <= local_cc) {
      iVar16 = y * 4;
      do {
        puVar9 = (byte *)(*(int *)(&DAT_01c5faec + iVar16) + x);
        for (iVar4 = x; iVar4 <= local_d0; iVar4 = iVar4 + 1) {
          if ((uint)*local_d4 != *(uint *)(this_ptr + 0x4208)) {
            *puVar9 = (byte)color_mode;
          }
          puVar9 = puVar9 + 1;
          local_d4 = local_d4 + 1;
        }
        iVar16 = iVar16 + 4;
        local_d4 = local_d4 + local_c8;
        y = y + 1;
      } while (y <= local_cc);
    }
  }
  else {
    iVar4 = y << 2;
    if (DAT_005fba20 == 0x10) {
      if (color_mode == -1) {
        if (*(int *)(this_ptr + 0x1de4) == 0) {
          local_a4 = y;
          if (y <= local_cc) {
            iVar4 = y * 4;
            do {
              puVar12 = (ushort *)(*(int *)(&DAT_01c5faec + iVar4) + x * 2);
              for (iVar10 = x; iVar10 <= local_d0; iVar10 = iVar10 + 1) {
                if ((uint)*local_d4 != *(uint *)(this_ptr + 0x4208)) {
                  *puVar12 = *(ushort *)
                              (this_ptr + (uint)*local_d4 * 4 + iVar16 * 0x400 + 0xdb4);
                }
                local_d4 = local_d4 + 1;
                puVar12 = puVar12 + 1;
              }
              local_a4 = local_a4 + 1;
              iVar4 = iVar4 + 4;
              local_d4 = local_d4 + local_c8;
            } while (local_a4 <= local_cc);
          }
        }
        else {
          local_c4 = y;
          if (y <= local_cc) {
            local_20 = y << 2;
            do {
              puVar15 = (ushort *)(*(int *)(&DAT_01c5faec + local_20) + x * 2);
              for (iVar4 = x; iVar4 <= local_d0; iVar4 = iVar4 + 1) {
                iVar10 = (int)(DAT_005fba38 *
                              (uint)(byte)this_ptr[(uint)*local_d4 * 3 + iVar16 * 0x300 + 0x1b4]) >>
                         0x1f;
                iVar10 = (int)((DAT_005fba38 *
                                (uint)(byte)this_ptr[(uint)*local_d4 * 3 + iVar16 * 0x300 + 0x1b4] +
                               iVar10 * -0x100) - (uint)(iVar10 << 7 < 0)) >> 8;
                if (iVar10 != 0) {
                  iVar5 = (uint)*local_d4 * 4 + iVar16 * 0x400;
                  uVar6 = (uint)*puVar15;
                  iVar11 = 0xff - iVar10;
                  *puVar15 = (ushort)(((((*(uint *)(this_ptr + iVar5 + 0xdb4) & DAT_00604e60) >>
                                        (DAT_01c6af74 & 0x1f)) << (DAT_01c6af7c & 0x1f) & 0xff) *
                                       iVar10 + (((DAT_00604e60 & uVar6) >> (DAT_01c6af74 & 0x1f))
                                                 << (DAT_01c6af7c & 0x1f) & 0xff) * iVar11 >> 8) /
                                      _DAT_01c6af78 << (DAT_01c6af74 & 0x1f)) |
                             (ushort)(((((*(uint *)(this_ptr + iVar5 + 0xdb4) & DAT_00604e68) >>
                                        (DAT_01c6af80 & 0x1f)) << (DAT_01c6af88 & 0x1f) & 0xff) *
                                       iVar10 + (((DAT_00604e68 & uVar6) >> (DAT_01c6af80 & 0x1f))
                                                 << (DAT_01c6af88 & 0x1f) & 0xff) * iVar11 >> 8) /
                                      _DAT_01c6af84 << (DAT_01c6af80 & 0x1f)) |
                             (ushort)((iVar10 * (((*(uint *)(this_ptr + iVar5 + 0xdb4) &
                                                  DAT_00604e70) >> (DAT_01c6af8c & 0x1f)) <<
                                                 (DAT_01c6af94 & 0x1f) & 0xff) +
                                       iVar11 * (((uVar6 & DAT_00604e70) >> (DAT_01c6af8c & 0x1f))
                                                 << (DAT_01c6af94 & 0x1f) & 0xff) >> 8) /
                                      _DAT_01c6af90 << (DAT_01c6af8c & 0x1f));
                }
                puVar15 = puVar15 + 1;
                local_d4 = local_d4 + 1;
              }
              local_20 = local_20 + 4;
              local_c4 = local_c4 + 1;
              local_d4 = local_d4 + local_c8;
            } while (local_c4 <= local_cc);
          }
        }
      }
      else if (color_mode == -2) {
        if (*(int *)(this_ptr + 0x1de4) == 0) {
          if (y <= local_cc) {
            iVar16 = y * 4;
            do {
              puVar15 = (ushort *)(x * 2 + *(int *)(&DAT_01c5faec + iVar16));
              for (iVar4 = x; iVar4 <= local_d0; iVar4 = iVar4 + 1) {
                if ((uint)*local_d4 != *(uint *)(this_ptr + 0x4208)) {
                  *puVar15 = _DAT_01d1ad62;
                }
                puVar15 = puVar15 + 1;
                local_d4 = local_d4 + 1;
              }
              iVar16 = iVar16 + 4;
              y = y + 1;
              local_d4 = local_d4 + local_c8;
            } while (y <= local_cc);
          }
        }
        else {
          local_a0 = y;
          if (y <= local_cc) {
            local_24 = y << 2;
            do {
              puVar15 = (ushort *)(x * 2 + *(int *)(&DAT_01c5faec + local_24));
              for (iVar4 = x; iVar4 <= local_d0; iVar4 = iVar4 + 1) {
                iVar10 = (int)(DAT_005fba38 *
                              (uint)(byte)this_ptr[(uint)*local_d4 * 3 + iVar16 * 0x300 + 0x1b4]) >>
                         0x1f;
                iVar10 = (int)((DAT_005fba38 *
                                (uint)(byte)this_ptr[(uint)*local_d4 * 3 + iVar16 * 0x300 + 0x1b4] +
                               iVar10 * -0x100) - (uint)(iVar10 << 7 < 0)) >> 8;
                if (iVar10 != 0) {
                  uVar6 = (uint)_DAT_01d1ad62;
                  uVar13 = (uint)*puVar15;
                  iVar5 = 0xff - iVar10;
                  *puVar15 = (ushort)(((((DAT_00604e68 & uVar6) >> (DAT_01c6af80 & 0x1f)) <<
                                        (DAT_01c6af88 & 0x1f) & 0xff) * iVar10 +
                                       (((DAT_00604e68 & uVar13) >> (DAT_01c6af80 & 0x1f)) <<
                                        (DAT_01c6af88 & 0x1f) & 0xff) * iVar5 >> 8) / _DAT_01c6af84
                                     << (DAT_01c6af80 & 0x1f)) |
                             (ushort)(((((DAT_00604e60 & uVar13) >> (DAT_01c6af74 & 0x1f)) <<
                                        (DAT_01c6af7c & 0x1f) & 0xff) * iVar5 +
                                       (((DAT_00604e60 & uVar6) >> (DAT_01c6af74 & 0x1f)) <<
                                        (DAT_01c6af7c & 0x1f) & 0xff) * iVar10 >> 8) / _DAT_01c6af78
                                     << (DAT_01c6af74 & 0x1f)) |
                             (ushort)(((((uVar6 & DAT_00604e70) >> (DAT_01c6af8c & 0x1f)) <<
                                        (DAT_01c6af94 & 0x1f) & 0xff) * iVar10 +
                                       iVar5 * (((uVar13 & DAT_00604e70) >> (DAT_01c6af8c & 0x1f))
                                                << (DAT_01c6af94 & 0x1f) & 0xff) >> 8) /
                                      _DAT_01c6af90 << (DAT_01c6af8c & 0x1f));
                }
                puVar15 = puVar15 + 1;
                local_d4 = local_d4 + 1;
              }
              local_24 = local_24 + 4;
              local_a0 = local_a0 + 1;
              local_d4 = local_d4 + local_c8;
            } while (local_a0 <= local_cc);
          }
        }
      }
      else if (color_mode == -3) {
        if (*(int *)(this_ptr + 0x1de4) == 0) {
          if (y <= local_cc) {
            iVar16 = y * 4;
            do {
              puVar12 = (ushort *)(x * 2 + *(int *)(&DAT_01c5faec + iVar16));
              for (iVar4 = x; iVar4 <= local_d0; iVar4 = iVar4 + 1) {
                if ((uint)*local_d4 != *(uint *)(this_ptr + 0x4208)) {
                  *puVar12 = _DAT_01d1ad74;
                }
                local_d4 = local_d4 + 1;
                puVar12 = puVar12 + 1;
              }
              iVar16 = iVar16 + 4;
              y = y + 1;
              local_d4 = local_d4 + local_c8;
            } while (y <= local_cc);
          }
        }
        else {
          local_80 = y;
          if (y <= local_cc) {
            local_28 = y << 2;
            do {
              puVar15 = (ushort *)(*(int *)(&DAT_01c5faec + local_28) + x * 2);
              for (iVar4 = x; iVar4 <= local_d0; iVar4 = iVar4 + 1) {
                iVar10 = (int)(DAT_005fba38 *
                              (uint)(byte)this_ptr[(uint)*local_d4 * 3 + iVar16 * 0x300 + 0x1b4]) >>
                         0x1f;
                iVar10 = (int)((DAT_005fba38 *
                                (uint)(byte)this_ptr[(uint)*local_d4 * 3 + iVar16 * 0x300 + 0x1b4] +
                               iVar10 * -0x100) - (uint)(iVar10 << 7 < 0)) >> 8;
                if (iVar10 != 0) {
                  uVar6 = (uint)*puVar15;
                  iVar5 = 0xff - iVar10;
                  *puVar15 = (ushort)(((((_DAT_01d1ad74 & DAT_00604e68) >> (DAT_01c6af80 & 0x1f)) <<
                                        (DAT_01c6af88 & 0x1f) & 0xff) * iVar10 +
                                       (((uVar6 & DAT_00604e68) >> (DAT_01c6af80 & 0x1f)) <<
                                        (DAT_01c6af88 & 0x1f) & 0xff) * iVar5 >> 8) / _DAT_01c6af84
                                     << (DAT_01c6af80 & 0x1f)) |
                             (ushort)(((((_DAT_01d1ad74 & DAT_00604e60) >> (DAT_01c6af74 & 0x1f)) <<
                                        (DAT_01c6af7c & 0x1f) & 0xff) * iVar10 +
                                       (((uVar6 & DAT_00604e60) >> (DAT_01c6af74 & 0x1f)) <<
                                        (DAT_01c6af7c & 0x1f) & 0xff) * iVar5 >> 8) / _DAT_01c6af78
                                     << (DAT_01c6af74 & 0x1f)) |
                             (ushort)(((((_DAT_01d1ad74 & DAT_00604e70) >> (DAT_01c6af8c & 0x1f)) <<
                                        (DAT_01c6af94 & 0x1f) & 0xff) * iVar10 +
                                       iVar5 * (((uVar6 & DAT_00604e70) >> (DAT_01c6af8c & 0x1f)) <<
                                                (DAT_01c6af94 & 0x1f) & 0xff) >> 8) / _DAT_01c6af90
                                     << (DAT_01c6af8c & 0x1f));
                }
                puVar15 = puVar15 + 1;
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
        uVar2 = *(ushort *)(&DAT_01c6a070 + color_mode * 2);
        if (*(int *)(this_ptr + 0x1de4) == 0) {
          for (; y <= local_cc; y = y + 1) {
            puVar15 = (ushort *)(*(int *)(&DAT_01c5faec + iVar4) + x * 2);
            for (iVar16 = x; iVar16 <= local_d0; iVar16 = iVar16 + 1) {
              if ((uint)*local_d4 != *(uint *)(this_ptr + 0x4208)) {
                *puVar15 = uVar2;
              }
              local_d4 = local_d4 + 1;
              puVar15 = puVar15 + 1;
            }
            iVar4 = iVar4 + 4;
            local_d4 = local_d4 + local_c8;
          }
        }
        else {
          local_5c = y;
          if (y <= local_cc) {
            local_2c = y << 2;
            do {
              puVar15 = (ushort *)(*(int *)(&DAT_01c5faec + local_2c) + x * 2);
              for (iVar4 = x; iVar4 <= local_d0; iVar4 = iVar4 + 1) {
                iVar10 = (int)(DAT_005fba38 *
                              (uint)(byte)this_ptr[(uint)*local_d4 * 3 + iVar16 * 0x300 + 0x1b4]) >>
                         0x1f;
                iVar10 = (int)((DAT_005fba38 *
                                (uint)(byte)this_ptr[(uint)*local_d4 * 3 + iVar16 * 0x300 + 0x1b4] +
                               iVar10 * -0x100) - (uint)(iVar10 << 7 < 0)) >> 8;
                if (iVar10 != 0) {
                  uVar6 = (uint)uVar2;
                  uVar13 = (uint)*puVar15;
                  iVar5 = 0xff - iVar10;
                  *puVar15 = (ushort)(((((DAT_00604e70 & uVar6) >> (DAT_01c6af8c & 0x1f)) <<
                                        (DAT_01c6af94 & 0x1f) & 0xff) * iVar10 +
                                       iVar5 * (((uVar13 & DAT_00604e70) >> (DAT_01c6af8c & 0x1f))
                                                << (DAT_01c6af94 & 0x1f) & 0xff) >> 8) /
                                      _DAT_01c6af90 << (DAT_01c6af8c & 0x1f)) |
                             (ushort)(((((DAT_00604e68 & uVar6) >> (DAT_01c6af80 & 0x1f)) <<
                                        (DAT_01c6af88 & 0x1f) & 0xff) * iVar10 +
                                       (((DAT_00604e68 & uVar13) >> (DAT_01c6af80 & 0x1f)) <<
                                        (DAT_01c6af88 & 0x1f) & 0xff) * iVar5 >> 8) / _DAT_01c6af84
                                     << (DAT_01c6af80 & 0x1f)) |
                             (ushort)(((((DAT_00604e60 & uVar6) >> (DAT_01c6af74 & 0x1f)) <<
                                        (DAT_01c6af7c & 0x1f) & 0xff) * iVar10 +
                                       (((DAT_00604e60 & uVar13) >> (DAT_01c6af74 & 0x1f)) <<
                                        (DAT_01c6af7c & 0x1f) & 0xff) * iVar5 >> 8) / _DAT_01c6af78
                                     << (DAT_01c6af74 & 0x1f));
                }
                puVar15 = puVar15 + 1;
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
      color_table = this_ptr + iVar16 * 0x400 + 0xdb4;
      if (color_mode == -1) {
        pCVar1 = this_ptr + iVar16 * 0x400;
        if (*(int *)(this_ptr + 0x1de4) == 0) {
          for (; y <= local_cc; y = y + 1) {
            puVar14 = (uint *)(x * 4 + *(int *)(&DAT_01c5faec + iVar4));
            for (iVar16 = x; iVar16 <= local_d0; iVar16 = iVar16 + 1) {
              if ((uint)*local_d4 != *(uint *)(this_ptr + 0x4208)) {
                *puVar14 = *(uint *)(pCVar1 + (uint)*local_d4 * 4 + 0xdb4);
              }
              local_d4 = local_d4 + 1;
              puVar14 = puVar14 + 1;
            }
            iVar4 = iVar4 + 4;
            local_d4 = local_d4 + local_c8;
          }
        }
        else {
          iVar16 = y;
          local_30 = pCVar1;
          if (y <= local_cc) {
            do {
              engine_font_cpp_drawAlphaBlendedPixels_FUN_004b1310
                        ((uint *)(x * 4 + *(int *)(&DAT_01c5faec + iVar4)),local_d4,
                         (uint *)color_table,(local_d0 - x) + 1,
                         *(uint *)(pCVar1 + (uint)*local_d4 * 4 + 0xdb4));
              iVar4 = iVar4 + 4;
              iVar16 = iVar16 + 1;
              local_d4 = local_d4 + local_c8 + (local_d0 - x) + 1;
            } while (iVar16 <= local_cc);
            return iVar3;
          }
        }
      }
      else if (color_mode == -2) {
        if (*(int *)(this_ptr + 0x1de4) == 0) {
          for (; y <= local_cc; y = y + 1) {
            puVar7 = (uint *)(x * 4 + *(int *)(&DAT_01c5faec + iVar4));
            for (iVar16 = x; iVar16 <= local_d0; iVar16 = iVar16 + 1) {
              if ((uint)*local_d4 != *(uint *)(this_ptr + 0x4208)) {
                *puVar7 = _DAT_01d1ad64;
              }
              local_d4 = local_d4 + 1;
              puVar7 = puVar7 + 1;
            }
            iVar4 = iVar4 + 4;
            local_d4 = local_d4 + local_c8;
          }
        }
        else {
          iVar16 = y;
          if (y <= local_cc) {
            do {
              engine_font_cpp_drawAlphaBlendedPixels_FUN_004b1310
                        ((uint *)(x * 4 + *(int *)(&DAT_01c5faec + iVar4)),local_d4,
                         (uint *)color_table,(local_d0 - x) + 1,_DAT_01d1ad64);
              iVar4 = iVar4 + 4;
              iVar16 = iVar16 + 1;
              local_d4 = local_d4 + local_c8 + (local_d0 - x) + 1;
            } while (iVar16 <= local_cc);
            return iVar3;
          }
        }
      }
      else if (color_mode == -3) {
        if (*(int *)(this_ptr + 0x1de4) == 0) {
          for (; y <= local_cc; y = y + 1) {
            puVar7 = (uint *)(x * 4 + *(int *)(&DAT_01c5faec + iVar4));
            for (iVar16 = x; iVar16 <= local_d0; iVar16 = iVar16 + 1) {
              if ((uint)*local_d4 != *(uint *)(this_ptr + 0x4208)) {
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
          iVar16 = y;
          if (y <= local_cc) {
            do {
              engine_font_cpp_drawAlphaBlendedPixels_FUN_004b1310
                        ((uint *)(*(int *)(&DAT_01c5faec + iVar4) + x * 4),local_d4,
                         (uint *)color_table,(local_d0 - x) + 1,_DAT_01d1ad74);
              iVar4 = iVar4 + 4;
              iVar16 = iVar16 + 1;
              local_d4 = local_d4 + local_c8 + (local_d0 - x) + 1;
            } while (iVar16 <= local_cc);
            return iVar3;
          }
        }
      }
      else {
        uVar6 = *(uint *)(color_mode * 4 + 0x1c6a270);
        if (*(int *)(this_ptr + 0x1de4) == 0) {
          for (; y <= local_cc; y = y + 1) {
            puVar7 = (uint *)(x * 4 + *(int *)(&DAT_01c5faec + iVar4));
            for (iVar16 = x; iVar16 <= local_d0; iVar16 = iVar16 + 1) {
              if ((uint)*local_d4 != *(uint *)(this_ptr + 0x4208)) {
                *puVar7 = uVar6;
              }
              local_d4 = local_d4 + 1;
              puVar7 = puVar7 + 1;
            }
            iVar4 = iVar4 + 4;
            local_d4 = local_d4 + local_c8;
          }
        }
        else {
          iVar16 = y;
          if (y <= local_cc) {
            do {
              engine_font_cpp_drawAlphaBlendedPixels_FUN_004b1310
                        ((uint *)(x * 4 + *(int *)(&DAT_01c5faec + iVar4)),local_d4,
                         (uint *)color_table,(local_d0 - x) + 1,uVar6);
              iVar4 = iVar4 + 4;
              local_d4 = local_d4 + local_c8 + (local_d0 - x) + 1;
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
