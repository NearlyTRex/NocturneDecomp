// Name: engine_font.cpp_CBitFont_wrapText_FUN_004d0010
// Address: 004d0010
// Address Range: [[004d0010, 004d019e]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_wrapText_FUN_004d0010(CBitFont * this_ptr, char * source_text, char * dest_buffer, int max_lines, int line_width, int max_pixel_width)

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
  char *pcVar9;
  byte bVar10;
  int in_stack_0000001c;
  char *local_20;
  int local_1c;
  uint local_10;
  
  bVar10 = 0;
  crt_memory_c_memset_FUN_005fde40(dest_buffer,0,max_lines * line_width);
  if (source_text == (char *)0x0) {
    return 0;
  }
  local_1c = 0;
  if (0 < line_width) {
    local_20 = dest_buffer;
    pcVar7 = source_text;
    do {
      for (; ((g_CharacterClassificationTable[(byte)(*pcVar7 + 1)] & 2U) != 0 && (*pcVar7 != '\n'));
          pcVar7 = pcVar7 + 1) {
      }
      if (*pcVar7 == '\0') {
        return local_1c;
      }
      uVar6 = 0;
      local_10 = 0xffffffff;
      local_1c = local_1c + 1;
      pcVar8 = pcVar7;
      while( true ) {
        cVar1 = *pcVar8;
        if ((cVar1 == '\n') || (cVar1 == '\0')) goto LAB_004d00c8;
        if ((g_CharacterClassificationTable[(byte)(cVar1 + 1)] & 2U) != 0) {
          local_10 = uVar6;
        }
        bVar2 = false;
        if ((int)uVar6 < line_width + -1) {
          g_TempTextBuffer[uVar6] = '\0';
          iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80
                            ((CBitFont *)source_text,g_TempTextBuffer);
          if (iVar3 <= in_stack_0000001c) {
            bVar2 = true;
          }
        }
        g_TempTextBuffer[uVar6] = cVar1;
        if (!bVar2) break;
        uVar6 = uVar6 + 1;
        pcVar8 = pcVar8 + 1;
      }
      if (-1 < (int)local_10) {
        uVar6 = local_10;
      }
LAB_004d00c8:
      uVar5 = uVar6;
      if (0 < (int)uVar6) {
        pcVar8 = pcVar7 + uVar6;
        do {
          if ((g_CharacterClassificationTable[(byte)(pcVar8[-1] + 1)] & 2U) == 0) break;
          uVar5 = uVar5 - 1;
          pcVar8 = pcVar8 + -1;
        } while (0 < (int)uVar5);
      }
      pcVar8 = pcVar7;
      pcVar9 = local_20;
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(uint *)pcVar9 = *(uint *)pcVar8;
        pcVar8 = pcVar8 + (uint)bVar10 * -8 + 4;
        pcVar9 = pcVar9 + (uint)bVar10 * -8 + 4;
      }
      for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + (uint)bVar10 * -2 + 1;
        pcVar9 = pcVar9 + (uint)bVar10 * -2 + 1;
      }
      local_20[uVar5] = '\0';
      if (pcVar7[uVar6] == '\n') {
        uVar6 = uVar6 + 1;
      }
      pcVar7 = pcVar7 + uVar6;
      local_20 = local_20 + line_width;
    } while (local_1c < line_width);
  }
  return local_1c;
}
