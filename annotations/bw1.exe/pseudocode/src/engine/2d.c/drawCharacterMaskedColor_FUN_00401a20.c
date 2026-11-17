// Name: engine_2d.c_drawCharacterMaskedColor_FUN_00401a20
// Address: 00401a20
// Address Range: [[00401a20, 00401b76]]
// Convention: __cdecl
// Signature: int __cdecl engine_2d_c_drawCharacterMaskedColor_FUN_00401a20(int char_code,int x_pos,int y_pos,int color)

#include "nocturne.h"

int __cdecl engine_2d_c_drawCharacterMaskedColor_FUN_00401a20(int char_code,int x_pos,int y_pos,int color)

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
  uVar5 = (uint)(byte)(&DAT_00608570)[iVar3];
  if ((((x_pos < g_INT_01c4f008) || (y_pos < g_INT_01c4f00c)) ||
      ((int)((g_INT_01c4f010 + 1) - uVar5) < x_pos)) || (g_INT_01c4f014 + -10 < y_pos)) {
    iVar3 = 0;
  }
  else {
    iVar6 = y_pos * 4;
    pcVar1 = &DAT_00608571 + iVar3;
    iVar3 = iVar6 + 0x2c;
    if (g_INT_0061b4a0 == 8) {
      do {
        puVar7 = (byte *)(*(int *)((int)g_ARRAY_PTR_01c4354c + iVar6) + x_pos);
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
    else if (g_INT_0061b4a0 == 0x10) {
      do {
        puVar8 = (ushort *)(*(int *)((int)g_ARRAY_PTR_01c4354c + iVar6) + x_pos * 2);
        iVar2 = 0;
        if (uVar5 != 0) {
          do {
            if (*pcVar1 != '\0') {
              *puVar8 = g_USHORT_ARRAY_01c4dad0[color];
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
        puVar4 = (uint *)(*(int *)((int)g_ARRAY_PTR_01c4354c + iVar6) + x_pos * 4);
        if (uVar5 != 0) {
          do {
            if (*pcVar1 != '\0') {
              *puVar4 = g_UINT_ARRAY_01c4dcd0[color];
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
