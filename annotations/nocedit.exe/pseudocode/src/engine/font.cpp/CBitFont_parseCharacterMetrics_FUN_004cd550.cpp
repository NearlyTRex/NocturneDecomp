// Name: engine_font.cpp_CBitFont_parseCharacterMetrics_FUN_004cd550
// Address: 004cd550
// Address Range: [[004cd550, 004cda1c]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_parseCharacterMetrics_FUN_004cd550(CBitFont *this_ptr,int bitmap_count,int bitmap_width,int bitmap_height,int first_char)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_parseCharacterMetrics_FUN_004cd550(CBitFont *this_ptr,int bitmap_count,int bitmap_width,int bitmap_height,int first_char)

{
  bool bVar1;
  int *ptr;
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar3;
  byte *pbVar4;
  byte *pbVar6;
  byte *pbVar5;
  int iVar8;
  int iVar9;
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
  
  ptr = (int *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                  (bitmap_height * 4,"..\\engine\\font.cpp",0x1b7);
  if (ptr == (int *)0x0) {
    g_CurrentFilename = "..\\engine\\font.cpp";
    g_CurrentLineNumber = 0x1b8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
  }
  pbVar6 = this_ptr->bitmap_data[bitmap_count];
  iVar1 = 0;
  local_20 = this_ptr->load_flags;
  if (0 < bitmap_width * bitmap_height) {
    do {
      local_20 = (uint)*pbVar6;
      if (local_20 != this_ptr->load_flags) break;
      iVar1 = iVar1 + 1;
      pbVar6 = pbVar6 + 1;
      local_20 = this_ptr->load_flags;
    } while (iVar1 < bitmap_width * bitmap_height);
  }
  if (local_20 == this_ptr->load_flags) {
    _sprintf(local_16c,"No character markers found in font file (%s).",this_ptr->bitmap_files + bitmap_count);
    g_CurrentLineNumber = 0x1cd;
    g_CurrentFilename = "..\\engine\\font.cpp";
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_16c);
  }
  iVar9 = 0;
  pbVar4 = this_ptr->bitmap_data[bitmap_count];
  local_34 = 0;
  piVar3 = ptr;
  if (0 < bitmap_height) {
    do {
      iVar6 = 0;
      pbVar5 = pbVar4;
      if (0 < bitmap_width) {
        do {
          if (*pbVar5 == local_20) {
            local_34 = local_34 + 1;
            *piVar3 = iVar9;
            piVar3 = piVar3 + 1;
            break;
          }
          iVar6 = iVar6 + 1;
          pbVar5 = pbVar5 + 1;
        } while (iVar6 < bitmap_width);
      }
      iVar9 = iVar9 + 1;
      pbVar4 = pbVar4 + bitmap_width;
    } while (iVar9 < bitmap_height);
  }
  local_38 = 0;
  iVar9 = first_char;
  if (0 < local_34 + -1) {
    local_30 = ptr;
    do {
      local_14 = (byte *)((int)this_ptr->bitmap_data[bitmap_count] + *local_30 * bitmap_width);
      bVar1 = false;
      local_1c = local_14 + bitmap_width;
      iVar8 = (int)(this_ptr->bitmap_files + -1) + 0x4c + iVar9 * 4;
      for (iVar7 = 0; iVar2 = iVar7 - local_28, iVar7 < bitmap_width; iVar7 = iVar7 + 1) {
        if (bVar1) {
          if (*local_14 != local_20) {
            *(int *)(iVar8 + 0x2568) = iVar2;
            bVar1 = false;
            if (this_ptr->max_char_width < iVar2) {
              this_ptr->max_char_width = iVar2;
            }
            iVar3 = engine_font_cpp_CBitFont_calculateCharacterHeight_FUN_004cda20
                              (this_ptr,*(uchar **)(iVar8 + 0x1d68),*(int *)(iVar8 + 0x2568),
                               local_30[1] - (*local_30 + 1),bitmap_width);
            *(int *)(iVar8 + 0x2968) = iVar3;
            if (this_ptr->max_char_height < iVar3) {
              this_ptr->max_char_height = iVar3;
            }
            iVar9 = iVar9 + 1;
            iVar8 = iVar8 + 4;
          }
        }
        else if (*local_14 == local_20) {
          bVar1 = true;
          if (0xff < iVar9) {
            _sprintf(local_16c,"Too many chars: fontfile %s, chars %d",
                       this_ptr->bitmap_files + bitmap_count,iVar9);
            g_CurrentLineNumber = 0x201;
            g_CurrentFilename = "..\\engine\\font.cpp";
            core_main_c_displayErrorAndQuit_FUN_00506f10(local_16c);
          }
          *(byte **)(iVar8 + 0x1d68) = local_1c;
          local_28 = iVar7;
        }
        local_1c = local_1c + 1;
        local_14 = local_14 + 1;
      }
      if (bVar1) {
        *(int *)(iVar8 + 0x2568) = iVar2;
        if (this_ptr->max_char_width < iVar2) {
          this_ptr->max_char_width = iVar2;
        }
        iVar8 = engine_font_cpp_CBitFont_calculateCharacterHeight_FUN_004cda20
                          (this_ptr,this_ptr->char_positions[iVar9],this_ptr->char_widths[iVar9],
                           local_30[1] - (*local_30 + 1),bitmap_width);
        this_ptr->char_heights[iVar9] = iVar8;
        if (this_ptr->max_char_height < iVar8) {
          this_ptr->max_char_height = iVar8;
        }
        iVar9 = iVar9 + 1;
      }
      local_30 = local_30 + 1;
      local_38 = local_38 + 1;
    } while (local_38 < local_34 + -1);
  }
  if (first_char < iVar9) {
    iVar8 = (int)(this_ptr->bitmap_files + -1) + 0x4c + first_char * 4;
    do {
      first_char = first_char + 1;
      *(int *)(iVar8 + 0x2168) = bitmap_count;
      iVar8 = iVar8 + 4;
    } while (first_char < iVar9);
  }
  this_ptr->current_line_height = this_ptr->max_char_height;
  g_CurrentDebugFilename = "..\\engine\\font.cpp";
  g_CurrentDebugLine = 0x23e;
  shape_memdbg_cpp_free_FUN_005fe659(ptr);
  return;
}
