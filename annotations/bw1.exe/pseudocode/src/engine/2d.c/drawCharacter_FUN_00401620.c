// Name: engine_2d.c_drawCharacter_FUN_00401620
// Address: 00401620
// Address Range: [[00401620, 00401776]]
// Convention: __cdecl
// Signature: int __cdecl engine_2d_c_drawCharacter_FUN_00401620(int char_code,int x_pos,int y_pos)

#include "nocturne.h"

int __cdecl engine_2d_c_drawCharacter_FUN_00401620(int char_code,int x_pos,int y_pos)

{
  byte bVar1;
  uchar uVar2;
  uchar *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  uchar *puVar7;
  uchar *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  uVar11 = (uint)g_SFontGlyph_ARRAY_00608570[char_code + -0x20].width;
  if ((((x_pos < g_INT_01c4f008) || (y_pos < g_INT_01c4f00c)) ||
      ((int)((g_INT_01c4f010 + 1) - uVar11) < x_pos)) || (g_INT_01c4f014 + -10 < y_pos)) {
    iVar6 = 0;
  }
  else {
    iVar13 = y_pos * 4;
    puVar3 = g_SFontGlyph_ARRAY_00608570[char_code + -0x20].bitmap;
    iVar6 = iVar13 + 0x2c;
    if (g_INT_0061b4a0 == 8) {
      do {
        iVar12 = 0;
        puVar7 = (uchar *)(*(int *)((int)g_ARRAY_PTR_01c4354c + iVar13) + x_pos);
        puVar8 = puVar7;
        if (uVar11 != 0) {
          do {
            puVar7 = puVar8 + 1;
            uVar2 = *puVar3;
            puVar3 = puVar3 + 1;
            iVar12 = iVar12 + 1;
            *puVar8 = uVar2;
            puVar8 = puVar7;
          } while (iVar12 < (int)uVar11);
        }
        iVar13 = iVar13 + 4;
        *puVar7 = '\0';
      } while (iVar13 != iVar6);
    }
    else if (g_INT_0061b4a0 == 0x10) {
      do {
        iVar12 = 0;
        puVar4 = (ushort *)(*(int *)((int)g_ARRAY_PTR_01c4354c + iVar13) + x_pos * 2);
        puVar5 = puVar4;
        if (uVar11 != 0) {
          do {
            bVar1 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar5 + 1;
            iVar12 = iVar12 + 1;
            *puVar5 = g_USHORT_ARRAY_01c4dad0[bVar1];
            puVar5 = puVar4;
          } while (iVar12 < (int)uVar11);
        }
        iVar13 = iVar13 + 4;
        *puVar4 = 0;
      } while (iVar13 != iVar6);
    }
    else {
      do {
        iVar12 = 0;
        puVar9 = (uint *)(*(int *)((int)g_ARRAY_PTR_01c4354c + iVar13) + x_pos * 4);
        puVar10 = puVar9;
        if (uVar11 != 0) {
          do {
            bVar1 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar9 = puVar10 + 1;
            iVar12 = iVar12 + 1;
            *puVar10 = g_UINT_ARRAY_01c4dcd0[bVar1];
            puVar10 = puVar9;
          } while (iVar12 < (int)uVar11);
        }
        iVar13 = iVar13 + 4;
        *puVar9 = 0;
      } while (iVar13 != iVar6);
    }
    iVar6 = uVar11 + 1;
  }
  return iVar6;
}
