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
  BADSPACEBASE *in_ESP;
  uint (*color_table) [256];
  int iVar12;
  int in_stack_ffffff2c;
  byte *local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_8c;
  int local_70;
  int local_54;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  if ((character_code < 0) || (0xff < character_code)) {
    return 0;
  }
  if (this_ptr->char_positions[character_code] == 0) {
    return this_ptr->char_widths[character_code] + this_ptr->char_spacing;
  }
  if (color_value != -1) {
    engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0
              (this_ptr,character_code,x_pos + this_ptr->font_type,y_pos + this_ptr->font_enabled,
               color_value,-1);
  }
  local_d0 = (byte *)this_ptr->char_positions[character_code];
  color_mode = color_mode + this_ptr->char_x_advance[character_code];
  local_cc = y_pos + this_ptr->char_widths[character_code] + -1;
  local_c8 = color_mode + -1 + this_ptr->char_heights[character_code];
  local_c4 = this_ptr->char_bitmap_index[character_code];
  iVar12 = this_ptr->bitmap_widths[local_c4];
  if (this_ptr->rendering_ready == 0) {
    if (y_pos < g_ClipLeft) {
      return in_stack_ffffff2c;
    }
    if (color_mode < g_ClipTop) {
      return in_stack_ffffff2c;
    }
    if ((g_ClipRight + 1) - this_ptr->char_widths[character_code] < y_pos) {
      return in_stack_ffffff2c;
    }
    if ((g_ClipBottom + 1) - this_ptr->char_heights[character_code] < color_mode) {
      return in_stack_ffffff2c;
    }
  }
  else {
    iVar6 = engine_font_cpp_CBitFont_clipCharacter_FUN_004ccdd0
                      ((int *)&local_d0,&y_pos,&color_mode,&local_cc,&local_c8,iVar12);
    if (iVar6 != 0) {
      return (int)local_d0;
    }
  }
  iVar6 = local_c4;
  local_c0 = iVar12 - ((local_cc - y_pos) + 1);
  if ((this_ptr->field21_0x318c != 0) && (g_UseExternalRenderer != 0)) {
    engine_font_cpp_CBitFont_render3DCharacter_FUN_004ce2d0
              (this_ptr,character_code,y_pos,color_mode,local_cc,local_c8,color_value,
               in_stack_ffffff2c);
    return (int)local_d0;
  }
  if (g_BitsPerPixel == 8) {
    if (color_value == -1) {
      local_bc = color_mode;
      if (color_mode <= local_c8) {
        iVar12 = color_mode * 4;
        do {
          pbVar2 = (byte *)(*(int *)((int)g_ScreenBufferArray + iVar12) + y_pos);
          for (iVar6 = y_pos; iVar6 <= local_cc; iVar6 = iVar6 + 1) {
            if ((uint)*local_d0 != this_ptr->load_flags) {
              *pbVar2 = *local_d0;
            }
            pbVar2 = pbVar2 + 1;
            local_d0 = local_d0 + 1;
          }
          local_bc = local_bc + 1;
          iVar12 = iVar12 + 4;
          local_d0 = local_d0 + local_c0;
        } while (local_bc <= local_c8);
      }
    }
    else if (color_value == -2) {
      local_b8 = color_mode;
      if (color_mode <= local_c8) {
        iVar12 = color_mode * 4;
        do {
          puVar7 = (byte *)(*(int *)((int)g_ScreenBufferArray + iVar12) + y_pos);
          for (iVar6 = y_pos; iVar6 <= local_cc; iVar6 = iVar6 + 1) {
            if ((uint)*local_d0 != this_ptr->load_flags) {
              *puVar7 = DAT_02d7b410;
            }
            puVar7 = puVar7 + 1;
            local_d0 = local_d0 + 1;
          }
          local_b8 = local_b8 + 1;
          iVar12 = iVar12 + 4;
          local_d0 = local_d0 + local_c0;
        } while (local_b8 <= local_c8);
      }
    }
    else if (color_value == -3) {
      local_b4 = color_mode;
      if (color_mode <= local_c8) {
        iVar12 = color_mode * 4;
        do {
          puVar7 = (byte *)(*(int *)((int)g_ScreenBufferArray + iVar12) + y_pos);
          for (iVar6 = y_pos; iVar6 <= local_cc; iVar6 = iVar6 + 1) {
            if ((uint)*local_d0 != this_ptr->load_flags) {
              *puVar7 = (byte)g_DefaultTextColor;
            }
            puVar7 = puVar7 + 1;
            local_d0 = local_d0 + 1;
          }
          local_b4 = local_b4 + 1;
          iVar12 = iVar12 + 4;
          local_d0 = local_d0 + local_c0;
        } while (local_b4 <= local_c8);
      }
    }
    else {
      local_b0 = color_mode;
      if (color_mode <= local_c8) {
        iVar12 = color_mode * 4;
        do {
          puVar7 = (byte *)(*(int *)((int)g_ScreenBufferArray + iVar12) + y_pos);
          for (iVar6 = y_pos; iVar6 <= local_cc; iVar6 = iVar6 + 1) {
            if ((uint)*local_d0 != this_ptr->load_flags) {
              *puVar7 = (byte)color_value;
            }
            puVar7 = puVar7 + 1;
            local_d0 = local_d0 + 1;
          }
          local_b0 = local_b0 + 1;
          iVar12 = iVar12 + 4;
          local_d0 = local_d0 + local_c0;
        } while (local_b0 <= local_c8);
      }
    }
  }
  else {
    iVar12 = color_mode << 2;
    if (g_BitsPerPixel == 0x10) {
      if (color_value == -1) {
        if (this_ptr->is_initialized == 0) {
          if (color_mode <= local_c8) {
            iVar12 = color_mode * 4;
            do {
              puVar4 = (ushort *)(*(int *)((int)g_ScreenBufferArray + iVar12) + y_pos * 2);
              for (iVar6 = y_pos; iVar6 <= local_cc; iVar6 = iVar6 + 1) {
                if ((uint)*local_d0 != this_ptr->load_flags) {
                  *puVar4 = (short)this_ptr->palettes_display[local_c4][*local_d0];
                }
                local_d0 = local_d0 + 1;
                puVar4 = puVar4 + 1;
              }
              iVar12 = iVar12 + 4;
              local_d0 = local_d0 + local_c0;
              color_mode = color_mode + 1;
            } while (color_mode <= local_c8);
          }
        }
        else {
          local_ac = color_mode;
          if (color_mode <= local_c8) {
            local_24 = color_mode << 2;
            do {
              puVar11 = (ushort *)(*(int *)((int)g_ScreenBufferArray + local_24) + y_pos * 2);
              for (iVar12 = y_pos; iVar12 <= local_cc; iVar12 = iVar12 + 1) {
                uVar3 = (uint)*local_d0;
                iVar6 = g_CurrentAlphaValue *
                        (uint)(byte)this_ptr->palette_data[uVar3 * 3 + local_c4 * 0x300];
                iVar8 = iVar6 >> 0x1f;
                iVar6 = (int)((iVar6 + iVar8 * -0x100) - (uint)(iVar8 << 7 < 0)) >> 8;
                if (iVar6 != 0) {
                  uVar9 = (uint)*puVar11;
                  iVar8 = 0xff - iVar6;
                  *puVar11 = (ushort)(((((this_ptr->palettes_display[local_c4][uVar3] &
                                         g_GreenMask16) >> ((byte)g_GreenBitPosition & 0x1f)) <<
                                        ((byte)g_GreenBitCount & 0x1f) & 0xff) * iVar6 +
                                       (((g_GreenMask16 & uVar9) >>
                                        ((byte)g_GreenBitPosition & 0x1f)) <<
                                        ((byte)g_GreenBitCount & 0x1f) & 0xff) * iVar8 >> 8) /
                                      (uint)g_GreenScaleFactor << ((byte)g_GreenBitPosition & 0x1f))
                             | (ushort)(((((this_ptr->palettes_display[local_c4][uVar3] &
                                           g_RedMask16) >> ((byte)g_RedBitPosition & 0x1f)) <<
                                          ((byte)g_RedBitCount & 0x1f) & 0xff) * iVar6 +
                                         (((g_RedMask16 & uVar9) >> ((byte)g_RedBitPosition & 0x1f))
                                          << ((byte)g_RedBitCount & 0x1f) & 0xff) * iVar8 >> 8) /
                                        (uint)g_RedScaleFactor << ((byte)g_RedBitPosition & 0x1f)) |
                             (ushort)(((((this_ptr->palettes_display[local_c4][uVar3] & g_BlueMask16
                                         ) >> ((byte)g_BlueBitPosition & 0x1f)) <<
                                        ((byte)g_BlueBitCount & 0x1f) & 0xff) * iVar6 +
                                       iVar8 * (((g_BlueMask16 & uVar9) >>
                                                ((byte)g_BlueBitPosition & 0x1f)) <<
                                                ((byte)g_BlueBitCount & 0x1f) & 0xff) >> 8) /
                                      (uint)g_BlueScaleFactor << ((byte)g_BlueBitPosition & 0x1f));
                }
                puVar11 = puVar11 + 1;
                local_d0 = local_d0 + 1;
              }
              local_24 = local_24 + 4;
              local_ac = local_ac + 1;
              local_d0 = local_d0 + local_c0;
            } while (local_ac <= local_c8);
          }
        }
      }
      else if (color_value == -2) {
        if (this_ptr->is_initialized == 0) {
          if (color_mode <= local_c8) {
            iVar12 = color_mode * 4;
            do {
              puVar11 = (ushort *)(*(int *)((int)g_ScreenBufferArray + iVar12) + y_pos * 2);
              for (iVar6 = y_pos; iVar6 <= local_cc; iVar6 = iVar6 + 1) {
                if ((uint)*local_d0 != this_ptr->load_flags) {
                  *puVar11 = g_ShadowColor16;
                }
                puVar11 = puVar11 + 1;
                local_d0 = local_d0 + 1;
              }
              iVar12 = iVar12 + 4;
              local_d0 = local_d0 + local_c0;
              color_mode = color_mode + 1;
            } while (color_mode <= local_c8);
          }
        }
        else {
          local_8c = color_mode;
          if (color_mode <= local_c8) {
            local_28 = color_mode << 2;
            do {
              puVar11 = (ushort *)(y_pos * 2 + *(int *)((int)g_ScreenBufferArray + local_28));
              for (iVar12 = y_pos; iVar12 <= local_cc; iVar12 = iVar12 + 1) {
                iVar6 = g_CurrentAlphaValue *
                        (uint)(byte)this_ptr->palette_data[(uint)*local_d0 * 3 + local_c4 * 0x300];
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
                local_d0 = local_d0 + 1;
              }
              local_28 = local_28 + 4;
              local_8c = local_8c + 1;
              local_d0 = local_d0 + local_c0;
            } while (local_8c <= local_c8);
          }
        }
      }
      else if (color_value == -3) {
        if (this_ptr->is_initialized == 0) {
          if (color_mode <= local_c8) {
            iVar12 = color_mode * 4;
            do {
              puVar4 = (ushort *)(y_pos * 2 + *(int *)((int)g_ScreenBufferArray + iVar12));
              for (iVar6 = y_pos; iVar6 <= local_cc; iVar6 = iVar6 + 1) {
                if ((uint)*local_d0 != this_ptr->load_flags) {
                  *puVar4 = (ushort)g_DefaultTextColor;
                }
                local_d0 = local_d0 + 1;
                puVar4 = puVar4 + 1;
              }
              iVar12 = iVar12 + 4;
              local_d0 = local_d0 + local_c0;
              color_mode = color_mode + 1;
            } while (color_mode <= local_c8);
          }
        }
        else {
          local_70 = color_mode;
          if (color_mode <= local_c8) {
            local_2c = color_mode << 2;
            do {
              puVar11 = (ushort *)(*(int *)((int)g_ScreenBufferArray + local_2c) + y_pos * 2);
              for (iVar12 = y_pos; iVar12 <= local_cc; iVar12 = iVar12 + 1) {
                iVar6 = g_CurrentAlphaValue *
                        (uint)(byte)this_ptr->palette_data[(uint)*local_d0 * 3 + local_c4 * 0x300];
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
                local_d0 = local_d0 + 1;
              }
              local_2c = local_2c + 4;
              local_70 = local_70 + 1;
              local_d0 = local_d0 + local_c0;
            } while (local_70 <= local_c8);
          }
        }
      }
      else {
        uVar1 = g_ColorTable16[color_value];
        if (this_ptr->is_initialized == 0) {
          for (; color_mode <= local_c8; color_mode = color_mode + 1) {
            puVar11 = (ushort *)(y_pos * 2 + *(int *)((int)g_ScreenBufferArray + iVar12));
            for (iVar6 = y_pos; iVar6 <= local_cc; iVar6 = iVar6 + 1) {
              if ((uint)*local_d0 != this_ptr->load_flags) {
                *puVar11 = uVar1;
              }
              local_d0 = local_d0 + 1;
              puVar11 = puVar11 + 1;
            }
            iVar12 = iVar12 + 4;
            local_d0 = local_d0 + local_c0;
          }
        }
        else {
          local_54 = color_mode;
          if (color_mode <= local_c8) {
            local_30 = color_mode << 2;
            do {
              puVar11 = (ushort *)(*(int *)((int)g_ScreenBufferArray + local_30) + y_pos * 2);
              for (iVar12 = y_pos; iVar12 <= local_cc; iVar12 = iVar12 + 1) {
                iVar6 = g_CurrentAlphaValue *
                        (uint)(byte)this_ptr->palette_data[(uint)*local_d0 * 3 + local_c4 * 0x300];
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
                local_d0 = local_d0 + 1;
              }
              local_30 = local_30 + 4;
              local_54 = local_54 + 1;
              local_d0 = local_d0 + local_c0;
            } while (local_54 <= local_c8);
          }
        }
      }
    }
    else if (g_BitsPerPixel == 0x20) {
      color_table = this_ptr->palettes_display + local_c4;
      if (color_value == -1) {
        if (this_ptr->is_initialized == 0) {
          for (; color_mode <= local_c8; color_mode = color_mode + 1) {
            puVar10 = (uint *)(*(int *)((int)g_ScreenBufferArray + iVar12) + y_pos * 4);
            for (iVar6 = y_pos; iVar6 <= local_cc; iVar6 = iVar6 + 1) {
              if ((uint)*local_d0 != this_ptr->load_flags) {
                *puVar10 = this_ptr->palettes_display[local_c4][*local_d0];
              }
              local_d0 = local_d0 + 1;
              puVar10 = puVar10 + 1;
            }
            iVar12 = iVar12 + 4;
            local_d0 = local_d0 + local_c0;
          }
        }
        else {
          iVar8 = color_mode;
          if (color_mode <= local_c8) {
            do {
              engine_font_cpp_drawAlphaBlendedPixels_FUN_004ce240
                        ((uint *)(*(int *)((int)g_ScreenBufferArray + iVar12) + y_pos * 4),local_d0,
                         *color_table,(local_cc - y_pos) + 1,
                         this_ptr->palettes_display[iVar6][*local_d0]);
              iVar12 = iVar12 + 4;
              local_cc = local_cc + (local_c8 - color_mode) + 1 + local_bc;
              iVar8 = iVar8 + 1;
            } while (iVar8 <= local_c4);
            return in_stack_ffffff2c;
          }
        }
      }
      else if (color_value == -2) {
        if (this_ptr->is_initialized == 0) {
          for (; color_mode <= local_c8; color_mode = color_mode + 1) {
            piVar5 = (int *)(y_pos * 4 + *(int *)((int)g_ScreenBufferArray + iVar12));
            for (iVar6 = y_pos; iVar6 <= local_cc; iVar6 = iVar6 + 1) {
              if ((uint)*local_d0 != this_ptr->load_flags) {
                *piVar5 = g_ShadowColor32;
              }
              local_d0 = local_d0 + 1;
              piVar5 = piVar5 + 1;
            }
            iVar12 = iVar12 + 4;
            local_d0 = local_d0 + local_c0;
          }
        }
        else {
          iVar6 = color_mode;
          if (color_mode <= local_c8) {
            do {
              engine_font_cpp_drawAlphaBlendedPixels_FUN_004ce240
                        ((uint *)(y_pos * 4 + *(int *)((int)g_ScreenBufferArray + iVar12)),local_d0,
                         *color_table,(local_cc - y_pos) + 1,g_ShadowColor32);
              iVar12 = iVar12 + 4;
              iVar6 = iVar6 + 1;
              local_cc = local_cc + (local_c8 - color_mode) + 1 + local_bc;
            } while (iVar6 <= local_c4);
            return in_stack_ffffff2c;
          }
        }
      }
      else if (color_value == -3) {
        if (this_ptr->is_initialized == 0) {
          for (; color_mode <= local_c8; color_mode = color_mode + 1) {
            piVar5 = (int *)(y_pos * 4 + *(int *)((int)g_ScreenBufferArray + iVar12));
            for (iVar6 = y_pos; iVar6 <= local_cc; iVar6 = iVar6 + 1) {
              if ((uint)*local_d0 != this_ptr->load_flags) {
                *piVar5 = g_DefaultTextColor;
              }
              local_d0 = local_d0 + 1;
              piVar5 = piVar5 + 1;
            }
            iVar12 = iVar12 + 4;
            local_d0 = local_d0 + local_c0;
          }
        }
        else {
          iVar6 = color_mode;
          if (color_mode <= local_c8) {
            do {
              engine_font_cpp_drawAlphaBlendedPixels_FUN_004ce240
                        ((uint *)(*(int *)((int)g_ScreenBufferArray + iVar12) + y_pos * 4),local_d0,
                         *color_table,(local_cc - y_pos) + 1,g_DefaultTextColor);
              iVar12 = iVar12 + 4;
              iVar6 = iVar6 + 1;
              local_cc = local_cc + (local_c8 - color_mode) + 1 + local_bc;
            } while (iVar6 <= local_c4);
            return in_stack_ffffff2c;
          }
        }
      }
      else {
        uVar3 = g_ColorTable32[color_value];
        if (this_ptr->is_initialized == 0) {
          for (; color_mode <= local_c8; color_mode = color_mode + 1) {
            puVar10 = (uint *)(*(int *)((int)g_ScreenBufferArray + iVar12) + y_pos * 4);
            for (iVar6 = y_pos; iVar6 <= local_cc; iVar6 = iVar6 + 1) {
              if ((uint)*local_d0 != this_ptr->load_flags) {
                *puVar10 = uVar3;
              }
              local_d0 = local_d0 + 1;
              puVar10 = puVar10 + 1;
            }
            iVar12 = iVar12 + 4;
            local_d0 = local_d0 + local_c0;
          }
        }
        else {
          iVar6 = color_mode;
          if (color_mode <= local_c8) {
            do {
              engine_font_cpp_drawAlphaBlendedPixels_FUN_004ce240
                        ((uint *)(y_pos * 4 + *(int *)((int)g_ScreenBufferArray + iVar12)),local_d0,
                         *color_table,(local_cc - y_pos) + 1,uVar3);
              iVar12 = iVar12 + 4;
              local_cc = local_cc + (local_c8 - color_mode) + 1 + local_bc;
              iVar6 = iVar6 + 1;
            } while (iVar6 <= local_c4);
            return in_stack_ffffff2c;
          }
        }
      }
    }
  }
  return in_stack_ffffff2c;
}
