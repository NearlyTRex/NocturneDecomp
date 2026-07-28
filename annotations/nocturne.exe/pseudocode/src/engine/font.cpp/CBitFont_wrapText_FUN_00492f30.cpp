// Name: engine_font.cpp_CBitFont_wrapText_FUN_00492f30
// Address: 00492f30
// Address Range: [[00492f30, 004930ac]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_wrapText_FUN_00492f30(CBitFont *this_ptr,char *source_text,char *dest_buffer,int max_lines,int line_width,int max_pixel_width)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_wrapText_FUN_00492f30(CBitFont *this_ptr,char *source_text,char *dest_buffer,int max_lines,int line_width,int max_pixel_width)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  int local_24;
  char *local_18;
  uint local_14;
  
  bVar8 = 0;
  memset(dest_buffer,0,max_lines * line_width);
  if (source_text == (char *)0x0) {
    return 0;
  }
  local_24 = 0;
  if (0 < max_lines) {
    local_18 = dest_buffer;
    do {
      for (; (((&DAT_005c168c)[(byte)(*source_text + 1)] & 2) != 0 && (*source_text != '\n'));
          source_text = source_text + 1) {
      }
      if (*source_text == '\0') {
        return local_24;
      }
      uVar5 = 0;
      local_14 = 0xffffffff;
      local_24 = local_24 + 1;
      pcVar6 = source_text;
      while( true ) {
        cVar1 = *pcVar6;
        if ((cVar1 == '\n') || (cVar1 == '\0')) goto LAB_00492fe4;
        if (((&DAT_005c168c)[(byte)(cVar1 + 1)] & 2) != 0) {
          local_14 = uVar5;
        }
        if (line_width + -1 <= (int)uVar5) break;
        *pcVar6 = '\0';
        iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(this_ptr,source_text);
        *pcVar6 = cVar1;
        if (max_pixel_width < iVar2) break;
        uVar5 = uVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      if (-1 < (int)local_14) {
        uVar5 = local_14;
      }
LAB_00492fe4:
      uVar4 = uVar5;
      if (0 < (int)uVar5) {
        pcVar6 = source_text + uVar5;
        do {
          if (((&DAT_005c168c)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
          uVar4 = uVar4 - 1;
          pcVar6 = pcVar6 + -1;
        } while (0 < (int)uVar4);
      }
      pcVar6 = source_text;
      pcVar7 = local_18;
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(uint *)pcVar7 = *(uint *)pcVar6;
        pcVar6 = pcVar6 + (uint)bVar8 * -8 + 4;
        pcVar7 = pcVar7 + (uint)bVar8 * -8 + 4;
      }
      for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + (uint)bVar8 * -2 + 1;
        pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
      }
      local_18[uVar4] = '\0';
      if (source_text[uVar5] == '\n') {
        uVar5 = uVar5 + 1;
      }
      source_text = source_text + uVar5;
      local_18 = local_18 + line_width;
    } while (local_24 < max_lines);
  }
  return local_24;
}
