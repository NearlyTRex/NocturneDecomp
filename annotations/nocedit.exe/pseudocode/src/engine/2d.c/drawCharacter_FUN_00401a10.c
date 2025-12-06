// Name: engine_2d.c_drawCharacter_FUN_00401a10
// Address: 00401a10
// Address Range: [[00401a10, 00401b66]]
// Convention: __cdecl
// Signature: int engine_2d.c_drawCharacter_FUN_00401a10(int char_code, int x_pos, int y_pos, int color)

#include "nocturne.h"

int __cdecl engine_2d_c_drawCharacter_FUN_00401a10(int char_code,int x_pos,int y_pos,int color)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  byte *puVar7;
  ushort *puVar8;
  
  iVar3 = (char_code + -0x20) * 0x91;
  uVar5 = (uint)(byte)(&g_FontTable)[iVar3];
  if ((((x_pos < g_ClipLeft) || (y_pos < g_ClipTop)) || ((int)((g_ClipRight + 1) - uVar5) < x_pos))
     || (g_ClipBottom + -10 < y_pos)) {
    iVar3 = 0;
  }
  else {
    iVar6 = y_pos * 4;
    pcVar1 = &DAT_00666041 + iVar3;
    iVar3 = iVar6 + 0x2c;
    if (g_BitsPerPixel == 8) {
      do {
        puVar7 = (byte *)(*(int *)((int)g_ScreenBufferArray + iVar6) + x_pos);
        iVar2 = 0;
        if (uVar5 != 0) {
          do {
            if (*pcVar1 != '\0') {
              *puVar7 = (byte)color;
            }
            pcVar1 = pcVar1 + 1;
            iVar2 = iVar2 + 1;
            puVar7 = puVar7 + 1;
          } while (iVar2 < (int)uVar5);
        }
        iVar6 = iVar6 + 4;
      } while (iVar6 != iVar3);
    }
    else if (g_BitsPerPixel == 0x10) {
      do {
        puVar8 = (ushort *)(*(int *)((int)g_ScreenBufferArray + iVar6) + x_pos * 2);
        iVar2 = 0;
        if (uVar5 != 0) {
          do {
            if (*pcVar1 != '\0') {
              *puVar8 = g_ColorTable16[color];
            }
            pcVar1 = pcVar1 + 1;
            iVar2 = iVar2 + 1;
            puVar8 = puVar8 + 1;
          } while (iVar2 < (int)uVar5);
        }
        iVar6 = iVar6 + 4;
      } while (iVar6 != iVar3);
    }
    else {
      do {
        iVar2 = 0;
        puVar4 = (uint *)(*(int *)((int)g_ScreenBufferArray + iVar6) + x_pos * 4);
        if (uVar5 != 0) {
          do {
            if (*pcVar1 != '\0') {
              *puVar4 = g_ColorTable32[color];
            }
            pcVar1 = pcVar1 + 1;
            iVar2 = iVar2 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar2 < (int)uVar5);
        }
        iVar6 = iVar6 + 4;
      } while (iVar6 != iVar3);
    }
    iVar3 = uVar5 + 1;
  }
  return iVar3;
}
