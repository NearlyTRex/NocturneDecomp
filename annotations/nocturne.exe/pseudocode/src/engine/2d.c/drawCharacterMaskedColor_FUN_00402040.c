// Name: engine_2d.c_drawCharacterMaskedColor_FUN_00402040
// Address: 00402040
// Address Range: [[00402040, 00402196]]
// Convention: __cdecl
// Signature: int __cdecl engine_2d_c_drawCharacterMaskedColor_FUN_00402040(int char_code,int x_pos,int y_pos,int color)

#include "nocturne.h"

int __cdecl engine_2d_c_drawCharacterMaskedColor_FUN_00402040(int char_code,int x_pos,int y_pos,int color)

{
  uchar *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  byte *puVar7;
  ushort *puVar8;
  
  uVar5 = (uint)g_FontTable[char_code + -0x20].width;
  if ((((x_pos < g_ClipLeft) || (y_pos < g_ClipTop)) || ((int)((g_ClipRight + 1) - uVar5) < x_pos))
     || (g_ClipBottom + -10 < y_pos)) {
    iVar3 = 0;
  }
  else {
    iVar6 = y_pos * 4;
    puVar1 = g_FontTable[char_code + -0x20].bitmap;
    iVar3 = iVar6 + 0x2c;
    if (g_BitsPerPixel == 8) {
      do {
        puVar7 = (byte *)(*(int *)((int)g_ScreenBufferArray + iVar6) + x_pos);
        iVar2 = 0;
        if (uVar5 != 0) {
          do {
            if (*puVar1 != '\0') {
              *puVar7 = (byte)color;
            }
            puVar1 = puVar1 + 1;
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
            if (*puVar1 != '\0') {
              *puVar8 = g_ColorTable16[color];
            }
            puVar1 = puVar1 + 1;
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
            if (*puVar1 != '\0') {
              *puVar4 = g_ColorTable32[color];
            }
            puVar1 = puVar1 + 1;
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
