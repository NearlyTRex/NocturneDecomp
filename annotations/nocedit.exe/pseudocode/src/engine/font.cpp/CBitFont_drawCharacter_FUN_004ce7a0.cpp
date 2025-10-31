// Name: engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0
// Address: 004ce7a0
// Address Range: [[004ce7a0, 004cfe79]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0(CBitFont * this_ptr, int character_code, int x_pos, int y_pos, int color_mode, int color_value)
// Cross-references:
//   core_script.cpp_FUN_005664d0 (005664d0) at 00566616 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 (004cda80) at 004cdbca [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_showExtendedFontTest_FUN_004d0850 (004d0850) at 004d08d0 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_showFontTest_FUN_004d04b0 (004d04b0) at 004d050d [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   int g_CurrentAlphaValue = 0xff
//   uint g_RedMask16 = 0xf800
//   uint g_GreenMask16 = 0x7e0
//   uint g_BlueMask16 = 0x1f
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   ushort[256] g_ColorTable16
//   uint[256] g_ColorTable32
//   int g_RedBitPosition
//   int g_RedScaleFactor
//   int g_RedBitCount
//   int g_GreenBitPosition
//   int g_GreenScaleFactor
//   int g_GreenBitCount
//   int g_BlueBitPosition
//   int g_BlueScaleFactor
//   int g_BlueBitCount
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
//   int g_UseExternalRenderer
//   undefined1 DAT_02d7b410
//   ushort g_ShadowColor16
//   int g_ShadowColor32
//   int g_DefaultTextColor
// Function calls:
//   engine_font.cpp_CBitFont_clipCharacter_FUN_004ccdd0
//   engine_font.cpp_CBitFont_render3DCharacter_FUN_004ce2d0
//   engine_font.cpp_drawAlphaBlendedPixels_FUN_004ce240

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0
          (CBitFont *this_ptr,int character_code,int x_pos,int y_pos,int color_mode,int color_value)

{
  ushort uVar1;
  byte *pbVar2;
  uint uVar3;
  undefined2 *puVar4;
  int *piVar5;
  int iVar6;
  undefined1 *puVar7;
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
          puVar7 = (undefined1 *)(*(int *)((int)g_ScreenBufferArray + iVar12) + y_pos);
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
          puVar7 = (undefined1 *)(*(int *)((int)g_ScreenBufferArray + iVar12) + y_pos);
          for (iVar6 = y_pos; iVar6 <= local_cc; iVar6 = iVar6 + 1) {
            if ((uint)*local_d0 != this_ptr->load_flags) {
              *puVar7 = (undefined1)g_DefaultTextColor;
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
          puVar7 = (undefined1 *)(*(int *)((int)g_ScreenBufferArray + iVar12) + y_pos);
          for (iVar6 = y_pos; iVar6 <= local_cc; iVar6 = iVar6 + 1) {
            if ((uint)*local_d0 != this_ptr->load_flags) {
              *puVar7 = (undefined1)color_value;
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
              puVar4 = (undefined2 *)(*(int *)((int)g_ScreenBufferArray + iVar12) + y_pos * 2);
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
              puVar4 = (undefined2 *)(y_pos * 2 + *(int *)((int)g_ScreenBufferArray + iVar12));
              for (iVar6 = y_pos; iVar6 <= local_cc; iVar6 = iVar6 + 1) {
                if ((uint)*local_d0 != this_ptr->load_flags) {
                  *puVar4 = (undefined2)g_DefaultTextColor;
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


// Assembly code:
// 004ce7a0: PUSH EBX
//   Label: engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0
// 004ce7a1: PUSH ESI
// 004ce7a2: PUSH EDI
// 004ce7a3: PUSH EBP
// 004ce7a4: SUB ESP,0xc8
// 004ce7aa: MOV EBX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[0x4] (READ)
// 004ce7b1: MOV EDI,dword ptr [ESP + 0xe0]
//   XREF to: Stack[0x8] (READ)
// 004ce7b8: MOV ECX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[0x18] (READ)
// 004ce7bf: TEST EDI,EDI
// 004ce7c1: JL 0x004ce9b0
//   XREF to: 004ce9b0 (CONDITIONAL_JUMP)
// 004ce7c7: CMP EDI,0x100
// 004ce7cd: JGE 0x004ce9b0
//   XREF to: 004ce9b0 (CONDITIONAL_JUMP)
// 004ce7d3: MOV EAX,dword ptr [EBX + EDI*0x4 + 0x2568]
// 004ce7da: ADD EAX,dword ptr [EBX + 0x3174]
// 004ce7e0: MOV ESI,dword ptr [EBX + EDI*0x4 + 0x1d68]
// 004ce7e7: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0xd8] (DATA)
// 004ce7ea: TEST ESI,ESI
// 004ce7ec: JZ 0x004ce9bf
//   XREF to: 004ce9bf (CONDITIONAL_JUMP)
// 004ce7f2: CMP ECX,-0x1
// 004ce7f5: JNZ 0x004ce9ce
//   XREF to: 004ce9ce (CONDITIONAL_JUMP)
// 004ce7fb: LEA EDX,[EDI*0x4 + 0x0]
//   Label: LAB_004ce7fb
// 004ce802: ADD EDX,EBX
// 004ce804: MOV EAX,dword ptr [EDX + 0x1d68]
// 004ce80a: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 004ce80e: MOV ECX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[0x10] (READ)
// 004ce815: MOV EAX,dword ptr [EDX + 0x2d68]
// 004ce81b: ADD ECX,EAX
// 004ce81d: MOV dword ptr [ESP + 0xe8],ECX
//   XREF to: Stack[0x10] (WRITE)
// 004ce824: MOV EAX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0xc] (READ)
// 004ce82b: ADD EAX,dword ptr [EDX + 0x2568]
// 004ce831: DEC EAX
// 004ce832: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0xd0] (WRITE)
// 004ce836: MOV EBP,dword ptr [EDX + 0x2968]
// 004ce83c: LEA EAX,[ECX + EBP*0x1 + -0x1]
// 004ce840: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0xcc] (WRITE)
// 004ce844: MOV EAX,dword ptr [EDX + 0x2168]
// 004ce84a: MOV ESI,EAX
// 004ce84c: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0xc8] (WRITE)
// 004ce850: MOV EAX,dword ptr [EBX + 0x3184]
// 004ce856: MOV ESI,dword ptr [EBX + ESI*0x4 + 0x154]
// 004ce85d: TEST EAX,EAX
// 004ce85f: JNZ 0x004cea00
//   XREF to: 004cea00 (CONDITIONAL_JUMP)
// 004ce865: MOV EAX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0xc] (READ)
// 004ce86c: MOV EBP,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004ce872: MOV ECX,dword ptr [EDX + 0x2568]
// 004ce878: MOV EDX,dword ptr [EDX + 0x2968]
// 004ce87e: CMP EAX,EBP
// 004ce880: JL 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004ce886: MOV EAX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[0x10] (READ)
// 004ce88d: CMP EAX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004ce893: JL 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004ce899: MOV EAX,[0x02d02560]
//   XREF to: 02d02560 (READ)
// 004ce89e: INC EAX
// 004ce89f: SUB EAX,ECX
// 004ce8a1: CMP EAX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0xc] (READ)
// 004ce8a8: JL 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004ce8ae: MOV EAX,[0x02d02564]
//   XREF to: 02d02564 (READ)
// 004ce8b3: INC EAX
// 004ce8b4: MOV EBP,dword ptr [ESP + 0xe8]
//   XREF to: Stack[0x10] (READ)
// 004ce8bb: SUB EAX,EDX
// 004ce8bd: CMP EAX,EBP
// 004ce8bf: JL 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004ce8c5: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_004ce8c5
//   XREF to: Stack[-0xd0] (READ)
// 004ce8c9: SUB EAX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0xc] (READ)
// 004ce8d0: INC EAX
// 004ce8d1: SUB ESI,EAX
// 004ce8d3: MOV ECX,dword ptr [EBX + 0x318c]
// 004ce8d9: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0xc4] (WRITE)
// 004ce8dd: TEST ECX,ECX
// 004ce8df: JZ 0x004ce8ee
//   XREF to: 004ce8ee (CONDITIONAL_JUMP)
// 004ce8e1: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 004ce8e8: JNZ 0x004cea40
//   XREF to: 004cea40 (CONDITIONAL_JUMP)
// 004ce8ee: MOV EDI,dword ptr [0x0067939c]
//   Label: LAB_004ce8ee
//   XREF to: 0067939c (READ)
// 004ce8f4: CMP EDI,0x8
// 004ce8f7: JNZ 0x004cec40
//   XREF to: 004cec40 (CONDITIONAL_JUMP)
// 004ce8fd: MOV ECX,dword ptr [ESP + 0xec]
//   XREF to: Stack[0x14] (READ)
// 004ce904: CMP ECX,-0x1
// 004ce907: JNZ 0x004cea7c
//   XREF to: 004cea7c (CONDITIONAL_JUMP)
// 004ce90d: MOV EAX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[0x10] (READ)
// 004ce914: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xcc] (READ)
// 004ce918: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0xc0] (WRITE)
// 004ce91c: CMP EAX,ESI
// 004ce91e: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004ce924: LEA ESI,[EAX*0x4 + 0x0]
// 004ce92b: MOV EDI,dword ptr [ESP + 0xe4]
//   Label: LAB_004ce92b
//   XREF to: Stack[0xc] (READ)
// 004ce932: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004ce936: MOV ECX,dword ptr [ESI + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 004ce93c: MOV EDX,EDI
// 004ce93e: ADD ECX,EDI
// 004ce940: CMP EDI,EBP
// 004ce942: JG 0x004ce972
//   XREF to: 004ce972 (CONDITIONAL_JUMP)
// 004ce944: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004ce944
//   XREF to: Stack[-0xd4] (READ)
// 004ce948: MOV AL,byte ptr [EAX]
// 004ce94a: AND EAX,0xff
// 004ce94f: CMP EAX,dword ptr [EBX + 0x3188]
// 004ce955: JZ 0x004ce95f
//   XREF to: 004ce95f (CONDITIONAL_JUMP)
// 004ce957: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xd4] (READ)
// 004ce95b: MOV AL,byte ptr [EAX]
// 004ce95d: MOV byte ptr [ECX],AL
// 004ce95f: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004ce95f
//   XREF to: Stack[-0xd4] (READ)
// 004ce963: MOV EDI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004ce967: INC ECX
// 004ce968: INC EAX
// 004ce969: INC EDX
// 004ce96a: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 004ce96e: CMP EDX,EDI
// 004ce970: JLE 0x004ce944
//   XREF to: 004ce944 (CONDITIONAL_JUMP)
// 004ce972: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_004ce972
//   XREF to: Stack[-0xc0] (READ)
// 004ce976: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xd4] (READ)
// 004ce97a: INC EAX
// 004ce97b: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xcc] (READ)
// 004ce97f: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0xc0] (WRITE)
// 004ce983: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0xc4] (READ)
// 004ce987: ADD ESI,0x4
// 004ce98a: ADD EDX,EAX
// 004ce98c: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0xc0] (READ)
// 004ce990: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0xd4] (WRITE)
// 004ce994: CMP EAX,ECX
// 004ce996: JLE 0x004ce92b
//   XREF to: 004ce92b (CONDITIONAL_JUMP)
// 004ce998: LEA EAX,[EAX]
// 004ce99e: MOV EDX,EDX
// 004ce9a0: MOV EBX,dword ptr [ESP]
//   Label: LAB_004ce9a0
//   XREF to: Stack[-0xd8] (DATA)
// 004ce9a3: MOV EAX,EBX
// 004ce9a5: ADD ESP,0xc8
// 004ce9ab: POP EBP
// 004ce9ac: POP EDI
// 004ce9ad: POP ESI
// 004ce9ae: POP EBX
// 004ce9af: RET
// 004ce9b0: XOR EBX,EBX
//   Label: LAB_004ce9b0
// 004ce9b2: MOV EAX,EBX
// 004ce9b4: ADD ESP,0xc8
// 004ce9ba: POP EBP
// 004ce9bb: POP EDI
// 004ce9bc: POP ESI
// 004ce9bd: POP EBX
// 004ce9be: RET
// 004ce9bf: MOV EBX,EAX
//   Label: LAB_004ce9bf
// 004ce9c1: MOV EAX,EBX
// 004ce9c3: ADD ESP,0xc8
// 004ce9c9: POP EBP
// 004ce9ca: POP EDI
// 004ce9cb: POP ESI
// 004ce9cc: POP EBX
// 004ce9cd: RET
// 004ce9ce: PUSH -0x1
//   Label: LAB_004ce9ce
// 004ce9d0: MOV EAX,dword ptr [ESP + 0xec]
//   XREF to: Stack[0x10] (READ)
// 004ce9d7: MOV EBP,dword ptr [EBX + 0x3180]
// 004ce9dd: PUSH ECX
// 004ce9de: ADD EAX,EBP
// 004ce9e0: MOV EDX,dword ptr [EBX + 0x317c]
// 004ce9e6: PUSH EAX
// 004ce9e7: MOV EAX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[0xc] (READ)
// 004ce9ee: ADD EAX,EDX
// 004ce9f0: PUSH EAX
// 004ce9f1: PUSH EDI
// 004ce9f2: PUSH EBX
// 004ce9f3: CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0
//   XREF to: 004ce7a0 (UNCONDITIONAL_CALL)
// 004ce9f8: ADD ESP,0x18
// 004ce9fb: JMP 0x004ce7fb
//   XREF to: 004ce7fb (UNCONDITIONAL_JUMP)
// 004cea00: PUSH ESI
//   Label: LAB_004cea00
// 004cea01: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0xcc] (DATA)
// 004cea05: PUSH EAX
// 004cea06: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0xd0] (DATA)
// 004cea0a: PUSH EAX
// 004cea0b: LEA EAX,[ESP + 0xf4]
//   XREF to: Stack[0x10] (DATA)
// 004cea12: PUSH EAX
// 004cea13: LEA EAX,[ESP + 0xf4]
//   XREF to: Stack[0xc] (DATA)
// 004cea1a: PUSH EAX
// 004cea1b: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0xd4] (DATA)
// 004cea1f: PUSH EAX
// 004cea20: CALL engine_font.cpp_CBitFont_clipCharacter_FUN_004ccdd0
//   XREF to: 004ccdd0 (UNCONDITIONAL_CALL)
// 004cea25: ADD ESP,0x18
// 004cea28: TEST EAX,EAX
// 004cea2a: JZ 0x004ce8c5
//   XREF to: 004ce8c5 (CONDITIONAL_JUMP)
// 004cea30: MOV EBX,dword ptr [ESP]
//   XREF to: Stack[-0xd8] (DATA)
// 004cea33: MOV EAX,EBX
// 004cea35: ADD ESP,0xc8
// 004cea3b: POP EBP
// 004cea3c: POP EDI
// 004cea3d: POP ESI
// 004cea3e: POP EBX
// 004cea3f: RET
// 004cea40: MOV EBP,dword ptr [ESP + 0xec]
//   Label: LAB_004cea40
//   XREF to: Stack[0x14] (READ)
// 004cea47: PUSH EBP
// 004cea48: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0xcc] (READ)
// 004cea4c: PUSH EAX
// 004cea4d: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0xd0] (READ)
// 004cea51: PUSH EDX
// 004cea52: MOV ECX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[0x10] (READ)
// 004cea59: PUSH ECX
// 004cea5a: MOV ESI,dword ptr [ESP + 0xf4]
//   XREF to: Stack[0xc] (READ)
// 004cea61: PUSH ESI
// 004cea62: PUSH EDI
// 004cea63: PUSH EBX
// 004cea64: CALL engine_font.cpp_CBitFont_render3DCharacter_FUN_004ce2d0
//   XREF to: 004ce2d0 (UNCONDITIONAL_CALL)
// 004cea69: ADD ESP,0x1c
// 004cea6c: MOV EBX,dword ptr [ESP]
//   XREF to: Stack[-0xd8] (DATA)
// 004cea6f: MOV EAX,EBX
// 004cea71: ADD ESP,0xc8
// 004cea77: POP EBP
// 004cea78: POP EDI
// 004cea79: POP ESI
// 004cea7a: POP EBX
// 004cea7b: RET
// 004cea7c: CMP ECX,-0x2
//   Label: LAB_004cea7c
// 004cea7f: JNZ 0x004ceb15
//   XREF to: 004ceb15 (CONDITIONAL_JUMP)
// 004cea85: MOV EAX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[0x10] (READ)
// 004cea8c: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xcc] (READ)
// 004cea90: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0xbc] (WRITE)
// 004cea94: CMP EAX,ECX
// 004cea96: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004cea9c: LEA ESI,[EAX*0x4 + 0x0]
// 004ceaa3: MOV EDI,dword ptr [ESP + 0xe4]
//   Label: LAB_004ceaa3
//   XREF to: Stack[0xc] (READ)
// 004ceaaa: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004ceaae: MOV EDX,dword ptr [ESI + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 004ceab4: MOV ECX,EDI
// 004ceab6: ADD EDX,EDI
// 004ceab8: CMP EDI,EBP
// 004ceaba: JG 0x004ceae9
//   XREF to: 004ceae9 (CONDITIONAL_JUMP)
// 004ceabc: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004ceabc
//   XREF to: Stack[-0xd4] (READ)
// 004ceac0: MOV AL,byte ptr [EAX]
// 004ceac2: AND EAX,0xff
// 004ceac7: CMP EAX,dword ptr [EBX + 0x3188]
// 004ceacd: JZ 0x004cead6
//   XREF to: 004cead6 (CONDITIONAL_JUMP)
// 004ceacf: MOV AL,[0x02d7b410]
//   XREF to: 02d7b410 (READ)
// 004cead4: MOV byte ptr [EDX],AL
// 004cead6: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004cead6
//   XREF to: Stack[-0xd4] (READ)
// 004ceada: MOV EDI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004ceade: INC EDX
// 004ceadf: INC EAX
// 004ceae0: INC ECX
// 004ceae1: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 004ceae5: CMP ECX,EDI
// 004ceae7: JLE 0x004ceabc
//   XREF to: 004ceabc (CONDITIONAL_JUMP)
// 004ceae9: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_004ceae9
//   XREF to: Stack[-0xbc] (READ)
// 004ceaed: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xd4] (READ)
// 004ceaf1: INC EAX
// 004ceaf2: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xcc] (READ)
// 004ceaf6: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0xbc] (WRITE)
// 004ceafa: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0xc4] (READ)
// 004ceafe: ADD ESI,0x4
// 004ceb01: ADD EDX,EAX
// 004ceb03: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0xbc] (READ)
// 004ceb07: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0xd4] (WRITE)
// 004ceb0b: CMP EAX,ECX
// 004ceb0d: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004ceb13: JMP 0x004ceaa3
//   XREF to: 004ceaa3 (UNCONDITIONAL_JUMP)
// 004ceb15: CMP ECX,-0x3
//   Label: LAB_004ceb15
// 004ceb18: JNZ 0x004cebae
//   XREF to: 004cebae (CONDITIONAL_JUMP)
// 004ceb1e: MOV EAX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[0x10] (READ)
// 004ceb25: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xcc] (READ)
// 004ceb29: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 004ceb2d: CMP EAX,EDX
// 004ceb2f: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004ceb35: LEA ESI,[EAX*0x4 + 0x0]
// 004ceb3c: MOV EDI,dword ptr [ESP + 0xe4]
//   Label: LAB_004ceb3c
//   XREF to: Stack[0xc] (READ)
// 004ceb43: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004ceb47: MOV EDX,dword ptr [ESI + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 004ceb4d: MOV ECX,EDI
// 004ceb4f: ADD EDX,EDI
// 004ceb51: CMP EDI,EBP
// 004ceb53: JG 0x004ceb82
//   XREF to: 004ceb82 (CONDITIONAL_JUMP)
// 004ceb55: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004ceb55
//   XREF to: Stack[-0xd4] (READ)
// 004ceb59: MOV AL,byte ptr [EAX]
// 004ceb5b: AND EAX,0xff
// 004ceb60: CMP EAX,dword ptr [EBX + 0x3188]
// 004ceb66: JZ 0x004ceb6f
//   XREF to: 004ceb6f (CONDITIONAL_JUMP)
// 004ceb68: MOV AL,[0x02d7b424]
//   XREF to: 02d7b424 (READ)
// 004ceb6d: MOV byte ptr [EDX],AL
// 004ceb6f: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004ceb6f
//   XREF to: Stack[-0xd4] (READ)
// 004ceb73: MOV EDI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004ceb77: INC EDX
// 004ceb78: INC EAX
// 004ceb79: INC ECX
// 004ceb7a: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 004ceb7e: CMP ECX,EDI
// 004ceb80: JLE 0x004ceb55
//   XREF to: 004ceb55 (CONDITIONAL_JUMP)
// 004ceb82: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_004ceb82
//   XREF to: Stack[-0xb8] (READ)
// 004ceb86: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xd4] (READ)
// 004ceb8a: INC EAX
// 004ceb8b: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xcc] (READ)
// 004ceb8f: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 004ceb93: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0xc4] (READ)
// 004ceb97: ADD ESI,0x4
// 004ceb9a: ADD EDX,EAX
// 004ceb9c: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0xb8] (READ)
// 004ceba0: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0xd4] (WRITE)
// 004ceba4: CMP EAX,ECX
// 004ceba6: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004cebac: JMP 0x004ceb3c
//   XREF to: 004ceb3c (UNCONDITIONAL_JUMP)
// 004cebae: MOV EAX,dword ptr [ESP + 0xe8]
//   Label: LAB_004cebae
//   XREF to: Stack[0x10] (READ)
// 004cebb5: MOV EBP,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xcc] (READ)
// 004cebb9: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 004cebbd: CMP EAX,EBP
// 004cebbf: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004cebc5: LEA ESI,[EAX*0x4 + 0x0]
// 004cebcc: MOV EDI,dword ptr [ESP + 0xe4]
//   Label: LAB_004cebcc
//   XREF to: Stack[0xc] (READ)
// 004cebd3: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004cebd7: MOV ECX,dword ptr [ESI + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 004cebdd: MOV EDX,EDI
// 004cebdf: ADD ECX,EDI
// 004cebe1: CMP EDI,EBP
// 004cebe3: JG 0x004cec14
//   XREF to: 004cec14 (CONDITIONAL_JUMP)
// 004cebe5: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004cebe5
//   XREF to: Stack[-0xd4] (READ)
// 004cebe9: MOV AL,byte ptr [EAX]
// 004cebeb: AND EAX,0xff
// 004cebf0: CMP EAX,dword ptr [EBX + 0x3188]
// 004cebf6: JZ 0x004cec01
//   XREF to: 004cec01 (CONDITIONAL_JUMP)
// 004cebf8: MOV AL,byte ptr [ESP + 0xec]
//   XREF to: Stack[0x14] (READ)
// 004cebff: MOV byte ptr [ECX],AL
// 004cec01: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004cec01
//   XREF to: Stack[-0xd4] (READ)
// 004cec05: MOV EDI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004cec09: INC ECX
// 004cec0a: INC EAX
// 004cec0b: INC EDX
// 004cec0c: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 004cec10: CMP EDX,EDI
// 004cec12: JLE 0x004cebe5
//   XREF to: 004cebe5 (CONDITIONAL_JUMP)
// 004cec14: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_004cec14
//   XREF to: Stack[-0xb4] (READ)
// 004cec18: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xd4] (READ)
// 004cec1c: INC EAX
// 004cec1d: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xcc] (READ)
// 004cec21: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 004cec25: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0xc4] (READ)
// 004cec29: ADD ESI,0x4
// 004cec2c: ADD EDX,EAX
// 004cec2e: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0xb4] (READ)
// 004cec32: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0xd4] (WRITE)
// 004cec36: CMP EAX,ECX
// 004cec38: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004cec3e: JMP 0x004cebcc
//   XREF to: 004cebcc (UNCONDITIONAL_JUMP)
// 004cec40: MOV EDX,dword ptr [ESP + 0xe8]
//   Label: LAB_004cec40
//   XREF to: Stack[0x10] (READ)
// 004cec47: SHL EDX,0x2
// 004cec4a: CMP EDI,0x10
// 004cec4d: JNZ 0x004cf9ac
//   XREF to: 004cf9ac (CONDITIONAL_JUMP)
// 004cec53: MOV ESI,dword ptr [ESP + 0xec]
//   XREF to: Stack[0x14] (READ)
// 004cec5a: CMP ESI,-0x1
// 004cec5d: JNZ 0x004cefc4
//   XREF to: 004cefc4 (CONDITIONAL_JUMP)
// 004cec63: CMP dword ptr [EBX + 0x1d64],0x0
// 004cec6a: JZ 0x004cef30
//   XREF to: 004cef30 (CONDITIONAL_JUMP)
// 004cec70: MOV EAX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[0x10] (READ)
// 004cec77: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xcc] (READ)
// 004cec7b: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 004cec7f: CMP EAX,EDX
// 004cec81: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004cec87: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0xc8] (READ)
// 004cec8b: SHL EAX,0xa
// 004cec8e: LEA EDX,[EBX + EAX*0x1]
// 004cec91: MOV dword ptr [ESP + 0x40],EDX
//   XREF to: Stack[-0x98] (WRITE)
// 004cec95: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0xc8] (READ)
// 004cec99: LEA EAX,[EDX*0x4 + 0x0]
// 004ceca0: SUB EAX,EDX
// 004ceca2: SHL EAX,0x8
// 004ceca5: ADD EBX,EAX
// 004ceca7: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0xb0] (READ)
// 004cecab: SHL EAX,0x2
// 004cecae: MOV dword ptr [ESP + 0x30],EBX
//   XREF to: Stack[-0xa8] (WRITE)
// 004cecb2: MOV dword ptr [ESP + 0xb0],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004cecb9: MOV EBX,dword ptr [ESP + 0xb0]
//   Label: LAB_004cecb9
//   XREF to: Stack[-0x28] (READ)
// 004cecc0: MOV EAX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0xc] (READ)
// 004cecc7: MOV EBX,dword ptr [EBX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 004ceccd: ADD EAX,EAX
// 004ceccf: ADD EBX,EAX
// 004cecd1: MOV EAX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0xc] (READ)
// 004cecd8: MOV EDI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004cecdc: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0xac] (WRITE)
// 004cece0: CMP EAX,EDI
// 004cece2: JG 0x004ceef7
//   XREF to: 004ceef7 (CONDITIONAL_JUMP)
// 004cece8: MOV ECX,dword ptr [ESP + 0x4]
//   Label: LAB_004cece8
//   XREF to: Stack[-0xd4] (READ)
// 004cecec: MOV CL,byte ptr [ECX]
// 004cecee: AND ECX,0xff
// 004cecf4: MOV ESI,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0xa8] (READ)
// 004cecf8: LEA EAX,[ECX + ECX*0x2]
// 004cecfb: ADD EAX,ESI
// 004cecfd: MOV AL,byte ptr [EAX + 0x164]
// 004ced03: MOV EDX,dword ptr [0x006793b4]
//   XREF to: 006793b4 (READ)
// 004ced09: AND EAX,0xff
// 004ced0e: IMUL EDX,EAX
// 004ced11: MOV EAX,EDX
// 004ced13: SAR EDX,0x1f
// 004ced16: SHL EDX,0x8
// 004ced19: SBB EAX,EDX
// 004ced1b: SAR EAX,0x8
// 004ced1e: TEST EAX,EAX
// 004ced20: JZ 0x004ceed6
//   XREF to: 004ceed6 (CONDITIONAL_JUMP)
// 004ced26: MOV EDI,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x98] (READ)
// 004ced2a: SHL ECX,0x2
// 004ced2d: MOV DX,word ptr [EBX]
// 004ced30: ADD EDI,ECX
// 004ced32: MOV EBP,dword ptr [0x00682748]
//   XREF to: 00682748 (READ)
// 004ced38: MOV dword ptr [ESP + 0xc0],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 004ced3f: MOV EDX,dword ptr [EDI + 0xd64]
// 004ced45: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 004ced4b: AND EDX,EBP
// 004ced4d: SHR EDX,CL
// 004ced4f: MOV CL,byte ptr [0x02d01f2c]
//   XREF to: 02d01f2c (READ)
// 004ced55: MOV ESI,dword ptr [EDI + 0xd64]
// 004ced5b: SHL EDX,CL
// 004ced5d: AND ESI,dword ptr [0x00682750]
//   XREF to: 00682750 (READ)
// 004ced63: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004ced69: SHR ESI,CL
// 004ced6b: MOV CL,byte ptr [0x02d01f38]
//   XREF to: 02d01f38 (READ)
// 004ced71: SHL ESI,CL
// 004ced73: AND ESI,0xff
// 004ced79: IMUL ESI,EAX
// 004ced7c: MOV EBP,dword ptr [EDI + 0xd64]
// 004ced82: AND EBP,dword ptr [0x00682758]
//   XREF to: 00682758 (READ)
// 004ced88: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004ced8e: SHR EBP,CL
// 004ced90: MOV CL,byte ptr [0x02d01f44]
//   XREF to: 02d01f44 (READ)
// 004ced96: SHL EBP,CL
// 004ced98: AND EBP,0xff
// 004ced9e: IMUL EBP,EAX
// 004ceda1: AND EDX,0xff
// 004ceda7: MOV dword ptr [ESP + 0x34],EDX
//   XREF to: Stack[-0xa4] (WRITE)
// 004cedab: XOR EDX,EDX
// 004cedad: MOV DX,word ptr [ESP + 0xc0]
//   XREF to: Stack[-0x18] (READ)
// 004cedb5: MOV ECX,dword ptr [0x00682748]
//   XREF to: 00682748 (READ)
// 004cedbb: AND ECX,EDX
// 004cedbd: MOV dword ptr [ESP + 0x98],ECX
//   XREF to: Stack[-0x40] (WRITE)
// 004cedc4: MOV EDI,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x40] (READ)
// 004cedcb: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 004cedd1: SHR EDI,CL
// 004cedd3: MOV CL,byte ptr [0x02d01f2c]
//   XREF to: 02d01f2c (READ)
// 004cedd9: SHL EDI,CL
// 004ceddb: MOV ECX,EDI
// 004ceddd: AND ECX,0xff
// 004cede3: MOV dword ptr [ESP + 0x38],ECX
//   XREF to: Stack[-0xa0] (WRITE)
// 004cede7: MOV ECX,dword ptr [0x00682750]
//   XREF to: 00682750 (READ)
// 004ceded: AND ECX,EDX
// 004cedef: MOV dword ptr [ESP + 0x98],ECX
//   XREF to: Stack[-0x40] (WRITE)
// 004cedf6: MOV EDI,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x40] (READ)
// 004cedfd: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004cee03: SHR EDI,CL
// 004cee05: MOV CL,byte ptr [0x02d01f38]
//   XREF to: 02d01f38 (READ)
// 004cee0b: SHL EDI,CL
// 004cee0d: MOV ECX,dword ptr [0x00682758]
//   XREF to: 00682758 (READ)
// 004cee13: AND ECX,EDX
// 004cee15: MOV dword ptr [ESP + 0x98],ECX
//   XREF to: Stack[-0x40] (WRITE)
// 004cee1c: MOV EDX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x40] (READ)
// 004cee23: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004cee29: SHR EDX,CL
// 004cee2b: MOV CL,byte ptr [0x02d01f44]
//   XREF to: 02d01f44 (READ)
// 004cee31: SHL EDX,CL
// 004cee33: MOV ECX,EDX
// 004cee35: MOV EDX,0xff
// 004cee3a: AND EDI,0xff
// 004cee40: SUB EDX,EAX
// 004cee42: IMUL EDI,EDX
// 004cee45: AND ECX,0xff
// 004cee4b: MOV dword ptr [ESP + 0x3c],ECX
//   XREF to: Stack[-0x9c] (WRITE)
// 004cee4f: MOV ECX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0xa0] (READ)
// 004cee53: IMUL ECX,EDX
// 004cee56: MOV dword ptr [ESP + 0x98],ECX
//   XREF to: Stack[-0x40] (WRITE)
// 004cee5d: MOV ECX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0xa4] (READ)
// 004cee61: IMUL ECX,EAX
// 004cee64: ADD ECX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x40] (READ)
// 004cee6b: MOV dword ptr [ESP + 0x34],ECX
//   XREF to: Stack[-0xa4] (WRITE)
// 004cee6f: IMUL EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x9c] (READ)
// 004cee74: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0xa4] (READ)
// 004cee78: ADD ESI,EDI
// 004cee7a: SHR EAX,0x8
// 004cee7d: MOV ECX,ESI
// 004cee7f: ADD EBP,EDX
// 004cee81: MOV ESI,dword ptr [0x02d01f28]
//   XREF to: 02d01f28 (READ)
// 004cee87: XOR EDX,EDX
// 004cee89: DIV ESI
// 004cee8b: MOV EDI,dword ptr [0x02d01f34]
//   XREF to: 02d01f34 (READ)
// 004cee91: SHR ECX,0x8
// 004cee94: MOV ESI,EAX
// 004cee96: XOR EDX,EDX
// 004cee98: MOV EAX,ECX
// 004cee9a: DIV EDI
// 004cee9c: MOV dword ptr [ESP + 0x44],ECX
//   XREF to: Stack[-0x94] (WRITE)
// 004ceea0: SHR EBP,0x8
// 004ceea3: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 004ceea7: XOR EDX,EDX
// 004ceea9: MOV EAX,EBP
// 004ceeab: DIV dword ptr [0x02d01f40]
//   XREF to: 02d01f40 (READ)
// 004ceeb1: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 004ceeb7: SHL ESI,CL
// 004ceeb9: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004ceebf: MOV EDI,EAX
// 004ceec1: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x94] (READ)
// 004ceec5: SHL EAX,CL
// 004ceec7: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004ceecd: OR EAX,ESI
// 004ceecf: SHL EDI,CL
// 004ceed1: OR EAX,EDI
// 004ceed3: MOV word ptr [EBX],AX
// 004ceed6: MOV EBP,dword ptr [ESP + 0x2c]
//   Label: LAB_004ceed6
//   XREF to: Stack[-0xac] (READ)
// 004ceeda: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xd4] (READ)
// 004ceede: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004ceee2: ADD EBX,0x2
// 004ceee5: INC EBP
// 004ceee6: INC EAX
// 004ceee7: MOV dword ptr [ESP + 0x2c],EBP
//   XREF to: Stack[-0xac] (WRITE)
// 004ceeeb: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 004ceeef: CMP EBP,EDX
// 004ceef1: JLE 0x004cece8
//   XREF to: 004cece8 (CONDITIONAL_JUMP)
// 004ceef7: MOV EDX,dword ptr [ESP + 0xb0]
//   Label: LAB_004ceef7
//   XREF to: Stack[-0x28] (READ)
// 004ceefe: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0xb0] (READ)
// 004cef02: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0xc4] (READ)
// 004cef06: MOV EBX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xd4] (READ)
// 004cef0a: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xcc] (READ)
// 004cef0e: ADD EDX,0x4
// 004cef11: INC ECX
// 004cef12: ADD EBX,EAX
// 004cef14: MOV dword ptr [ESP + 0xb0],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 004cef1b: MOV dword ptr [ESP + 0x28],ECX
//   XREF to: Stack[-0xb0] (WRITE)
// 004cef1f: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0xd4] (WRITE)
// 004cef23: CMP ECX,ESI
// 004cef25: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004cef2b: JMP 0x004cecb9
//   XREF to: 004cecb9 (UNCONDITIONAL_JUMP)
// 004cef30: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_004cef30
//   XREF to: Stack[-0xcc] (READ)
// 004cef34: MOV EDI,dword ptr [ESP + 0xe8]
//   XREF to: Stack[0x10] (READ)
// 004cef3b: CMP EDI,EAX
// 004cef3d: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004cef43: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0xc8] (READ)
// 004cef47: SHL ESI,0xa
// 004cef4a: LEA EBP,[EDI*0x4 + 0x0]
// 004cef51: ADD ESI,EBX
// 004cef53: MOV EAX,dword ptr [ESP + 0xe4]
//   Label: LAB_004cef53
//   XREF to: Stack[0xc] (READ)
// 004cef5a: MOV ECX,dword ptr [EBP + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 004cef60: ADD EAX,EAX
// 004cef62: MOV EDX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0xc] (READ)
// 004cef69: ADD ECX,EAX
// 004cef6b: CMP EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004cef6f: JG 0x004cefa4
//   XREF to: 004cefa4 (CONDITIONAL_JUMP)
// 004cef71: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004cef71
//   XREF to: Stack[-0xd4] (READ)
// 004cef75: MOV AL,byte ptr [EAX]
// 004cef77: AND EAX,0xff
// 004cef7c: CMP EAX,dword ptr [EBX + 0x3188]
// 004cef82: JZ 0x004cef8f
//   XREF to: 004cef8f (CONDITIONAL_JUMP)
// 004cef84: MOV AX,word ptr [ESI + EAX*0x4 + 0xd64]
// 004cef8c: MOV word ptr [ECX],AX
// 004cef8f: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004cef8f
//   XREF to: Stack[-0xd4] (READ)
// 004cef93: INC EAX
// 004cef94: INC EDX
// 004cef95: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 004cef99: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004cef9d: ADD ECX,0x2
// 004cefa0: CMP EDX,EAX
// 004cefa2: JLE 0x004cef71
//   XREF to: 004cef71 (CONDITIONAL_JUMP)
// 004cefa4: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_004cefa4
//   XREF to: Stack[-0xc4] (READ)
// 004cefa8: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xd4] (READ)
// 004cefac: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xcc] (READ)
// 004cefb0: ADD EBP,0x4
// 004cefb3: ADD EDX,EAX
// 004cefb5: INC EDI
// 004cefb6: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0xd4] (WRITE)
// 004cefba: CMP EDI,ECX
// 004cefbc: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004cefc2: JMP 0x004cef53
//   XREF to: 004cef53 (UNCONDITIONAL_JUMP)
// 004cefc4: CMP ESI,-0x2
//   Label: LAB_004cefc4
// 004cefc7: JNZ 0x004cf30a
//   XREF to: 004cf30a (CONDITIONAL_JUMP)
// 004cefcd: CMP dword ptr [EBX + 0x1d64],0x0
// 004cefd4: JZ 0x004cf27f
//   XREF to: 004cf27f (CONDITIONAL_JUMP)
// 004cefda: MOV EAX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[0x10] (READ)
// 004cefe1: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xcc] (READ)
// 004cefe5: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 004cefe9: CMP EAX,EDI
// 004cefeb: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004ceff1: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0xc8] (READ)
// 004ceff5: LEA EAX,[EDX*0x4 + 0x0]
// 004ceffc: SUB EAX,EDX
// 004ceffe: SHL EAX,0x8
// 004cf001: ADD EBX,EAX
// 004cf003: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x90] (READ)
// 004cf007: SHL EAX,0x2
// 004cf00a: MOV dword ptr [ESP + 0x50],EBX
//   XREF to: Stack[-0x88] (WRITE)
// 004cf00e: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004cf015: MOV EAX,dword ptr [ESP + 0xac]
//   Label: LAB_004cf015
//   XREF to: Stack[-0x2c] (READ)
// 004cf01c: MOV EBX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0xc] (READ)
// 004cf023: MOV EAX,dword ptr [EAX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 004cf029: ADD EBX,EBX
// 004cf02b: ADD EBX,EAX
// 004cf02d: MOV EAX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0xc] (READ)
// 004cf034: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004cf038: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 004cf03c: CMP EAX,ESI
// 004cf03e: JG 0x004cf246
//   XREF to: 004cf246 (CONDITIONAL_JUMP)
// 004cf044: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004cf044
//   XREF to: Stack[-0xd4] (READ)
// 004cf048: MOV AL,byte ptr [EAX]
// 004cf04a: AND EAX,0xff
// 004cf04f: MOV ECX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x88] (READ)
// 004cf053: LEA EAX,[EAX + EAX*0x2]
// 004cf056: ADD EAX,ECX
// 004cf058: MOV AL,byte ptr [EAX + 0x164]
// 004cf05e: MOV EDX,dword ptr [0x006793b4]
//   XREF to: 006793b4 (READ)
// 004cf064: AND EAX,0xff
// 004cf069: IMUL EDX,EAX
// 004cf06c: MOV EAX,EDX
// 004cf06e: SAR EDX,0x1f
// 004cf071: SHL EDX,0x8
// 004cf074: SBB EAX,EDX
// 004cf076: SAR EAX,0x8
// 004cf079: TEST EAX,EAX
// 004cf07b: JZ 0x004cf225
//   XREF to: 004cf225 (CONDITIONAL_JUMP)
// 004cf081: MOV DX,word ptr [EBX]
// 004cf084: MOV dword ptr [ESP + 0xbc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 004cf08b: XOR EDX,EDX
// 004cf08d: MOV ESI,dword ptr [0x00682748]
//   XREF to: 00682748 (READ)
// 004cf093: MOV DX,word ptr [0x02d7b412]
//   XREF to: 02d7b412 (READ)
// 004cf09a: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 004cf0a0: AND ESI,EDX
// 004cf0a2: SHR ESI,CL
// 004cf0a4: MOV CL,byte ptr [0x02d01f2c]
//   XREF to: 02d01f2c (READ)
// 004cf0aa: SHL ESI,CL
// 004cf0ac: AND ESI,0xff
// 004cf0b2: MOV dword ptr [ESP + 0x54],ESI
//   XREF to: Stack[-0x84] (WRITE)
// 004cf0b6: MOV ESI,dword ptr [0x00682750]
//   XREF to: 00682750 (READ)
// 004cf0bc: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004cf0c2: AND ESI,EDX
// 004cf0c4: MOV EDI,dword ptr [0x00682758]
//   XREF to: 00682758 (READ)
// 004cf0ca: SHR ESI,CL
// 004cf0cc: MOV CL,byte ptr [0x02d01f38]
//   XREF to: 02d01f38 (READ)
// 004cf0d2: AND EDI,EDX
// 004cf0d4: SHL ESI,CL
// 004cf0d6: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004cf0dc: XOR EDX,EDX
// 004cf0de: SHR EDI,CL
// 004cf0e0: MOV CL,byte ptr [0x02d01f44]
//   XREF to: 02d01f44 (READ)
// 004cf0e6: MOV DX,word ptr [ESP + 0xbc]
//   XREF to: Stack[-0x1c] (READ)
// 004cf0ee: SHL EDI,CL
// 004cf0f0: MOV ECX,dword ptr [0x00682748]
//   XREF to: 00682748 (READ)
// 004cf0f6: AND ECX,EDX
// 004cf0f8: MOV dword ptr [ESP + 0x98],ECX
//   XREF to: Stack[-0x40] (WRITE)
// 004cf0ff: MOV EBP,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x40] (READ)
// 004cf106: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 004cf10c: SHR EBP,CL
// 004cf10e: MOV CL,byte ptr [0x02d01f2c]
//   XREF to: 02d01f2c (READ)
// 004cf114: SHL EBP,CL
// 004cf116: MOV ECX,EBP
// 004cf118: AND ECX,0xff
// 004cf11e: MOV dword ptr [ESP + 0x58],ECX
//   XREF to: Stack[-0x80] (WRITE)
// 004cf122: MOV ECX,dword ptr [0x00682750]
//   XREF to: 00682750 (READ)
// 004cf128: AND ECX,EDX
// 004cf12a: MOV dword ptr [ESP + 0x98],ECX
//   XREF to: Stack[-0x40] (WRITE)
// 004cf131: MOV EBP,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x40] (READ)
// 004cf138: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004cf13e: SHR EBP,CL
// 004cf140: MOV CL,byte ptr [0x02d01f38]
//   XREF to: 02d01f38 (READ)
// 004cf146: SHL EBP,CL
// 004cf148: MOV ECX,dword ptr [0x00682758]
//   XREF to: 00682758 (READ)
// 004cf14e: AND ECX,EDX
// 004cf150: MOV dword ptr [ESP + 0x98],ECX
//   XREF to: Stack[-0x40] (WRITE)
// 004cf157: MOV EDX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x40] (READ)
// 004cf15e: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004cf164: SHR EDX,CL
// 004cf166: MOV CL,byte ptr [0x02d01f44]
//   XREF to: 02d01f44 (READ)
// 004cf16c: SHL EDX,CL
// 004cf16e: MOV ECX,EDX
// 004cf170: MOV EDX,0xff
// 004cf175: AND EBP,0xff
// 004cf17b: SUB EDX,EAX
// 004cf17d: IMUL EBP,EDX
// 004cf180: AND ECX,0xff
// 004cf186: MOV dword ptr [ESP + 0x5c],ECX
//   XREF to: Stack[-0x7c] (WRITE)
// 004cf18a: MOV ECX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x80] (READ)
// 004cf18e: IMUL ECX,EDX
// 004cf191: MOV dword ptr [ESP + 0x98],ECX
//   XREF to: Stack[-0x40] (WRITE)
// 004cf198: MOV ECX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x84] (READ)
// 004cf19c: IMUL ECX,EAX
// 004cf19f: ADD ECX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x40] (READ)
// 004cf1a6: AND ESI,0xff
// 004cf1ac: MOV dword ptr [ESP + 0x54],ECX
//   XREF to: Stack[-0x84] (WRITE)
// 004cf1b0: MOV ECX,ESI
// 004cf1b2: IMUL ECX,EAX
// 004cf1b5: ADD ECX,EBP
// 004cf1b7: IMUL EDX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x7c] (READ)
// 004cf1bc: AND EDI,0xff
// 004cf1c2: MOV EBP,EDI
// 004cf1c4: IMUL EBP,EAX
// 004cf1c7: MOV ESI,dword ptr [0x02d01f28]
//   XREF to: 02d01f28 (READ)
// 004cf1cd: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x84] (READ)
// 004cf1d1: ADD EBP,EDX
// 004cf1d3: SHR EAX,0x8
// 004cf1d6: XOR EDX,EDX
// 004cf1d8: DIV ESI
// 004cf1da: SHR ECX,0x8
// 004cf1dd: MOV EDI,dword ptr [0x02d01f34]
//   XREF to: 02d01f34 (READ)
// 004cf1e3: MOV ESI,EAX
// 004cf1e5: XOR EDX,EDX
// 004cf1e7: MOV EAX,ECX
// 004cf1e9: DIV EDI
// 004cf1eb: MOV dword ptr [ESP + 0x60],ECX
//   XREF to: Stack[-0x78] (WRITE)
// 004cf1ef: SHR EBP,0x8
// 004cf1f2: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 004cf1f6: XOR EDX,EDX
// 004cf1f8: MOV EAX,EBP
// 004cf1fa: DIV dword ptr [0x02d01f40]
//   XREF to: 02d01f40 (READ)
// 004cf200: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 004cf206: SHL ESI,CL
// 004cf208: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004cf20e: MOV EDI,EAX
// 004cf210: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x78] (READ)
// 004cf214: SHL EAX,CL
// 004cf216: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004cf21c: OR EAX,ESI
// 004cf21e: SHL EDI,CL
// 004cf220: OR EAX,EDI
// 004cf222: MOV word ptr [EBX],AX
// 004cf225: MOV EDI,dword ptr [ESP + 0x4c]
//   Label: LAB_004cf225
//   XREF to: Stack[-0x8c] (READ)
// 004cf229: MOV EBP,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xd4] (READ)
// 004cf22d: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004cf231: ADD EBX,0x2
// 004cf234: INC EDI
// 004cf235: INC EBP
// 004cf236: MOV dword ptr [ESP + 0x4c],EDI
//   XREF to: Stack[-0x8c] (WRITE)
// 004cf23a: MOV dword ptr [ESP + 0x4],EBP
//   XREF to: Stack[-0xd4] (WRITE)
// 004cf23e: CMP EDI,EDX
// 004cf240: JLE 0x004cf044
//   XREF to: 004cf044 (CONDITIONAL_JUMP)
// 004cf246: MOV EAX,dword ptr [ESP + 0xac]
//   Label: LAB_004cf246
//   XREF to: Stack[-0x2c] (READ)
// 004cf24d: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x90] (READ)
// 004cf251: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xd4] (READ)
// 004cf255: ADD EAX,0x4
// 004cf258: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xcc] (READ)
// 004cf25c: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004cf263: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0xc4] (READ)
// 004cf267: INC EDX
// 004cf268: ADD ECX,EAX
// 004cf26a: MOV dword ptr [ESP + 0x48],EDX
//   XREF to: Stack[-0x90] (WRITE)
// 004cf26e: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0xd4] (WRITE)
// 004cf272: CMP EDX,EBX
// 004cf274: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004cf27a: JMP 0x004cf015
//   XREF to: 004cf015 (UNCONDITIONAL_JUMP)
// 004cf27f: MOV ESI,dword ptr [ESP + 0xc]
//   Label: LAB_004cf27f
//   XREF to: Stack[-0xcc] (READ)
// 004cf283: MOV EDI,dword ptr [ESP + 0xe8]
//   XREF to: Stack[0x10] (READ)
// 004cf28a: CMP EDI,ESI
// 004cf28c: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004cf292: LEA ESI,[EDI*0x4 + 0x0]
// 004cf299: MOV EAX,dword ptr [ESP + 0xe4]
//   Label: LAB_004cf299
//   XREF to: Stack[0xc] (READ)
// 004cf2a0: MOV EDX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0xc] (READ)
// 004cf2a7: MOV ECX,dword ptr [ESI + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 004cf2ad: ADD EAX,EAX
// 004cf2af: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004cf2b3: ADD ECX,EAX
// 004cf2b5: CMP EDX,EBP
// 004cf2b7: JG 0x004cf2ea
//   XREF to: 004cf2ea (CONDITIONAL_JUMP)
// 004cf2b9: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004cf2b9
//   XREF to: Stack[-0xd4] (READ)
// 004cf2bd: MOV AL,byte ptr [EAX]
// 004cf2bf: AND EAX,0xff
// 004cf2c4: CMP EAX,dword ptr [EBX + 0x3188]
// 004cf2ca: JZ 0x004cf2d5
//   XREF to: 004cf2d5 (CONDITIONAL_JUMP)
// 004cf2cc: MOV AX,[0x02d7b412]
//   XREF to: 02d7b412 (READ)
// 004cf2d2: MOV word ptr [ECX],AX
// 004cf2d5: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004cf2d5
//   XREF to: Stack[-0xd4] (READ)
// 004cf2d9: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004cf2dd: ADD ECX,0x2
// 004cf2e0: INC EAX
// 004cf2e1: INC EDX
// 004cf2e2: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 004cf2e6: CMP EDX,EBP
// 004cf2e8: JLE 0x004cf2b9
//   XREF to: 004cf2b9 (CONDITIONAL_JUMP)
// 004cf2ea: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_004cf2ea
//   XREF to: Stack[-0xc4] (READ)
// 004cf2ee: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xd4] (READ)
// 004cf2f2: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xcc] (READ)
// 004cf2f6: ADD ESI,0x4
// 004cf2f9: ADD EDX,EAX
// 004cf2fb: INC EDI
// 004cf2fc: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0xd4] (WRITE)
// 004cf300: CMP EDI,ECX
// 004cf302: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004cf308: JMP 0x004cf299
//   XREF to: 004cf299 (UNCONDITIONAL_JUMP)
// 004cf30a: CMP ESI,-0x3
//   Label: LAB_004cf30a
// 004cf30d: JNZ 0x004cf638
//   XREF to: 004cf638 (CONDITIONAL_JUMP)
// 004cf313: CMP dword ptr [EBX + 0x1d64],0x0
// 004cf31a: JZ 0x004cf5ad
//   XREF to: 004cf5ad (CONDITIONAL_JUMP)
// 004cf320: MOV EAX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[0x10] (READ)
// 004cf327: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xcc] (READ)
// 004cf32b: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 004cf32f: CMP EAX,EDX
// 004cf331: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004cf337: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0xc8] (READ)
// 004cf33b: LEA EAX,[EDX*0x4 + 0x0]
// 004cf342: SUB EAX,EDX
// 004cf344: SHL EAX,0x8
// 004cf347: ADD EBX,EAX
// 004cf349: MOV EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x74] (READ)
// 004cf34d: SHL EAX,0x2
// 004cf350: MOV dword ptr [ESP + 0x6c],EBX
//   XREF to: Stack[-0x6c] (WRITE)
// 004cf354: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004cf35b: MOV EBX,dword ptr [ESP + 0xa8]
//   Label: LAB_004cf35b
//   XREF to: Stack[-0x30] (READ)
// 004cf362: MOV EAX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0xc] (READ)
// 004cf369: MOV EBX,dword ptr [EBX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 004cf36f: ADD EAX,EAX
// 004cf371: ADD EBX,EAX
// 004cf373: MOV EAX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0xc] (READ)
// 004cf37a: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004cf37e: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 004cf382: CMP EAX,ESI
// 004cf384: JG 0x004cf574
//   XREF to: 004cf574 (CONDITIONAL_JUMP)
// 004cf38a: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004cf38a
//   XREF to: Stack[-0xd4] (READ)
// 004cf38e: MOV AL,byte ptr [EAX]
// 004cf390: AND EAX,0xff
// 004cf395: MOV ECX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x6c] (READ)
// 004cf399: LEA EAX,[EAX + EAX*0x2]
// 004cf39c: ADD EAX,ECX
// 004cf39e: MOV AL,byte ptr [EAX + 0x164]
// 004cf3a4: MOV EDX,dword ptr [0x006793b4]
//   XREF to: 006793b4 (READ)
// 004cf3aa: AND EAX,0xff
// 004cf3af: IMUL EDX,EAX
// 004cf3b2: MOV EAX,EDX
// 004cf3b4: SAR EDX,0x1f
// 004cf3b7: SHL EDX,0x8
// 004cf3ba: SBB EAX,EDX
// 004cf3bc: SAR EAX,0x8
// 004cf3bf: TEST EAX,EAX
// 004cf3c1: JZ 0x004cf553
//   XREF to: 004cf553 (CONDITIONAL_JUMP)
// 004cf3c7: MOV EBP,dword ptr [0x02d7b424]
//   XREF to: 02d7b424 (READ)
// 004cf3cd: MOV ESI,dword ptr [0x00682748]
//   XREF to: 00682748 (READ)
// 004cf3d3: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 004cf3d9: AND EBP,ESI
// 004cf3db: SHR EBP,CL
// 004cf3dd: MOV CL,byte ptr [0x02d01f2c]
//   XREF to: 02d01f2c (READ)
// 004cf3e3: SHL EBP,CL
// 004cf3e5: AND EBP,0xff
// 004cf3eb: IMUL EBP,EAX
// 004cf3ee: MOV DX,word ptr [EBX]
// 004cf3f1: MOV EDI,dword ptr [0x00682750]
//   XREF to: 00682750 (READ)
// 004cf3f7: MOV dword ptr [ESP + 0xc4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004cf3fe: MOV EDX,dword ptr [0x02d7b424]
//   XREF to: 02d7b424 (READ)
// 004cf404: AND EDI,EDX
// 004cf406: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004cf40c: SHR EDI,CL
// 004cf40e: MOV CL,byte ptr [0x02d01f38]
//   XREF to: 02d01f38 (READ)
// 004cf414: SHL EDI,CL
// 004cf416: AND EDI,0xff
// 004cf41c: IMUL EDI,EAX
// 004cf41f: MOV ESI,EDX
// 004cf421: AND ESI,dword ptr [0x00682758]
//   XREF to: 00682758 (READ)
// 004cf427: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004cf42d: SHR ESI,CL
// 004cf42f: MOV CL,byte ptr [0x02d01f44]
//   XREF to: 02d01f44 (READ)
// 004cf435: SHL ESI,CL
// 004cf437: AND ESI,0xff
// 004cf43d: IMUL ESI,EAX
// 004cf440: XOR EDX,EDX
// 004cf442: MOV DX,word ptr [ESP + 0xc4]
//   XREF to: Stack[-0x14] (READ)
// 004cf44a: MOV ECX,dword ptr [0x00682748]
//   XREF to: 00682748 (READ)
// 004cf450: MOV dword ptr [ESP + 0x98],EDX
//   XREF to: Stack[-0x40] (WRITE)
// 004cf457: AND EDX,ECX
// 004cf459: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 004cf45f: SHR EDX,CL
// 004cf461: MOV CL,byte ptr [0x02d01f2c]
//   XREF to: 02d01f2c (READ)
// 004cf467: SHL EDX,CL
// 004cf469: MOV ECX,EDX
// 004cf46b: AND ECX,0xff
// 004cf471: MOV EDX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x40] (READ)
// 004cf478: MOV dword ptr [ESP + 0x70],ECX
//   XREF to: Stack[-0x68] (WRITE)
// 004cf47c: AND EDX,dword ptr [0x00682750]
//   XREF to: 00682750 (READ)
// 004cf482: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004cf488: SHR EDX,CL
// 004cf48a: MOV CL,byte ptr [0x02d01f38]
//   XREF to: 02d01f38 (READ)
// 004cf490: SHL EDX,CL
// 004cf492: MOV ECX,EDX
// 004cf494: AND ECX,0xff
// 004cf49a: MOV EDX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x40] (READ)
// 004cf4a1: MOV dword ptr [ESP + 0x74],ECX
//   XREF to: Stack[-0x64] (WRITE)
// 004cf4a5: AND EDX,dword ptr [0x00682758]
//   XREF to: 00682758 (READ)
// 004cf4ab: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004cf4b1: SHR EDX,CL
// 004cf4b3: MOV CL,byte ptr [0x02d01f44]
//   XREF to: 02d01f44 (READ)
// 004cf4b9: SHL EDX,CL
// 004cf4bb: MOV ECX,EDX
// 004cf4bd: AND ECX,0xff
// 004cf4c3: MOV EDX,0xff
// 004cf4c8: MOV dword ptr [ESP + 0x78],ECX
//   XREF to: Stack[-0x60] (WRITE)
// 004cf4cc: SUB EDX,EAX
// 004cf4ce: MOV ECX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x68] (READ)
// 004cf4d2: IMUL ECX,EDX
// 004cf4d5: ADD EBP,ECX
// 004cf4d7: MOV ECX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x64] (READ)
// 004cf4db: IMUL ECX,EDX
// 004cf4de: ADD EDI,ECX
// 004cf4e0: IMUL EDX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x60] (READ)
// 004cf4e5: ADD ESI,EDX
// 004cf4e7: MOV EAX,EBP
// 004cf4e9: SHR ESI,0x8
// 004cf4ec: SHR EAX,0x8
// 004cf4ef: MOV dword ptr [ESP + 0x98],ESI
//   XREF to: Stack[-0x40] (WRITE)
// 004cf4f6: MOV EDX,ESI
// 004cf4f8: MOV dword ptr [ESP + 0x7c],ESI
//   XREF to: Stack[-0x5c] (WRITE)
// 004cf4fc: XOR EDX,ESI
// 004cf4fe: DIV dword ptr [0x02d01f28]
//   XREF to: 02d01f28 (READ)
// 004cf504: MOV ECX,EDI
// 004cf506: MOV EDI,dword ptr [0x02d01f34]
//   XREF to: 02d01f34 (READ)
// 004cf50c: SHR ECX,0x8
// 004cf50f: MOV ESI,EAX
// 004cf511: XOR EDX,EDX
// 004cf513: MOV EAX,ECX
// 004cf515: DIV EDI
// 004cf517: MOV EBP,dword ptr [0x02d01f40]
//   XREF to: 02d01f40 (READ)
// 004cf51d: MOV EDI,EAX
// 004cf51f: XOR EDX,EDX
// 004cf521: MOV EAX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x40] (READ)
// 004cf528: DIV EBP
// 004cf52a: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 004cf530: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 004cf534: MOV EAX,ESI
// 004cf536: SHL EAX,CL
// 004cf538: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004cf53e: MOV EDX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x5c] (READ)
// 004cf542: SHL EDI,CL
// 004cf544: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004cf54a: OR EAX,EDI
// 004cf54c: SHL EDX,CL
// 004cf54e: OR EAX,EDX
// 004cf550: MOV word ptr [EBX],AX
// 004cf553: MOV EDI,dword ptr [ESP + 0x68]
//   Label: LAB_004cf553
//   XREF to: Stack[-0x70] (READ)
// 004cf557: MOV EBP,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xd4] (READ)
// 004cf55b: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004cf55f: ADD EBX,0x2
// 004cf562: INC EDI
// 004cf563: INC EBP
// 004cf564: MOV dword ptr [ESP + 0x68],EDI
//   XREF to: Stack[-0x70] (WRITE)
// 004cf568: MOV dword ptr [ESP + 0x4],EBP
//   XREF to: Stack[-0xd4] (WRITE)
// 004cf56c: CMP EDI,EDX
// 004cf56e: JLE 0x004cf38a
//   XREF to: 004cf38a (CONDITIONAL_JUMP)
// 004cf574: MOV EAX,dword ptr [ESP + 0xa8]
//   Label: LAB_004cf574
//   XREF to: Stack[-0x30] (READ)
// 004cf57b: MOV EDX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x74] (READ)
// 004cf57f: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xd4] (READ)
// 004cf583: ADD EAX,0x4
// 004cf586: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xcc] (READ)
// 004cf58a: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004cf591: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0xc4] (READ)
// 004cf595: INC EDX
// 004cf596: ADD ECX,EAX
// 004cf598: MOV dword ptr [ESP + 0x64],EDX
//   XREF to: Stack[-0x74] (WRITE)
// 004cf59c: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0xd4] (WRITE)
// 004cf5a0: CMP EDX,EBX
// 004cf5a2: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004cf5a8: JMP 0x004cf35b
//   XREF to: 004cf35b (UNCONDITIONAL_JUMP)
// 004cf5ad: MOV EBP,dword ptr [ESP + 0xc]
//   Label: LAB_004cf5ad
//   XREF to: Stack[-0xcc] (READ)
// 004cf5b1: MOV EDI,dword ptr [ESP + 0xe8]
//   XREF to: Stack[0x10] (READ)
// 004cf5b8: CMP EDI,EBP
// 004cf5ba: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004cf5c0: LEA ESI,[EDI*0x4 + 0x0]
// 004cf5c7: MOV EDX,dword ptr [ESP + 0xe4]
//   Label: LAB_004cf5c7
//   XREF to: Stack[0xc] (READ)
// 004cf5ce: MOV ECX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0xc] (READ)
// 004cf5d5: MOV EAX,dword ptr [ESI + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 004cf5db: ADD EDX,EDX
// 004cf5dd: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004cf5e1: ADD EDX,EAX
// 004cf5e3: CMP ECX,EBP
// 004cf5e5: JG 0x004cf618
//   XREF to: 004cf618 (CONDITIONAL_JUMP)
// 004cf5e7: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004cf5e7
//   XREF to: Stack[-0xd4] (READ)
// 004cf5eb: MOV AL,byte ptr [EAX]
// 004cf5ed: AND EAX,0xff
// 004cf5f2: CMP EAX,dword ptr [EBX + 0x3188]
// 004cf5f8: JZ 0x004cf603
//   XREF to: 004cf603 (CONDITIONAL_JUMP)
// 004cf5fa: MOV AX,[0x02d7b424]
//   XREF to: 02d7b424 (READ)
// 004cf600: MOV word ptr [EDX],AX
// 004cf603: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004cf603
//   XREF to: Stack[-0xd4] (READ)
// 004cf607: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004cf60b: INC ECX
// 004cf60c: INC EAX
// 004cf60d: ADD EDX,0x2
// 004cf610: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 004cf614: CMP ECX,EBP
// 004cf616: JLE 0x004cf5e7
//   XREF to: 004cf5e7 (CONDITIONAL_JUMP)
// 004cf618: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_004cf618
//   XREF to: Stack[-0xc4] (READ)
// 004cf61c: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xd4] (READ)
// 004cf620: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xcc] (READ)
// 004cf624: ADD ESI,0x4
// 004cf627: ADD EDX,EAX
// 004cf629: INC EDI
// 004cf62a: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0xd4] (WRITE)
// 004cf62e: CMP EDI,ECX
// 004cf630: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004cf636: JMP 0x004cf5c7
//   XREF to: 004cf5c7 (UNCONDITIONAL_JUMP)
// 004cf638: MOV AX,word ptr [ESI*0x2 + 0x2d01020]
//   Label: LAB_004cf638
//   XREF to: 02d01020 (DATA)
// 004cf640: MOV dword ptr [ESP + 0xb8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004cf647: CMP dword ptr [EBX + 0x1d64],0x0
// 004cf64e: JZ 0x004cf925
//   XREF to: 004cf925 (CONDITIONAL_JUMP)
// 004cf654: MOV EAX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[0x10] (READ)
// 004cf65b: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xcc] (READ)
// 004cf65f: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 004cf666: CMP EAX,ESI
// 004cf668: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004cf66e: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0xc8] (READ)
// 004cf672: LEA EAX,[EDX*0x4 + 0x0]
// 004cf679: SUB EAX,EDX
// 004cf67b: SHL EAX,0x8
// 004cf67e: ADD EBX,EAX
// 004cf680: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x58] (READ)
// 004cf687: SHL EAX,0x2
// 004cf68a: MOV dword ptr [ESP + 0x88],EBX
//   XREF to: Stack[-0x50] (WRITE)
// 004cf691: MOV dword ptr [ESP + 0xa4],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004cf698: MOV EBX,dword ptr [ESP + 0xa4]
//   Label: LAB_004cf698
//   XREF to: Stack[-0x34] (READ)
// 004cf69f: MOV EAX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0xc] (READ)
// 004cf6a6: MOV EBX,dword ptr [EBX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 004cf6ac: ADD EAX,EAX
// 004cf6ae: ADD EBX,EAX
// 004cf6b0: MOV EAX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0xc] (READ)
// 004cf6b7: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004cf6bb: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 004cf6c2: CMP EAX,ESI
// 004cf6c4: JG 0x004cf8e6
//   XREF to: 004cf8e6 (CONDITIONAL_JUMP)
// 004cf6ca: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004cf6ca
//   XREF to: Stack[-0xd4] (READ)
// 004cf6ce: MOV AL,byte ptr [EAX]
// 004cf6d0: AND EAX,0xff
// 004cf6d5: MOV ECX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x50] (READ)
// 004cf6dc: LEA EAX,[EAX + EAX*0x2]
// 004cf6df: ADD EAX,ECX
// 004cf6e1: MOV AL,byte ptr [EAX + 0x164]
// 004cf6e7: MOV EDX,dword ptr [0x006793b4]
//   XREF to: 006793b4 (READ)
// 004cf6ed: AND EAX,0xff
// 004cf6f2: IMUL EDX,EAX
// 004cf6f5: MOV EAX,EDX
// 004cf6f7: SAR EDX,0x1f
// 004cf6fa: SHL EDX,0x8
// 004cf6fd: SBB EAX,EDX
// 004cf6ff: SAR EAX,0x8
// 004cf702: TEST EAX,EAX
// 004cf704: JZ 0x004cf8bf
//   XREF to: 004cf8bf (CONDITIONAL_JUMP)
// 004cf70a: XOR ESI,ESI
// 004cf70c: MOV EDI,dword ptr [0x00682748]
//   XREF to: 00682748 (READ)
// 004cf712: MOV SI,word ptr [ESP + 0xb8]
//   XREF to: Stack[-0x20] (READ)
// 004cf71a: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 004cf720: AND EDI,ESI
// 004cf722: SHR EDI,CL
// 004cf724: MOV CL,byte ptr [0x02d01f2c]
//   XREF to: 02d01f2c (READ)
// 004cf72a: SHL EDI,CL
// 004cf72c: AND EDI,0xff
// 004cf732: IMUL EDI,EAX
// 004cf735: MOV DX,word ptr [EBX]
// 004cf738: MOV dword ptr [ESP + 0xb4],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 004cf73f: MOV EDX,dword ptr [0x00682750]
//   XREF to: 00682750 (READ)
// 004cf745: AND EDX,ESI
// 004cf747: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004cf74d: SHR EDX,CL
// 004cf74f: MOV CL,byte ptr [0x02d01f38]
//   XREF to: 02d01f38 (READ)
// 004cf755: SHL EDX,CL
// 004cf757: AND EDX,0xff
// 004cf75d: IMUL EDX,EAX
// 004cf760: AND ESI,dword ptr [0x00682758]
//   XREF to: 00682758 (READ)
// 004cf766: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004cf76c: SHR ESI,CL
// 004cf76e: MOV CL,byte ptr [0x02d01f44]
//   XREF to: 02d01f44 (READ)
// 004cf774: SHL ESI,CL
// 004cf776: AND ESI,0xff
// 004cf77c: MOV dword ptr [ESP + 0x8c],ESI
//   XREF to: Stack[-0x4c] (WRITE)
// 004cf783: XOR ESI,ESI
// 004cf785: MOV ECX,dword ptr [0x00682748]
//   XREF to: 00682748 (READ)
// 004cf78b: MOV SI,word ptr [ESP + 0xb4]
//   XREF to: Stack[-0x24] (READ)
// 004cf793: AND ECX,ESI
// 004cf795: MOV dword ptr [ESP + 0x98],ECX
//   XREF to: Stack[-0x40] (WRITE)
// 004cf79c: MOV EBP,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x40] (READ)
// 004cf7a3: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 004cf7a9: SHR EBP,CL
// 004cf7ab: MOV CL,byte ptr [0x02d01f2c]
//   XREF to: 02d01f2c (READ)
// 004cf7b1: SHL EBP,CL
// 004cf7b3: MOV ECX,EBP
// 004cf7b5: AND ECX,0xff
// 004cf7bb: MOV dword ptr [ESP + 0x90],ECX
//   XREF to: Stack[-0x48] (WRITE)
// 004cf7c2: MOV ECX,dword ptr [0x00682750]
//   XREF to: 00682750 (READ)
// 004cf7c8: AND ECX,ESI
// 004cf7ca: MOV dword ptr [ESP + 0x98],ECX
//   XREF to: Stack[-0x40] (WRITE)
// 004cf7d1: MOV EBP,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x40] (READ)
// 004cf7d8: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004cf7de: SHR EBP,CL
// 004cf7e0: MOV CL,byte ptr [0x02d01f38]
//   XREF to: 02d01f38 (READ)
// 004cf7e6: SHL EBP,CL
// 004cf7e8: MOV ECX,dword ptr [0x00682758]
//   XREF to: 00682758 (READ)
// 004cf7ee: AND ECX,ESI
// 004cf7f0: MOV dword ptr [ESP + 0x98],ECX
//   XREF to: Stack[-0x40] (WRITE)
// 004cf7f7: MOV ESI,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x40] (READ)
// 004cf7fe: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004cf804: SHR ESI,CL
// 004cf806: MOV CL,byte ptr [0x02d01f44]
//   XREF to: 02d01f44 (READ)
// 004cf80c: SHL ESI,CL
// 004cf80e: MOV ECX,ESI
// 004cf810: MOV ESI,0xff
// 004cf815: AND EBP,0xff
// 004cf81b: SUB ESI,EAX
// 004cf81d: IMUL EBP,ESI
// 004cf820: AND ECX,0xff
// 004cf826: MOV dword ptr [ESP + 0x94],ECX
//   XREF to: Stack[-0x44] (WRITE)
// 004cf82d: MOV ECX,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x48] (READ)
// 004cf834: IMUL ECX,ESI
// 004cf837: ADD EDX,EBP
// 004cf839: IMUL ESI,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x44] (READ)
// 004cf841: ADD EDI,ECX
// 004cf843: IMUL EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x4c] (READ)
// 004cf84b: ADD EAX,ESI
// 004cf84d: MOV EBP,EDX
// 004cf84f: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 004cf856: MOV ECX,EAX
// 004cf858: MOV EAX,EDI
// 004cf85a: XOR EDX,EDX
// 004cf85c: SHR EAX,0x8
// 004cf85f: MOV ESI,dword ptr [0x02d01f28]
//   XREF to: 02d01f28 (READ)
// 004cf865: MOV dword ptr [ESP + 0x9c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 004cf86c: DIV ESI
// 004cf86e: SHR EBP,0x8
// 004cf871: MOV EDI,dword ptr [0x02d01f34]
//   XREF to: 02d01f34 (READ)
// 004cf877: MOV dword ptr [ESP + 0x9c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 004cf87e: XOR EDX,EDX
// 004cf880: MOV EAX,EBP
// 004cf882: DIV EDI
// 004cf884: SHR ECX,0x8
// 004cf887: MOV EBP,dword ptr [0x02d01f40]
//   XREF to: 02d01f40 (READ)
// 004cf88d: MOV EDI,EAX
// 004cf88f: XOR EDX,EDX
// 004cf891: MOV EAX,ECX
// 004cf893: DIV EBP
// 004cf895: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 004cf89b: MOV EDX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x3c] (READ)
// 004cf8a2: MOV ESI,EAX
// 004cf8a4: MOV EAX,EDI
// 004cf8a6: SHL EDX,CL
// 004cf8a8: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004cf8ae: SHL EAX,CL
// 004cf8b0: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004cf8b6: OR EAX,EDX
// 004cf8b8: SHL ESI,CL
// 004cf8ba: OR EAX,ESI
// 004cf8bc: MOV word ptr [EBX],AX
// 004cf8bf: MOV EDI,dword ptr [ESP + 0x84]
//   Label: LAB_004cf8bf
//   XREF to: Stack[-0x54] (READ)
// 004cf8c6: MOV EBP,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xd4] (READ)
// 004cf8ca: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004cf8ce: ADD EBX,0x2
// 004cf8d1: INC EDI
// 004cf8d2: INC EBP
// 004cf8d3: MOV dword ptr [ESP + 0x84],EDI
//   XREF to: Stack[-0x54] (WRITE)
// 004cf8da: MOV dword ptr [ESP + 0x4],EBP
//   XREF to: Stack[-0xd4] (WRITE)
// 004cf8de: CMP EDI,EDX
// 004cf8e0: JLE 0x004cf6ca
//   XREF to: 004cf6ca (CONDITIONAL_JUMP)
// 004cf8e6: MOV EAX,dword ptr [ESP + 0xa4]
//   Label: LAB_004cf8e6
//   XREF to: Stack[-0x34] (READ)
// 004cf8ed: MOV EDX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x58] (READ)
// 004cf8f4: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xd4] (READ)
// 004cf8f8: ADD EAX,0x4
// 004cf8fb: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xcc] (READ)
// 004cf8ff: MOV dword ptr [ESP + 0xa4],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004cf906: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0xc4] (READ)
// 004cf90a: INC EDX
// 004cf90b: ADD ECX,EAX
// 004cf90d: MOV dword ptr [ESP + 0x80],EDX
//   XREF to: Stack[-0x58] (WRITE)
// 004cf914: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0xd4] (WRITE)
// 004cf918: CMP EDX,EBX
// 004cf91a: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004cf920: JMP 0x004cf698
//   XREF to: 004cf698 (UNCONDITIONAL_JUMP)
// 004cf925: MOV ECX,dword ptr [ESP + 0xc]
//   Label: LAB_004cf925
//   XREF to: Stack[-0xcc] (READ)
// 004cf929: MOV EDI,dword ptr [ESP + 0xe8]
//   XREF to: Stack[0x10] (READ)
// 004cf930: CMP EDI,ECX
// 004cf932: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004cf938: MOV ESI,EDX
// 004cf93a: MOV EDX,dword ptr [ESP + 0xe4]
//   Label: LAB_004cf93a
//   XREF to: Stack[0xc] (READ)
// 004cf941: MOV ECX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0xc] (READ)
// 004cf948: MOV EAX,dword ptr [ESI + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 004cf94e: ADD EDX,EDX
// 004cf950: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004cf954: ADD EDX,EAX
// 004cf956: CMP ECX,EBP
// 004cf958: JG 0x004cf98c
//   XREF to: 004cf98c (CONDITIONAL_JUMP)
// 004cf95a: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004cf95a
//   XREF to: Stack[-0xd4] (READ)
// 004cf95e: MOV AL,byte ptr [EAX]
// 004cf960: AND EAX,0xff
// 004cf965: CMP EAX,dword ptr [EBX + 0x3188]
// 004cf96b: JZ 0x004cf977
//   XREF to: 004cf977 (CONDITIONAL_JUMP)
// 004cf96d: MOV EAX,dword ptr [ESP + 0xb8]
//   XREF to: Stack[-0x20] (READ)
// 004cf974: MOV word ptr [EDX],AX
// 004cf977: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004cf977
//   XREF to: Stack[-0xd4] (READ)
// 004cf97b: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004cf97f: INC ECX
// 004cf980: INC EAX
// 004cf981: ADD EDX,0x2
// 004cf984: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 004cf988: CMP ECX,EBP
// 004cf98a: JLE 0x004cf95a
//   XREF to: 004cf95a (CONDITIONAL_JUMP)
// 004cf98c: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_004cf98c
//   XREF to: Stack[-0xc4] (READ)
// 004cf990: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xd4] (READ)
// 004cf994: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xcc] (READ)
// 004cf998: ADD ESI,0x4
// 004cf99b: ADD EDX,EAX
// 004cf99d: INC EDI
// 004cf99e: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0xd4] (WRITE)
// 004cf9a2: CMP EDI,ECX
// 004cf9a4: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004cf9aa: JMP 0x004cf93a
//   XREF to: 004cf93a (UNCONDITIONAL_JUMP)
// 004cf9ac: CMP EDI,0x20
//   Label: LAB_004cf9ac
// 004cf9af: JNZ 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004cf9b5: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0xc8] (READ)
// 004cf9b9: LEA EBP,[EBX + 0xd64]
// 004cf9bf: SHL EAX,0xa
// 004cf9c2: MOV ECX,dword ptr [ESP + 0xec]
//   XREF to: Stack[0x14] (READ)
// 004cf9c9: ADD EBP,EAX
// 004cf9cb: CMP ECX,-0x1
// 004cf9ce: JNZ 0x004cfafd
//   XREF to: 004cfafd (CONDITIONAL_JUMP)
// 004cf9d4: MOV EDI,dword ptr [EBX + 0x1d64]
// 004cf9da: LEA ESI,[EBX + EAX*0x1]
// 004cf9dd: TEST EDI,EDI
// 004cf9df: JZ 0x004cfa78
//   XREF to: 004cfa78 (CONDITIONAL_JUMP)
// 004cf9e5: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xcc] (READ)
// 004cf9e9: MOV EDI,dword ptr [ESP + 0xe8]
//   XREF to: Stack[0x10] (READ)
// 004cf9f0: CMP EDI,ECX
// 004cf9f2: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004cf9f8: MOV EBX,EDX
// 004cf9fa: MOV EAX,dword ptr [ESP + 0xe4]
//   Label: LAB_004cf9fa
//   XREF to: Stack[0xc] (READ)
// 004cfa01: MOV EDX,dword ptr [EBX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 004cfa07: SHL EAX,0x2
// 004cfa0a: ADD EDX,EAX
// 004cfa0c: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xd4] (READ)
// 004cfa10: MOV AL,byte ptr [EAX]
// 004cfa12: AND EAX,0xff
// 004cfa17: MOV ECX,dword ptr [ESI + EAX*0x4 + 0xd64]
// 004cfa1e: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004cfa22: PUSH ECX
// 004cfa23: SUB EAX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[0xc] (READ)
// 004cfa2a: INC EAX
// 004cfa2b: PUSH EAX
// 004cfa2c: PUSH EBP
// 004cfa2d: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0xd4] (READ)
// 004cfa31: PUSH EAX
// 004cfa32: PUSH EDX
// 004cfa33: CALL engine_font.cpp_drawAlphaBlendedPixels_FUN_004ce240
//   XREF to: 004ce240 (UNCONDITIONAL_CALL)
// 004cfa38: ADD ESP,0x14
// 004cfa3b: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004cfa3f: SUB EAX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0xc] (READ)
// 004cfa46: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xd4] (READ)
// 004cfa4a: INC EAX
// 004cfa4b: ADD EBX,0x4
// 004cfa4e: ADD ECX,EAX
// 004cfa50: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0xc4] (READ)
// 004cfa54: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0xd4] (WRITE)
// 004cfa58: LEA EDX,[ECX + EAX*0x1]
// 004cfa5b: INC EDI
// 004cfa5c: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xcc] (READ)
// 004cfa60: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0xd4] (WRITE)
// 004cfa64: CMP EDI,ECX
// 004cfa66: JLE 0x004cf9fa
//   XREF to: 004cf9fa (CONDITIONAL_JUMP)
// 004cfa68: MOV EBX,dword ptr [ESP]
//   XREF to: Stack[-0xd8] (DATA)
// 004cfa6b: MOV EAX,EBX
// 004cfa6d: ADD ESP,0xc8
// 004cfa73: POP EBP
// 004cfa74: POP EDI
// 004cfa75: POP ESI
// 004cfa76: POP EBX
// 004cfa77: RET
// 004cfa78: MOV EBP,dword ptr [ESP + 0xc]
//   Label: LAB_004cfa78
//   XREF to: Stack[-0xcc] (READ)
// 004cfa7c: MOV EDI,dword ptr [ESP + 0xe8]
//   XREF to: Stack[0x10] (READ)
// 004cfa83: CMP EDI,EBP
// 004cfa85: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004cfa8b: MOV EBP,EDX
// 004cfa8d: MOV EAX,dword ptr [ESP + 0xe4]
//   Label: LAB_004cfa8d
//   XREF to: Stack[0xc] (READ)
// 004cfa94: MOV EDX,dword ptr [EBP + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 004cfa9a: SHL EAX,0x2
// 004cfa9d: MOV ECX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0xc] (READ)
// 004cfaa4: ADD EDX,EAX
// 004cfaa6: CMP ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004cfaaa: JG 0x004cfadd
//   XREF to: 004cfadd (CONDITIONAL_JUMP)
// 004cfaac: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004cfaac
//   XREF to: Stack[-0xd4] (READ)
// 004cfab0: MOV AL,byte ptr [EAX]
// 004cfab2: AND EAX,0xff
// 004cfab7: CMP EAX,dword ptr [EBX + 0x3188]
// 004cfabd: JZ 0x004cfac8
//   XREF to: 004cfac8 (CONDITIONAL_JUMP)
// 004cfabf: MOV EAX,dword ptr [ESI + EAX*0x4 + 0xd64]
// 004cfac6: MOV dword ptr [EDX],EAX
// 004cfac8: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004cfac8
//   XREF to: Stack[-0xd4] (READ)
// 004cfacc: INC EAX
// 004cfacd: INC ECX
// 004cface: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 004cfad2: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004cfad6: ADD EDX,0x4
// 004cfad9: CMP ECX,EAX
// 004cfadb: JLE 0x004cfaac
//   XREF to: 004cfaac (CONDITIONAL_JUMP)
// 004cfadd: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_004cfadd
//   XREF to: Stack[-0xc4] (READ)
// 004cfae1: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xd4] (READ)
// 004cfae5: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xcc] (READ)
// 004cfae9: ADD EBP,0x4
// 004cfaec: ADD EDX,EAX
// 004cfaee: INC EDI
// 004cfaef: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0xd4] (WRITE)
// 004cfaf3: CMP EDI,ECX
// 004cfaf5: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004cfafb: JMP 0x004cfa8d
//   XREF to: 004cfa8d (UNCONDITIONAL_JUMP)
// 004cfafd: CMP ECX,-0x2
//   Label: LAB_004cfafd
// 004cfb00: JNZ 0x004cfc25
//   XREF to: 004cfc25 (CONDITIONAL_JUMP)
// 004cfb06: CMP dword ptr [EBX + 0x1d64],0x0
// 004cfb0d: JZ 0x004cfba0
//   XREF to: 004cfba0 (CONDITIONAL_JUMP)
// 004cfb13: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xcc] (READ)
// 004cfb17: MOV EDI,dword ptr [ESP + 0xe8]
//   XREF to: Stack[0x10] (READ)
// 004cfb1e: CMP EDI,ECX
// 004cfb20: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004cfb26: MOV EBX,EDX
// 004cfb28: MOV ESI,EBP
// 004cfb2a: MOV EDX,dword ptr [ESP + 0xe4]
//   Label: LAB_004cfb2a
//   XREF to: Stack[0xc] (READ)
// 004cfb31: MOV EAX,dword ptr [EBX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 004cfb37: SHL EDX,0x2
// 004cfb3a: MOV EBP,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0xc] (READ)
// 004cfb41: ADD EDX,EAX
// 004cfb43: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004cfb47: MOV ECX,dword ptr [0x02d7b414]
//   XREF to: 02d7b414 (READ)
// 004cfb4d: SUB EAX,EBP
// 004cfb4f: PUSH ECX
// 004cfb50: INC EAX
// 004cfb51: PUSH EAX
// 004cfb52: PUSH ESI
// 004cfb53: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0xd4] (READ)
// 004cfb57: PUSH EAX
// 004cfb58: PUSH EDX
// 004cfb59: CALL engine_font.cpp_drawAlphaBlendedPixels_FUN_004ce240
//   XREF to: 004ce240 (UNCONDITIONAL_CALL)
// 004cfb5e: ADD ESP,0x14
// 004cfb61: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004cfb65: MOV EDX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0xc] (READ)
// 004cfb6c: ADD EBX,0x4
// 004cfb6f: SUB EAX,EDX
// 004cfb71: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xd4] (READ)
// 004cfb75: INC EAX
// 004cfb76: INC EDI
// 004cfb77: ADD ECX,EAX
// 004cfb79: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0xc4] (READ)
// 004cfb7d: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0xd4] (WRITE)
// 004cfb81: LEA EBP,[ECX + EAX*0x1]
// 004cfb84: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xcc] (READ)
// 004cfb88: MOV dword ptr [ESP + 0x4],EBP
//   XREF to: Stack[-0xd4] (WRITE)
// 004cfb8c: CMP EDI,EAX
// 004cfb8e: JLE 0x004cfb2a
//   XREF to: 004cfb2a (CONDITIONAL_JUMP)
// 004cfb90: MOV EBX,dword ptr [ESP]
//   XREF to: Stack[-0xd8] (DATA)
// 004cfb93: MOV EAX,EBX
// 004cfb95: ADD ESP,0xc8
// 004cfb9b: POP EBP
// 004cfb9c: POP EDI
// 004cfb9d: POP ESI
// 004cfb9e: POP EBX
// 004cfb9f: RET
// 004cfba0: MOV EBP,dword ptr [ESP + 0xc]
//   Label: LAB_004cfba0
//   XREF to: Stack[-0xcc] (READ)
// 004cfba4: MOV EDI,dword ptr [ESP + 0xe8]
//   XREF to: Stack[0x10] (READ)
// 004cfbab: CMP EDI,EBP
// 004cfbad: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004cfbb3: MOV ESI,EDX
// 004cfbb5: MOV ECX,dword ptr [ESP + 0xe4]
//   Label: LAB_004cfbb5
//   XREF to: Stack[0xc] (READ)
// 004cfbbc: MOV EDX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0xc] (READ)
// 004cfbc3: MOV EAX,dword ptr [ESI + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 004cfbc9: SHL ECX,0x2
// 004cfbcc: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004cfbd0: ADD ECX,EAX
// 004cfbd2: CMP EDX,EBP
// 004cfbd4: JG 0x004cfc05
//   XREF to: 004cfc05 (CONDITIONAL_JUMP)
// 004cfbd6: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004cfbd6
//   XREF to: Stack[-0xd4] (READ)
// 004cfbda: MOV AL,byte ptr [EAX]
// 004cfbdc: AND EAX,0xff
// 004cfbe1: CMP EAX,dword ptr [EBX + 0x3188]
// 004cfbe7: JZ 0x004cfbf0
//   XREF to: 004cfbf0 (CONDITIONAL_JUMP)
// 004cfbe9: MOV EAX,[0x02d7b414]
//   XREF to: 02d7b414 (READ)
// 004cfbee: MOV dword ptr [ECX],EAX
// 004cfbf0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004cfbf0
//   XREF to: Stack[-0xd4] (READ)
// 004cfbf4: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004cfbf8: INC EDX
// 004cfbf9: INC EAX
// 004cfbfa: ADD ECX,0x4
// 004cfbfd: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 004cfc01: CMP EDX,EBP
// 004cfc03: JLE 0x004cfbd6
//   XREF to: 004cfbd6 (CONDITIONAL_JUMP)
// 004cfc05: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_004cfc05
//   XREF to: Stack[-0xc4] (READ)
// 004cfc09: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xd4] (READ)
// 004cfc0d: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xcc] (READ)
// 004cfc11: ADD ESI,0x4
// 004cfc14: ADD EDX,EAX
// 004cfc16: INC EDI
// 004cfc17: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0xd4] (WRITE)
// 004cfc1b: CMP EDI,ECX
// 004cfc1d: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004cfc23: JMP 0x004cfbb5
//   XREF to: 004cfbb5 (UNCONDITIONAL_JUMP)
// 004cfc25: CMP ECX,-0x3
//   Label: LAB_004cfc25
// 004cfc28: JNZ 0x004cfd4d
//   XREF to: 004cfd4d (CONDITIONAL_JUMP)
// 004cfc2e: CMP dword ptr [EBX + 0x1d64],0x0
// 004cfc35: JZ 0x004cfcc8
//   XREF to: 004cfcc8 (CONDITIONAL_JUMP)
// 004cfc3b: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xcc] (READ)
// 004cfc3f: MOV EDI,dword ptr [ESP + 0xe8]
//   XREF to: Stack[0x10] (READ)
// 004cfc46: CMP EDI,ECX
// 004cfc48: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004cfc4e: MOV EBX,EDX
// 004cfc50: MOV ESI,EBP
// 004cfc52: MOV EAX,dword ptr [ESP + 0xe4]
//   Label: LAB_004cfc52
//   XREF to: Stack[0xc] (READ)
// 004cfc59: MOV EDX,dword ptr [EBX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 004cfc5f: SHL EAX,0x2
// 004cfc62: MOV ECX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0xc] (READ)
// 004cfc69: ADD EDX,EAX
// 004cfc6b: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004cfc6f: MOV EBP,dword ptr [0x02d7b424]
//   XREF to: 02d7b424 (READ)
// 004cfc75: SUB EAX,ECX
// 004cfc77: PUSH EBP
// 004cfc78: INC EAX
// 004cfc79: PUSH EAX
// 004cfc7a: PUSH ESI
// 004cfc7b: MOV EBP,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0xd4] (READ)
// 004cfc7f: PUSH EBP
// 004cfc80: PUSH EDX
// 004cfc81: CALL engine_font.cpp_drawAlphaBlendedPixels_FUN_004ce240
//   XREF to: 004ce240 (UNCONDITIONAL_CALL)
// 004cfc86: ADD ESP,0x14
// 004cfc89: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004cfc8d: MOV EDX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0xc] (READ)
// 004cfc94: ADD EBX,0x4
// 004cfc97: SUB EAX,EDX
// 004cfc99: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xd4] (READ)
// 004cfc9d: INC EAX
// 004cfc9e: INC EDI
// 004cfc9f: ADD ECX,EAX
// 004cfca1: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0xc4] (READ)
// 004cfca5: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0xd4] (WRITE)
// 004cfca9: LEA EBP,[ECX + EAX*0x1]
// 004cfcac: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xcc] (READ)
// 004cfcb0: MOV dword ptr [ESP + 0x4],EBP
//   XREF to: Stack[-0xd4] (WRITE)
// 004cfcb4: CMP EDI,EAX
// 004cfcb6: JLE 0x004cfc52
//   XREF to: 004cfc52 (CONDITIONAL_JUMP)
// 004cfcb8: MOV EBX,dword ptr [ESP]
//   XREF to: Stack[-0xd8] (DATA)
// 004cfcbb: MOV EAX,EBX
// 004cfcbd: ADD ESP,0xc8
// 004cfcc3: POP EBP
// 004cfcc4: POP EDI
// 004cfcc5: POP ESI
// 004cfcc6: POP EBX
// 004cfcc7: RET
// 004cfcc8: MOV EBP,dword ptr [ESP + 0xc]
//   Label: LAB_004cfcc8
//   XREF to: Stack[-0xcc] (READ)
// 004cfccc: MOV EDI,dword ptr [ESP + 0xe8]
//   XREF to: Stack[0x10] (READ)
// 004cfcd3: CMP EDI,EBP
// 004cfcd5: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004cfcdb: MOV ESI,EDX
// 004cfcdd: MOV EDX,dword ptr [ESP + 0xe4]
//   Label: LAB_004cfcdd
//   XREF to: Stack[0xc] (READ)
// 004cfce4: MOV ECX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0xc] (READ)
// 004cfceb: MOV EAX,dword ptr [ESI + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 004cfcf1: SHL EDX,0x2
// 004cfcf4: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004cfcf8: ADD EDX,EAX
// 004cfcfa: CMP ECX,EBP
// 004cfcfc: JG 0x004cfd2d
//   XREF to: 004cfd2d (CONDITIONAL_JUMP)
// 004cfcfe: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004cfcfe
//   XREF to: Stack[-0xd4] (READ)
// 004cfd02: MOV AL,byte ptr [EAX]
// 004cfd04: AND EAX,0xff
// 004cfd09: CMP EAX,dword ptr [EBX + 0x3188]
// 004cfd0f: JZ 0x004cfd18
//   XREF to: 004cfd18 (CONDITIONAL_JUMP)
// 004cfd11: MOV EAX,[0x02d7b424]
//   XREF to: 02d7b424 (READ)
// 004cfd16: MOV dword ptr [EDX],EAX
// 004cfd18: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004cfd18
//   XREF to: Stack[-0xd4] (READ)
// 004cfd1c: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004cfd20: INC ECX
// 004cfd21: INC EAX
// 004cfd22: ADD EDX,0x4
// 004cfd25: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 004cfd29: CMP ECX,EBP
// 004cfd2b: JLE 0x004cfcfe
//   XREF to: 004cfcfe (CONDITIONAL_JUMP)
// 004cfd2d: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_004cfd2d
//   XREF to: Stack[-0xc4] (READ)
// 004cfd31: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xd4] (READ)
// 004cfd35: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xcc] (READ)
// 004cfd39: ADD ESI,0x4
// 004cfd3c: ADD EDX,EAX
// 004cfd3e: INC EDI
// 004cfd3f: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0xd4] (WRITE)
// 004cfd43: CMP EDI,ECX
// 004cfd45: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004cfd4b: JMP 0x004cfcdd
//   XREF to: 004cfcdd (UNCONDITIONAL_JUMP)
// 004cfd4d: MOV EAX,dword ptr [EBX + 0x1d64]
//   Label: LAB_004cfd4d
// 004cfd53: MOV ESI,dword ptr [ECX*0x4 + 0x2d01220]
//   XREF to: 02d01220 (DATA)
// 004cfd5a: TEST EAX,EAX
// 004cfd5c: JZ 0x004cfde5
//   XREF to: 004cfde5 (CONDITIONAL_JUMP)
// 004cfd62: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xcc] (READ)
// 004cfd66: MOV EDI,dword ptr [ESP + 0xe8]
//   XREF to: Stack[0x10] (READ)
// 004cfd6d: CMP EDI,EBX
// 004cfd6f: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004cfd75: MOV EBX,EDX
// 004cfd77: MOV EDX,dword ptr [ESP + 0xe4]
//   Label: LAB_004cfd77
//   XREF to: Stack[0xc] (READ)
// 004cfd7e: MOV EAX,dword ptr [EBX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 004cfd84: SHL EDX,0x2
// 004cfd87: MOV ECX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0xc] (READ)
// 004cfd8e: ADD EDX,EAX
// 004cfd90: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004cfd94: SUB EAX,ECX
// 004cfd96: PUSH ESI
// 004cfd97: INC EAX
// 004cfd98: PUSH EAX
// 004cfd99: PUSH EBP
// 004cfd9a: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0xd4] (READ)
// 004cfd9e: PUSH EAX
// 004cfd9f: PUSH EDX
// 004cfda0: CALL engine_font.cpp_drawAlphaBlendedPixels_FUN_004ce240
//   XREF to: 004ce240 (UNCONDITIONAL_CALL)
// 004cfda5: ADD ESP,0x14
// 004cfda8: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004cfdac: SUB EAX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0xc] (READ)
// 004cfdb3: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xd4] (READ)
// 004cfdb7: INC EAX
// 004cfdb8: ADD EBX,0x4
// 004cfdbb: ADD ECX,EAX
// 004cfdbd: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0xc4] (READ)
// 004cfdc1: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0xd4] (WRITE)
// 004cfdc5: LEA EDX,[ECX + EAX*0x1]
// 004cfdc8: INC EDI
// 004cfdc9: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xcc] (READ)
// 004cfdcd: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0xd4] (WRITE)
// 004cfdd1: CMP EDI,ECX
// 004cfdd3: JLE 0x004cfd77
//   XREF to: 004cfd77 (CONDITIONAL_JUMP)
// 004cfdd5: MOV EBX,dword ptr [ESP]
//   XREF to: Stack[-0xd8] (DATA)
// 004cfdd8: MOV EAX,EBX
// 004cfdda: ADD ESP,0xc8
// 004cfde0: POP EBP
// 004cfde1: POP EDI
// 004cfde2: POP ESI
// 004cfde3: POP EBX
// 004cfde4: RET
// 004cfde5: MOV EAX,dword ptr [ESP + 0xe8]
//   Label: LAB_004cfde5
//   XREF to: Stack[0x10] (READ)
// 004cfdec: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xcc] (READ)
// 004cfdf0: MOV dword ptr [ESP + 0xa0],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 004cfdf7: CMP EAX,ECX
// 004cfdf9: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004cfdff: MOV EDI,EDX
// 004cfe01: MOV EAX,dword ptr [ESP + 0xe4]
//   Label: LAB_004cfe01
//   XREF to: Stack[0xc] (READ)
// 004cfe08: MOV EDX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0xc] (READ)
// 004cfe0f: MOV ECX,dword ptr [EDI + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 004cfe15: SHL EAX,0x2
// 004cfe18: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004cfe1c: ADD ECX,EAX
// 004cfe1e: CMP EDX,EBP
// 004cfe20: JG 0x004cfe4c
//   XREF to: 004cfe4c (CONDITIONAL_JUMP)
// 004cfe22: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004cfe22
//   XREF to: Stack[-0xd4] (READ)
// 004cfe26: MOV AL,byte ptr [EAX]
// 004cfe28: AND EAX,0xff
// 004cfe2d: CMP EAX,dword ptr [EBX + 0x3188]
// 004cfe33: JZ 0x004cfe37
//   XREF to: 004cfe37 (CONDITIONAL_JUMP)
// 004cfe35: MOV dword ptr [ECX],ESI
// 004cfe37: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004cfe37
//   XREF to: Stack[-0xd4] (READ)
// 004cfe3b: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 004cfe3f: INC EDX
// 004cfe40: INC EAX
// 004cfe41: ADD ECX,0x4
// 004cfe44: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 004cfe48: CMP EDX,EBP
// 004cfe4a: JLE 0x004cfe22
//   XREF to: 004cfe22 (CONDITIONAL_JUMP)
// 004cfe4c: MOV EBP,dword ptr [ESP + 0xa0]
//   Label: LAB_004cfe4c
//   XREF to: Stack[-0x38] (READ)
// 004cfe53: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0xc4] (READ)
// 004cfe57: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xd4] (READ)
// 004cfe5b: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xcc] (READ)
// 004cfe5f: ADD EDI,0x4
// 004cfe62: INC EBP
// 004cfe63: ADD EDX,EAX
// 004cfe65: MOV dword ptr [ESP + 0xa0],EBP
//   XREF to: Stack[-0x38] (WRITE)
// 004cfe6c: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0xd4] (WRITE)
// 004cfe70: CMP EBP,ECX
// 004cfe72: JG 0x004ce9a0
//   XREF to: 004ce9a0 (CONDITIONAL_JUMP)
// 004cfe78: JMP 0x004cfe01
//   XREF to: 004cfe01 (UNCONDITIONAL_JUMP)
