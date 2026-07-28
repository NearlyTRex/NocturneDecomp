// Name: engine_2d.c_drawTextWrappedColor_FUN_004024e0
// Address: 004024e0
// Address Range: [[004024e0, 00402565]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextWrappedColor_FUN_004024e0(char *text,int x_start,int y_start,int x_max,int y_max,int color)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextWrappedColor_FUN_004024e0(char *text,int x_start,int y_start,int x_max,int y_max,int color)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int x_pos;
  int iVar6;
  char *pcVar7;
  
  uVar4 = 0xffffffff;
  pcVar7 = text;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  iVar5 = 0;
  x_pos = x_start;
  if (0 < (int)(~uVar4 - 1)) {
    do {
      if ((*text == 10) && (y_start = y_start + 0xb, x_pos = x_start, y_max < y_start)) {
        return;
      }
      bVar2 = *text;
      iVar6 = x_pos;
      if ((0x1f < bVar2) && (bVar2 < 0x100)) {
        iVar3 = engine_2d_c_drawCharacterMaskedColor_FUN_00402040((uint)bVar2,x_pos,y_start,color);
        iVar6 = x_pos + iVar3;
        if ((x_max < x_pos + iVar3) && (y_start = y_start + 0xb, iVar6 = x_start, y_max < y_start))
        {
          return;
        }
      }
      iVar5 = iVar5 + 1;
      text = text + 1;
      x_pos = iVar6;
    } while (iVar5 < (int)(~uVar4 - 1));
  }
  return;
}
