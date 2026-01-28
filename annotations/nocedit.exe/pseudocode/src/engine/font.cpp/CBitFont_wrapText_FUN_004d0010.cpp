// Name: engine_font.cpp_CBitFont_wrapText_FUN_004d0010
// Address: 004d0010
// Address Range: [[004d0010, 004d019e]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_wrapText_FUN_004d0010 (CBitFont *this_ptr,char *source_text,char *dest_buffer,int max_lines,int line_width, int max_pixel_width)

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_wrapText_FUN_004d0010
          (CBitFont *this_ptr,char *source_text,char *dest_buffer,int max_lines,int line_width,
          int max_pixel_width)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  char *local_24;
  int local_20;
  uint local_14;
  
  bVar9 = 0;
  crt_memory_c_memset_FUN_005fde40(dest_buffer,0,max_lines * line_width);
  if (source_text == (char *)0x0) {
    return 0;
  }
  local_20 = 0;
  if (0 < max_lines) {
    local_24 = dest_buffer;
    do {
      for (; ((g_CharacterClassificationTable[(byte)(*source_text + 1)] & 2U) != 0 &&
             (*source_text != '\n')); source_text = source_text + 1) {
      }
      if (*source_text == '\0') {
        return local_20;
      }
      uVar6 = 0;
      local_14 = 0xffffffff;
      local_20 = local_20 + 1;
      pcVar7 = source_text;
      while( true ) {
        cVar1 = *pcVar7;
        if ((cVar1 == '\n') || (cVar1 == '\0')) goto LAB_004d00c8;
        if ((g_CharacterClassificationTable[(byte)(cVar1 + 1)] & 2U) != 0) {
          local_14 = uVar6;
        }
        bVar2 = false;
        if ((int)uVar6 < line_width + -1) {
          g_TempTextBuffer[uVar6] = '\0';
          iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(this_ptr,g_TempTextBuffer);
          if (iVar3 <= max_pixel_width) {
            bVar2 = true;
          }
        }
        g_TempTextBuffer[uVar6] = cVar1;
        if (!bVar2) break;
        uVar6 = uVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      if (-1 < (int)local_14) {
        uVar6 = local_14;
      }
LAB_004d00c8:
      uVar5 = uVar6;
      if (0 < (int)uVar6) {
        pcVar7 = source_text + uVar6;
        do {
          if ((g_CharacterClassificationTable[(byte)(pcVar7[-1] + 1)] & 2U) == 0) break;
          uVar5 = uVar5 - 1;
          pcVar7 = pcVar7 + -1;
        } while (0 < (int)uVar5);
      }
      pcVar7 = source_text;
      pcVar8 = local_24;
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(uint *)pcVar8 = *(uint *)pcVar7;
        pcVar7 = pcVar7 + (uint)bVar9 * -8 + 4;
        pcVar8 = pcVar8 + (uint)bVar9 * -8 + 4;
      }
      for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + (uint)bVar9 * -2 + 1;
        pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
      }
      local_24[uVar5] = '\0';
      if (source_text[uVar6] == '\n') {
        uVar6 = uVar6 + 1;
      }
      source_text = source_text + uVar6;
      local_24 = local_24 + line_width;
    } while (local_20 < max_lines);
  }
  return local_20;
}
