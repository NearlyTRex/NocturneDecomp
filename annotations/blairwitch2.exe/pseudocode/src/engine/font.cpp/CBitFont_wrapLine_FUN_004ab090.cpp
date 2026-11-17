// Name: engine_font.cpp_CBitFont_wrapLine_FUN_004ab090
// Address: 004ab090
// Address Range: [[004ab090, 004ab2ac]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_wrapLine_FUN_004ab090(CBitFont *this_ptr,char *source_text,char *dest_line,int line_width,int max_pixel_width,uint flags,int *chars_consumed)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_wrapLine_FUN_004ab090(CBitFont *this_ptr,char *source_text,char *dest_line,int line_width,int max_pixel_width,uint flags,int *chars_consumed)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar5 = 0;
  iVar9 = 0;
  if ((flags & 0x40) == 0) {
    *dest_line = '\0';
  }
  else {
    uVar4 = 0xffffffff;
    pcVar8 = dest_line;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    iVar9 = ~uVar4 - 1;
  }
  if (source_text == (char *)0x0) {
    source_text = &DAT_005d6a27;
  }
  pcVar8 = source_text;
  if ((flags & 1) != 0) {
    for (; ((g_UCHAR_ARRAY_0061ed94[(byte)(*pcVar8 + 1)] & 2) != 0 &&
           (((flags & 8) == 0 || (*pcVar8 != '\n')))); pcVar8 = pcVar8 + 1) {
      iVar5 = iVar5 + 1;
    }
  }
  local_18 = 0;
  pcVar8 = dest_line + iVar9;
  iVar3 = iVar5;
  iVar2 = iVar9;
LAB_004ab101:
  while( true ) {
    do {
      local_1c = iVar2;
      local_20 = iVar3;
      iVar6 = iVar5;
      cVar1 = source_text[iVar6];
      if (cVar1 == '\0') goto LAB_004ab113;
      iVar5 = iVar6 + 1;
      iVar3 = iVar5;
      iVar2 = iVar9;
    } while (cVar1 == '\r');
    if (cVar1 != '\n') break;
    if ((flags & 8) != 0) {
      local_18 = 3;
      iVar6 = iVar5;
LAB_004ab113:
      if ((flags & 2) != 0) {
        pcVar8 = dest_line + iVar9;
        while ((0 < iVar9 && ((g_UCHAR_ARRAY_0061ed94[(byte)(pcVar8[-1] + 1)] & 2) != 0))) {
          iVar9 = iVar9 + -1;
          pcVar8 = pcVar8 + -1;
        }
      }
      dest_line[iVar9] = '\0';
      if ((flags & 4) != 0) {
        for (pcVar8 = source_text + iVar6;
            ((g_UCHAR_ARRAY_0061ed94[(byte)(*pcVar8 + 1)] & 2) != 0 &&
            (((flags & 8) == 0 || (*pcVar8 != '\n')))); pcVar8 = pcVar8 + 1) {
          iVar6 = iVar6 + 1;
        }
      }
      if (chars_consumed != (int *)0x0) {
        *chars_consumed = iVar6;
        return local_18;
      }
      return local_18;
    }
  }
  if (iVar9 < line_width + -1) {
    *pcVar8 = '\0';
    iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004aaf00(this_ptr,dest_line);
    if (iVar3 <= max_pixel_width) {
      pcVar7 = pcVar8 + 1;
      iVar9 = iVar9 + 1;
      *pcVar8 = cVar1;
      pcVar8 = pcVar7;
      iVar3 = local_20;
      iVar2 = local_1c;
      if ((g_UCHAR_ARRAY_0061ed94[(byte)(cVar1 + 1)] & 2) != 0) {
        iVar3 = iVar5;
        iVar2 = iVar9;
      }
      goto LAB_004ab101;
    }
    local_18 = 2;
  }
  else {
    local_18 = 1;
  }
  if ((((g_UCHAR_ARRAY_0061ed94[(byte)(cVar1 + 1)] & 2) == 0) && ((flags & 0x10) == 0)) &&
     (((flags & 0x20) == 0 || (local_1c != 0)))) {
    iVar6 = local_20;
    iVar9 = local_1c;
  }
  goto LAB_004ab113;
}
