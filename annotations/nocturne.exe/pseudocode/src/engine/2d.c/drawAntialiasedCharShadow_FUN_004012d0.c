// Name: engine_2d.c_drawAntialiasedCharShadow_FUN_004012d0
// Address: 004012d0
// Address Range: [[004012d0, 004013cb]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawAntialiasedCharShadow_FUN_004012d0(int char_code,int x_pos,int y_pos)

#include "nocturne.h"

void __cdecl engine_2d_c_drawAntialiasedCharShadow_FUN_004012d0(int char_code,int x_pos,int y_pos)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  byte *puVar4;
  byte *puVar5;
  int iVar6;
  uchar *puVar7;
  int iStack_14;
  
  if ((((0 < y_pos) && (y_pos + 0x18 < g_WindowHeight)) && (0 < x_pos)) &&
     (((x_pos + 0x17 < g_WindowWidth && (0x1f < char_code)) && (char_code < 0x80)))) {
    iStack_14 = y_pos * 4;
    iVar1 = g_FontCharWidths[char_code];
    iVar2 = iStack_14 + 0x5c;
    puVar7 = g_FontGlyphPtrs[char_code];
    do {
      puVar4 = (byte *)(*(int *)((int)g_ScreenBufferArray + iStack_14) + x_pos + -1);
      puVar3 = (byte *)(*(int *)((int)g_ScreenBufferArray + iStack_14 + 4) + x_pos + -1);
      puVar5 = (byte *)(*(int *)(g_FogTable[0x11] + iStack_14 + 0xfc) + x_pos + -1);
      iVar6 = 0;
      if (0 < iVar1) {
        do {
          if (*puVar7 != '\0') {
            puVar4[1] = 0;
            puVar4[2] = 0;
            *puVar4 = 0;
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3[2] = 0;
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5[2] = 0;
          }
          puVar7 = puVar7 + 1;
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
          iVar6 = iVar6 + 1;
          puVar5 = puVar5 + 1;
        } while (iVar6 < iVar1);
      }
      iStack_14 = iStack_14 + 4;
    } while (iStack_14 != iVar2);
  }
  return;
}
