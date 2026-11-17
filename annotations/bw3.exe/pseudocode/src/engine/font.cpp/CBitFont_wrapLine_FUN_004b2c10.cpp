// Name: engine_font.cpp_CBitFont_wrapLine_FUN_004b2c10
// Address: 004b2c10
// Address Range: [[004b2c10, 004b2e30]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_wrapLine_FUN_004b2c10(CBitFont *this_ptr,char *source_text,char *dest_line,int line_width,int max_pixel_width,uint flags,int *chars_consumed)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_wrapLine_FUN_004b2c10(CBitFont *this_ptr,char *source_text,char *dest_line,int line_width,int max_pixel_width,uint flags,int *chars_consumed)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar5 = 0;
  iVar8 = 0;
  if ((flags & 0x40) == 0) {
    *dest_line = '\0';
  }
  else {
    uVar4 = 0xffffffff;
    pcVar7 = dest_line;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar8 = ~uVar4 - 1;
  }
  if (source_text == (char *)0x0) {
    source_text = &DAT_005c20be;
  }
  pcVar7 = source_text;
  if ((flags & 1) != 0) {
    for (; ((g_UCHAR_ARRAY_006074b8[(byte)(*pcVar7 + 1)] & 2) != 0 &&
           (((flags & 8) == 0 || (*pcVar7 != '\n')))); pcVar7 = pcVar7 + 1) {
      iVar5 = iVar5 + 1;
    }
  }
  local_18 = 0;
  pcVar7 = dest_line + iVar8;
  iVar3 = iVar5;
  iVar2 = iVar8;
LAB_004b2c81:
  while( true ) {
    do {
      local_1c = iVar2;
      local_20 = iVar3;
      iVar6 = iVar5;
      cVar1 = source_text[iVar6];
      if (cVar1 == '\0') goto LAB_004b2c93;
      iVar5 = iVar6 + 1;
      iVar3 = iVar5;
      iVar2 = iVar8;
    } while (cVar1 == '\r');
    if (cVar1 != '\n') break;
    if ((flags & 8) != 0) {
      local_18 = 3;
      iVar6 = iVar5;
LAB_004b2c93:
      if ((flags & 2) != 0) {
        pcVar7 = dest_line + iVar8;
        while ((0 < iVar8 && ((g_UCHAR_ARRAY_006074b8[(byte)(pcVar7[-1] + 1)] & 2) != 0))) {
          iVar8 = iVar8 + -1;
          pcVar7 = pcVar7 + -1;
        }
      }
      dest_line[iVar8] = '\0';
      if ((flags & 4) != 0) {
        for (pcVar7 = source_text + iVar6;
            ((g_UCHAR_ARRAY_006074b8[(byte)(*pcVar7 + 1)] & 2) != 0 &&
            (((flags & 8) == 0 || (*pcVar7 != '\n')))); pcVar7 = pcVar7 + 1) {
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
  if (iVar8 < line_width + -1) {
    pcVar7[1] = '\0';
    *pcVar7 = cVar1;
    iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004b2a80(this_ptr,dest_line);
    if (iVar3 <= max_pixel_width) {
      iVar8 = iVar8 + 1;
      pcVar7 = pcVar7 + 1;
      iVar3 = local_20;
      iVar2 = local_1c;
      if ((g_UCHAR_ARRAY_006074b8[(byte)(cVar1 + 1)] & 2) != 0) {
        iVar3 = iVar5;
        iVar2 = iVar8;
      }
      goto LAB_004b2c81;
    }
    local_18 = 2;
  }
  else {
    local_18 = 1;
  }
  if ((((g_UCHAR_ARRAY_006074b8[(byte)(cVar1 + 1)] & 2) == 0) && ((flags & 0x10) == 0)) &&
     (((flags & 0x20) == 0 || (local_1c != 0)))) {
    iVar6 = local_20;
    iVar8 = local_1c;
  }
  goto LAB_004b2c93;
}
