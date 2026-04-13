// Name: engine_2d.c_drawTextWrapped_FUN_00401c60
// Address: 00401c60
// MANUAL RECONSTRUCTION
// Address Range: [[00401c60, 00401ce0]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextWrapped_FUN_00401c60(char *text,int x_start,int y_start,int x_max,int y_max)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextWrapped_FUN_00401c60(char *text,int x_start,int y_start,int x_max,int y_max)

{
  int iVar3;
  uint uVar4;
  int iVar5;
  int x_pos;
  int iVar6;
  char *pcVar7;
  char cVar1;
  uint bVar2;
  
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
      iVar6 = x_pos;
      if ((*text == 10) && (y_start = y_start + 0xb, iVar6 = x_start, y_max < y_start)) {
        return;
      }
      bVar2 = *text;
      if ((0x1f < bVar2) && (bVar2 < 0x100)) {
        iVar3 = engine_2d_c_drawCharacter_FUN_00401610((uint)bVar2,iVar6,y_start);
        iVar6 = iVar6 + iVar3;
        if ((x_max < iVar6) && (y_start = y_start + 0xb, iVar6 = x_start, y_max < y_start)) {
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
