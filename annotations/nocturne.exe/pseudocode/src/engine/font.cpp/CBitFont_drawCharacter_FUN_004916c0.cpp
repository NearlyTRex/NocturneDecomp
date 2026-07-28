// Name: engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0
// Address: 004916c0
// Address Range: [[004916c0, 00492d99]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_drawCharacter_FUN_004916c0(CBitFont *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_font_cpp_CBitFont_drawCharacter_FUN_004916c0(CBitFont *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  ushort uVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  byte *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  ushort *puVar12;
  uint (*color_table) [256];
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
  iVar2 = param_1->char_widths[param_2] + param_1->char_spacing;
  if (param_1->char_positions[param_2] == (uchar *)0x0) {
    return iVar2;
  }
  if (param_6 != -1) {
    engine_font_cpp_CBitFont_drawCharacter_FUN_004916c0
              (param_1,param_2,param_3 + param_1->shadow_offset_x,param_4 + param_1->shadow_offset_y
               ,param_6,0xffffffff);
  }
  local_d4 = param_1->char_positions[param_2];
  param_4 = param_4 + param_1->char_y_offsets[param_2];
  local_d0 = param_3 + param_1->char_widths[param_2] + -1;
  local_cc = param_4 + -1 + param_1->char_heights[param_2];
  local_c8 = param_1->char_bitmap_index[param_2];
  iVar6 = param_1->bitmap_widths[local_c8];
  if (param_1->rendering_ready == 0) {
    if (param_3 < _DAT_01c00c58) {
      return iVar2;
    }
    if (param_4 < _DAT_01c00c5c) {
      return iVar2;
    }
    if ((_DAT_01c00c60 + 1) - param_1->char_widths[param_2] < param_3) {
      return iVar2;
    }
    if ((_DAT_01c00c64 + 1) - param_1->char_heights[param_2] < param_4) {
      return iVar2;
    }
  }
  else {
    iVar8 = engine_font_cpp_clipCharacter_FUN_0048fd50
                      ((int *)&local_d4,&param_3,&param_4,&local_d0,&local_cc,iVar6);
    if (iVar8 != 0) {
      return iVar2;
    }
  }
  iVar8 = local_c8;
  local_c4 = iVar6 - ((local_d0 - param_3) + 1);
  if ((param_1->use_3d_rendering != 0) && (_DAT_01c02594 != 0)) {
    engine_font_cpp_CBitFont_render3DCharacter_FUN_004911f0
              (param_1,param_2,param_3,param_4,local_d0,local_cc,param_5);
    return iVar2;
  }
  if (DAT_005b7624 == 8) {
    if (param_5 == -1) {
      local_c0 = param_4;
      if (param_4 <= local_cc) {
        param_4 = param_4 * 4;
        do {
          pbVar3 = (byte *)(*(int *)(&DAT_01bd2fa0 + param_4) + param_3);
          for (iVar6 = param_3; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
            if ((uint)*local_d4 != param_1->load_flags) {
              *pbVar3 = *local_d4;
            }
            pbVar3 = pbVar3 + 1;
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
          puVar7 = (byte *)(*(int *)(&DAT_01bd2fa0 + param_4) + param_3);
          for (iVar6 = param_3; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
            if ((uint)*local_d4 != param_1->load_flags) {
              *puVar7 = DAT_01c70f5c;
            }
            puVar7 = puVar7 + 1;
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
          puVar7 = (byte *)(*(int *)(&DAT_01bd2fa0 + param_4) + param_3);
          for (iVar6 = param_3; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
            if ((uint)*local_d4 != param_1->load_flags) {
              *puVar7 = DAT_01c70f70;
            }
            puVar7 = puVar7 + 1;
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
          puVar7 = (byte *)(*(int *)(&DAT_01bd2fa0 + param_4) + param_3);
          for (iVar6 = param_3; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
            if ((uint)*local_d4 != param_1->load_flags) {
              *puVar7 = (byte)param_5;
            }
            puVar7 = puVar7 + 1;
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
    iVar6 = param_4 << 2;
    if (DAT_005b7624 == 0x10) {
      if (param_5 == -1) {
        if (param_1->is_initialized == 0) {
          if (param_4 <= local_cc) {
            iVar6 = param_4 * 4;
            do {
              puVar5 = (ushort *)(*(int *)(&DAT_01bd2fa0 + iVar6) + param_3 * 2);
              for (iVar8 = param_3; iVar8 <= local_d0; iVar8 = iVar8 + 1) {
                if ((uint)*local_d4 != param_1->load_flags) {
                  *puVar5 = (short)param_1->palettes_display[local_c8][*local_d4];
                }
                local_d4 = local_d4 + 1;
                puVar5 = puVar5 + 1;
              }
              iVar6 = iVar6 + 4;
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
              puVar12 = (ushort *)(*(int *)(&DAT_01bd2fa0 + local_28) + param_3 * 2);
              for (iVar6 = param_3; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
                uVar4 = (uint)*local_d4;
                iVar8 = DAT_005b763c *
                        (uint)(byte)param_1->palette_data[uVar4 * 3 + local_c8 * 0x300];
                iVar9 = iVar8 >> 0x1f;
                iVar8 = (int)((iVar8 + iVar9 * -0x100) - (uint)(iVar9 << 7 < 0)) >> 8;
                if (iVar8 != 0) {
                  uVar10 = (uint)*puVar12;
                  iVar9 = 0xff - iVar8;
                  *puVar12 = (ushort)(((((param_1->palettes_display[local_c8][uVar4] & DAT_005bf5c0)
                                        >> (DAT_01c00630 & 0x1f)) << (DAT_01c00638 & 0x1f) & 0xff) *
                                       iVar8 + (((DAT_005bf5c0 & uVar10) >> (DAT_01c00630 & 0x1f))
                                                << (DAT_01c00638 & 0x1f) & 0xff) * iVar9 >> 8) /
                                      _DAT_01c00634 << (DAT_01c00630 & 0x1f)) |
                             (ushort)(((((param_1->palettes_display[local_c8][uVar4] & DAT_005bf5b8)
                                        >> (DAT_01c00624 & 0x1f)) << (DAT_01c0062c & 0x1f) & 0xff) *
                                       iVar8 + (((DAT_005bf5b8 & uVar10) >> (DAT_01c00624 & 0x1f))
                                                << (DAT_01c0062c & 0x1f) & 0xff) * iVar9 >> 8) /
                                      _DAT_01c00628 << (DAT_01c00624 & 0x1f)) |
                             (ushort)(((((param_1->palettes_display[local_c8][uVar4] & DAT_005bf5c8)
                                        >> (DAT_01c0063c & 0x1f)) << (DAT_01c00644 & 0x1f) & 0xff) *
                                       iVar8 + iVar9 * (((DAT_005bf5c8 & uVar10) >>
                                                        (DAT_01c0063c & 0x1f)) <<
                                                        (DAT_01c00644 & 0x1f) & 0xff) >> 8) /
                                      _DAT_01c00640 << (DAT_01c0063c & 0x1f));
                }
                puVar12 = puVar12 + 1;
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
        if (param_1->is_initialized == 0) {
          if (param_4 <= local_cc) {
            iVar6 = param_4 * 4;
            do {
              puVar12 = (ushort *)(*(int *)(&DAT_01bd2fa0 + iVar6) + param_3 * 2);
              for (iVar8 = param_3; iVar8 <= local_d0; iVar8 = iVar8 + 1) {
                if ((uint)*local_d4 != param_1->load_flags) {
                  *puVar12 = _DAT_01c70f5e;
                }
                puVar12 = puVar12 + 1;
                local_d4 = local_d4 + 1;
              }
              iVar6 = iVar6 + 4;
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
              puVar12 = (ushort *)(param_3 * 2 + *(int *)(&DAT_01bd2fa0 + local_2c));
              for (iVar6 = param_3; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
                iVar8 = DAT_005b763c *
                        (uint)(byte)param_1->palette_data[(uint)*local_d4 * 3 + local_c8 * 0x300];
                iVar9 = iVar8 >> 0x1f;
                iVar8 = (int)((iVar8 + iVar9 * -0x100) - (uint)(iVar9 << 7 < 0)) >> 8;
                if (iVar8 != 0) {
                  uVar4 = (uint)_DAT_01c70f5e;
                  uVar10 = (uint)*puVar12;
                  iVar9 = 0xff - iVar8;
                  *puVar12 = (ushort)(((((DAT_005bf5c0 & uVar4) >> (DAT_01c00630 & 0x1f)) <<
                                        (DAT_01c00638 & 0x1f) & 0xff) * iVar8 +
                                       (((DAT_005bf5c0 & uVar10) >> (DAT_01c00630 & 0x1f)) <<
                                        (DAT_01c00638 & 0x1f) & 0xff) * iVar9 >> 8) / _DAT_01c00634
                                     << (DAT_01c00630 & 0x1f)) |
                             (ushort)(((((DAT_005bf5b8 & uVar4) >> (DAT_01c00624 & 0x1f)) <<
                                        (DAT_01c0062c & 0x1f) & 0xff) * iVar8 +
                                       (((DAT_005bf5b8 & uVar10) >> (DAT_01c00624 & 0x1f)) <<
                                        (DAT_01c0062c & 0x1f) & 0xff) * iVar9 >> 8) / _DAT_01c00628
                                     << (DAT_01c00624 & 0x1f)) |
                             (ushort)(((((DAT_005bf5c8 & uVar4) >> (DAT_01c0063c & 0x1f)) <<
                                        (DAT_01c00644 & 0x1f) & 0xff) * iVar8 +
                                       iVar9 * (((DAT_005bf5c8 & uVar10) >> (DAT_01c0063c & 0x1f))
                                                << (DAT_01c00644 & 0x1f) & 0xff) >> 8) /
                                      _DAT_01c00640 << (DAT_01c0063c & 0x1f));
                }
                puVar12 = puVar12 + 1;
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
        if (param_1->is_initialized == 0) {
          if (param_4 <= local_cc) {
            iVar6 = param_4 * 4;
            do {
              puVar5 = (ushort *)(param_3 * 2 + *(int *)(&DAT_01bd2fa0 + iVar6));
              for (iVar8 = param_3; iVar8 <= local_d0; iVar8 = iVar8 + 1) {
                if ((uint)*local_d4 != param_1->load_flags) {
                  *puVar5 = _DAT_01c70f70;
                }
                local_d4 = local_d4 + 1;
                puVar5 = puVar5 + 1;
              }
              iVar6 = iVar6 + 4;
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
              puVar12 = (ushort *)(*(int *)(&DAT_01bd2fa0 + local_30) + param_3 * 2);
              for (iVar6 = param_3; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
                iVar8 = DAT_005b763c *
                        (uint)(byte)param_1->palette_data[(uint)*local_d4 * 3 + local_c8 * 0x300];
                iVar9 = iVar8 >> 0x1f;
                iVar8 = (int)((iVar8 + iVar9 * -0x100) - (uint)(iVar9 << 7 < 0)) >> 8;
                if (iVar8 != 0) {
                  uVar4 = (uint)*puVar12;
                  iVar9 = 0xff - iVar8;
                  *puVar12 = (ushort)(((((_DAT_01c70f70 & DAT_005bf5b8) >> (DAT_01c00624 & 0x1f)) <<
                                        (DAT_01c0062c & 0x1f) & 0xff) * iVar8 +
                                       (((uVar4 & DAT_005bf5b8) >> (DAT_01c00624 & 0x1f)) <<
                                        (DAT_01c0062c & 0x1f) & 0xff) * iVar9 >> 8) / _DAT_01c00628
                                     << (DAT_01c00624 & 0x1f)) |
                             (ushort)(((((DAT_005bf5c0 & _DAT_01c70f70) >> (DAT_01c00630 & 0x1f)) <<
                                        (DAT_01c00638 & 0x1f) & 0xff) * iVar8 +
                                       (((uVar4 & DAT_005bf5c0) >> (DAT_01c00630 & 0x1f)) <<
                                        (DAT_01c00638 & 0x1f) & 0xff) * iVar9 >> 8) / _DAT_01c00634
                                     << (DAT_01c00630 & 0x1f)) |
                             (ushort)(((((_DAT_01c70f70 & DAT_005bf5c8) >> (DAT_01c0063c & 0x1f)) <<
                                        (DAT_01c00644 & 0x1f) & 0xff) * iVar8 +
                                       iVar9 * (((uVar4 & DAT_005bf5c8) >> (DAT_01c0063c & 0x1f)) <<
                                                (DAT_01c00644 & 0x1f) & 0xff) >> 8) / _DAT_01c00640
                                     << (DAT_01c0063c & 0x1f));
                }
                puVar12 = puVar12 + 1;
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
        uVar1 = *(ushort *)(&DAT_01bff720 + param_5 * 2);
        if (param_1->is_initialized == 0) {
          for (; param_4 <= local_cc; param_4 = param_4 + 1) {
            puVar12 = (ushort *)(param_3 * 2 + *(int *)(&DAT_01bd2fa0 + iVar6));
            for (iVar8 = param_3; iVar8 <= local_d0; iVar8 = iVar8 + 1) {
              if ((uint)*local_d4 != param_1->load_flags) {
                *puVar12 = uVar1;
              }
              local_d4 = local_d4 + 1;
              puVar12 = puVar12 + 1;
            }
            iVar6 = iVar6 + 4;
            local_d4 = local_d4 + local_c4;
          }
        }
        else {
          local_58 = param_4;
          if (param_4 <= local_cc) {
            local_34 = param_4 << 2;
            do {
              puVar12 = (ushort *)(*(int *)(&DAT_01bd2fa0 + local_34) + param_3 * 2);
              for (iVar6 = param_3; iVar6 <= local_d0; iVar6 = iVar6 + 1) {
                iVar8 = DAT_005b763c *
                        (uint)(byte)param_1->palette_data[(uint)*local_d4 * 3 + local_c8 * 0x300];
                iVar9 = iVar8 >> 0x1f;
                iVar8 = (int)((iVar8 + iVar9 * -0x100) - (uint)(iVar9 << 7 < 0)) >> 8;
                if (iVar8 != 0) {
                  uVar4 = (uint)uVar1;
                  uVar10 = (uint)*puVar12;
                  iVar9 = 0xff - iVar8;
                  *puVar12 = (ushort)(((((DAT_005bf5c0 & uVar4) >> (DAT_01c00630 & 0x1f)) <<
                                        (DAT_01c00638 & 0x1f) & 0xff) * iVar8 +
                                       (((DAT_005bf5c0 & uVar10) >> (DAT_01c00630 & 0x1f)) <<
                                        (DAT_01c00638 & 0x1f) & 0xff) * iVar9 >> 8) / _DAT_01c00634
                                     << (DAT_01c00630 & 0x1f)) |
                             (ushort)(((((DAT_005bf5b8 & uVar4) >> (DAT_01c00624 & 0x1f)) <<
                                        (DAT_01c0062c & 0x1f) & 0xff) * iVar8 +
                                       (((DAT_005bf5b8 & uVar10) >> (DAT_01c00624 & 0x1f)) <<
                                        (DAT_01c0062c & 0x1f) & 0xff) * iVar9 >> 8) / _DAT_01c00628
                                     << (DAT_01c00624 & 0x1f)) |
                             (ushort)((iVar8 * (((uVar4 & DAT_005bf5c8) >> (DAT_01c0063c & 0x1f)) <<
                                                (DAT_01c00644 & 0x1f) & 0xff) +
                                       iVar9 * (((DAT_005bf5c8 & uVar10) >> (DAT_01c0063c & 0x1f))
                                                << (DAT_01c00644 & 0x1f) & 0xff) >> 8) /
                                      _DAT_01c00640 << (DAT_01c0063c & 0x1f));
                }
                puVar12 = puVar12 + 1;
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
    else if (DAT_005b7624 == 0x20) {
      color_table = param_1->palettes_display + local_c8;
      if (param_5 == -1) {
        if (param_1->is_initialized == 0) {
          for (; param_4 <= local_cc; param_4 = param_4 + 1) {
            puVar11 = (uint *)(*(int *)(&DAT_01bd2fa0 + iVar6) + param_3 * 4);
            for (iVar8 = param_3; iVar8 <= local_d0; iVar8 = iVar8 + 1) {
              if ((uint)*local_d4 != param_1->load_flags) {
                *puVar11 = param_1->palettes_display[local_c8][*local_d4];
              }
              local_d4 = local_d4 + 1;
              puVar11 = puVar11 + 1;
            }
            iVar6 = iVar6 + 4;
            local_d4 = local_d4 + local_c4;
          }
        }
        else {
          iVar9 = param_4;
          if (param_4 <= local_cc) {
            do {
              engine_font_cpp_drawAlphaBlendedPixels_FUN_00491160
                        ((uint *)(*(int *)(&DAT_01bd2fa0 + iVar6) + param_3 * 4),local_d4,
                         *color_table,(local_d0 - param_3) + 1,
                         param_1->palettes_display[iVar8][*local_d4]);
              iVar6 = iVar6 + 4;
              local_d4 = local_d4 + local_c4 + (local_d0 - param_3) + 1;
              iVar9 = iVar9 + 1;
            } while (iVar9 <= local_cc);
            return iVar2;
          }
        }
      }
      else if (param_5 == -2) {
        if (param_1->is_initialized == 0) {
          for (; param_4 <= local_cc; param_4 = param_4 + 1) {
            puVar11 = (uint *)(param_3 * 4 + *(int *)(&DAT_01bd2fa0 + iVar6));
            for (iVar8 = param_3; iVar8 <= local_d0; iVar8 = iVar8 + 1) {
              if ((uint)*local_d4 != param_1->load_flags) {
                *puVar11 = _DAT_01c70f60;
              }
              local_d4 = local_d4 + 1;
              puVar11 = puVar11 + 1;
            }
            iVar6 = iVar6 + 4;
            local_d4 = local_d4 + local_c4;
          }
        }
        else {
          iVar8 = param_4;
          if (param_4 <= local_cc) {
            do {
              engine_font_cpp_drawAlphaBlendedPixels_FUN_00491160
                        ((uint *)(param_3 * 4 + *(int *)(&DAT_01bd2fa0 + iVar6)),local_d4,
                         *color_table,(local_d0 - param_3) + 1,_DAT_01c70f60);
              iVar6 = iVar6 + 4;
              iVar8 = iVar8 + 1;
              local_d4 = local_d4 + local_c4 + (local_d0 - param_3) + 1;
            } while (iVar8 <= local_cc);
            return iVar2;
          }
        }
      }
      else if (param_5 == -3) {
        if (param_1->is_initialized == 0) {
          for (; param_4 <= local_cc; param_4 = param_4 + 1) {
            puVar11 = (uint *)(param_3 * 4 + *(int *)(&DAT_01bd2fa0 + iVar6));
            for (iVar8 = param_3; iVar8 <= local_d0; iVar8 = iVar8 + 1) {
              if ((uint)*local_d4 != param_1->load_flags) {
                *puVar11 = _DAT_01c70f70;
              }
              local_d4 = local_d4 + 1;
              puVar11 = puVar11 + 1;
            }
            iVar6 = iVar6 + 4;
            local_d4 = local_d4 + local_c4;
          }
        }
        else {
          iVar8 = param_4;
          if (param_4 <= local_cc) {
            do {
              engine_font_cpp_drawAlphaBlendedPixels_FUN_00491160
                        ((uint *)(*(int *)(&DAT_01bd2fa0 + iVar6) + param_3 * 4),local_d4,
                         *color_table,(local_d0 - param_3) + 1,_DAT_01c70f70);
              iVar6 = iVar6 + 4;
              iVar8 = iVar8 + 1;
              local_d4 = local_d4 + local_c4 + (local_d0 - param_3) + 1;
            } while (iVar8 <= local_cc);
            return iVar2;
          }
        }
      }
      else {
        uVar4 = *(uint *)(param_5 * 4 + 0x1bff920);
        if (param_1->is_initialized == 0) {
          for (; param_4 <= local_cc; param_4 = param_4 + 1) {
            puVar11 = (uint *)(*(int *)(&DAT_01bd2fa0 + iVar6) + param_3 * 4);
            for (iVar8 = param_3; iVar8 <= local_d0; iVar8 = iVar8 + 1) {
              if ((uint)*local_d4 != param_1->load_flags) {
                *puVar11 = uVar4;
              }
              local_d4 = local_d4 + 1;
              puVar11 = puVar11 + 1;
            }
            iVar6 = iVar6 + 4;
            local_d4 = local_d4 + local_c4;
          }
        }
        else {
          iVar8 = param_4;
          if (param_4 <= local_cc) {
            do {
              engine_font_cpp_drawAlphaBlendedPixels_FUN_00491160
                        ((uint *)(param_3 * 4 + *(int *)(&DAT_01bd2fa0 + iVar6)),local_d4,
                         *color_table,(local_d0 - param_3) + 1,uVar4);
              iVar6 = iVar6 + 4;
              local_d4 = local_d4 + local_c4 + (local_d0 - param_3) + 1;
              iVar8 = iVar8 + 1;
            } while (iVar8 <= local_cc);
            return iVar2;
          }
        }
      }
    }
  }
  return iVar2;
}
