// Name: engine_font.cpp_FUN_004b1460
// Address: 004b1460
// Address Range: [[004b1460, 004b2a7d]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_FUN_004b1460(CBitFont *this_ptr,int character_code,int x,int y,int color_mode,int color_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_font_cpp_FUN_004b1460(CBitFont *this_ptr,int character_code,int x,int y,int color_mode,int color_value)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  byte *pbVar6;
  byte *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ushort *puVar11;
  uint *puVar12;
  ushort *puVar13;
  int iVar14;
  uint (*color_table) [256];
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
  
  if ((character_code < 0) || (0xff < character_code)) {
    return 0;
  }
  iVar2 = this_ptr->char_widths[character_code] + this_ptr->char_spacing;
  if (this_ptr->char_positions[character_code] == (uchar *)0x0) {
    return iVar2;
  }
  if ((this_ptr->use_3d_rendering == 0) && (color_value != -1)) {
    engine_font_cpp_FUN_004b1460
              (this_ptr,character_code,x + this_ptr->shadow_offset_x,y + this_ptr->shadow_offset_y,
               color_value,-1);
  }
  local_d4 = this_ptr->char_positions[character_code];
  y = y + this_ptr->char_y_offsets[character_code];
  local_d0 = x + this_ptr->char_widths[character_code] + -1;
  local_cc = y + -1 + this_ptr->char_heights[character_code];
  iVar14 = this_ptr->char_bitmap_index[character_code];
  iVar3 = this_ptr->bitmap_widths[iVar14];
  if (this_ptr->rendering_ready == 0) {
    if (x < _DAT_01c6b5a8) {
      return iVar2;
    }
    if (y < _DAT_01c6b5ac) {
      return iVar2;
    }
    if ((_DAT_01c6b5b0 + 1) - this_ptr->char_widths[character_code] < x) {
      return iVar2;
    }
    if ((_DAT_01c6b5b4 + 1) - this_ptr->char_heights[character_code] < y) {
      return iVar2;
    }
  }
  else {
    iVar8 = engine_font_cpp_clipCharacter_FUN_004af6d0
                      ((int *)&local_d4,&x,&y,&local_d0,&local_cc,iVar3);
    if (iVar8 != 0) {
      return iVar2;
    }
  }
  local_c8 = iVar3 - ((local_d0 - x) + 1);
  if (DAT_005fba20 == 8) {
    if (color_mode == -1) {
      if (y <= local_cc) {
        iVar14 = y * 4;
        do {
          pbVar6 = (byte *)(*(int *)(&DAT_01c5faec + iVar14) + x);
          for (iVar3 = x; iVar3 <= local_d0; iVar3 = iVar3 + 1) {
            if ((uint)*local_d4 != this_ptr->load_flags) {
              *pbVar6 = *local_d4;
            }
            pbVar6 = pbVar6 + 1;
            local_d4 = local_d4 + 1;
          }
          iVar14 = iVar14 + 4;
          local_d4 = local_d4 + local_c8;
          y = y + 1;
        } while (y <= local_cc);
      }
    }
    else if (color_mode == -2) {
      if (y <= local_cc) {
        iVar14 = y * 4;
        do {
          puVar7 = (byte *)(*(int *)(&DAT_01c5faec + iVar14) + x);
          for (iVar3 = x; iVar3 <= local_d0; iVar3 = iVar3 + 1) {
            if ((uint)*local_d4 != this_ptr->load_flags) {
              *puVar7 = DAT_01d1ad60;
            }
            puVar7 = puVar7 + 1;
            local_d4 = local_d4 + 1;
          }
          iVar14 = iVar14 + 4;
          local_d4 = local_d4 + local_c8;
          y = y + 1;
        } while (y <= local_cc);
      }
    }
    else if (color_mode == -3) {
      if (y <= local_cc) {
        iVar14 = y * 4;
        do {
          puVar7 = (byte *)(*(int *)(&DAT_01c5faec + iVar14) + x);
          for (iVar3 = x; iVar3 <= local_d0; iVar3 = iVar3 + 1) {
            if ((uint)*local_d4 != this_ptr->load_flags) {
              *puVar7 = DAT_01d1ad74;
            }
            puVar7 = puVar7 + 1;
            local_d4 = local_d4 + 1;
          }
          iVar14 = iVar14 + 4;
          local_d4 = local_d4 + local_c8;
          y = y + 1;
        } while (y <= local_cc);
      }
    }
    else if (y <= local_cc) {
      iVar14 = y * 4;
      do {
        puVar7 = (byte *)(*(int *)(&DAT_01c5faec + iVar14) + x);
        for (iVar3 = x; iVar3 <= local_d0; iVar3 = iVar3 + 1) {
          if ((uint)*local_d4 != this_ptr->load_flags) {
            *puVar7 = (byte)color_mode;
          }
          puVar7 = puVar7 + 1;
          local_d4 = local_d4 + 1;
        }
        iVar14 = iVar14 + 4;
        local_d4 = local_d4 + local_c8;
        y = y + 1;
      } while (y <= local_cc);
    }
  }
  else {
    iVar3 = y << 2;
    if (DAT_005fba20 == 0x10) {
      if (color_mode == -1) {
        if (this_ptr->is_initialized == 0) {
          local_a4 = y;
          if (y <= local_cc) {
            iVar3 = y * 4;
            do {
              puVar11 = (ushort *)(*(int *)(&DAT_01c5faec + iVar3) + x * 2);
              for (iVar8 = x; iVar8 <= local_d0; iVar8 = iVar8 + 1) {
                if ((uint)*local_d4 != this_ptr->load_flags) {
                  *puVar11 = (short)this_ptr->palettes_display[iVar14][*local_d4];
                }
                local_d4 = local_d4 + 1;
                puVar11 = puVar11 + 1;
              }
              local_a4 = local_a4 + 1;
              iVar3 = iVar3 + 4;
              local_d4 = local_d4 + local_c8;
            } while (local_a4 <= local_cc);
          }
        }
        else {
          local_c4 = y;
          if (y <= local_cc) {
            local_20 = y << 2;
            do {
              puVar13 = (ushort *)(*(int *)(&DAT_01c5faec + local_20) + x * 2);
              for (iVar3 = x; iVar3 <= local_d0; iVar3 = iVar3 + 1) {
                uVar4 = (uint)*local_d4;
                iVar8 = DAT_005fba38 *
                        (uint)(byte)this_ptr->palette_data[uVar4 * 3 + iVar14 * 0x300];
                iVar9 = iVar8 >> 0x1f;
                iVar8 = (int)((iVar8 + iVar9 * -0x100) - (uint)(iVar9 << 7 < 0)) >> 8;
                if (iVar8 != 0) {
                  uVar10 = (uint)*puVar13;
                  iVar9 = 0xff - iVar8;
                  *puVar13 = (ushort)(((((this_ptr->palettes_display[iVar14][uVar4] & DAT_00604e60)
                                        >> (DAT_01c6af74 & 0x1f)) << (DAT_01c6af7c & 0x1f) & 0xff) *
                                       iVar8 + (((DAT_00604e60 & uVar10) >> (DAT_01c6af74 & 0x1f))
                                                << (DAT_01c6af7c & 0x1f) & 0xff) * iVar9 >> 8) /
                                      _DAT_01c6af78 << (DAT_01c6af74 & 0x1f)) |
                             (ushort)(((((this_ptr->palettes_display[iVar14][uVar4] & DAT_00604e68)
                                        >> (DAT_01c6af80 & 0x1f)) << (DAT_01c6af88 & 0x1f) & 0xff) *
                                       iVar8 + (((DAT_00604e68 & uVar10) >> (DAT_01c6af80 & 0x1f))
                                                << (DAT_01c6af88 & 0x1f) & 0xff) * iVar9 >> 8) /
                                      _DAT_01c6af84 << (DAT_01c6af80 & 0x1f)) |
                             (ushort)((iVar8 * (((this_ptr->palettes_display[iVar14][uVar4] &
                                                 DAT_00604e70) >> (DAT_01c6af8c & 0x1f)) <<
                                                (DAT_01c6af94 & 0x1f) & 0xff) +
                                       iVar9 * (((uVar10 & DAT_00604e70) >> (DAT_01c6af8c & 0x1f))
                                                << (DAT_01c6af94 & 0x1f) & 0xff) >> 8) /
                                      _DAT_01c6af90 << (DAT_01c6af8c & 0x1f));
                }
                puVar13 = puVar13 + 1;
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
        if (this_ptr->is_initialized == 0) {
          if (y <= local_cc) {
            iVar14 = y * 4;
            do {
              puVar13 = (ushort *)(x * 2 + *(int *)(&DAT_01c5faec + iVar14));
              for (iVar3 = x; iVar3 <= local_d0; iVar3 = iVar3 + 1) {
                if ((uint)*local_d4 != this_ptr->load_flags) {
                  *puVar13 = _DAT_01d1ad62;
                }
                puVar13 = puVar13 + 1;
                local_d4 = local_d4 + 1;
              }
              iVar14 = iVar14 + 4;
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
              puVar13 = (ushort *)(x * 2 + *(int *)(&DAT_01c5faec + local_24));
              for (iVar3 = x; iVar3 <= local_d0; iVar3 = iVar3 + 1) {
                iVar8 = DAT_005fba38 *
                        (uint)(byte)this_ptr->palette_data[(uint)*local_d4 * 3 + iVar14 * 0x300];
                iVar9 = iVar8 >> 0x1f;
                iVar8 = (int)((iVar8 + iVar9 * -0x100) - (uint)(iVar9 << 7 < 0)) >> 8;
                if (iVar8 != 0) {
                  uVar4 = (uint)_DAT_01d1ad62;
                  uVar10 = (uint)*puVar13;
                  iVar9 = 0xff - iVar8;
                  *puVar13 = (ushort)(((((DAT_00604e68 & uVar4) >> (DAT_01c6af80 & 0x1f)) <<
                                        (DAT_01c6af88 & 0x1f) & 0xff) * iVar8 +
                                       (((DAT_00604e68 & uVar10) >> (DAT_01c6af80 & 0x1f)) <<
                                        (DAT_01c6af88 & 0x1f) & 0xff) * iVar9 >> 8) / _DAT_01c6af84
                                     << (DAT_01c6af80 & 0x1f)) |
                             (ushort)(((((DAT_00604e60 & uVar10) >> (DAT_01c6af74 & 0x1f)) <<
                                        (DAT_01c6af7c & 0x1f) & 0xff) * iVar9 +
                                       (((DAT_00604e60 & uVar4) >> (DAT_01c6af74 & 0x1f)) <<
                                        (DAT_01c6af7c & 0x1f) & 0xff) * iVar8 >> 8) / _DAT_01c6af78
                                     << (DAT_01c6af74 & 0x1f)) |
                             (ushort)(((((uVar4 & DAT_00604e70) >> (DAT_01c6af8c & 0x1f)) <<
                                        (DAT_01c6af94 & 0x1f) & 0xff) * iVar8 +
                                       iVar9 * (((uVar10 & DAT_00604e70) >> (DAT_01c6af8c & 0x1f))
                                                << (DAT_01c6af94 & 0x1f) & 0xff) >> 8) /
                                      _DAT_01c6af90 << (DAT_01c6af8c & 0x1f));
                }
                puVar13 = puVar13 + 1;
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
        if (this_ptr->is_initialized == 0) {
          if (y <= local_cc) {
            iVar14 = y * 4;
            do {
              puVar11 = (ushort *)(x * 2 + *(int *)(&DAT_01c5faec + iVar14));
              for (iVar3 = x; iVar3 <= local_d0; iVar3 = iVar3 + 1) {
                if ((uint)*local_d4 != this_ptr->load_flags) {
                  *puVar11 = _DAT_01d1ad74;
                }
                local_d4 = local_d4 + 1;
                puVar11 = puVar11 + 1;
              }
              iVar14 = iVar14 + 4;
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
              puVar13 = (ushort *)(*(int *)(&DAT_01c5faec + local_28) + x * 2);
              for (iVar3 = x; iVar3 <= local_d0; iVar3 = iVar3 + 1) {
                iVar8 = DAT_005fba38 *
                        (uint)(byte)this_ptr->palette_data[(uint)*local_d4 * 3 + iVar14 * 0x300];
                iVar9 = iVar8 >> 0x1f;
                iVar8 = (int)((iVar8 + iVar9 * -0x100) - (uint)(iVar9 << 7 < 0)) >> 8;
                if (iVar8 != 0) {
                  uVar4 = (uint)*puVar13;
                  iVar9 = 0xff - iVar8;
                  *puVar13 = (ushort)(((((_DAT_01d1ad74 & DAT_00604e68) >> (DAT_01c6af80 & 0x1f)) <<
                                        (DAT_01c6af88 & 0x1f) & 0xff) * iVar8 +
                                       (((uVar4 & DAT_00604e68) >> (DAT_01c6af80 & 0x1f)) <<
                                        (DAT_01c6af88 & 0x1f) & 0xff) * iVar9 >> 8) / _DAT_01c6af84
                                     << (DAT_01c6af80 & 0x1f)) |
                             (ushort)(((((_DAT_01d1ad74 & DAT_00604e60) >> (DAT_01c6af74 & 0x1f)) <<
                                        (DAT_01c6af7c & 0x1f) & 0xff) * iVar8 +
                                       (((uVar4 & DAT_00604e60) >> (DAT_01c6af74 & 0x1f)) <<
                                        (DAT_01c6af7c & 0x1f) & 0xff) * iVar9 >> 8) / _DAT_01c6af78
                                     << (DAT_01c6af74 & 0x1f)) |
                             (ushort)(((((_DAT_01d1ad74 & DAT_00604e70) >> (DAT_01c6af8c & 0x1f)) <<
                                        (DAT_01c6af94 & 0x1f) & 0xff) * iVar8 +
                                       iVar9 * (((uVar4 & DAT_00604e70) >> (DAT_01c6af8c & 0x1f)) <<
                                                (DAT_01c6af94 & 0x1f) & 0xff) >> 8) / _DAT_01c6af90
                                     << (DAT_01c6af8c & 0x1f));
                }
                puVar13 = puVar13 + 1;
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
        uVar1 = *(ushort *)(&DAT_01c6a070 + color_mode * 2);
        if (this_ptr->is_initialized == 0) {
          for (; y <= local_cc; y = y + 1) {
            puVar13 = (ushort *)(*(int *)(&DAT_01c5faec + iVar3) + x * 2);
            for (iVar14 = x; iVar14 <= local_d0; iVar14 = iVar14 + 1) {
              if ((uint)*local_d4 != this_ptr->load_flags) {
                *puVar13 = uVar1;
              }
              local_d4 = local_d4 + 1;
              puVar13 = puVar13 + 1;
            }
            iVar3 = iVar3 + 4;
            local_d4 = local_d4 + local_c8;
          }
        }
        else {
          local_5c = y;
          if (y <= local_cc) {
            local_2c = y << 2;
            do {
              puVar13 = (ushort *)(*(int *)(&DAT_01c5faec + local_2c) + x * 2);
              for (iVar3 = x; iVar3 <= local_d0; iVar3 = iVar3 + 1) {
                iVar8 = DAT_005fba38 *
                        (uint)(byte)this_ptr->palette_data[(uint)*local_d4 * 3 + iVar14 * 0x300];
                iVar9 = iVar8 >> 0x1f;
                iVar8 = (int)((iVar8 + iVar9 * -0x100) - (uint)(iVar9 << 7 < 0)) >> 8;
                if (iVar8 != 0) {
                  uVar4 = (uint)uVar1;
                  uVar10 = (uint)*puVar13;
                  iVar9 = 0xff - iVar8;
                  *puVar13 = (ushort)(((((DAT_00604e70 & uVar4) >> (DAT_01c6af8c & 0x1f)) <<
                                        (DAT_01c6af94 & 0x1f) & 0xff) * iVar8 +
                                       iVar9 * (((uVar10 & DAT_00604e70) >> (DAT_01c6af8c & 0x1f))
                                                << (DAT_01c6af94 & 0x1f) & 0xff) >> 8) /
                                      _DAT_01c6af90 << (DAT_01c6af8c & 0x1f)) |
                             (ushort)(((((DAT_00604e68 & uVar4) >> (DAT_01c6af80 & 0x1f)) <<
                                        (DAT_01c6af88 & 0x1f) & 0xff) * iVar8 +
                                       (((DAT_00604e68 & uVar10) >> (DAT_01c6af80 & 0x1f)) <<
                                        (DAT_01c6af88 & 0x1f) & 0xff) * iVar9 >> 8) / _DAT_01c6af84
                                     << (DAT_01c6af80 & 0x1f)) |
                             (ushort)(((((DAT_00604e60 & uVar4) >> (DAT_01c6af74 & 0x1f)) <<
                                        (DAT_01c6af7c & 0x1f) & 0xff) * iVar8 +
                                       (((DAT_00604e60 & uVar10) >> (DAT_01c6af74 & 0x1f)) <<
                                        (DAT_01c6af7c & 0x1f) & 0xff) * iVar9 >> 8) / _DAT_01c6af78
                                     << (DAT_01c6af74 & 0x1f));
                }
                puVar13 = puVar13 + 1;
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
      color_table = this_ptr->palettes_display + iVar14;
      if (color_mode == -1) {
        iVar14 = (int)this_ptr->bitmap_files + iVar14 * 0x400 + -4;
        if (this_ptr->is_initialized == 0) {
          for (; y <= local_cc; y = y + 1) {
            puVar12 = (uint *)(x * 4 + *(int *)(&DAT_01c5faec + iVar3));
            for (iVar8 = x; iVar8 <= local_d0; iVar8 = iVar8 + 1) {
              if ((uint)*local_d4 != this_ptr->load_flags) {
                *puVar12 = *(uint *)(iVar14 + 0xdb4 + (uint)*local_d4 * 4);
              }
              local_d4 = local_d4 + 1;
              puVar12 = puVar12 + 1;
            }
            iVar3 = iVar3 + 4;
            local_d4 = local_d4 + local_c8;
          }
        }
        else {
          iVar8 = y;
          local_30 = iVar14;
          if (y <= local_cc) {
            do {
              engine_font_cpp_drawAlphaBlendedPixels_FUN_004b1310
                        ((uint *)(x * 4 + *(int *)(&DAT_01c5faec + iVar3)),local_d4,*color_table,
                         (local_d0 - x) + 1,*(uint *)(iVar14 + 0xdb4 + (uint)*local_d4 * 4));
              iVar3 = iVar3 + 4;
              iVar8 = iVar8 + 1;
              local_d4 = local_d4 + local_c8 + (local_d0 - x) + 1;
            } while (iVar8 <= local_cc);
            return iVar2;
          }
        }
      }
      else if (color_mode == -2) {
        if (this_ptr->is_initialized == 0) {
          for (; y <= local_cc; y = y + 1) {
            puVar5 = (uint *)(x * 4 + *(int *)(&DAT_01c5faec + iVar3));
            for (iVar14 = x; iVar14 <= local_d0; iVar14 = iVar14 + 1) {
              if ((uint)*local_d4 != this_ptr->load_flags) {
                *puVar5 = _DAT_01d1ad64;
              }
              local_d4 = local_d4 + 1;
              puVar5 = puVar5 + 1;
            }
            iVar3 = iVar3 + 4;
            local_d4 = local_d4 + local_c8;
          }
        }
        else {
          iVar14 = y;
          if (y <= local_cc) {
            do {
              engine_font_cpp_drawAlphaBlendedPixels_FUN_004b1310
                        ((uint *)(x * 4 + *(int *)(&DAT_01c5faec + iVar3)),local_d4,*color_table,
                         (local_d0 - x) + 1,_DAT_01d1ad64);
              iVar3 = iVar3 + 4;
              iVar14 = iVar14 + 1;
              local_d4 = local_d4 + local_c8 + (local_d0 - x) + 1;
            } while (iVar14 <= local_cc);
            return iVar2;
          }
        }
      }
      else if (color_mode == -3) {
        if (this_ptr->is_initialized == 0) {
          for (; y <= local_cc; y = y + 1) {
            puVar5 = (uint *)(x * 4 + *(int *)(&DAT_01c5faec + iVar3));
            for (iVar14 = x; iVar14 <= local_d0; iVar14 = iVar14 + 1) {
              if ((uint)*local_d4 != this_ptr->load_flags) {
                *puVar5 = _DAT_01d1ad74;
              }
              local_d4 = local_d4 + 1;
              puVar5 = puVar5 + 1;
            }
            iVar3 = iVar3 + 4;
            local_d4 = local_d4 + local_c8;
          }
        }
        else {
          iVar14 = y;
          if (y <= local_cc) {
            do {
              engine_font_cpp_drawAlphaBlendedPixels_FUN_004b1310
                        ((uint *)(*(int *)(&DAT_01c5faec + iVar3) + x * 4),local_d4,*color_table,
                         (local_d0 - x) + 1,_DAT_01d1ad74);
              iVar3 = iVar3 + 4;
              iVar14 = iVar14 + 1;
              local_d4 = local_d4 + local_c8 + (local_d0 - x) + 1;
            } while (iVar14 <= local_cc);
            return iVar2;
          }
        }
      }
      else {
        uVar4 = *(uint *)(color_mode * 4 + 0x1c6a270);
        if (this_ptr->is_initialized == 0) {
          for (; y <= local_cc; y = y + 1) {
            puVar5 = (uint *)(x * 4 + *(int *)(&DAT_01c5faec + iVar3));
            for (iVar14 = x; iVar14 <= local_d0; iVar14 = iVar14 + 1) {
              if ((uint)*local_d4 != this_ptr->load_flags) {
                *puVar5 = uVar4;
              }
              local_d4 = local_d4 + 1;
              puVar5 = puVar5 + 1;
            }
            iVar3 = iVar3 + 4;
            local_d4 = local_d4 + local_c8;
          }
        }
        else {
          iVar14 = y;
          if (y <= local_cc) {
            do {
              engine_font_cpp_drawAlphaBlendedPixels_FUN_004b1310
                        ((uint *)(x * 4 + *(int *)(&DAT_01c5faec + iVar3)),local_d4,*color_table,
                         (local_d0 - x) + 1,uVar4);
              iVar3 = iVar3 + 4;
              local_d4 = local_d4 + local_c8 + (local_d0 - x) + 1;
              iVar14 = iVar14 + 1;
            } while (iVar14 <= local_cc);
            return iVar2;
          }
        }
      }
    }
  }
  return iVar2;
}
