// Name: engine_2d.c_drawString_FUN_00402080
// Address: 00402080
// MANUAL RECONSTRUCTION
// Address Range: [[00402080, 004020d0]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawString_FUN_00402080(char *text,int x_pos,int y_pos,int color)

#include "nocturne.h"

void __cdecl engine_2d_c_drawString_FUN_00402080(char *text,int x_pos,int y_pos,int color)

{
  uint bVar2;
  int iVar3;
  int iVar5;
  int len;

  len = (int)strlen(text);
  iVar5 = 0;
  if (0 < len) {
    do {
      bVar2 = (uchar)*text;
      if ((0x1f < bVar2) && (bVar2 < 0x100)) {
        iVar3 = engine_2d_c_drawCharacterMaskedColor_FUN_00401a10((uint)bVar2,x_pos,y_pos,color);
        x_pos = x_pos + iVar3;
      }
      iVar5 = iVar5 + 1;
      text = text + 1;
    } while (iVar5 < len);
  }
  return;
}
