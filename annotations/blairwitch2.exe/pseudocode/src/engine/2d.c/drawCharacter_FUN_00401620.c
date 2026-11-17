// Name: engine_2d.c_drawCharacter_FUN_00401620
// Address: 00401620
// Address Range: [[00401620, 00401776]]
// Convention: __cdecl
// Signature: int __cdecl engine_2d_c_drawCharacter_FUN_00401620(int char_code,int x_pos,int y_pos)

#include "nocturne.h"

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
  uVar10 = (uint)(byte)(&DAT_00601440)[iVar5];
  if ((((x_pos < g_INT_01c35e48) || (y_pos < g_INT_01c35e4c)) ||
      ((int)((g_INT_01c35e50 + 1) - uVar10) < x_pos)) || (g_INT_01c35e54 + -10 < y_pos)) {
    iVar5 = 0;
  }
  else {
    iVar12 = y_pos * 4;
    pbVar2 = &DAT_00601441 + iVar5;
    iVar5 = iVar12 + 0x2c;
    if (g_INT_006141c0 == 8) {
      do {
        iVar11 = 0;
        pbVar6 = (byte *)(*(int *)((int)g_ARRAY_PTR_01c2a38c + iVar12) + x_pos);
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
    else if (g_INT_006141c0 == 0x10) {
      do {
        iVar11 = 0;
        puVar3 = (ushort *)(*(int *)((int)g_ARRAY_PTR_01c2a38c + iVar12) + x_pos * 2);
        puVar4 = puVar3;
        if (uVar10 != 0) {
          do {
            bVar1 = *pbVar2;
            pbVar2 = pbVar2 + 1;
            puVar3 = puVar4 + 1;
            iVar11 = iVar11 + 1;
            *puVar4 = g_USHORT_ARRAY_01c34910[bVar1];
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
        puVar8 = (uint *)(*(int *)((int)g_ARRAY_PTR_01c2a38c + iVar12) + x_pos * 4);
        puVar9 = puVar8;
        if (uVar10 != 0) {
          do {
            bVar1 = *pbVar2;
            pbVar2 = pbVar2 + 1;
            puVar8 = puVar9 + 1;
            iVar11 = iVar11 + 1;
            *puVar9 = g_UINT_ARRAY_01c34b10[bVar1];
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
