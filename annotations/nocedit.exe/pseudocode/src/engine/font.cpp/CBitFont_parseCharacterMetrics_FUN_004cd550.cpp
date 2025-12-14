// Name: engine_font.cpp_CBitFont_parseCharacterMetrics_FUN_004cd550
// Address: 004cd550
// Address Range: [[004cd550, 004cda1c]]
// Convention: __cdecl
// Signature: void engine_font.cpp_CBitFont_parseCharacterMetrics_FUN_004cd550(CBitFont * this_ptr, int bitmapcount, int other2, int bitmap_index, int width, int height, int first_char)

#include "nocturne.h"

void __cdecl
engine_font_cpp_CBitFont_parseCharacterMetrics_FUN_004cd550
          (CBitFont *this_ptr,int bitmapcount,int other2,int bitmap_index,int width,int height,
          int first_char)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  byte *pbVar6;
  BADSPACEBASE *in_ESP;
  int iVar7;
  int iVar8;
  char acStack_164 [296];
  void *local_3c;
  int *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int *local_28;
  char (*local_24) [80];
  int local_20;
  int *local_1c;
  uint local_18;
  byte *local_14;
  
  local_3c = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                       (bitmap_index * 4,"..\\engine\\font.cpp",0x1b7);
  if (local_3c == (void *)0x0) {
    g_CurrentFilename = "..\\engine\\font.cpp";
    g_CurrentLineNumber = 0x1b8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
  }
  pbVar5 = this_ptr->bitmap_data[bitmap_index];
  iVar2 = 0;
  local_18 = this_ptr->load_flags;
  if (0 < other2 * bitmap_index) {
    do {
      local_18 = (uint)*pbVar5;
      if (local_18 != this_ptr->load_flags) break;
      iVar2 = iVar2 + 1;
      pbVar5 = pbVar5 + 1;
      local_18 = this_ptr->load_flags;
    } while (iVar2 < other2 * bitmap_index);
  }
  if (local_18 == this_ptr->load_flags) {
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_164,"No character markers found in font file (%s).");
    g_CurrentLineNumber = 0x1cd;
    g_CurrentFilename = "..\\engine\\font.cpp";
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xfffffe98);
  }
  iVar2 = 0;
  pbVar5 = this_ptr->bitmap_data[bitmap_index];
  local_2c = 0;
  piVar4 = local_38;
  if (0 < height) {
    do {
      iVar7 = 0;
      pbVar6 = pbVar5;
      if (0 < width) {
        do {
          if (*pbVar6 == local_18) {
            local_2c = local_2c + 1;
            *piVar4 = iVar2;
            piVar4 = piVar4 + 1;
            break;
          }
          iVar7 = iVar7 + 1;
          pbVar6 = pbVar6 + 1;
        } while (iVar7 < width);
      }
      iVar2 = iVar2 + 1;
      pbVar5 = pbVar5 + width;
    } while (iVar2 < height);
  }
  local_2c = local_2c + -1;
  local_30 = 0;
  iVar2 = first_char;
  if (0 < local_2c) {
    local_24 = this_ptr->bitmap_files + bitmap_index;
    local_34 = (int)(this_ptr->bitmap_files + -1) + 0x4c + bitmap_index * 4;
    local_28 = local_38;
    do {
      iVar8 = 0;
      pbVar5 = (byte *)(*(int *)(local_34 + 0x144) + *local_28 * width);
      bVar1 = false;
      local_1c = local_28;
      local_14 = pbVar5 + width;
      iVar7 = (int)(this_ptr->bitmap_files + -1) + 0x4c + iVar2 * 4;
      while( true ) {
        iVar3 = iVar8 - local_20;
        if (width <= iVar8) break;
        if (bVar1) {
          if (*pbVar5 != local_18) {
            *(int *)(iVar7 + 0x2568) = iVar3;
            bVar1 = false;
            if (this_ptr->max_char_height < iVar3) {
              this_ptr->max_char_height = iVar3;
            }
            iVar3 = engine_font_cpp_CBitFont_calculateCharacterHeight_FUN_004cda20
                              (this_ptr,*(uchar **)(iVar7 + 0x1d68),*(int *)(iVar7 + 0x2568),
                               local_1c[1] - (*local_1c + 1),width);
            *(int *)(iVar7 + 0x2968) = iVar3;
            if (this_ptr->max_char_width < iVar3) {
              this_ptr->max_char_width = iVar3;
            }
            iVar2 = iVar2 + 1;
            iVar7 = iVar7 + 4;
          }
        }
        else if (*pbVar5 == local_18) {
          bVar1 = true;
          local_20 = iVar8;
          if (0xff < iVar2) {
            crt_stdio_c_sprintf_FUN_005fdbd0
                      (acStack_164,"Too many chars: fontfile %s, chars %d",local_24);
            g_CurrentLineNumber = 0x201;
            g_CurrentFilename = "..\\engine\\font.cpp";
            core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xfffffe98);
          }
          *(byte **)(iVar7 + 0x1d68) = local_14;
        }
        iVar8 = iVar8 + 1;
        local_14 = local_14 + 1;
        pbVar5 = pbVar5 + 1;
      }
      if (bVar1) {
        *(int *)(iVar7 + 0x2568) = iVar3;
        if (this_ptr->max_char_height < iVar3) {
          this_ptr->max_char_height = iVar3;
        }
        iVar7 = engine_font_cpp_CBitFont_calculateCharacterHeight_FUN_004cda20
                          (this_ptr,(uchar *)this_ptr->char_positions[iVar2],
                           this_ptr->char_widths[iVar2],local_28[1] - (*local_28 + 1),width);
        this_ptr->char_heights[iVar2] = iVar7;
        if (this_ptr->max_char_width < iVar7) {
          this_ptr->max_char_width = iVar7;
        }
        iVar2 = iVar2 + 1;
      }
      local_28 = local_28 + 1;
      local_30 = local_30 + 1;
    } while (local_30 < local_2c);
  }
  if (first_char < iVar2) {
    iVar7 = (int)(this_ptr->bitmap_files + -1) + 0x4c + first_char * 4;
    do {
      first_char = first_char + 1;
      *(int *)(iVar7 + 0x2168) = bitmap_index;
      iVar7 = iVar7 + 4;
    } while (first_char < iVar2);
  }
  this_ptr->current_max_width = this_ptr->max_char_width;
  g_CurrentDebugFilename = "..\\engine\\font.cpp";
  g_CurrentDebugLine = 0x23e;
  crt_memory_c_free_FUN_005fe659(local_38);
  return;
}
