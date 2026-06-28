// Name: engine_2d.c_drawTextWrappedColor_FUN_00401eb0
// Address: 00401eb0
// MANUAL RECONSTRUCTION
// Address Range: [[00401eb0, 00401f35]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextWrappedColor_FUN_00401eb0(char *text,int x_start,int y_start,int x_max,int y_max,int color)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextWrappedColor_FUN_00401eb0(char *text,int x_start,int y_start,int x_max,int y_max,int color)

{
  int iVar3;
  int iVar5;
  int x_pos;
  int iVar6;
  uint bVar2;
  int len;

  len = (int)strlen(text);
  iVar5 = 0;
  x_pos = x_start;
  if (0 < len) {
    do {
      iVar6 = x_pos;
      if ((*text == 10) && (y_start = y_start + 0xb, iVar6 = x_start, y_max < y_start)) {
        return;
      }
      bVar2 = (uchar)*text;
      if ((0x1f < bVar2) && (bVar2 < 0x100)) {
        iVar3 = engine_2d_c_drawCharacterMaskedColor_FUN_00401a10((uint)bVar2,iVar6,y_start,color);
        iVar6 = iVar6 + iVar3;
        if ((x_max < iVar6) && (y_start = y_start + 0xb, iVar6 = x_start, y_max < y_start)) {
          return;
        }
      }
      iVar5 = iVar5 + 1;
      text = text + 1;
      x_pos = iVar6;
    } while (iVar5 < len);
  }
  return;
}
