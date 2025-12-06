// Name: engine_2d.c_drawTextMultilineColor_FUN_00401f40
// Address: 00401f40
// Address Range: [[00401f40, 00401fcf]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextMultilineColor_FUN_00401f40(char * text, int x_start, int y_start, int y_max, int color)

#include "nocturne.h"

void __cdecl
engine_2d_c_drawTextMultilineColor_FUN_00401f40
          (char *text,int x_start,int y_start,int y_max,int color)

{
  char cVar1;
  uint uVar2;
  uint char_code;
  int x_pos;
  char *pcVar3;
  int iVar4;
  int in_stack_00000018;
  
  uVar2 = 0xffffffff;
  pcVar3 = text;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar4 = 0;
  x_pos = x_start;
  if (0 < (int)(~uVar2 - 1)) {
    do {
      if ((*text == 10) && (y_start = y_start + 0xb, x_pos = x_start, color < y_start)) {
        return;
      }
      char_code = (uint)(byte)*text;
      if ((0x1f < (byte)*text) && (char_code < 0x100)) {
        engine_2d_c_drawCharacter_FUN_00401a10(char_code,x_pos,y_start,in_stack_00000018);
        x_pos = x_pos + (byte)(&g_FontTable)[(char_code - 0x20) * 0x91] + 1;
      }
      iVar4 = iVar4 + 1;
      text = (char *)((byte *)text + 1);
    } while (iVar4 < (int)(~uVar2 - 1));
  }
  return;
}
