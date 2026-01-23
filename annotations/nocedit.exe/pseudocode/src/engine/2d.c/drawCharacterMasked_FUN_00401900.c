// Name: engine_2d.c_drawCharacterMasked_FUN_00401900
// Address: 00401900
// Address Range: [[00401900, 00401a0c]]
// Convention: __cdecl
// Signature: int engine_2d.c_drawCharacterMasked_FUN_00401900(int char_code, int x_pos, int y_pos)

#include "nocturne.h"

int __cdecl engine_2d_c_drawCharacterMasked_FUN_00401900(int char_code,int x_pos,int y_pos)

{
  uchar *puVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  byte *puVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = (uint)g_FontTable[char_code + -0x20].width;
  if ((((x_pos < g_ClipLeft) || (y_pos < g_ClipTop)) || ((int)((g_ClipRight + 1) - uVar7) < x_pos))
     || (g_ClipBottom + -10 < y_pos)) {
    iVar3 = 0;
  }
  else {
    iVar8 = y_pos * 4;
    puVar1 = g_FontTable[char_code + -0x20].bitmap;
    iVar3 = iVar8 + 0x2c;
    if (g_BitsPerPixel == 8) {
      do {
        iVar2 = 0;
        puVar5 = (byte *)(*(int *)((int)g_ScreenBufferArray + iVar8) + x_pos);
        if (uVar7 != 0) {
          do {
            if (*puVar1 == '\0') {
              *puVar5 = 0;
            }
            else {
              *puVar5 = 2;
            }
            puVar1 = puVar1 + 1;
            iVar2 = iVar2 + 1;
            puVar5 = puVar5 + 1;
          } while (iVar2 < (int)uVar7);
        }
        iVar8 = iVar8 + 4;
        *puVar5 = 0;
      } while (iVar8 != iVar3);
    }
    else {
      do {
        puVar4 = (ushort *)(*(int *)((int)g_ScreenBufferArray + iVar8) + x_pos * 2);
        iVar2 = 0;
        if (uVar7 != 0) {
          do {
            uVar6 = g_ColorTable16[0];
            if (*puVar1 != '\0') {
              uVar6 = g_ColorTable16[2];
            }
            *puVar4 = uVar6;
            puVar1 = puVar1 + 1;
            iVar2 = iVar2 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar2 < (int)uVar7);
        }
        iVar8 = iVar8 + 4;
        *puVar4 = g_ColorTable16[0];
      } while (iVar8 != iVar3);
    }
    iVar3 = uVar7 + 1;
  }
  return iVar3;
}
