// Name: engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0
// Address: 004916c0
// Address Range: [[004916c0, 00492d99]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_drawCharacter_FUN_004916c0(CBitFont *this_ptr,int character_code,int x,int y,int color_mode,int color_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_font_cpp_CBitFont_drawCharacter_FUN_004916c0(CBitFont *this_ptr,int character_code,int x,int y,int color_mode,int color_value)

{
  ushort uVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  byte *puVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  ushort *puVar11;
  uint (*color_table) [256];
  int iVar12;
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
  iVar2 = this_ptr->char_widths[character_code] + this_ptr->char_spacing;
  if (this_ptr->char_positions[character_code] == (uchar *)0x0) {
    return iVar2;
  }
  if (color_value != -1) {
    engine_font_cpp_CBitFont_drawCharacter_FUN_004916c0
              (this_ptr,character_code,x + this_ptr->shadow_offset_x,y + this_ptr->shadow_offset_y,
               color_value,-1);
  }
  local_d4 = this_ptr->char_positions[character_code];
  y = y + this_ptr->char_y_offsets[character_code];
  local_d0 = x + this_ptr->char_widths[character_code] + -1;
  local_cc = y + -1 + this_ptr->char_heights[character_code];
  local_c8 = this_ptr->char_bitmap_index[character_code];
  iVar12 = this_ptr->bitmap_widths[local_c8];
  if (this_ptr->rendering_ready == 0) {
    if (x < g_ClipLeft) {
      return iVar2;
    }
    if (y < g_ClipTop) {
      return iVar2;
    }
    if ((g_ClipRight + 1) - this_ptr->char_widths[character_code] < x) {
      return iVar2;
    }
    if ((g_ClipBottom + 1) - this_ptr->char_heights[character_code] < y) {
      return iVar2;
    }
  }
  else {
    iVar6 = engine_font_cpp_clipCharacter_FUN_0048fd50
                      ((int *)&local_d4,&x,&y,&local_d0,&local_cc,iVar12);
    if (iVar6 != 0) {
      return iVar2;
    }
  }
  iVar6 = local_c8;
  local_c4 = iVar12 - ((local_d0 - x) + 1);
  if ((this_ptr->use_3d_rendering != 0) && (g_UseExternalRenderer != 0)) {
    engine_font_cpp_CBitFont_render3DCharacter_FUN_004911f0
              (this_ptr,character_code,x,y,local_d0,local_cc,color_mode);
    return iVar2;
  }
  if (g_BitsPerPixel == 8) {
    if (color_mode == -1) {
      local_c0 = y;
      if (y <= local_cc) {
        iVar12 = y * 4;
        do {
          pbVar3 = (byte *)(*(int *)((int)g_ScreenBufferArray + iVar12) + x);
          for (iVar6 = x; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
            if ((uint)*local_d4 != this_ptr->load_flags) {
              *pbVar3 = *local_d4;
            }
            pbVar3 = pbVar3 + 1;
            local_d4 = local_d4 + 1;
          }
          local_c0 = local_c0 + 1;
          iVar12 = iVar12 + 4;
          local_d4 = local_d4 + local_c4;
        } while (local_c0 <= local_cc);
      }
    }
    else if (color_mode == -2) {
      local_bc = y;
      if (y <= local_cc) {
        iVar12 = y * 4;
        do {
          puVar7 = (byte *)(*(int *)((int)g_ScreenBufferArray + iVar12) + x);
          for (iVar6 = x; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
            if ((uint)*local_d4 != this_ptr->load_flags) {
              *puVar7 = DAT_01c70f5c;
            }
            puVar7 = puVar7 + 1;
            local_d4 = local_d4 + 1;
          }
          local_bc = local_bc + 1;
          iVar12 = iVar12 + 4;
          local_d4 = local_d4 + local_c4;
        } while (local_bc <= local_cc);
      }
    }
    else if (color_mode == -3) {
      local_b8 = y;
      if (y <= local_cc) {
        iVar12 = y * 4;
        do {
          puVar7 = (byte *)(*(int *)((int)g_ScreenBufferArray + iVar12) + x);
          for (iVar6 = x; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
            if ((uint)*local_d4 != this_ptr->load_flags) {
              *puVar7 = DAT_01c70f70;
            }
            puVar7 = puVar7 + 1;
            local_d4 = local_d4 + 1;
          }
          local_b8 = local_b8 + 1;
          iVar12 = iVar12 + 4;
          local_d4 = local_d4 + local_c4;
        } while (local_b8 <= local_cc);
      }
    }
    else {
      local_b4 = y;
      if (y <= local_cc) {
        iVar12 = y * 4;
        do {
          puVar7 = (byte *)(*(int *)((int)g_ScreenBufferArray + iVar12) + x);
          for (iVar6 = x; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
            if ((uint)*local_d4 != this_ptr->load_flags) {
              *puVar7 = (byte)color_mode;
            }
            puVar7 = puVar7 + 1;
            local_d4 = local_d4 + 1;
          }
          local_b4 = local_b4 + 1;
          iVar12 = iVar12 + 4;
          local_d4 = local_d4 + local_c4;
        } while (local_b4 <= local_cc);
      }
    }
  }
  else {
    iVar12 = y << 2;
    if (g_BitsPerPixel == 0x10) {
      if (color_mode == -1) {
        if (this_ptr->is_initialized == 0) {
          if (y <= local_cc) {
            iVar12 = y * 4;
            do {
              puVar5 = (ushort *)(*(int *)((int)g_ScreenBufferArray + iVar12) + x * 2);
              for (iVar6 = x; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
                if ((uint)*local_d4 != this_ptr->load_flags) {
                  *puVar5 = (short)this_ptr->palettes_display[local_c8][*local_d4];
                }
                local_d4 = local_d4 + 1;
                puVar5 = puVar5 + 1;
              }
              iVar12 = iVar12 + 4;
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
              puVar11 = (ushort *)(*(int *)((int)g_ScreenBufferArray + local_28) + x * 2);
              for (iVar12 = x; iVar12 <= local_d0; iVar12 = iVar12 + 1) {
                uVar4 = (uint)*local_d4;
                iVar6 = g_CurrentAlphaValue *
                        (uint)(byte)this_ptr->palette_data[uVar4 * 3 + local_c8 * 0x300];
                iVar8 = iVar6 >> 0x1f;
                iVar6 = (int)((iVar6 + iVar8 * -0x100) - (uint)(iVar8 << 7 < 0)) >> 8;
                if (iVar6 != 0) {
                  uVar9 = (uint)*puVar11;
                  iVar8 = 0xff - iVar6;
                  *puVar11 = (ushort)(((((this_ptr->palettes_display[local_c8][uVar4] &
                                         g_GreenMask16.u32[0]) >>
                                        (g_GreenBitPosition.bytes[0] & 0x1f)) <<
                                        (g_GreenDitherShift.bytes[0] & 0x1f) & 0xff) * iVar6 +
                                       (((g_GreenMask16.u32[0] & uVar9) >>
                                        (g_GreenBitPosition.bytes[0] & 0x1f)) <<
                                        (g_GreenDitherShift.bytes[0] & 0x1f) & 0xff) * iVar8 >> 8) /
                                      (uint)g_GreenScaleFactor <<
                                     (g_GreenBitPosition.bytes[0] & 0x1f)) |
                             (ushort)(((((this_ptr->palettes_display[local_c8][uVar4] &
                                         g_RedMask16.u32[0]) >> (g_RedBitPosition.bytes[0] & 0x1f))
                                        << (g_RedDitherShift.bytes[0] & 0x1f) & 0xff) * iVar6 +
                                       (((g_RedMask16.u32[0] & uVar9) >>
                                        (g_RedBitPosition.bytes[0] & 0x1f)) <<
                                        (g_RedDitherShift.bytes[0] & 0x1f) & 0xff) * iVar8 >> 8) /
                                      (uint)g_RedScaleFactor << (g_RedBitPosition.bytes[0] & 0x1f))
                             | (ushort)(((((this_ptr->palettes_display[local_c8][uVar4] &
                                           g_BlueMask16.u32[0]) >>
                                          (g_BlueBitPosition.bytes[0] & 0x1f)) <<
                                          (g_BlueDitherShift.bytes[0] & 0x1f) & 0xff) * iVar6 +
                                         iVar8 * (((g_BlueMask16.u32[0] & uVar9) >>
                                                  (g_BlueBitPosition.bytes[0] & 0x1f)) <<
                                                  (g_BlueDitherShift.bytes[0] & 0x1f) & 0xff) >> 8)
                                        / (uint)g_BlueScaleFactor <<
                                       (g_BlueBitPosition.bytes[0] & 0x1f));
                }
                puVar11 = puVar11 + 1;
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
        if (this_ptr->is_initialized == 0) {
          if (y <= local_cc) {
            iVar12 = y * 4;
            do {
              puVar11 = (ushort *)(*(int *)((int)g_ScreenBufferArray + iVar12) + x * 2);
              for (iVar6 = x; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
                if ((uint)*local_d4 != this_ptr->load_flags) {
                  *puVar11 = _DAT_01c70f5e;
                }
                puVar11 = puVar11 + 1;
                local_d4 = local_d4 + 1;
              }
              iVar12 = iVar12 + 4;
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
              puVar11 = (ushort *)(x * 2 + *(int *)((int)g_ScreenBufferArray + local_2c));
              for (iVar12 = x; iVar12 <= local_d0; iVar12 = iVar12 + 1) {
                iVar6 = g_CurrentAlphaValue *
                        (uint)(byte)this_ptr->palette_data[(uint)*local_d4 * 3 + local_c8 * 0x300];
                iVar8 = iVar6 >> 0x1f;
                iVar6 = (int)((iVar6 + iVar8 * -0x100) - (uint)(iVar8 << 7 < 0)) >> 8;
                if (iVar6 != 0) {
                  uVar4 = (uint)_DAT_01c70f5e;
                  uVar9 = (uint)*puVar11;
                  iVar8 = 0xff - iVar6;
                  *puVar11 = (ushort)(((((g_GreenMask16.u32[0] & uVar4) >>
                                        (g_GreenBitPosition.bytes[0] & 0x1f)) <<
                                        (g_GreenDitherShift.bytes[0] & 0x1f) & 0xff) * iVar6 +
                                       (((g_GreenMask16.u32[0] & uVar9) >>
                                        (g_GreenBitPosition.bytes[0] & 0x1f)) <<
                                        (g_GreenDitherShift.bytes[0] & 0x1f) & 0xff) * iVar8 >> 8) /
                                      (uint)g_GreenScaleFactor <<
                                     (g_GreenBitPosition.bytes[0] & 0x1f)) |
                             (ushort)(((((g_RedMask16.u32[0] & uVar4) >>
                                        (g_RedBitPosition.bytes[0] & 0x1f)) <<
                                        (g_RedDitherShift.bytes[0] & 0x1f) & 0xff) * iVar6 +
                                       (((g_RedMask16.u32[0] & uVar9) >>
                                        (g_RedBitPosition.bytes[0] & 0x1f)) <<
                                        (g_RedDitherShift.bytes[0] & 0x1f) & 0xff) * iVar8 >> 8) /
                                      (uint)g_RedScaleFactor << (g_RedBitPosition.bytes[0] & 0x1f))
                             | (ushort)(((((g_BlueMask16.u32[0] & uVar4) >>
                                          (g_BlueBitPosition.bytes[0] & 0x1f)) <<
                                          (g_BlueDitherShift.bytes[0] & 0x1f) & 0xff) * iVar6 +
                                         iVar8 * (((g_BlueMask16.u32[0] & uVar9) >>
                                                  (g_BlueBitPosition.bytes[0] & 0x1f)) <<
                                                  (g_BlueDitherShift.bytes[0] & 0x1f) & 0xff) >> 8)
                                        / (uint)g_BlueScaleFactor <<
                                       (g_BlueBitPosition.bytes[0] & 0x1f));
                }
                puVar11 = puVar11 + 1;
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
        if (this_ptr->is_initialized == 0) {
          if (y <= local_cc) {
            iVar12 = y * 4;
            do {
              puVar5 = (ushort *)(x * 2 + *(int *)((int)g_ScreenBufferArray + iVar12));
              for (iVar6 = x; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
                if ((uint)*local_d4 != this_ptr->load_flags) {
                  *puVar5 = _DAT_01c70f70;
                }
                local_d4 = local_d4 + 1;
                puVar5 = puVar5 + 1;
              }
              iVar12 = iVar12 + 4;
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
              puVar11 = (ushort *)(*(int *)((int)g_ScreenBufferArray + local_30) + x * 2);
              for (iVar12 = x; iVar12 <= local_d0; iVar12 = iVar12 + 1) {
                iVar6 = g_CurrentAlphaValue *
                        (uint)(byte)this_ptr->palette_data[(uint)*local_d4 * 3 + local_c8 * 0x300];
                iVar8 = iVar6 >> 0x1f;
                iVar6 = (int)((iVar6 + iVar8 * -0x100) - (uint)(iVar8 << 7 < 0)) >> 8;
                if (iVar6 != 0) {
                  uVar4 = (uint)*puVar11;
                  iVar8 = 0xff - iVar6;
                  *puVar11 = (ushort)(((((_DAT_01c70f70 & g_RedMask16.u32[0]) >>
                                        (g_RedBitPosition.bytes[0] & 0x1f)) <<
                                        (g_RedDitherShift.bytes[0] & 0x1f) & 0xff) * iVar6 +
                                       (((uVar4 & g_RedMask16.u32[0]) >>
                                        (g_RedBitPosition.bytes[0] & 0x1f)) <<
                                        (g_RedDitherShift.bytes[0] & 0x1f) & 0xff) * iVar8 >> 8) /
                                      (uint)g_RedScaleFactor << (g_RedBitPosition.bytes[0] & 0x1f))
                             | (ushort)(((((g_GreenMask16.u32[0] & _DAT_01c70f70) >>
                                          (g_GreenBitPosition.bytes[0] & 0x1f)) <<
                                          (g_GreenDitherShift.bytes[0] & 0x1f) & 0xff) * iVar6 +
                                         (((uVar4 & g_GreenMask16.u32[0]) >>
                                          (g_GreenBitPosition.bytes[0] & 0x1f)) <<
                                          (g_GreenDitherShift.bytes[0] & 0x1f) & 0xff) * iVar8 >> 8)
                                        / (uint)g_GreenScaleFactor <<
                                       (g_GreenBitPosition.bytes[0] & 0x1f)) |
                             (ushort)(((((_DAT_01c70f70 & g_BlueMask16.u32[0]) >>
                                        (g_BlueBitPosition.bytes[0] & 0x1f)) <<
                                        (g_BlueDitherShift.bytes[0] & 0x1f) & 0xff) * iVar6 +
                                       iVar8 * (((uVar4 & g_BlueMask16.u32[0]) >>
                                                (g_BlueBitPosition.bytes[0] & 0x1f)) <<
                                                (g_BlueDitherShift.bytes[0] & 0x1f) & 0xff) >> 8) /
                                      (uint)g_BlueScaleFactor << (g_BlueBitPosition.bytes[0] & 0x1f)
                                     );
                }
                puVar11 = puVar11 + 1;
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
        uVar1 = g_ColorTable16[color_mode];
        if (this_ptr->is_initialized == 0) {
          for (; y <= local_cc; y = y + 1) {
            puVar11 = (ushort *)(x * 2 + *(int *)((int)g_ScreenBufferArray + iVar12));
            for (iVar6 = x; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
              if ((uint)*local_d4 != this_ptr->load_flags) {
                *puVar11 = uVar1;
              }
              local_d4 = local_d4 + 1;
              puVar11 = puVar11 + 1;
            }
            iVar12 = iVar12 + 4;
            local_d4 = local_d4 + local_c4;
          }
        }
        else {
          local_58 = y;
          if (y <= local_cc) {
            local_34 = y << 2;
            do {
              puVar11 = (ushort *)(*(int *)((int)g_ScreenBufferArray + local_34) + x * 2);
              for (iVar12 = x; iVar12 <= local_d0; iVar12 = iVar12 + 1) {
                iVar6 = g_CurrentAlphaValue *
                        (uint)(byte)this_ptr->palette_data[(uint)*local_d4 * 3 + local_c8 * 0x300];
                iVar8 = iVar6 >> 0x1f;
                iVar6 = (int)((iVar6 + iVar8 * -0x100) - (uint)(iVar8 << 7 < 0)) >> 8;
                if (iVar6 != 0) {
                  uVar4 = (uint)uVar1;
                  uVar9 = (uint)*puVar11;
                  iVar8 = 0xff - iVar6;
                  *puVar11 = (ushort)(((((g_GreenMask16.u32[0] & uVar4) >>
                                        (g_GreenBitPosition.bytes[0] & 0x1f)) <<
                                        (g_GreenDitherShift.bytes[0] & 0x1f) & 0xff) * iVar6 +
                                       (((g_GreenMask16.u32[0] & uVar9) >>
                                        (g_GreenBitPosition.bytes[0] & 0x1f)) <<
                                        (g_GreenDitherShift.bytes[0] & 0x1f) & 0xff) * iVar8 >> 8) /
                                      (uint)g_GreenScaleFactor <<
                                     (g_GreenBitPosition.bytes[0] & 0x1f)) |
                             (ushort)(((((g_RedMask16.u32[0] & uVar4) >>
                                        (g_RedBitPosition.bytes[0] & 0x1f)) <<
                                        (g_RedDitherShift.bytes[0] & 0x1f) & 0xff) * iVar6 +
                                       (((g_RedMask16.u32[0] & uVar9) >>
                                        (g_RedBitPosition.bytes[0] & 0x1f)) <<
                                        (g_RedDitherShift.bytes[0] & 0x1f) & 0xff) * iVar8 >> 8) /
                                      (uint)g_RedScaleFactor << (g_RedBitPosition.bytes[0] & 0x1f))
                             | (ushort)((iVar6 * (((uVar4 & g_BlueMask16.u32[0]) >>
                                                  (g_BlueBitPosition.bytes[0] & 0x1f)) <<
                                                  (g_BlueDitherShift.bytes[0] & 0x1f) & 0xff) +
                                         iVar8 * (((g_BlueMask16.u32[0] & uVar9) >>
                                                  (g_BlueBitPosition.bytes[0] & 0x1f)) <<
                                                  (g_BlueDitherShift.bytes[0] & 0x1f) & 0xff) >> 8)
                                        / (uint)g_BlueScaleFactor <<
                                       (g_BlueBitPosition.bytes[0] & 0x1f));
                }
                puVar11 = puVar11 + 1;
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
    else if (g_BitsPerPixel == 0x20) {
      color_table = this_ptr->palettes_display + local_c8;
      if (color_mode == -1) {
        if (this_ptr->is_initialized == 0) {
          for (; y <= local_cc; y = y + 1) {
            puVar10 = (uint *)(*(int *)((int)g_ScreenBufferArray + iVar12) + x * 4);
            for (iVar6 = x; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
              if ((uint)*local_d4 != this_ptr->load_flags) {
                *puVar10 = this_ptr->palettes_display[local_c8][*local_d4];
              }
              local_d4 = local_d4 + 1;
              puVar10 = puVar10 + 1;
            }
            iVar12 = iVar12 + 4;
            local_d4 = local_d4 + local_c4;
          }
        }
        else {
          iVar8 = y;
          if (y <= local_cc) {
            do {
              engine_font_cpp_drawAlphaBlendedPixels_FUN_00491160
                        ((uint *)(*(int *)((int)g_ScreenBufferArray + iVar12) + x * 4),local_d4,
                         *color_table,(local_d0 - x) + 1,
                         this_ptr->palettes_display[iVar6][*local_d4]);
              iVar12 = iVar12 + 4;
              local_d4 = local_d4 + local_c4 + (local_d0 - x) + 1;
              iVar8 = iVar8 + 1;
            } while (iVar8 <= local_cc);
            return iVar2;
          }
        }
      }
      else if (color_mode == -2) {
        if (this_ptr->is_initialized == 0) {
          for (; y <= local_cc; y = y + 1) {
            puVar10 = (uint *)(x * 4 + *(int *)((int)g_ScreenBufferArray + iVar12));
            for (iVar6 = x; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
              if ((uint)*local_d4 != this_ptr->load_flags) {
                *puVar10 = _DAT_01c70f60;
              }
              local_d4 = local_d4 + 1;
              puVar10 = puVar10 + 1;
            }
            iVar12 = iVar12 + 4;
            local_d4 = local_d4 + local_c4;
          }
        }
        else {
          iVar6 = y;
          if (y <= local_cc) {
            do {
              engine_font_cpp_drawAlphaBlendedPixels_FUN_00491160
                        ((uint *)(x * 4 + *(int *)((int)g_ScreenBufferArray + iVar12)),local_d4,
                         *color_table,(local_d0 - x) + 1,_DAT_01c70f60);
              iVar12 = iVar12 + 4;
              iVar6 = iVar6 + 1;
              local_d4 = local_d4 + local_c4 + (local_d0 - x) + 1;
            } while (iVar6 <= local_cc);
            return iVar2;
          }
        }
      }
      else if (color_mode == -3) {
        if (this_ptr->is_initialized == 0) {
          for (; y <= local_cc; y = y + 1) {
            puVar10 = (uint *)(x * 4 + *(int *)((int)g_ScreenBufferArray + iVar12));
            for (iVar6 = x; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
              if ((uint)*local_d4 != this_ptr->load_flags) {
                *puVar10 = _DAT_01c70f70;
              }
              local_d4 = local_d4 + 1;
              puVar10 = puVar10 + 1;
            }
            iVar12 = iVar12 + 4;
            local_d4 = local_d4 + local_c4;
          }
        }
        else {
          iVar6 = y;
          if (y <= local_cc) {
            do {
              engine_font_cpp_drawAlphaBlendedPixels_FUN_00491160
                        ((uint *)(*(int *)((int)g_ScreenBufferArray + iVar12) + x * 4),local_d4,
                         *color_table,(local_d0 - x) + 1,_DAT_01c70f70);
              iVar12 = iVar12 + 4;
              iVar6 = iVar6 + 1;
              local_d4 = local_d4 + local_c4 + (local_d0 - x) + 1;
            } while (iVar6 <= local_cc);
            return iVar2;
          }
        }
      }
      else {
        uVar4 = g_ColorTable32[color_mode];
        if (this_ptr->is_initialized == 0) {
          for (; y <= local_cc; y = y + 1) {
            puVar10 = (uint *)(*(int *)((int)g_ScreenBufferArray + iVar12) + x * 4);
            for (iVar6 = x; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
              if ((uint)*local_d4 != this_ptr->load_flags) {
                *puVar10 = uVar4;
              }
              local_d4 = local_d4 + 1;
              puVar10 = puVar10 + 1;
            }
            iVar12 = iVar12 + 4;
            local_d4 = local_d4 + local_c4;
          }
        }
        else {
          iVar6 = y;
          if (y <= local_cc) {
            do {
              engine_font_cpp_drawAlphaBlendedPixels_FUN_00491160
                        ((uint *)(x * 4 + *(int *)((int)g_ScreenBufferArray + iVar12)),local_d4,
                         *color_table,(local_d0 - x) + 1,uVar4);
              iVar12 = iVar12 + 4;
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
