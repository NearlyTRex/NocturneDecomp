// Name: engine_2d.c_drawStringHighlighted_FUN_004020e0
// Address: 004020e0
// MANUAL RECONSTRUCTION
// Address Range: [[004020e0, 0040212b]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawStringHighlighted_FUN_004020e0(char *text,int x_pos,int y_pos)

#include "nocturne.h"

void __cdecl engine_2d_c_drawStringHighlighted_FUN_004020e0(char *text,int x_pos,int y_pos)

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
        iVar3 = engine_2d_c_drawCharacterHighlighted_FUN_00401b70((uint)bVar2,x_pos,y_pos);
        x_pos = x_pos + iVar3;
      }
      iVar5 = iVar5 + 1;
      text = text + 1;
    } while (iVar5 < len);
  }
  return;
}
