// Name: engine_font.cpp_CBitFont_wrapText_FUN_004b2ef0
// Address: 004b2ef0
// Address Range: [[004b2ef0, 004b30b9]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_wrapText_FUN_004b2ef0(CBitFont *this_ptr,char *source_text,char *dest_buffer,int max_lines,int line_width,int max_pixel_width,int indent_chars,int indent_first_line)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_wrapText_FUN_004b2ef0(CBitFont *this_ptr,char *source_text,char *dest_buffer,int max_lines,int line_width,int max_pixel_width,int indent_chars,int indent_first_line)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  byte bVar10;
  char *pcStack_1c;
  uint uStack_18;
  int iStack_14;
  
  bVar10 = 0;
  memset(dest_buffer,0,max_lines * line_width);
  if (source_text == (char *)0x0) {
    return 0;
  }
  iStack_14 = 0;
  if (0 < max_lines) {
    pcStack_1c = dest_buffer;
    do {
      for (; ((g_UCHAR_ARRAY_006074b8[(byte)(*source_text + 1)] & 2) != 0 && (*source_text != '\n'))
          ; source_text = source_text + 1) {
      }
      if (*source_text == '\0') {
        return iStack_14;
      }
      uVar8 = 0;
      uStack_18 = 0xffffffff;
      iStack_14 = iStack_14 + 1;
      pcVar4 = source_text;
      while( true ) {
        cVar1 = *pcVar4;
        if ((cVar1 == '\n') || (cVar1 == '\0')) goto LAB_004b2fa8;
        if ((g_UCHAR_ARRAY_006074b8[(byte)(cVar1 + 1)] & 2) != 0) {
          uStack_18 = uVar8;
        }
        bVar3 = false;
        if ((int)uVar8 < line_width + -1) {
          (&g_CHAR_01d1a960)[uVar8] = '\0';
          if ((iStack_14 < 2) && (indent_first_line == 0)) {
            iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_004b2a80(this_ptr,&g_CHAR_01d1a960);
          }
          else {
            iVar2 = this_ptr->char_widths[0x20];
            iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_004b2a80(this_ptr,&g_CHAR_01d1a960);
            iVar5 = iVar5 + iVar2 * indent_chars;
          }
          if (iVar5 <= max_pixel_width) {
            bVar3 = true;
          }
        }
        (&g_CHAR_01d1a960)[uVar8] = cVar1;
        if (!bVar3) break;
        uVar8 = uVar8 + 1;
        pcVar4 = pcVar4 + 1;
      }
      if (-1 < (int)uStack_18) {
        uVar8 = uStack_18;
      }
LAB_004b2fa8:
      uVar7 = uVar8;
      if (0 < (int)uVar8) {
        pcVar4 = source_text + uVar8;
        do {
          if ((g_UCHAR_ARRAY_006074b8[(byte)(pcVar4[-1] + 1)] & 2) == 0) break;
          uVar7 = uVar7 - 1;
          pcVar4 = pcVar4 + -1;
        } while (0 < (int)uVar7);
      }
      pcVar4 = source_text;
      pcVar9 = pcStack_1c;
      for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(uint *)pcVar9 = *(uint *)pcVar4;
        pcVar4 = pcVar4 + (uint)bVar10 * -8 + 4;
        pcVar9 = pcVar9 + (uint)bVar10 * -8 + 4;
      }
      for (uVar6 = uVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar4;
        pcVar4 = pcVar4 + (uint)bVar10 * -2 + 1;
        pcVar9 = pcVar9 + (uint)bVar10 * -2 + 1;
      }
      pcStack_1c[uVar7] = '\0';
      if (source_text[uVar8] == '\n') {
        uVar8 = uVar8 + 1;
      }
      source_text = source_text + uVar8;
      pcStack_1c = pcStack_1c + line_width;
    } while (iStack_14 < max_lines);
  }
  return iStack_14;
}
