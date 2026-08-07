// Name: engine_2d.c_drawAntialiasedString_FUN_004014a0
// Address: 004014a0
// Address Range: [[004014a0, 004014e4]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawAntialiasedString_FUN_004014a0(char *text,int x_pos,int y_pos,int intensity_shift)

#include "nocturne.h"

void __cdecl engine_2d_c_drawAntialiasedString_FUN_004014a0(char *text,int x_pos,int y_pos,int intensity_shift)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  
  uVar4 = 0xffffffff;
  pcVar6 = text;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  iVar5 = 0;
  if (0 < (int)(~uVar4 - 1)) {
    do {
      bVar2 = *text;
      text = text + 1;
      iVar5 = iVar5 + 1;
      iVar3 = engine_2d_c_drawAntialiasedChar_FUN_004013d0((uint)bVar2,x_pos,y_pos,intensity_shift);
      x_pos = x_pos + iVar3;
    } while (iVar5 < (int)(~uVar4 - 1));
  }
  return;
}
