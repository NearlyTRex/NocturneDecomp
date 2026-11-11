// Name: engine_font.cpp_FUN_004a88e0
// Address: 004a88e0
// Address Range: [[004a88e0, 004a8d86]]
// Convention: unknown
// Signature: void engine_font_cpp_FUN_004a88e0(CBitFont *param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_font_cpp_FUN_004a88e0(CBitFont *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  char local_16c [300];
  int *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int *local_30;
  char (*local_2c) [80];
  int local_28;
  int *local_24;
  uint local_20;
  byte *local_1c;
  int local_18;
  byte *local_14;
  
  local_40 = (int *)operator_new_array(param_4 * 4);
  if (local_40 == (int *)0x0) {
    _DAT_01d046a0 = "..\\engine\\font.cpp";
    _DAT_01d046a4 = 0x2c6;
    core_main_c_FUN_004e4500("Out of memory");
  }
  iVar3 = 0;
  pbVar4 = param_1->bitmap_data[param_2];
  local_20 = param_1->load_flags;
  if (0 < param_3 * param_4) {
    do {
      local_20 = (uint)*pbVar4;
      if (local_20 != param_1->load_flags) break;
      iVar3 = iVar3 + 1;
      pbVar4 = pbVar4 + 1;
      local_20 = param_1->load_flags;
    } while (iVar3 < param_3 * param_4);
  }
  if (local_20 == param_1->load_flags) {
    _sprintf(local_16c,"No character markers found in font file (%s).");
    _DAT_01d046a4 = 0x2db;
    _DAT_01d046a0 = "..\\engine\\font.cpp";
    core_main_c_FUN_004e4500(local_16c);
  }
  iVar3 = 0;
  pbVar4 = param_1->bitmap_data[param_2];
  local_34 = 0;
  piVar2 = local_40;
  if (0 < param_4) {
    do {
      iVar5 = 0;
      pbVar7 = pbVar4;
      if (0 < param_3) {
        do {
          if (*pbVar7 == local_20) {
            local_34 = local_34 + 1;
            *piVar2 = iVar3;
            piVar2 = piVar2 + 1;
            break;
          }
          iVar5 = iVar5 + 1;
          pbVar7 = pbVar7 + 1;
        } while (iVar5 < param_3);
      }
      iVar3 = iVar3 + 1;
      pbVar4 = pbVar4 + param_3;
    } while (iVar3 < param_4);
  }
  local_34 = local_34 + -1;
  local_38 = 0;
  iVar3 = param_5;
  if (0 < local_34) {
    local_2c = param_1->bitmap_files + param_2;
    local_3c = (int)(param_1->bitmap_files + -1) + 0x4c + param_2 * 4;
    local_30 = local_40;
    do {
      local_18 = 0;
      local_14 = (byte *)(*(int *)(local_3c + 0x194) + *local_30 * param_3);
      local_24 = local_30;
      local_1c = local_14 + param_3;
      iVar5 = (int)(param_1->bitmap_files + -1) + 0x4c + iVar3 * 4;
      for (iVar6 = 0; iVar1 = iVar6 - local_28, iVar6 < param_3; iVar6 = iVar6 + 1) {
        if (local_18 == 0) {
          if (*local_14 == local_20) {
            local_18 = 1;
            local_28 = iVar6;
            if (0xff < iVar3) {
              _sprintf(local_16c,"Too many chars: fontfile %s, chars %d");
              _DAT_01d046a4 = 0x30f;
              _DAT_01d046a0 = "..\\engine\\font.cpp";
              core_main_c_FUN_004e4500(local_16c);
            }
            *(byte **)(iVar5 + 0x1de8) = local_1c;
          }
        }
        else if (*local_14 != local_20) {
          *(int *)(iVar5 + 0x35e8) = iVar1;
          local_18 = 0;
          if (param_1->max_char_width < iVar1) {
            param_1->max_char_width = iVar1;
          }
          iVar1 = engine_font_cpp_CBitFont_calculateCharacterHeight_FUN_004a8d90
                            (param_1,*(uchar **)(iVar5 + 0x1de8),*(int *)(iVar5 + 0x35e8),
                             local_24[1] - (*local_24 + 1),param_3);
          *(int *)(iVar5 + 0x39e8) = iVar1;
          if (param_1->max_char_height < iVar1) {
            param_1->max_char_height = iVar1;
          }
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 4;
        }
        local_1c = local_1c + 1;
        local_14 = local_14 + 1;
      }
      if (local_18 == 1) {
        *(int *)(iVar5 + 0x35e8) = iVar1;
        if (param_1->max_char_width < iVar1) {
          param_1->max_char_width = iVar1;
        }
        iVar5 = engine_font_cpp_CBitFont_calculateCharacterHeight_FUN_004a8d90
                          (param_1,param_1->char_positions[iVar3],param_1->char_widths[iVar3],
                           local_30[1] - (*local_30 + 1),param_3);
        param_1->char_heights[iVar3] = iVar5;
        if (param_1->max_char_height < iVar5) {
          param_1->max_char_height = iVar5;
        }
        iVar3 = iVar3 + 1;
      }
      local_30 = local_30 + 1;
      local_38 = local_38 + 1;
    } while (local_38 < local_34);
  }
  if (param_5 < iVar3) {
    iVar5 = (int)(param_1->bitmap_files + -1) + 0x4c + param_5 * 4;
    do {
      param_5 = param_5 + 1;
      *(int *)(iVar5 + 0x21e8) = param_2;
      iVar5 = iVar5 + 4;
    } while (param_5 < iVar3);
  }
  param_1->current_line_height = param_1->max_char_height;
  FUN_005b7fce(local_40);
  return;
}
