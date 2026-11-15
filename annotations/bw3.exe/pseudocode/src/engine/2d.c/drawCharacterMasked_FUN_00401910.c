// Name: engine_2d.c_drawCharacterMasked_FUN_00401910
// Address: 00401910
// Address Range: [[00401910, 00401a1c]]
// Convention: __cdecl
// Signature: int __cdecl engine_2d_c_drawCharacterMasked_FUN_00401910(int char_code,int x_pos,int y_pos)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_2d_c_drawCharacterMasked_FUN_00401910(int char_code,int x_pos,int y_pos)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  byte *puVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  
  iVar3 = (char_code + -0x20) * 0x91;
  uVar7 = (uint)(byte)(&DAT_005e8840)[iVar3];
  if ((((x_pos < _DAT_01c6b5a8) || (y_pos < _DAT_01c6b5ac)) ||
      ((int)((_DAT_01c6b5b0 + 1) - uVar7) < x_pos)) || (_DAT_01c6b5b4 + -10 < y_pos)) {
    iVar3 = 0;
  }
  else {
    iVar8 = y_pos * 4;
    pcVar1 = &DAT_005e8841 + iVar3;
    iVar3 = iVar8 + 0x2c;
    if (DAT_005fba20 == 8) {
      do {
        iVar2 = 0;
        puVar5 = (byte *)(*(int *)(&DAT_01c5faec + iVar8) + x_pos);
        if (uVar7 != 0) {
          do {
            if (*pcVar1 == '\0') {
              *puVar5 = 0;
            }
            else {
              *puVar5 = 2;
            }
            pcVar1 = pcVar1 + 1;
            iVar2 = iVar2 + 1;
            puVar5 = puVar5 + 1;
          } while (iVar2 < (int)uVar7);
        }
        iVar8 = iVar8 + 4;
        *puVar5 = 0;
      } while (iVar8 != iVar3);
    }
    else {
      do {
        puVar4 = (ushort *)(*(int *)(&DAT_01c5faec + iVar8) + x_pos * 2);
        iVar2 = 0;
        if (uVar7 != 0) {
          do {
            uVar6 = _DAT_01c6a070;
            if (*pcVar1 != '\0') {
              uVar6 = _DAT_01c6a074;
            }
            *puVar4 = uVar6;
            pcVar1 = pcVar1 + 1;
            iVar2 = iVar2 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar2 < (int)uVar7);
        }
        iVar8 = iVar8 + 4;
        *puVar4 = _DAT_01c6a070;
      } while (iVar8 != iVar3);
    }
    iVar3 = uVar7 + 1;
  }
  return iVar3;
}
