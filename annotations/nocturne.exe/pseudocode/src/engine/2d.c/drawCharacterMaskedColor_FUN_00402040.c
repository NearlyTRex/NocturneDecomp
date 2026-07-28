// Name: engine_2d.c_drawCharacterMaskedColor_FUN_00402040
// Address: 00402040
// Address Range: [[00402040, 00402196]]
// Convention: __cdecl
// Signature: int __cdecl engine_2d_c_drawCharacterMaskedColor_FUN_00402040(int char_code,int x_pos,int y_pos,int color)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_2d_c_drawCharacterMaskedColor_FUN_00402040(int char_code,int x_pos,int y_pos,int color)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  byte *puVar7;
  ushort *puVar8;
  
  iVar3 = (char_code + -0x20) * 0x91;
  uVar5 = (uint)(byte)(&DAT_005a4b80)[iVar3];
  if ((((x_pos < _DAT_01c00c58) || (y_pos < _DAT_01c00c5c)) ||
      ((int)((_DAT_01c00c60 + 1) - uVar5) < x_pos)) || (_DAT_01c00c64 + -10 < y_pos)) {
    iVar3 = 0;
  }
  else {
    iVar6 = y_pos * 4;
    pcVar1 = &DAT_005a4b81 + iVar3;
    iVar3 = iVar6 + 0x2c;
    if (DAT_005b7624 == 8) {
      do {
        puVar7 = (byte *)(*(int *)(&DAT_01bd2fa0 + iVar6) + x_pos);
        iVar2 = 0;
        if (uVar5 != 0) {
          do {
            if (*pcVar1 != '\0') {
              *puVar7 = (byte)color;
            }
            pcVar1 = pcVar1 + 1;
            iVar2 = iVar2 + 1;
            puVar7 = puVar7 + 1;
          } while (iVar2 < (int)uVar5);
        }
        iVar6 = iVar6 + 4;
      } while (iVar6 != iVar3);
    }
    else if (DAT_005b7624 == 0x10) {
      do {
        puVar8 = (ushort *)(*(int *)(&DAT_01bd2fa0 + iVar6) + x_pos * 2);
        iVar2 = 0;
        if (uVar5 != 0) {
          do {
            if (*pcVar1 != '\0') {
              *puVar8 = *(ushort *)(&DAT_01bff720 + color * 2);
            }
            pcVar1 = pcVar1 + 1;
            iVar2 = iVar2 + 1;
            puVar8 = puVar8 + 1;
          } while (iVar2 < (int)uVar5);
        }
        iVar6 = iVar6 + 4;
      } while (iVar6 != iVar3);
    }
    else {
      do {
        iVar2 = 0;
        puVar4 = (uint *)(*(int *)(&DAT_01bd2fa0 + iVar6) + x_pos * 4);
        if (uVar5 != 0) {
          do {
            if (*pcVar1 != '\0') {
              *puVar4 = *(uint *)(color * 4 + 0x1bff920);
            }
            pcVar1 = pcVar1 + 1;
            iVar2 = iVar2 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar2 < (int)uVar5);
        }
        iVar6 = iVar6 + 4;
      } while (iVar6 != iVar3);
    }
    iVar3 = uVar5 + 1;
  }
  return iVar3;
}
