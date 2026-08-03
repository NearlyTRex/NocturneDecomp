// Name: engine_font.cpp_CBitFont_parseCharacterMetrics_FUN_00490470
// Address: 00490470
// Address Range: [[00490470, 00490916]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_parseCharacterMetrics_FUN_00490470(CBitFont *this_ptr,int bitmap_count,int bitmap_width,int bitmap_height,int first_char)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_parseCharacterMetrics_FUN_00490470(CBitFont *this_ptr,int bitmap_count,int bitmap_width,int bitmap_height,int first_char)

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
  
  local_40 = shape_memdbg_cpp_malloc_FUN_00564c18(bitmap_height * 4);
  if (local_40 == (int *)0x0) {
    g_CHAR_PTR_01cc4800 = "..\\engine\\font.cpp";
    g_INT_01cc4804 = 0x1b9;
    core_main_c_FUN_004c8440("Out of memory");
  }
  iVar3 = 0;
  pbVar4 = this_ptr->bitmap_data[bitmap_count];
  local_20 = this_ptr->load_flags;
  if (0 < bitmap_width * bitmap_height) {
    do {
      local_20 = (uint)*pbVar4;
      if (local_20 != this_ptr->load_flags) break;
      iVar3 = iVar3 + 1;
      pbVar4 = pbVar4 + 1;
      local_20 = this_ptr->load_flags;
    } while (iVar3 < bitmap_width * bitmap_height);
  }
  if (local_20 == this_ptr->load_flags) {
    _sprintf(local_16c,"No character markers found in font file (%s).");
    g_INT_01cc4804 = 0x1ce;
    g_CHAR_PTR_01cc4800 = "..\\engine\\font.cpp";
    core_main_c_FUN_004c8440(local_16c);
  }
  iVar3 = 0;
  pbVar4 = this_ptr->bitmap_data[bitmap_count];
  local_34 = 0;
  piVar2 = local_40;
  if (0 < bitmap_height) {
    do {
      iVar5 = 0;
      pbVar7 = pbVar4;
      if (0 < bitmap_width) {
        do {
          if (*pbVar7 == local_20) {
            local_34 = local_34 + 1;
            *piVar2 = iVar3;
            piVar2 = piVar2 + 1;
            break;
          }
          iVar5 = iVar5 + 1;
          pbVar7 = pbVar7 + 1;
        } while (iVar5 < bitmap_width);
      }
      iVar3 = iVar3 + 1;
      pbVar4 = pbVar4 + bitmap_width;
    } while (iVar3 < bitmap_height);
  }
  local_34 = local_34 + -1;
  local_38 = 0;
  iVar3 = first_char;
  if (0 < local_34) {
    local_2c = this_ptr->bitmap_files + bitmap_count;
    local_3c = (int)(this_ptr->bitmap_files + -1) + 0x4c + bitmap_count * 4;
    local_30 = local_40;
    do {
      local_18 = 0;
      local_14 = (byte *)(*(int *)(local_3c + 0x144) + *local_30 * bitmap_width);
      local_24 = local_30;
      local_1c = local_14 + bitmap_width;
      iVar5 = (int)(this_ptr->bitmap_files + -1) + 0x4c + iVar3 * 4;
      for (iVar6 = 0; iVar1 = iVar6 - local_28, iVar6 < bitmap_width; iVar6 = iVar6 + 1) {
        if (local_18 == 0) {
          if (*local_14 == local_20) {
            local_18 = 1;
            local_28 = iVar6;
            if (0xff < iVar3) {
              _sprintf(local_16c,"Too many chars: fontfile %s, chars %d");
              g_INT_01cc4804 = 0x202;
              g_CHAR_PTR_01cc4800 = "..\\engine\\font.cpp";
              core_main_c_FUN_004c8440(local_16c);
            }
            *(byte **)(iVar5 + 0x1d68) = local_1c;
          }
        }
        else if (*local_14 != local_20) {
          *(int *)(iVar5 + 0x2568) = iVar1;
          local_18 = 0;
          if (this_ptr->max_char_width < iVar1) {
            this_ptr->max_char_width = iVar1;
          }
          iVar1 = engine_font_cpp_CBitFont_calculateCharacterHeight_FUN_00490920
                            (this_ptr,*(uchar **)(iVar5 + 0x1d68),*(int *)(iVar5 + 0x2568),
                             local_24[1] - (*local_24 + 1),bitmap_width);
          *(int *)(iVar5 + 0x2968) = iVar1;
          if (this_ptr->max_char_height < iVar1) {
            this_ptr->max_char_height = iVar1;
          }
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 4;
        }
        local_1c = local_1c + 1;
        local_14 = local_14 + 1;
      }
      if (local_18 == 1) {
        *(int *)(iVar5 + 0x2568) = iVar1;
        if (this_ptr->max_char_width < iVar1) {
          this_ptr->max_char_width = iVar1;
        }
        iVar5 = engine_font_cpp_CBitFont_calculateCharacterHeight_FUN_00490920
                          (this_ptr,this_ptr->char_positions[iVar3],this_ptr->char_widths[iVar3],
                           local_30[1] - (*local_30 + 1),bitmap_width);
        this_ptr->char_heights[iVar3] = iVar5;
        if (this_ptr->max_char_height < iVar5) {
          this_ptr->max_char_height = iVar5;
        }
        iVar3 = iVar3 + 1;
      }
      local_30 = local_30 + 1;
      local_38 = local_38 + 1;
    } while (local_38 < local_34);
  }
  if (first_char < iVar3) {
    iVar5 = (int)(this_ptr->bitmap_files + -1) + 0x4c + first_char * 4;
    do {
      first_char = first_char + 1;
      *(int *)(iVar5 + 0x2168) = bitmap_count;
      iVar5 = iVar5 + 4;
    } while (first_char < iVar3);
  }
  this_ptr->current_line_height = this_ptr->max_char_height;
  shape_memdbg_cpp_free_FUN_00564486(local_40);
  return;
}
