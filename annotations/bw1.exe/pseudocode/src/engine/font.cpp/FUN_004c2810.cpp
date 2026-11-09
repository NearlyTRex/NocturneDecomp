// Name: engine_font.cpp_FUN_004c2810
// Address: 004c2810
// Address Range: [[004c2810, 004c3e9a]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_FUN_004c2810(CBitFont *this_ptr,int character_code,int x,int y,int color_mode,int color_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_font_cpp_FUN_004c2810(CBitFont *this_ptr,int character_code,int x,int y,int color_mode,int color_value)

{
  ushort uVar1;
  int iVar2;
  byte *pbVar3;
  ushort *puVar4;
  uint *puVar5;
  int iVar6;
  byte *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  ushort *puVar13;
  CBitFont *color_table;
  int iVar14;
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
  
  if ((character_code < 0) || (0xff < character_code)) {
    return 0;
  }
  iVar2 = *(int *)(this_ptr + character_code * 4 + 0x35e8) + *(int *)(this_ptr + 0x41f4);
  if (*(int *)(this_ptr + character_code * 4 + 0x1de8) == 0) {
    return iVar2;
  }
  if ((*(int *)(this_ptr + 0x420c) == 0) && (color_value != -1)) {
    engine_font_cpp_FUN_004c2810
              (this_ptr,character_code,x + *(int *)(this_ptr + 0x41fc),
               y + *(int *)(this_ptr + 0x4200),color_value,-1);
  }
  local_d4 = *(byte **)(this_ptr + character_code * 4 + 0x1de8);
  y = y + *(int *)(this_ptr + character_code * 4 + 0x3de8);
  local_d0 = x + *(int *)(this_ptr + character_code * 4 + 0x35e8) + -1;
  local_cc = y + -1 + *(int *)(this_ptr + character_code * 4 + 0x39e8);
  local_c8 = *(int *)(this_ptr + character_code * 4 + 0x21e8);
  iVar14 = *(int *)(this_ptr + local_c8 * 4 + 0x1a4);
  if (*(int *)(this_ptr + 0x4204) == 0) {
    if (x < _DAT_01c4f008) {
      return iVar2;
    }
    if (y < _DAT_01c4f00c) {
      return iVar2;
    }
    if ((_DAT_01c4f010 + 1) - *(int *)(this_ptr + character_code * 4 + 0x35e8) < x) {
      return iVar2;
    }
    if ((_DAT_01c4f014 + 1) - *(int *)(this_ptr + character_code * 4 + 0x39e8) < y) {
      return iVar2;
    }
  }
  else {
    iVar6 = engine_font_cpp_clipCharacter_FUN_004c0a80
                      ((int *)&local_d4,&x,&y,&local_d0,&local_cc,iVar14);
    if (iVar6 != 0) {
      return iVar2;
    }
  }
  local_c4 = iVar14 - ((local_d0 - x) + 1);
  if (DAT_0061b4a0 == 8) {
    if (color_mode == -1) {
      local_c0 = y;
      if (y <= local_cc) {
        iVar14 = y * 4;
        do {
          pbVar3 = (byte *)(*(int *)(&DAT_01c4354c + iVar14) + x);
          for (iVar6 = x; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
            if ((uint)*local_d4 != *(uint *)(this_ptr + 0x4208)) {
              *pbVar3 = *local_d4;
            }
            pbVar3 = pbVar3 + 1;
            local_d4 = local_d4 + 1;
          }
          local_c0 = local_c0 + 1;
          iVar14 = iVar14 + 4;
          local_d4 = local_d4 + local_c4;
        } while (local_c0 <= local_cc);
      }
    }
    else if (color_mode == -2) {
      local_bc = y;
      if (y <= local_cc) {
        iVar14 = y * 4;
        do {
          puVar7 = (byte *)(*(int *)(&DAT_01c4354c + iVar14) + x);
          for (iVar6 = x; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
            if ((uint)*local_d4 != *(uint *)(this_ptr + 0x4208)) {
              *puVar7 = DAT_01cc8cd0;
            }
            puVar7 = puVar7 + 1;
            local_d4 = local_d4 + 1;
          }
          local_bc = local_bc + 1;
          iVar14 = iVar14 + 4;
          local_d4 = local_d4 + local_c4;
        } while (local_bc <= local_cc);
      }
    }
    else if (color_mode == -3) {
      local_b8 = y;
      if (y <= local_cc) {
        iVar14 = y * 4;
        do {
          puVar7 = (byte *)(*(int *)(&DAT_01c4354c + iVar14) + x);
          for (iVar6 = x; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
            if ((uint)*local_d4 != *(uint *)(this_ptr + 0x4208)) {
              *puVar7 = DAT_01cc8ce4;
            }
            puVar7 = puVar7 + 1;
            local_d4 = local_d4 + 1;
          }
          local_b8 = local_b8 + 1;
          iVar14 = iVar14 + 4;
          local_d4 = local_d4 + local_c4;
        } while (local_b8 <= local_cc);
      }
    }
    else {
      local_b4 = y;
      if (y <= local_cc) {
        iVar14 = y * 4;
        do {
          puVar7 = (byte *)(*(int *)(&DAT_01c4354c + iVar14) + x);
          for (iVar6 = x; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
            if ((uint)*local_d4 != *(uint *)(this_ptr + 0x4208)) {
              *puVar7 = (byte)color_mode;
            }
            puVar7 = puVar7 + 1;
            local_d4 = local_d4 + 1;
          }
          local_b4 = local_b4 + 1;
          iVar14 = iVar14 + 4;
          local_d4 = local_d4 + local_c4;
        } while (local_b4 <= local_cc);
      }
    }
  }
  else {
    iVar14 = y << 2;
    if (DAT_0061b4a0 == 0x10) {
      if (color_mode == -1) {
        if (*(int *)(this_ptr + 0x1de4) == 0) {
          if (y <= local_cc) {
            iVar14 = y * 4;
            do {
              puVar4 = (ushort *)(*(int *)(&DAT_01c4354c + iVar14) + x * 2);
              for (iVar6 = x; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
                if ((uint)*local_d4 != *(uint *)(this_ptr + 0x4208)) {
                  *puVar4 = *(ushort *)
                             (this_ptr + (uint)*local_d4 * 4 + local_c8 * 0x400 + 0xdb4);
                }
                local_d4 = local_d4 + 1;
                puVar4 = puVar4 + 1;
              }
              iVar14 = iVar14 + 4;
              local_d4 = local_d4 + local_c4;
              y = y + 1;
            } while (y <= local_cc);
          }
        }
        else {
          local_b0 = y;
          if (y <= local_cc) {
            local_28 = y << 2;
            do {
              puVar13 = (ushort *)(*(int *)(&DAT_01c4354c + local_28) + x * 2);
              for (iVar14 = x; iVar14 <= local_d0; iVar14 = iVar14 + 1) {
                iVar6 = (int)(DAT_0061b4b8 *
                             (uint)(byte)this_ptr[(uint)*local_d4 * 3 + local_c8 * 0x300 + 0x1b4])
                        >> 0x1f;
                iVar6 = (int)((DAT_0061b4b8 *
                               (uint)(byte)this_ptr[(uint)*local_d4 * 3 + local_c8 * 0x300 + 0x1b4]
                              + iVar6 * -0x100) - (uint)(iVar6 << 7 < 0)) >> 8;
                if (iVar6 != 0) {
                  iVar11 = (uint)*local_d4 * 4 + local_c8 * 0x400;
                  uVar8 = (uint)*puVar13;
                  iVar9 = 0xff - iVar6;
                  *puVar13 = (ushort)(((((*(uint *)(this_ptr + iVar11 + 0xdb4) & DAT_00623f28) >>
                                        (DAT_01c4e9e0 & 0x1f)) << (DAT_01c4e9e8 & 0x1f) & 0xff) *
                                       iVar6 + (((DAT_00623f28 & uVar8) >> (DAT_01c4e9e0 & 0x1f)) <<
                                                (DAT_01c4e9e8 & 0x1f) & 0xff) * iVar9 >> 8) /
                                      _DAT_01c4e9e4 << (DAT_01c4e9e0 & 0x1f)) |
                             (ushort)(((((*(uint *)(this_ptr + iVar11 + 0xdb4) & DAT_00623f20) >>
                                        (DAT_01c4e9d4 & 0x1f)) << (DAT_01c4e9dc & 0x1f) & 0xff) *
                                       iVar6 + (((DAT_00623f20 & uVar8) >> (DAT_01c4e9d4 & 0x1f)) <<
                                                (DAT_01c4e9dc & 0x1f) & 0xff) * iVar9 >> 8) /
                                      _DAT_01c4e9d8 << (DAT_01c4e9d4 & 0x1f)) |
                             (ushort)(((((*(uint *)(this_ptr + iVar11 + 0xdb4) & DAT_00623f30) >>
                                        (DAT_01c4e9ec & 0x1f)) << (DAT_01c4e9f4 & 0x1f) & 0xff) *
                                       iVar6 + iVar9 * (((DAT_00623f30 & uVar8) >>
                                                        (DAT_01c4e9ec & 0x1f)) <<
                                                        (DAT_01c4e9f4 & 0x1f) & 0xff) >> 8) /
                                      _DAT_01c4e9f0 << (DAT_01c4e9ec & 0x1f));
                }
                puVar13 = puVar13 + 1;
                local_d4 = local_d4 + 1;
              }
              local_28 = local_28 + 4;
              local_b0 = local_b0 + 1;
              local_d4 = local_d4 + local_c4;
            } while (local_b0 <= local_cc);
          }
        }
      }
      else if (color_mode == -2) {
        if (*(int *)(this_ptr + 0x1de4) == 0) {
          if (y <= local_cc) {
            iVar14 = y * 4;
            do {
              puVar13 = (ushort *)(*(int *)(&DAT_01c4354c + iVar14) + x * 2);
              for (iVar6 = x; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
                if ((uint)*local_d4 != *(uint *)(this_ptr + 0x4208)) {
                  *puVar13 = _DAT_01cc8cd2;
                }
                puVar13 = puVar13 + 1;
                local_d4 = local_d4 + 1;
              }
              iVar14 = iVar14 + 4;
              local_d4 = local_d4 + local_c4;
              y = y + 1;
            } while (y <= local_cc);
          }
        }
        else {
          local_90 = y;
          if (y <= local_cc) {
            local_2c = y << 2;
            do {
              puVar13 = (ushort *)(x * 2 + *(int *)(&DAT_01c4354c + local_2c));
              for (iVar14 = x; iVar14 <= local_d0; iVar14 = iVar14 + 1) {
                iVar6 = (int)(DAT_0061b4b8 *
                             (uint)(byte)this_ptr[(uint)*local_d4 * 3 + local_c8 * 0x300 + 0x1b4])
                        >> 0x1f;
                iVar6 = (int)((DAT_0061b4b8 *
                               (uint)(byte)this_ptr[(uint)*local_d4 * 3 + local_c8 * 0x300 + 0x1b4]
                              + iVar6 * -0x100) - (uint)(iVar6 << 7 < 0)) >> 8;
                if (iVar6 != 0) {
                  uVar8 = (uint)_DAT_01cc8cd2;
                  uVar10 = (uint)*puVar13;
                  iVar11 = 0xff - iVar6;
                  *puVar13 = (ushort)(((((DAT_00623f28 & uVar8) >> (DAT_01c4e9e0 & 0x1f)) <<
                                        (DAT_01c4e9e8 & 0x1f) & 0xff) * iVar6 +
                                       (((DAT_00623f28 & uVar10) >> (DAT_01c4e9e0 & 0x1f)) <<
                                        (DAT_01c4e9e8 & 0x1f) & 0xff) * iVar11 >> 8) / _DAT_01c4e9e4
                                     << (DAT_01c4e9e0 & 0x1f)) |
                             (ushort)(((((DAT_00623f20 & uVar8) >> (DAT_01c4e9d4 & 0x1f)) <<
                                        (DAT_01c4e9dc & 0x1f) & 0xff) * iVar6 +
                                       (((DAT_00623f20 & uVar10) >> (DAT_01c4e9d4 & 0x1f)) <<
                                        (DAT_01c4e9dc & 0x1f) & 0xff) * iVar11 >> 8) / _DAT_01c4e9d8
                                     << (DAT_01c4e9d4 & 0x1f)) |
                             (ushort)(((((DAT_00623f30 & uVar8) >> (DAT_01c4e9ec & 0x1f)) <<
                                        (DAT_01c4e9f4 & 0x1f) & 0xff) * iVar6 +
                                       iVar11 * (((DAT_00623f30 & uVar10) >> (DAT_01c4e9ec & 0x1f))
                                                 << (DAT_01c4e9f4 & 0x1f) & 0xff) >> 8) /
                                      _DAT_01c4e9f0 << (DAT_01c4e9ec & 0x1f));
                }
                puVar13 = puVar13 + 1;
                local_d4 = local_d4 + 1;
              }
              local_2c = local_2c + 4;
              local_90 = local_90 + 1;
              local_d4 = local_d4 + local_c4;
            } while (local_90 <= local_cc);
          }
        }
      }
      else if (color_mode == -3) {
        if (*(int *)(this_ptr + 0x1de4) == 0) {
          if (y <= local_cc) {
            iVar14 = y * 4;
            do {
              puVar4 = (ushort *)(x * 2 + *(int *)(&DAT_01c4354c + iVar14));
              for (iVar6 = x; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
                if ((uint)*local_d4 != *(uint *)(this_ptr + 0x4208)) {
                  *puVar4 = _DAT_01cc8ce4;
                }
                local_d4 = local_d4 + 1;
                puVar4 = puVar4 + 1;
              }
              iVar14 = iVar14 + 4;
              local_d4 = local_d4 + local_c4;
              y = y + 1;
            } while (y <= local_cc);
          }
        }
        else {
          local_74 = y;
          if (y <= local_cc) {
            local_30 = y << 2;
            do {
              puVar13 = (ushort *)(*(int *)(&DAT_01c4354c + local_30) + x * 2);
              for (iVar14 = x; iVar14 <= local_d0; iVar14 = iVar14 + 1) {
                iVar6 = (int)(DAT_0061b4b8 *
                             (uint)(byte)this_ptr[(uint)*local_d4 * 3 + local_c8 * 0x300 + 0x1b4])
                        >> 0x1f;
                iVar6 = (int)((DAT_0061b4b8 *
                               (uint)(byte)this_ptr[(uint)*local_d4 * 3 + local_c8 * 0x300 + 0x1b4]
                              + iVar6 * -0x100) - (uint)(iVar6 << 7 < 0)) >> 8;
                if (iVar6 != 0) {
                  uVar8 = (uint)*puVar13;
                  iVar11 = 0xff - iVar6;
                  *puVar13 = (ushort)(((((_DAT_01cc8ce4 & DAT_00623f20) >> (DAT_01c4e9d4 & 0x1f)) <<
                                        (DAT_01c4e9dc & 0x1f) & 0xff) * iVar6 +
                                       (((uVar8 & DAT_00623f20) >> (DAT_01c4e9d4 & 0x1f)) <<
                                        (DAT_01c4e9dc & 0x1f) & 0xff) * iVar11 >> 8) / _DAT_01c4e9d8
                                     << (DAT_01c4e9d4 & 0x1f)) |
                             (ushort)(((((DAT_00623f28 & _DAT_01cc8ce4) >> (DAT_01c4e9e0 & 0x1f)) <<
                                        (DAT_01c4e9e8 & 0x1f) & 0xff) * iVar6 +
                                       (((uVar8 & DAT_00623f28) >> (DAT_01c4e9e0 & 0x1f)) <<
                                        (DAT_01c4e9e8 & 0x1f) & 0xff) * iVar11 >> 8) / _DAT_01c4e9e4
                                     << (DAT_01c4e9e0 & 0x1f)) |
                             (ushort)(((((_DAT_01cc8ce4 & DAT_00623f30) >> (DAT_01c4e9ec & 0x1f)) <<
                                        (DAT_01c4e9f4 & 0x1f) & 0xff) * iVar6 +
                                       iVar11 * (((uVar8 & DAT_00623f30) >> (DAT_01c4e9ec & 0x1f))
                                                 << (DAT_01c4e9f4 & 0x1f) & 0xff) >> 8) /
                                      _DAT_01c4e9f0 << (DAT_01c4e9ec & 0x1f));
                }
                puVar13 = puVar13 + 1;
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
        uVar1 = *(ushort *)(&DAT_01c4dad0 + color_mode * 2);
        if (*(int *)(this_ptr + 0x1de4) == 0) {
          for (; y <= local_cc; y = y + 1) {
            puVar13 = (ushort *)(x * 2 + *(int *)(&DAT_01c4354c + iVar14));
            for (iVar6 = x; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
              if ((uint)*local_d4 != *(uint *)(this_ptr + 0x4208)) {
                *puVar13 = uVar1;
              }
              local_d4 = local_d4 + 1;
              puVar13 = puVar13 + 1;
            }
            iVar14 = iVar14 + 4;
            local_d4 = local_d4 + local_c4;
          }
        }
        else {
          local_58 = y;
          if (y <= local_cc) {
            local_34 = y << 2;
            do {
              puVar13 = (ushort *)(*(int *)(&DAT_01c4354c + local_34) + x * 2);
              for (iVar14 = x; iVar14 <= local_d0; iVar14 = iVar14 + 1) {
                iVar6 = (int)(DAT_0061b4b8 *
                             (uint)(byte)this_ptr[(uint)*local_d4 * 3 + local_c8 * 0x300 + 0x1b4])
                        >> 0x1f;
                iVar6 = (int)((DAT_0061b4b8 *
                               (uint)(byte)this_ptr[(uint)*local_d4 * 3 + local_c8 * 0x300 + 0x1b4]
                              + iVar6 * -0x100) - (uint)(iVar6 << 7 < 0)) >> 8;
                if (iVar6 != 0) {
                  uVar8 = (uint)uVar1;
                  uVar10 = (uint)*puVar13;
                  iVar11 = 0xff - iVar6;
                  *puVar13 = (ushort)(((((DAT_00623f28 & uVar8) >> (DAT_01c4e9e0 & 0x1f)) <<
                                        (DAT_01c4e9e8 & 0x1f) & 0xff) * iVar6 +
                                       (((DAT_00623f28 & uVar10) >> (DAT_01c4e9e0 & 0x1f)) <<
                                        (DAT_01c4e9e8 & 0x1f) & 0xff) * iVar11 >> 8) / _DAT_01c4e9e4
                                     << (DAT_01c4e9e0 & 0x1f)) |
                             (ushort)(((((DAT_00623f20 & uVar8) >> (DAT_01c4e9d4 & 0x1f)) <<
                                        (DAT_01c4e9dc & 0x1f) & 0xff) * iVar6 +
                                       (((DAT_00623f20 & uVar10) >> (DAT_01c4e9d4 & 0x1f)) <<
                                        (DAT_01c4e9dc & 0x1f) & 0xff) * iVar11 >> 8) / _DAT_01c4e9d8
                                     << (DAT_01c4e9d4 & 0x1f)) |
                             (ushort)((iVar6 * (((uVar8 & DAT_00623f30) >> (DAT_01c4e9ec & 0x1f)) <<
                                                (DAT_01c4e9f4 & 0x1f) & 0xff) +
                                       iVar11 * (((DAT_00623f30 & uVar10) >> (DAT_01c4e9ec & 0x1f))
                                                 << (DAT_01c4e9f4 & 0x1f) & 0xff) >> 8) /
                                      _DAT_01c4e9f0 << (DAT_01c4e9ec & 0x1f));
                }
                puVar13 = puVar13 + 1;
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
      iVar6 = local_c8 * 0x400;
      color_table = this_ptr + iVar6 + 0xdb4;
      if (color_mode == -1) {
        if (*(int *)(this_ptr + 0x1de4) == 0) {
          for (; y <= local_cc; y = y + 1) {
            puVar12 = (uint *)(*(int *)(&DAT_01c4354c + iVar14) + x * 4);
            for (iVar11 = x; iVar11 <= local_d0; iVar11 = iVar11 + 1) {
              if ((uint)*local_d4 != *(uint *)(this_ptr + 0x4208)) {
                *puVar12 = *(uint *)(this_ptr + (uint)*local_d4 * 4 + iVar6 + 0xdb4);
              }
              local_d4 = local_d4 + 1;
              puVar12 = puVar12 + 1;
            }
            iVar14 = iVar14 + 4;
            local_d4 = local_d4 + local_c4;
          }
        }
        else {
          iVar11 = y;
          if (y <= local_cc) {
            do {
              engine_font_cpp_drawAlphaBlendedPixels_FUN_004c26c0
                        ((uint *)(*(int *)(&DAT_01c4354c + iVar14) + x * 4),local_d4,
                         (uint *)color_table,(local_d0 - x) + 1,
                         *(uint *)(this_ptr + (uint)*local_d4 * 4 + iVar6 + 0xdb4));
              iVar14 = iVar14 + 4;
              local_d4 = local_d4 + local_c4 + (local_d0 - x) + 1;
              iVar11 = iVar11 + 1;
            } while (iVar11 <= local_cc);
            return iVar2;
          }
        }
      }
      else if (color_mode == -2) {
        if (*(int *)(this_ptr + 0x1de4) == 0) {
          for (; y <= local_cc; y = y + 1) {
            puVar5 = (uint *)(x * 4 + *(int *)(&DAT_01c4354c + iVar14));
            for (iVar6 = x; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
              if ((uint)*local_d4 != *(uint *)(this_ptr + 0x4208)) {
                *puVar5 = _DAT_01cc8cd4;
              }
              local_d4 = local_d4 + 1;
              puVar5 = puVar5 + 1;
            }
            iVar14 = iVar14 + 4;
            local_d4 = local_d4 + local_c4;
          }
        }
        else {
          iVar6 = y;
          if (y <= local_cc) {
            do {
              engine_font_cpp_drawAlphaBlendedPixels_FUN_004c26c0
                        ((uint *)(x * 4 + *(int *)(&DAT_01c4354c + iVar14)),local_d4,
                         (uint *)color_table,(local_d0 - x) + 1,_DAT_01cc8cd4);
              iVar14 = iVar14 + 4;
              iVar6 = iVar6 + 1;
              local_d4 = local_d4 + local_c4 + (local_d0 - x) + 1;
            } while (iVar6 <= local_cc);
            return iVar2;
          }
        }
      }
      else if (color_mode == -3) {
        if (*(int *)(this_ptr + 0x1de4) == 0) {
          for (; y <= local_cc; y = y + 1) {
            puVar5 = (uint *)(x * 4 + *(int *)(&DAT_01c4354c + iVar14));
            for (iVar6 = x; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
              if ((uint)*local_d4 != *(uint *)(this_ptr + 0x4208)) {
                *puVar5 = _DAT_01cc8ce4;
              }
              local_d4 = local_d4 + 1;
              puVar5 = puVar5 + 1;
            }
            iVar14 = iVar14 + 4;
            local_d4 = local_d4 + local_c4;
          }
        }
        else {
          iVar6 = y;
          if (y <= local_cc) {
            do {
              engine_font_cpp_drawAlphaBlendedPixels_FUN_004c26c0
                        ((uint *)(*(int *)(&DAT_01c4354c + iVar14) + x * 4),local_d4,
                         (uint *)color_table,(local_d0 - x) + 1,_DAT_01cc8ce4);
              iVar14 = iVar14 + 4;
              iVar6 = iVar6 + 1;
              local_d4 = local_d4 + local_c4 + (local_d0 - x) + 1;
            } while (iVar6 <= local_cc);
            return iVar2;
          }
        }
      }
      else {
        uVar8 = *(uint *)(color_mode * 4 + 0x1c4dcd0);
        if (*(int *)(this_ptr + 0x1de4) == 0) {
          for (; y <= local_cc; y = y + 1) {
            puVar5 = (uint *)(*(int *)(&DAT_01c4354c + iVar14) + x * 4);
            for (iVar6 = x; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
              if ((uint)*local_d4 != *(uint *)(this_ptr + 0x4208)) {
                *puVar5 = uVar8;
              }
              local_d4 = local_d4 + 1;
              puVar5 = puVar5 + 1;
            }
            iVar14 = iVar14 + 4;
            local_d4 = local_d4 + local_c4;
          }
        }
        else {
          iVar6 = y;
          if (y <= local_cc) {
            do {
              engine_font_cpp_drawAlphaBlendedPixels_FUN_004c26c0
                        ((uint *)(x * 4 + *(int *)(&DAT_01c4354c + iVar14)),local_d4,
                         (uint *)color_table,(local_d0 - x) + 1,uVar8);
              iVar14 = iVar14 + 4;
              local_d4 = local_d4 + local_c4 + (local_d0 - x) + 1;
              iVar6 = iVar6 + 1;
            } while (iVar6 <= local_cc);
            return iVar2;
          }
        }
      }
    }
  }
  return iVar2;
}
