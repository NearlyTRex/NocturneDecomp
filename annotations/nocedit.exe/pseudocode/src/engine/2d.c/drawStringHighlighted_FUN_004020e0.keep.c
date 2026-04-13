// Name: engine_2d.c_drawStringHighlighted_FUN_004020e0
// Address: 004020e0
// MANUAL RECONSTRUCTION
// Address Range: [[004020e0, 0040212b]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawStringHighlighted_FUN_004020e0(char *text,int x_pos,int y_pos)

#include "nocturne.h"

void __cdecl engine_2d_c_drawStringHighlighted_FUN_004020e0(char *text,int x_pos,int y_pos)

{
  char cVar1;
  uint bVar2;
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
      if ((0x1f < bVar2) && (bVar2 < 0x100)) {
        iVar3 = engine_2d_c_drawCharacterHighlighted_FUN_00401b70((uint)bVar2,x_pos,y_pos);
        x_pos = x_pos + iVar3;
      }
      iVar5 = iVar5 + 1;
      text = text + 1;
    } while (iVar5 < (int)(~uVar4 - 1));
  }
  return;
}
