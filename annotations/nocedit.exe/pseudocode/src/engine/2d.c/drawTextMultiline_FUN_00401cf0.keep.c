// Name: engine_2d.c_drawTextMultiline_FUN_00401cf0
// Address: 00401cf0
// MANUAL RECONSTRUCTION
// Address Range: [[00401cf0, 00401d7a]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextMultiline_FUN_00401cf0(char *text,int x_start,int y_start,int x_max,int y_max)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextMultiline_FUN_00401cf0(char *text,int x_start,int y_start,int x_max,int y_max)

{
  uint char_code;
  int x_pos;
  int iVar4;
  int len;

  len = (int)strlen(text);
  iVar4 = 0;
  x_pos = x_start;
  if (0 < len) {
    do {
      if ((*text == 10) && (y_start = y_start + 0xb, x_pos = x_start, y_max < y_start)) {
        return;
      }
      char_code = (uint)(byte)*text;
      if ((0x1f < (byte)*text) && (char_code < 0x100)) {
        engine_2d_c_drawCharacter_FUN_00401610(char_code,x_pos,y_start);
        x_pos = x_pos + g_FontTable[char_code - 0x20].width + 1;
      }
      iVar4 = iVar4 + 1;
      text = text + 1;
    } while (iVar4 < len);
  }
  return;
}
