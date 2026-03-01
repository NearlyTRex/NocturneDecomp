// Name: engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0
// Address: 004ce7a0
// Address Range: [[004ce7a0, 004cfe79]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(CBitFont *this_ptr,int character_code,int x,int y,int color_mode,int color_value)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(CBitFont *this_ptr,int character_code,int x,int y,int color_mode,int color_value)

{
  ushort uVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  ushort *puVar5;
  int *piVar6;
  int iVar7;
  uchar *puVar8;
  byte *puVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  ushort *puVar13;
  uint (*color_table) [256];
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
  iVar2 = this_ptr->char_widths[character_code] + this_ptr->char_spacing;
  if (this_ptr->char_positions[character_code] == 0) {
    return iVar2;
  }
  if (color_value != -1) {
    engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0
              (this_ptr,character_code,x + this_ptr->shadow_offset_x,y + this_ptr->shadow_offset_y,
               color_value,-1);
  }
  local_d4 = (byte *)this_ptr->char_positions[character_code];
  y = y + this_ptr->char_y_offsets[character_code];
  local_d0 = x + this_ptr->char_widths[character_code] + -1;
  local_cc = y + -1 + this_ptr->char_heights[character_code];
  local_c8 = this_ptr->char_bitmap_index[character_code];
  iVar14 = this_ptr->bitmap_widths[local_c8];
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
    iVar7 = engine_font_cpp_clipCharacter_FUN_004ccdd0
                      ((int *)&local_d4,&x,&y,&local_d0,&local_cc,iVar14);
    if (iVar7 != 0) {
      return iVar2;
    }
  }
  iVar7 = local_c8;
  local_c4 = iVar14 - ((local_d0 - x) + 1);
  if ((this_ptr->use_3d_rendering != 0) && (g_UseExternalRenderer != 0)) {
    engine_font_cpp_CBitFont_render3DCharacter_FUN_004ce2d0
              (this_ptr,character_code,x,y,local_d0,local_cc,color_mode);
    return iVar2;
  }
  if (g_BitsPerPixel == 8) {
    if (color_mode == -1) {
      local_c0 = y;
      if (y <= local_cc) {
        iVar14 = y * 4;
        do {
          pbVar3 = (byte *)(*(int *)((int)g_ScreenBufferArray + iVar14) + x);
          for (iVar7 = x; iVar7 <= local_d0; iVar7 = iVar7 + 1) {
            if ((uint)*local_d4 != this_ptr->load_flags) {
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
          puVar8 = (uchar *)(*(int *)((int)g_ScreenBufferArray + iVar14) + x);
          for (iVar7 = x; iVar7 <= local_d0; iVar7 = iVar7 + 1) {
            if ((uint)*local_d4 != this_ptr->load_flags) {
              *puVar8 = g_ShadowColor8;
            }
            puVar8 = puVar8 + 1;
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
          puVar9 = (byte *)(*(int *)((int)g_ScreenBufferArray + iVar14) + x);
          for (iVar7 = x; iVar7 <= local_d0; iVar7 = iVar7 + 1) {
            if ((uint)*local_d4 != this_ptr->load_flags) {
              *puVar9 = (byte)g_DefaultTextColor;
            }
            puVar9 = puVar9 + 1;
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
          puVar9 = (byte *)(*(int *)((int)g_ScreenBufferArray + iVar14) + x);
          for (iVar7 = x; iVar7 <= local_d0; iVar7 = iVar7 + 1) {
            if ((uint)*local_d4 != this_ptr->load_flags) {
              *puVar9 = (byte)color_mode;
            }
            puVar9 = puVar9 + 1;
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
    if (g_BitsPerPixel == 0x10) {
      if (color_mode == -1) {
        if (this_ptr->is_initialized == 0) {
          if (y <= local_cc) {
            iVar14 = y * 4;
            do {
              puVar5 = (ushort *)(*(int *)((int)g_ScreenBufferArray + iVar14) + x * 2);
              for (iVar7 = x; iVar7 <= local_d0; iVar7 = iVar7 + 1) {
                if ((uint)*local_d4 != this_ptr->load_flags) {
                  *puVar5 = (short)this_ptr->palettes_display[local_c8][*local_d4];
                }
                local_d4 = local_d4 + 1;
                puVar5 = puVar5 + 1;
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
              puVar13 = (ushort *)(*(int *)((int)g_ScreenBufferArray + local_28) + x * 2);
              for (iVar14 = x; iVar14 <= local_d0; iVar14 = iVar14 + 1) {
                uVar4 = (uint)*local_d4;
                iVar7 = g_CurrentAlphaValue *
                        (uint)(byte)this_ptr->palette_data[uVar4 * 3 + local_c8 * 0x300];
                iVar10 = iVar7 >> 0x1f;
                iVar7 = (int)((iVar7 + iVar10 * -0x100) - (uint)(iVar10 << 7 < 0)) >> 8;
                if (iVar7 != 0) {
                  uVar11 = (uint)*puVar13;
                  iVar10 = 0xff - iVar7;
                  *puVar13 = (ushort)(((((this_ptr->palettes_display[local_c8][uVar4] &
                                         g_GreenMask16.u32[0]) >>
                                        (g_GreenBitPosition.bytes[0] & 0x1f)) <<
                                        (g_GreenBitCount.bytes[0] & 0x1f) & 0xff) * iVar7 +
                                       (((g_GreenMask16.u32[0] & uVar11) >>
                                        (g_GreenBitPosition.bytes[0] & 0x1f)) <<
                                        (g_GreenBitCount.bytes[0] & 0x1f) & 0xff) * iVar10 >> 8) /
                                      (uint)g_GreenScaleFactor <<
                                     (g_GreenBitPosition.bytes[0] & 0x1f)) |
                             (ushort)(((((this_ptr->palettes_display[local_c8][uVar4] &
                                         g_RedMask16.u32[0]) >> (g_RedBitPosition.bytes[0] & 0x1f))
                                        << (g_RedBitCount.bytes[0] & 0x1f) & 0xff) * iVar7 +
                                       (((g_RedMask16.u32[0] & uVar11) >>
                                        (g_RedBitPosition.bytes[0] & 0x1f)) <<
                                        (g_RedBitCount.bytes[0] & 0x1f) & 0xff) * iVar10 >> 8) /
                                      (uint)g_RedScaleFactor << (g_RedBitPosition.bytes[0] & 0x1f))
                             | (ushort)(((((this_ptr->palettes_display[local_c8][uVar4] &
                                           g_BlueMask16.u32[0]) >>
                                          (g_BlueBitPosition.bytes[0] & 0x1f)) <<
                                          (g_BlueBitCount.bytes[0] & 0x1f) & 0xff) * iVar7 +
                                         iVar10 * (((g_BlueMask16.u32[0] & uVar11) >>
                                                   (g_BlueBitPosition.bytes[0] & 0x1f)) <<
                                                   (g_BlueBitCount.bytes[0] & 0x1f) & 0xff) >> 8) /
                                        (uint)g_BlueScaleFactor <<
                                       (g_BlueBitPosition.bytes[0] & 0x1f));
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
        if (this_ptr->is_initialized == 0) {
          if (y <= local_cc) {
            iVar14 = y * 4;
            do {
              puVar13 = (ushort *)(*(int *)((int)g_ScreenBufferArray + iVar14) + x * 2);
              for (iVar7 = x; iVar7 <= local_d0; iVar7 = iVar7 + 1) {
                if ((uint)*local_d4 != this_ptr->load_flags) {
                  *puVar13 = g_ShadowColor16;
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
              puVar13 = (ushort *)(x * 2 + *(int *)((int)g_ScreenBufferArray + local_2c));
              for (iVar14 = x; iVar14 <= local_d0; iVar14 = iVar14 + 1) {
                iVar7 = g_CurrentAlphaValue *
                        (uint)(byte)this_ptr->palette_data[(uint)*local_d4 * 3 + local_c8 * 0x300];
                iVar10 = iVar7 >> 0x1f;
                iVar7 = (int)((iVar7 + iVar10 * -0x100) - (uint)(iVar10 << 7 < 0)) >> 8;
                if (iVar7 != 0) {
                  uVar4 = (uint)g_ShadowColor16;
                  uVar11 = (uint)*puVar13;
                  iVar10 = 0xff - iVar7;
                  *puVar13 = (ushort)(((((g_GreenMask16.u32[0] & uVar4) >>
                                        (g_GreenBitPosition.bytes[0] & 0x1f)) <<
                                        (g_GreenBitCount.bytes[0] & 0x1f) & 0xff) * iVar7 +
                                       (((g_GreenMask16.u32[0] & uVar11) >>
                                        (g_GreenBitPosition.bytes[0] & 0x1f)) <<
                                        (g_GreenBitCount.bytes[0] & 0x1f) & 0xff) * iVar10 >> 8) /
                                      (uint)g_GreenScaleFactor <<
                                     (g_GreenBitPosition.bytes[0] & 0x1f)) |
                             (ushort)(((((g_RedMask16.u32[0] & uVar4) >>
                                        (g_RedBitPosition.bytes[0] & 0x1f)) <<
                                        (g_RedBitCount.bytes[0] & 0x1f) & 0xff) * iVar7 +
                                       (((g_RedMask16.u32[0] & uVar11) >>
                                        (g_RedBitPosition.bytes[0] & 0x1f)) <<
                                        (g_RedBitCount.bytes[0] & 0x1f) & 0xff) * iVar10 >> 8) /
                                      (uint)g_RedScaleFactor << (g_RedBitPosition.bytes[0] & 0x1f))
                             | (ushort)(((((g_BlueMask16.u32[0] & uVar4) >>
                                          (g_BlueBitPosition.bytes[0] & 0x1f)) <<
                                          (g_BlueBitCount.bytes[0] & 0x1f) & 0xff) * iVar7 +
                                         iVar10 * (((g_BlueMask16.u32[0] & uVar11) >>
                                                   (g_BlueBitPosition.bytes[0] & 0x1f)) <<
                                                   (g_BlueBitCount.bytes[0] & 0x1f) & 0xff) >> 8) /
                                        (uint)g_BlueScaleFactor <<
                                       (g_BlueBitPosition.bytes[0] & 0x1f));
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
        if (this_ptr->is_initialized == 0) {
          if (y <= local_cc) {
            iVar14 = y * 4;
            do {
              puVar5 = (ushort *)(x * 2 + *(int *)((int)g_ScreenBufferArray + iVar14));
              for (iVar7 = x; iVar7 <= local_d0; iVar7 = iVar7 + 1) {
                if ((uint)*local_d4 != this_ptr->load_flags) {
                  *puVar5 = (ushort)g_DefaultTextColor;
                }
                local_d4 = local_d4 + 1;
                puVar5 = puVar5 + 1;
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
              puVar13 = (ushort *)(*(int *)((int)g_ScreenBufferArray + local_30) + x * 2);
              for (iVar14 = x; iVar14 <= local_d0; iVar14 = iVar14 + 1) {
                iVar7 = g_CurrentAlphaValue *
                        (uint)(byte)this_ptr->palette_data[(uint)*local_d4 * 3 + local_c8 * 0x300];
                iVar10 = iVar7 >> 0x1f;
                iVar7 = (int)((iVar7 + iVar10 * -0x100) - (uint)(iVar10 << 7 < 0)) >> 8;
                if (iVar7 != 0) {
                  uVar4 = (uint)*puVar13;
                  iVar10 = 0xff - iVar7;
                  *puVar13 = (ushort)(((((g_DefaultTextColor & g_RedMask16.u32[0]) >>
                                        (g_RedBitPosition.bytes[0] & 0x1f)) <<
                                        (g_RedBitCount.bytes[0] & 0x1f) & 0xff) * iVar7 +
                                       (((uVar4 & g_RedMask16.u32[0]) >>
                                        (g_RedBitPosition.bytes[0] & 0x1f)) <<
                                        (g_RedBitCount.bytes[0] & 0x1f) & 0xff) * iVar10 >> 8) /
                                      (uint)g_RedScaleFactor << (g_RedBitPosition.bytes[0] & 0x1f))
                             | (ushort)(((((g_GreenMask16.u32[0] & g_DefaultTextColor) >>
                                          (g_GreenBitPosition.bytes[0] & 0x1f)) <<
                                          (g_GreenBitCount.bytes[0] & 0x1f) & 0xff) * iVar7 +
                                         (((uVar4 & g_GreenMask16.u32[0]) >>
                                          (g_GreenBitPosition.bytes[0] & 0x1f)) <<
                                          (g_GreenBitCount.bytes[0] & 0x1f) & 0xff) * iVar10 >> 8) /
                                        (uint)g_GreenScaleFactor <<
                                       (g_GreenBitPosition.bytes[0] & 0x1f)) |
                             (ushort)(((((g_DefaultTextColor & g_BlueMask16.u32[0]) >>
                                        (g_BlueBitPosition.bytes[0] & 0x1f)) <<
                                        (g_BlueBitCount.bytes[0] & 0x1f) & 0xff) * iVar7 +
                                       iVar10 * (((uVar4 & g_BlueMask16.u32[0]) >>
                                                 (g_BlueBitPosition.bytes[0] & 0x1f)) <<
                                                 (g_BlueBitCount.bytes[0] & 0x1f) & 0xff) >> 8) /
                                      (uint)g_BlueScaleFactor << (g_BlueBitPosition.bytes[0] & 0x1f)
                                     );
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
        uVar1 = g_ColorTable16[color_mode];
        if (this_ptr->is_initialized == 0) {
          for (; y <= local_cc; y = y + 1) {
            puVar13 = (ushort *)(x * 2 + *(int *)((int)g_ScreenBufferArray + iVar14));
            for (iVar7 = x; iVar7 <= local_d0; iVar7 = iVar7 + 1) {
              if ((uint)*local_d4 != this_ptr->load_flags) {
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
              puVar13 = (ushort *)(*(int *)((int)g_ScreenBufferArray + local_34) + x * 2);
              for (iVar14 = x; iVar14 <= local_d0; iVar14 = iVar14 + 1) {
                iVar7 = g_CurrentAlphaValue *
                        (uint)(byte)this_ptr->palette_data[(uint)*local_d4 * 3 + local_c8 * 0x300];
                iVar10 = iVar7 >> 0x1f;
                iVar7 = (int)((iVar7 + iVar10 * -0x100) - (uint)(iVar10 << 7 < 0)) >> 8;
                if (iVar7 != 0) {
                  uVar4 = (uint)uVar1;
                  uVar11 = (uint)*puVar13;
                  iVar10 = 0xff - iVar7;
                  *puVar13 = (ushort)(((((g_GreenMask16.u32[0] & uVar4) >>
                                        (g_GreenBitPosition.bytes[0] & 0x1f)) <<
                                        (g_GreenBitCount.bytes[0] & 0x1f) & 0xff) * iVar7 +
                                       (((g_GreenMask16.u32[0] & uVar11) >>
                                        (g_GreenBitPosition.bytes[0] & 0x1f)) <<
                                        (g_GreenBitCount.bytes[0] & 0x1f) & 0xff) * iVar10 >> 8) /
                                      (uint)g_GreenScaleFactor <<
                                     (g_GreenBitPosition.bytes[0] & 0x1f)) |
                             (ushort)(((((g_RedMask16.u32[0] & uVar4) >>
                                        (g_RedBitPosition.bytes[0] & 0x1f)) <<
                                        (g_RedBitCount.bytes[0] & 0x1f) & 0xff) * iVar7 +
                                       (((g_RedMask16.u32[0] & uVar11) >>
                                        (g_RedBitPosition.bytes[0] & 0x1f)) <<
                                        (g_RedBitCount.bytes[0] & 0x1f) & 0xff) * iVar10 >> 8) /
                                      (uint)g_RedScaleFactor << (g_RedBitPosition.bytes[0] & 0x1f))
                             | (ushort)((iVar7 * (((uVar4 & g_BlueMask16.u32[0]) >>
                                                  (g_BlueBitPosition.bytes[0] & 0x1f)) <<
                                                  (g_BlueBitCount.bytes[0] & 0x1f) & 0xff) +
                                         iVar10 * (((g_BlueMask16.u32[0] & uVar11) >>
                                                   (g_BlueBitPosition.bytes[0] & 0x1f)) <<
                                                   (g_BlueBitCount.bytes[0] & 0x1f) & 0xff) >> 8) /
                                        (uint)g_BlueScaleFactor <<
                                       (g_BlueBitPosition.bytes[0] & 0x1f));
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
    else if (g_BitsPerPixel == 0x20) {
      color_table = this_ptr->palettes_display + local_c8;
      if (color_mode == -1) {
        if (this_ptr->is_initialized == 0) {
          for (; y <= local_cc; y = y + 1) {
            puVar12 = (uint *)(*(int *)((int)g_ScreenBufferArray + iVar14) + x * 4);
            for (iVar7 = x; iVar7 <= local_d0; iVar7 = iVar7 + 1) {
              if ((uint)*local_d4 != this_ptr->load_flags) {
                *puVar12 = this_ptr->palettes_display[local_c8][*local_d4];
              }
              local_d4 = local_d4 + 1;
              puVar12 = puVar12 + 1;
            }
            iVar14 = iVar14 + 4;
            local_d4 = local_d4 + local_c4;
          }
        }
        else {
          iVar10 = y;
          if (y <= local_cc) {
            do {
              engine_font_cpp_drawAlphaBlendedPixels_FUN_004ce240
                        ((uint *)(*(int *)((int)g_ScreenBufferArray + iVar14) + x * 4),local_d4,
                         *color_table,(local_d0 - x) + 1,
                         this_ptr->palettes_display[iVar7][*local_d4]);
              iVar14 = iVar14 + 4;
              local_d4 = local_d4 + local_c4 + (local_d0 - x) + 1;
              iVar10 = iVar10 + 1;
            } while (iVar10 <= local_cc);
            return iVar2;
          }
        }
      }
      else if (color_mode == -2) {
        if (this_ptr->is_initialized == 0) {
          for (; y <= local_cc; y = y + 1) {
            piVar6 = (int *)(x * 4 + *(int *)((int)g_ScreenBufferArray + iVar14));
            for (iVar7 = x; iVar7 <= local_d0; iVar7 = iVar7 + 1) {
              if ((uint)*local_d4 != this_ptr->load_flags) {
                *piVar6 = g_ShadowColor32;
              }
              local_d4 = local_d4 + 1;
              piVar6 = piVar6 + 1;
            }
            iVar14 = iVar14 + 4;
            local_d4 = local_d4 + local_c4;
          }
        }
        else {
          iVar7 = y;
          if (y <= local_cc) {
            do {
              engine_font_cpp_drawAlphaBlendedPixels_FUN_004ce240
                        ((uint *)(x * 4 + *(int *)((int)g_ScreenBufferArray + iVar14)),local_d4,
                         *color_table,(local_d0 - x) + 1,g_ShadowColor32);
              iVar14 = iVar14 + 4;
              iVar7 = iVar7 + 1;
              local_d4 = local_d4 + local_c4 + (local_d0 - x) + 1;
            } while (iVar7 <= local_cc);
            return iVar2;
          }
        }
      }
      else if (color_mode == -3) {
        if (this_ptr->is_initialized == 0) {
          for (; y <= local_cc; y = y + 1) {
            piVar6 = (int *)(x * 4 + *(int *)((int)g_ScreenBufferArray + iVar14));
            for (iVar7 = x; iVar7 <= local_d0; iVar7 = iVar7 + 1) {
              if ((uint)*local_d4 != this_ptr->load_flags) {
                *piVar6 = g_DefaultTextColor;
              }
              local_d4 = local_d4 + 1;
              piVar6 = piVar6 + 1;
            }
            iVar14 = iVar14 + 4;
            local_d4 = local_d4 + local_c4;
          }
        }
        else {
          iVar7 = y;
          if (y <= local_cc) {
            do {
              engine_font_cpp_drawAlphaBlendedPixels_FUN_004ce240
                        ((uint *)(*(int *)((int)g_ScreenBufferArray + iVar14) + x * 4),local_d4,
                         *color_table,(local_d0 - x) + 1,g_DefaultTextColor);
              iVar14 = iVar14 + 4;
              iVar7 = iVar7 + 1;
              local_d4 = local_d4 + local_c4 + (local_d0 - x) + 1;
            } while (iVar7 <= local_cc);
            return iVar2;
          }
        }
      }
      else {
        uVar4 = g_ColorTable32[color_mode];
        if (this_ptr->is_initialized == 0) {
          for (; y <= local_cc; y = y + 1) {
            puVar12 = (uint *)(*(int *)((int)g_ScreenBufferArray + iVar14) + x * 4);
            for (iVar7 = x; iVar7 <= local_d0; iVar7 = iVar7 + 1) {
              if ((uint)*local_d4 != this_ptr->load_flags) {
                *puVar12 = uVar4;
              }
              local_d4 = local_d4 + 1;
              puVar12 = puVar12 + 1;
            }
            iVar14 = iVar14 + 4;
            local_d4 = local_d4 + local_c4;
          }
        }
        else {
          iVar7 = y;
          if (y <= local_cc) {
            do {
              engine_font_cpp_drawAlphaBlendedPixels_FUN_004ce240
                        ((uint *)(x * 4 + *(int *)((int)g_ScreenBufferArray + iVar14)),local_d4,
                         *color_table,(local_d0 - x) + 1,uVar4);
              iVar14 = iVar14 + 4;
              local_d4 = local_d4 + local_c4 + (local_d0 - x) + 1;
              iVar7 = iVar7 + 1;
            } while (iVar7 <= local_cc);
            return iVar2;
          }
        }
      }
    }
  }
  return iVar2;
}
