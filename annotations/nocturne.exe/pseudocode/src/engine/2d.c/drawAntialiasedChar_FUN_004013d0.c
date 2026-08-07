// Name: engine_2d.c_drawAntialiasedChar_FUN_004013d0
// Address: 004013d0
// Address Range: [[004013d0, 00401492]]
// Convention: __cdecl
// Signature: int __cdecl engine_2d_c_drawAntialiasedChar_FUN_004013d0(int char_code,int x_pos,int y_pos,int intensity_shift)

#include "nocturne.h"

int __cdecl engine_2d_c_drawAntialiasedChar_FUN_004013d0(int char_code,int x_pos,int y_pos,int intensity_shift)

{
  int iVar1;
  int iVar2;
  uchar *puVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int in_stack_00000014;
  byte in_stack_0000001c;
  
  engine_2d_c_drawAntialiasedCharShadow_FUN_004012d0(char_code,x_pos,y_pos);
  if ((0x1f < char_code) && (char_code < 0x80)) {
    iVar5 = y_pos * 4;
    iVar1 = g_FontCharWidths[char_code];
    iVar2 = iVar5 + 0x5c;
    pbVar6 = g_FontGlyphPtrs[char_code];
    do {
      iVar4 = 0;
      puVar3 = (uchar *)(*(int *)((int)g_ScreenBufferArray + iVar5) + in_stack_00000014);
      if (0 < iVar1) {
        do {
          if (*pbVar6 != 0) {
            *puVar3 = g_ColorCubeLookup
                      [((int)(uint)*pbVar6 >> (in_stack_0000001c & 0x1f) & 0xffU) * 0x421];
          }
          pbVar6 = pbVar6 + 1;
          iVar4 = iVar4 + 1;
          puVar3 = puVar3 + 1;
        } while (iVar4 < iVar1);
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 != iVar2);
    return iVar1;
  }
  return 0;
}
