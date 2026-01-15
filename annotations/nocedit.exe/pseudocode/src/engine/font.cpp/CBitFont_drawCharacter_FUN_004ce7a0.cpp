// Name: engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0
// Address: 004ce7a0
// Address Range: [[004ce7a0, 004cfe79]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0(CBitFont * this_ptr, int character_code, int x_pos, int y_pos, int color_mode, int color_value)

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0
          (CBitFont *this_ptr,int character_code,int x_pos,int y_pos,int color_mode,int color_value)

{
  ushort uVar1;
  int color_mode_00;
  byte *pbVar2;
  uint uVar3;
  ushort *puVar4;
  int *piVar5;
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
  color_mode_00 = this_ptr->char_widths[character_code] + this_ptr->char_spacing;
  if (this_ptr->char_positions[character_code] == 0) {
    return color_mode_00;
  }
  if (color_value != -1) {
    engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0
              (this_ptr,character_code,x_pos + this_ptr->font_type,y_pos + this_ptr->font_enabled,
               color_value,-1);
  }
  local_d4 = (byte *)this_ptr->char_positions[character_code];
  y_pos = y_pos + this_ptr->char_x_advance[character_code];
  local_d0 = x_pos + this_ptr->char_widths[character_code] + -1;
  local_cc = y_pos + -1 + this_ptr->char_heights[character_code];
  local_c8 = this_ptr->char_bitmap_index[character_code];
  iVar12 = this_ptr->bitmap_widths[local_c8];
  if (this_ptr->rendering_ready == 0) {
    if (x_pos < g_ClipLeft) {
      return color_mode_00;
    }
    if (y_pos < g_ClipTop) {
      return color_mode_00;
    }
    if ((g_ClipRight + 1) - this_ptr->char_widths[character_code] < x_pos) {
      return color_mode_00;
    }
    if ((g_ClipBottom + 1) - this_ptr->char_heights[character_code] < y_pos) {
      return color_mode_00;
    }
  }
  else {
    iVar6 = engine_font_cpp_CBitFont_clipCharacter_FUN_004ccdd0
                      ((int *)&local_d4,&x_pos,&y_pos,&local_d0,&local_cc,iVar12);
    if (iVar6 != 0) {
      return color_mode_00;
    }
  }
  iVar6 = local_c8;
  local_c4 = iVar12 - ((local_d0 - x_pos) + 1);
  if ((this_ptr->field21_0x318c != 0) && (g_UseExternalRenderer != 0)) {
    engine_font_cpp_CBitFont_render3DCharacter_FUN_004ce2d0
              (this_ptr,character_code,x_pos,y_pos,local_d0,local_cc,color_mode,color_mode_00);
    return color_mode_00;
  }
  if (g_BitsPerPixel == 8) {
    if (color_mode == -1) {
      local_c0 = y_pos;
      if (y_pos <= local_cc) {
        iVar12 = y_pos * 4;
        do {
          pbVar2 = (byte *)(*(int *)((int)g_ScreenBufferArray + iVar12) + x_pos);
          for (iVar6 = x_pos; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
            if ((uint)*local_d4 != this_ptr->load_flags) {
              *pbVar2 = *local_d4;
            }
            pbVar2 = pbVar2 + 1;
            local_d4 = local_d4 + 1;
          }
          local_c0 = local_c0 + 1;
          iVar12 = iVar12 + 4;
          local_d4 = local_d4 + local_c4;
        } while (local_c0 <= local_cc);
      }
    }
    else if (color_mode == -2) {
      local_bc = y_pos;
      if (y_pos <= local_cc) {
        iVar12 = y_pos * 4;
        do {
          puVar7 = (byte *)(*(int *)((int)g_ScreenBufferArray + iVar12) + x_pos);
          for (iVar6 = x_pos; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
            if ((uint)*local_d4 != this_ptr->load_flags) {
              *puVar7 = DAT_02d7b410;
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
      local_b8 = y_pos;
      if (y_pos <= local_cc) {
        iVar12 = y_pos * 4;
        do {
          puVar7 = (byte *)(*(int *)((int)g_ScreenBufferArray + iVar12) + x_pos);
          for (iVar6 = x_pos; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
            if ((uint)*local_d4 != this_ptr->load_flags) {
              *puVar7 = (byte)g_DefaultTextColor;
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
      local_b4 = y_pos;
      if (y_pos <= local_cc) {
        iVar12 = y_pos * 4;
        do {
          puVar7 = (byte *)(*(int *)((int)g_ScreenBufferArray + iVar12) + x_pos);
          for (iVar6 = x_pos; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
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
    iVar12 = y_pos << 2;
    if (g_BitsPerPixel == 0x10) {
      if (color_mode == -1) {
        if (this_ptr->is_initialized == 0) {
          if (y_pos <= local_cc) {
            iVar12 = y_pos * 4;
            do {
              puVar4 = (ushort *)(*(int *)((int)g_ScreenBufferArray + iVar12) + x_pos * 2);
              for (iVar6 = x_pos; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
                if ((uint)*local_d4 != this_ptr->load_flags) {
                  *puVar4 = (short)this_ptr->palettes_display[local_c8][*local_d4];
                }
                local_d4 = local_d4 + 1;
                puVar4 = puVar4 + 1;
              }
              iVar12 = iVar12 + 4;
              local_d4 = local_d4 + local_c4;
              y_pos = y_pos + 1;
            } while (y_pos <= local_cc);
          }
        }
        else {
          local_b0 = y_pos;
          if (y_pos <= local_cc) {
            local_28 = y_pos << 2;
            do {
              puVar11 = (ushort *)(*(int *)((int)g_ScreenBufferArray + local_28) + x_pos * 2);
              for (iVar12 = x_pos; iVar12 <= local_d0; iVar12 = iVar12 + 1) {
                uVar3 = (uint)*local_d4;
                iVar6 = g_CurrentAlphaValue *
                        (uint)(byte)this_ptr->palette_data[uVar3 * 3 + local_c8 * 0x300];
                iVar8 = iVar6 >> 0x1f;
                iVar6 = (int)((iVar6 + iVar8 * -0x100) - (uint)(iVar8 << 7 < 0)) >> 8;
                if (iVar6 != 0) {
                  uVar9 = (uint)*puVar11;
                  iVar8 = 0xff - iVar6;
                  *puVar11 = (ushort)(((((this_ptr->palettes_display[local_c8][uVar3] &
                                         g_GreenMask16) >> ((byte)g_GreenBitPosition & 0x1f)) <<
                                        ((byte)g_GreenBitCount & 0x1f) & 0xff) * iVar6 +
                                       (((g_GreenMask16 & uVar9) >>
                                        ((byte)g_GreenBitPosition & 0x1f)) <<
                                        ((byte)g_GreenBitCount & 0x1f) & 0xff) * iVar8 >> 8) /
                                      (uint)g_GreenScaleFactor << ((byte)g_GreenBitPosition & 0x1f))
                             | (ushort)(((((this_ptr->palettes_display[local_c8][uVar3] &
                                           g_RedMask16) >> ((byte)g_RedBitPosition & 0x1f)) <<
                                          ((byte)g_RedBitCount & 0x1f) & 0xff) * iVar6 +
                                         (((g_RedMask16 & uVar9) >> ((byte)g_RedBitPosition & 0x1f))
                                          << ((byte)g_RedBitCount & 0x1f) & 0xff) * iVar8 >> 8) /
                                        (uint)g_RedScaleFactor << ((byte)g_RedBitPosition & 0x1f)) |
                             (ushort)(((((this_ptr->palettes_display[local_c8][uVar3] & g_BlueMask16
                                         ) >> ((byte)g_BlueBitPosition & 0x1f)) <<
                                        ((byte)g_BlueBitCount & 0x1f) & 0xff) * iVar6 +
                                       iVar8 * (((g_BlueMask16 & uVar9) >>
                                                ((byte)g_BlueBitPosition & 0x1f)) <<
                                                ((byte)g_BlueBitCount & 0x1f) & 0xff) >> 8) /
                                      (uint)g_BlueScaleFactor << ((byte)g_BlueBitPosition & 0x1f));
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
          if (y_pos <= local_cc) {
            iVar12 = y_pos * 4;
            do {
              puVar11 = (ushort *)(*(int *)((int)g_ScreenBufferArray + iVar12) + x_pos * 2);
              for (iVar6 = x_pos; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
                if ((uint)*local_d4 != this_ptr->load_flags) {
                  *puVar11 = g_ShadowColor16;
                }
                puVar11 = puVar11 + 1;
                local_d4 = local_d4 + 1;
              }
              iVar12 = iVar12 + 4;
              local_d4 = local_d4 + local_c4;
              y_pos = y_pos + 1;
            } while (y_pos <= local_cc);
          }
        }
        else {
          local_90 = y_pos;
          if (y_pos <= local_cc) {
            local_2c = y_pos << 2;
            do {
              puVar11 = (ushort *)(x_pos * 2 + *(int *)((int)g_ScreenBufferArray + local_2c));
              for (iVar12 = x_pos; iVar12 <= local_d0; iVar12 = iVar12 + 1) {
                iVar6 = g_CurrentAlphaValue *
                        (uint)(byte)this_ptr->palette_data[(uint)*local_d4 * 3 + local_c8 * 0x300];
                iVar8 = iVar6 >> 0x1f;
                iVar6 = (int)((iVar6 + iVar8 * -0x100) - (uint)(iVar8 << 7 < 0)) >> 8;
                if (iVar6 != 0) {
                  uVar3 = (uint)g_ShadowColor16;
                  uVar9 = (uint)*puVar11;
                  iVar8 = 0xff - iVar6;
                  *puVar11 = (ushort)(((((g_GreenMask16 & uVar3) >>
                                        ((byte)g_GreenBitPosition & 0x1f)) <<
                                        ((byte)g_GreenBitCount & 0x1f) & 0xff) * iVar6 +
                                       (((g_GreenMask16 & uVar9) >>
                                        ((byte)g_GreenBitPosition & 0x1f)) <<
                                        ((byte)g_GreenBitCount & 0x1f) & 0xff) * iVar8 >> 8) /
                                      (uint)g_GreenScaleFactor << ((byte)g_GreenBitPosition & 0x1f))
                             | (ushort)(((((g_RedMask16 & uVar3) >> ((byte)g_RedBitPosition & 0x1f))
                                          << ((byte)g_RedBitCount & 0x1f) & 0xff) * iVar6 +
                                         (((g_RedMask16 & uVar9) >> ((byte)g_RedBitPosition & 0x1f))
                                          << ((byte)g_RedBitCount & 0x1f) & 0xff) * iVar8 >> 8) /
                                        (uint)g_RedScaleFactor << ((byte)g_RedBitPosition & 0x1f)) |
                             (ushort)(((((g_BlueMask16 & uVar3) >> ((byte)g_BlueBitPosition & 0x1f))
                                        << ((byte)g_BlueBitCount & 0x1f) & 0xff) * iVar6 +
                                       iVar8 * (((g_BlueMask16 & uVar9) >>
                                                ((byte)g_BlueBitPosition & 0x1f)) <<
                                                ((byte)g_BlueBitCount & 0x1f) & 0xff) >> 8) /
                                      (uint)g_BlueScaleFactor << ((byte)g_BlueBitPosition & 0x1f));
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
          if (y_pos <= local_cc) {
            iVar12 = y_pos * 4;
            do {
              puVar4 = (ushort *)(x_pos * 2 + *(int *)((int)g_ScreenBufferArray + iVar12));
              for (iVar6 = x_pos; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
                if ((uint)*local_d4 != this_ptr->load_flags) {
                  *puVar4 = (ushort)g_DefaultTextColor;
                }
                local_d4 = local_d4 + 1;
                puVar4 = puVar4 + 1;
              }
              iVar12 = iVar12 + 4;
              local_d4 = local_d4 + local_c4;
              y_pos = y_pos + 1;
            } while (y_pos <= local_cc);
          }
        }
        else {
          local_74 = y_pos;
          if (y_pos <= local_cc) {
            local_30 = y_pos << 2;
            do {
              puVar11 = (ushort *)(*(int *)((int)g_ScreenBufferArray + local_30) + x_pos * 2);
              for (iVar12 = x_pos; iVar12 <= local_d0; iVar12 = iVar12 + 1) {
                iVar6 = g_CurrentAlphaValue *
                        (uint)(byte)this_ptr->palette_data[(uint)*local_d4 * 3 + local_c8 * 0x300];
                iVar8 = iVar6 >> 0x1f;
                iVar6 = (int)((iVar6 + iVar8 * -0x100) - (uint)(iVar8 << 7 < 0)) >> 8;
                if (iVar6 != 0) {
                  uVar3 = (uint)*puVar11;
                  iVar8 = 0xff - iVar6;
                  *puVar11 = (ushort)(((((g_DefaultTextColor & g_RedMask16) >>
                                        ((byte)g_RedBitPosition & 0x1f)) <<
                                        ((byte)g_RedBitCount & 0x1f) & 0xff) * iVar6 +
                                       (((uVar3 & g_RedMask16) >> ((byte)g_RedBitPosition & 0x1f))
                                        << ((byte)g_RedBitCount & 0x1f) & 0xff) * iVar8 >> 8) /
                                      (uint)g_RedScaleFactor << ((byte)g_RedBitPosition & 0x1f)) |
                             (ushort)(((((g_GreenMask16 & g_DefaultTextColor) >>
                                        ((byte)g_GreenBitPosition & 0x1f)) <<
                                        ((byte)g_GreenBitCount & 0x1f) & 0xff) * iVar6 +
                                       (((uVar3 & g_GreenMask16) >>
                                        ((byte)g_GreenBitPosition & 0x1f)) <<
                                        ((byte)g_GreenBitCount & 0x1f) & 0xff) * iVar8 >> 8) /
                                      (uint)g_GreenScaleFactor << ((byte)g_GreenBitPosition & 0x1f))
                             | (ushort)(((((g_DefaultTextColor & g_BlueMask16) >>
                                          ((byte)g_BlueBitPosition & 0x1f)) <<
                                          ((byte)g_BlueBitCount & 0x1f) & 0xff) * iVar6 +
                                         iVar8 * (((uVar3 & g_BlueMask16) >>
                                                  ((byte)g_BlueBitPosition & 0x1f)) <<
                                                  ((byte)g_BlueBitCount & 0x1f) & 0xff) >> 8) /
                                        (uint)g_BlueScaleFactor << ((byte)g_BlueBitPosition & 0x1f))
                  ;
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
          for (; y_pos <= local_cc; y_pos = y_pos + 1) {
            puVar11 = (ushort *)(x_pos * 2 + *(int *)((int)g_ScreenBufferArray + iVar12));
            for (iVar6 = x_pos; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
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
          local_58 = y_pos;
          if (y_pos <= local_cc) {
            local_34 = y_pos << 2;
            do {
              puVar11 = (ushort *)(*(int *)((int)g_ScreenBufferArray + local_34) + x_pos * 2);
              for (iVar12 = x_pos; iVar12 <= local_d0; iVar12 = iVar12 + 1) {
                iVar6 = g_CurrentAlphaValue *
                        (uint)(byte)this_ptr->palette_data[(uint)*local_d4 * 3 + local_c8 * 0x300];
                iVar8 = iVar6 >> 0x1f;
                iVar6 = (int)((iVar6 + iVar8 * -0x100) - (uint)(iVar8 << 7 < 0)) >> 8;
                if (iVar6 != 0) {
                  uVar3 = (uint)uVar1;
                  uVar9 = (uint)*puVar11;
                  iVar8 = 0xff - iVar6;
                  *puVar11 = (ushort)(((((g_GreenMask16 & uVar3) >>
                                        ((byte)g_GreenBitPosition & 0x1f)) <<
                                        ((byte)g_GreenBitCount & 0x1f) & 0xff) * iVar6 +
                                       (((g_GreenMask16 & uVar9) >>
                                        ((byte)g_GreenBitPosition & 0x1f)) <<
                                        ((byte)g_GreenBitCount & 0x1f) & 0xff) * iVar8 >> 8) /
                                      (uint)g_GreenScaleFactor << ((byte)g_GreenBitPosition & 0x1f))
                             | (ushort)(((((g_RedMask16 & uVar3) >> ((byte)g_RedBitPosition & 0x1f))
                                          << ((byte)g_RedBitCount & 0x1f) & 0xff) * iVar6 +
                                         (((g_RedMask16 & uVar9) >> ((byte)g_RedBitPosition & 0x1f))
                                          << ((byte)g_RedBitCount & 0x1f) & 0xff) * iVar8 >> 8) /
                                        (uint)g_RedScaleFactor << ((byte)g_RedBitPosition & 0x1f)) |
                             (ushort)((iVar6 * (((uVar3 & g_BlueMask16) >>
                                                ((byte)g_BlueBitPosition & 0x1f)) <<
                                                ((byte)g_BlueBitCount & 0x1f) & 0xff) +
                                       iVar8 * (((g_BlueMask16 & uVar9) >>
                                                ((byte)g_BlueBitPosition & 0x1f)) <<
                                                ((byte)g_BlueBitCount & 0x1f) & 0xff) >> 8) /
                                      (uint)g_BlueScaleFactor << ((byte)g_BlueBitPosition & 0x1f));
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
          for (; y_pos <= local_cc; y_pos = y_pos + 1) {
            puVar10 = (uint *)(*(int *)((int)g_ScreenBufferArray + iVar12) + x_pos * 4);
            for (iVar6 = x_pos; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
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
          iVar8 = y_pos;
          if (y_pos <= local_cc) {
            do {
              engine_font_cpp_drawAlphaBlendedPixels_FUN_004ce240
                        ((uint *)(*(int *)((int)g_ScreenBufferArray + iVar12) + x_pos * 4),local_d4,
                         *color_table,(local_d0 - x_pos) + 1,
                         this_ptr->palettes_display[iVar6][*local_d4]);
              iVar12 = iVar12 + 4;
              local_d4 = local_d4 + local_c4 + (local_d0 - x_pos) + 1;
              iVar8 = iVar8 + 1;
            } while (iVar8 <= local_cc);
            return color_mode_00;
          }
        }
      }
      else if (color_mode == -2) {
        if (this_ptr->is_initialized == 0) {
          for (; y_pos <= local_cc; y_pos = y_pos + 1) {
            piVar5 = (int *)(x_pos * 4 + *(int *)((int)g_ScreenBufferArray + iVar12));
            for (iVar6 = x_pos; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
              if ((uint)*local_d4 != this_ptr->load_flags) {
                *piVar5 = g_ShadowColor32;
              }
              local_d4 = local_d4 + 1;
              piVar5 = piVar5 + 1;
            }
            iVar12 = iVar12 + 4;
            local_d4 = local_d4 + local_c4;
          }
        }
        else {
          iVar6 = y_pos;
          if (y_pos <= local_cc) {
            do {
              engine_font_cpp_drawAlphaBlendedPixels_FUN_004ce240
                        ((uint *)(x_pos * 4 + *(int *)((int)g_ScreenBufferArray + iVar12)),local_d4,
                         *color_table,(local_d0 - x_pos) + 1,g_ShadowColor32);
              iVar12 = iVar12 + 4;
              iVar6 = iVar6 + 1;
              local_d4 = local_d4 + local_c4 + (local_d0 - x_pos) + 1;
            } while (iVar6 <= local_cc);
            return color_mode_00;
          }
        }
      }
      else if (color_mode == -3) {
        if (this_ptr->is_initialized == 0) {
          for (; y_pos <= local_cc; y_pos = y_pos + 1) {
            piVar5 = (int *)(x_pos * 4 + *(int *)((int)g_ScreenBufferArray + iVar12));
            for (iVar6 = x_pos; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
              if ((uint)*local_d4 != this_ptr->load_flags) {
                *piVar5 = g_DefaultTextColor;
              }
              local_d4 = local_d4 + 1;
              piVar5 = piVar5 + 1;
            }
            iVar12 = iVar12 + 4;
            local_d4 = local_d4 + local_c4;
          }
        }
        else {
          iVar6 = y_pos;
          if (y_pos <= local_cc) {
            do {
              engine_font_cpp_drawAlphaBlendedPixels_FUN_004ce240
                        ((uint *)(*(int *)((int)g_ScreenBufferArray + iVar12) + x_pos * 4),local_d4,
                         *color_table,(local_d0 - x_pos) + 1,g_DefaultTextColor);
              iVar12 = iVar12 + 4;
              iVar6 = iVar6 + 1;
              local_d4 = local_d4 + local_c4 + (local_d0 - x_pos) + 1;
            } while (iVar6 <= local_cc);
            return color_mode_00;
          }
        }
      }
      else {
        uVar3 = g_ColorTable32[color_mode];
        if (this_ptr->is_initialized == 0) {
          for (; y_pos <= local_cc; y_pos = y_pos + 1) {
            puVar10 = (uint *)(*(int *)((int)g_ScreenBufferArray + iVar12) + x_pos * 4);
            for (iVar6 = x_pos; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
              if ((uint)*local_d4 != this_ptr->load_flags) {
                *puVar10 = uVar3;
              }
              local_d4 = local_d4 + 1;
              puVar10 = puVar10 + 1;
            }
            iVar12 = iVar12 + 4;
            local_d4 = local_d4 + local_c4;
          }
        }
        else {
          iVar6 = y_pos;
          if (y_pos <= local_cc) {
            do {
              engine_font_cpp_drawAlphaBlendedPixels_FUN_004ce240
                        ((uint *)(x_pos * 4 + *(int *)((int)g_ScreenBufferArray + iVar12)),local_d4,
                         *color_table,(local_d0 - x_pos) + 1,uVar3);
              iVar12 = iVar12 + 4;
              local_d4 = local_d4 + local_c4 + (local_d0 - x_pos) + 1;
              iVar6 = iVar6 + 1;
            } while (iVar6 <= local_cc);
            return color_mode_00;
          }
        }
      }
    }
  }
  return color_mode_00;
}
