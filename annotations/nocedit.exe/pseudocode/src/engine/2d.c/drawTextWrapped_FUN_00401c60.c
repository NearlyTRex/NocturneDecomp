// Name: engine_2d.c_drawTextWrapped_FUN_00401c60
// Address: 00401c60
// Address Range: [[00401c60, 00401ce0]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextWrapped_FUN_00401c60(char * text, int x_start, int y_start, int x_max, int y_max)

#include "nocturne.h"

void __cdecl
engine_2d_c_drawTextWrapped_FUN_00401c60(char *text,int x_start,int y_start,int x_max,int y_max)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int y_pos;
  int iVar5;
  int x_pos;
  int iVar6;
  char *pcVar7;
  int in_stack_00000018;
  
  uVar4 = 0xffffffff;
  pcVar7 = text;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  iVar5 = 0;
  y_pos = y_start;
  x_pos = x_start;
  if (0 < (int)(~uVar4 - 1)) {
    do {
      if ((*text == 10) && (y_pos = y_pos + 0xb, x_pos = x_start, y_max < y_pos)) {
        return;
      }
      bVar2 = *text;
      iVar6 = x_pos;
      if ((0x1f < bVar2) && (bVar2 < 0x100)) {
        iVar3 = engine_2d_c_drawCharacter_FUN_00401610((uint)bVar2,x_pos,y_pos);
        iVar6 = x_pos + iVar3;
        if ((y_max < x_pos + iVar3) &&
           (y_pos = y_pos + 0xb, iVar6 = y_start, in_stack_00000018 < y_pos)) {
          return;
        }
      }
      iVar5 = iVar5 + 1;
      text = (char *)((byte *)text + 1);
      x_pos = iVar6;
    } while (iVar5 < (int)(~uVar4 - 1));
  }
  return;
}
