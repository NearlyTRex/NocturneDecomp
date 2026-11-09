// Name: engine_2d.c_drawCharacter_FUN_00401620
// Address: 00401620
// Address Range: [[00401620, 00401776]]
// Convention: __cdecl
// Signature: int __cdecl engine_2d_c_drawCharacter_FUN_00401620(int char_code,int x_pos,int y_pos)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_2d_c_drawCharacter_FUN_00401620(int char_code,int x_pos,int y_pos)

{
  byte bVar1;
  byte *pbVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  iVar5 = (char_code + -0x20) * 0x91;
  uVar10 = (uint)(byte)(&DAT_005e8840)[iVar5];
  if ((((x_pos < _DAT_01c6b5a8) || (y_pos < _DAT_01c6b5ac)) ||
      ((int)((_DAT_01c6b5b0 + 1) - uVar10) < x_pos)) || (_DAT_01c6b5b4 + -10 < y_pos)) {
    iVar5 = 0;
  }
  else {
    iVar12 = y_pos * 4;
    pbVar2 = &DAT_005e8841 + iVar5;
    iVar5 = iVar12 + 0x2c;
    if (DAT_005fba20 == 8) {
      do {
        iVar11 = 0;
        pbVar6 = (byte *)(*(int *)(&DAT_01c5faec + iVar12) + x_pos);
        pbVar7 = pbVar6;
        if (uVar10 != 0) {
          do {
            pbVar6 = pbVar7 + 1;
            bVar1 = *pbVar2;
            pbVar2 = pbVar2 + 1;
            iVar11 = iVar11 + 1;
            *pbVar7 = bVar1;
            pbVar7 = pbVar6;
          } while (iVar11 < (int)uVar10);
        }
        iVar12 = iVar12 + 4;
        *pbVar6 = 0;
      } while (iVar12 != iVar5);
    }
    else if (DAT_005fba20 == 0x10) {
      do {
        iVar11 = 0;
        puVar3 = (ushort *)(*(int *)(&DAT_01c5faec + iVar12) + x_pos * 2);
        puVar4 = puVar3;
        if (uVar10 != 0) {
          do {
            bVar1 = *pbVar2;
            pbVar2 = pbVar2 + 1;
            puVar3 = puVar4 + 1;
            iVar11 = iVar11 + 1;
            *puVar4 = *(ushort *)(&DAT_01c6a070 + (uint)bVar1 * 2);
            puVar4 = puVar3;
          } while (iVar11 < (int)uVar10);
        }
        iVar12 = iVar12 + 4;
        *puVar3 = 0;
      } while (iVar12 != iVar5);
    }
    else {
      do {
        iVar11 = 0;
        puVar8 = (uint *)(*(int *)(&DAT_01c5faec + iVar12) + x_pos * 4);
        puVar9 = puVar8;
        if (uVar10 != 0) {
          do {
            bVar1 = *pbVar2;
            pbVar2 = pbVar2 + 1;
            puVar8 = puVar9 + 1;
            iVar11 = iVar11 + 1;
            *puVar9 = *(uint *)((uint)bVar1 * 4 + 0x1c6a270);
            puVar9 = puVar8;
          } while (iVar11 < (int)uVar10);
        }
        iVar12 = iVar12 + 4;
        *puVar8 = 0;
      } while (iVar12 != iVar5);
    }
    iVar5 = uVar10 + 1;
  }
  return iVar5;
}
