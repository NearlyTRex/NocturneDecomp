// Name: engine_2d.c_drawCharacterHighlighted_FUN_00401b80
// Address: 00401b80
// Address Range: [[00401b80, 00401c6a]]
// Convention: __cdecl
// Signature: int __cdecl engine_2d_c_drawCharacterHighlighted_FUN_00401b80(int char_code,int x_pos,int y_pos)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_2d_c_drawCharacterHighlighted_FUN_00401b80(int char_code,int x_pos,int y_pos)

{
  char *pcVar1;
  int iVar2;
  byte *puVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar5 = (char_code + -0x20) * 0x91;
  uVar6 = (uint)(byte)(&DAT_00601440)[iVar5];
  if ((((x_pos < _DAT_01c35e48) || (y_pos < _DAT_01c35e4c)) ||
      ((int)((_DAT_01c35e50 + 1) - uVar6) < x_pos)) || (_DAT_01c35e54 + -10 < y_pos)) {
    iVar5 = 0;
  }
  else {
    iVar7 = y_pos * 4;
    pcVar1 = &DAT_00601441 + iVar5;
    iVar5 = iVar7 + 0x2c;
    if (DAT_006141c0 == 8) {
      do {
        iVar2 = 0;
        puVar3 = (byte *)(*(int *)(&DAT_01c2a38c + iVar7) + x_pos);
        if (uVar6 != 0) {
          do {
            if (*pcVar1 != '\0') {
              *puVar3 = 0xff;
            }
            pcVar1 = pcVar1 + 1;
            iVar2 = iVar2 + 1;
            puVar3 = puVar3 + 1;
          } while (iVar2 < (int)uVar6);
        }
        iVar7 = iVar7 + 4;
      } while (iVar7 != iVar5);
    }
    else {
      do {
        iVar2 = 0;
        puVar4 = (ushort *)(*(int *)(&DAT_01c2a38c + iVar7) + x_pos * 2);
        if (uVar6 != 0) {
          do {
            if (*pcVar1 != '\0') {
              *puVar4 = _DAT_01c34b0e;
            }
            pcVar1 = pcVar1 + 1;
            iVar2 = iVar2 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar2 < (int)uVar6);
        }
        iVar7 = iVar7 + 4;
      } while (iVar7 != iVar5);
    }
    iVar5 = uVar6 + 1;
  }
  return iVar5;
}
