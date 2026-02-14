// Name: engine_font.cpp_CBitFont_parseCharacterMetrics_FUN_004cd550
// Address: 004cd550
// Address Range: [[004cd550, 004cda1c]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_parseCharacterMetrics_FUN_004cd550(CBitFont *this_ptr,int bitmapcount,int other2,int bitmap_index,int width,int height,int first_char)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_parseCharacterMetrics_FUN_004cd550(CBitFont *this_ptr,int bitmapcount,int other2,int bitmap_index,int width,int height,int first_char)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
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
  
  local_40 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                       (bitmap_index * 4,"..\\engine\\font.cpp",0x1b7);
  if (local_40 == (int *)0x0) {
    g_CurrentFilename = "..\\engine\\font.cpp";
    g_CurrentLineNumber = 0x1b8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
  }
  pbVar4 = this_ptr->bitmap_data[bitmapcount];
  iVar1 = 0;
  local_20 = this_ptr->load_flags;
  if (0 < other2 * bitmap_index) {
    do {
      local_20 = (uint)*pbVar4;
      if (local_20 != this_ptr->load_flags) break;
      iVar1 = iVar1 + 1;
      pbVar4 = pbVar4 + 1;
      local_20 = this_ptr->load_flags;
    } while (iVar1 < other2 * bitmap_index);
  }
  if (local_20 == this_ptr->load_flags) {
    _sprintf
              (local_16c,"No character markers found in font file (%s).",this_ptr->bitmap_files + bitmapcount);
    g_CurrentLineNumber = 0x1cd;
    g_CurrentFilename = "..\\engine\\font.cpp";
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_16c);
  }
  iVar1 = 0;
  pbVar4 = this_ptr->bitmap_data[bitmapcount];
  local_34 = 0;
  piVar3 = local_40;
  if (0 < bitmap_index) {
    do {
      iVar6 = 0;
      pbVar5 = pbVar4;
      if (0 < other2) {
        do {
          if (*pbVar5 == local_20) {
            local_34 = local_34 + 1;
            *piVar3 = iVar1;
            piVar3 = piVar3 + 1;
            break;
          }
          iVar6 = iVar6 + 1;
          pbVar5 = pbVar5 + 1;
        } while (iVar6 < other2);
      }
      iVar1 = iVar1 + 1;
      pbVar4 = pbVar4 + other2;
    } while (iVar1 < bitmap_index);
  }
  local_34 = local_34 + -1;
  local_38 = 0;
  iVar1 = width;
  if (0 < local_34) {
    local_2c = this_ptr->bitmap_files + bitmapcount;
    local_3c = (int)(this_ptr->bitmap_files + -1) + 0x4c + bitmapcount * 4;
    local_30 = local_40;
    do {
      local_14 = (byte *)(*(int *)(local_3c + 0x144) + *local_30 * other2);
      local_18 = 0;
      local_24 = local_30;
      local_1c = local_14 + other2;
      iVar6 = (int)(this_ptr->bitmap_files + -1) + 0x4c + iVar1 * 4;
      for (iVar7 = 0; iVar2 = iVar7 - local_28, iVar7 < other2; iVar7 = iVar7 + 1) {
        if (local_18 == 0) {
          if (*local_14 == local_20) {
            local_18 = 1;
            local_28 = iVar7;
            if (0xff < iVar1) {
              _sprintf
                        (local_16c,"Too many chars: fontfile %s, chars %d",local_2c,iVar1);
              g_CurrentLineNumber = 0x201;
              g_CurrentFilename = "..\\engine\\font.cpp";
              core_main_c_displayErrorAndQuit_FUN_00506f10(local_16c);
            }
            *(byte **)(iVar6 + 0x1d68) = local_1c;
          }
        }
        else if (*local_14 != local_20) {
          *(int *)(iVar6 + 0x2568) = iVar2;
          local_18 = 0;
          if (this_ptr->max_char_height < iVar2) {
            this_ptr->max_char_height = iVar2;
          }
          iVar2 = engine_font_cpp_CBitFont_calculateCharacterHeight_FUN_004cda20
                            (this_ptr,*(uchar **)(iVar6 + 0x1d68),*(int *)(iVar6 + 0x2568),
                             local_24[1] - (*local_24 + 1),other2);
          *(int *)(iVar6 + 0x2968) = iVar2;
          if (this_ptr->max_char_width < iVar2) {
            this_ptr->max_char_width = iVar2;
          }
          iVar1 = iVar1 + 1;
          iVar6 = iVar6 + 4;
        }
        local_1c = local_1c + 1;
        local_14 = local_14 + 1;
      }
      if (local_18 == 1) {
        *(int *)(iVar6 + 0x2568) = iVar2;
        if (this_ptr->max_char_height < iVar2) {
          this_ptr->max_char_height = iVar2;
        }
        iVar6 = engine_font_cpp_CBitFont_calculateCharacterHeight_FUN_004cda20
                          (this_ptr,(uchar *)this_ptr->char_positions[iVar1],
                           this_ptr->char_widths[iVar1],local_30[1] - (*local_30 + 1),other2);
        this_ptr->char_heights[iVar1] = iVar6;
        if (this_ptr->max_char_width < iVar6) {
          this_ptr->max_char_width = iVar6;
        }
        iVar1 = iVar1 + 1;
      }
      local_30 = local_30 + 1;
      local_38 = local_38 + 1;
    } while (local_38 < local_34);
  }
  if (width < iVar1) {
    iVar6 = (int)(this_ptr->bitmap_files + -1) + 0x4c + width * 4;
    do {
      width = width + 1;
      *(int *)(iVar6 + 0x2168) = bitmapcount;
      iVar6 = iVar6 + 4;
    } while (width < iVar1);
  }
  this_ptr->current_max_width = this_ptr->max_char_width;
  g_CurrentDebugFilename = "..\\engine\\font.cpp";
  g_CurrentDebugLine = 0x23e;
  shape_memdbg_cpp_free_FUN_005fe659(local_40);
  return;
}
