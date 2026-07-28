// Name: core_dstrender.cpp_renderDepthOnlyStandard_FUN_00463a79
// Address: 00463a79
// Address Range: [[00463a79, 00463ac6]]
// Convention: unknown
// Signature: void core_dstrender_cpp_renderDepthOnlyStandard_FUN_00463a79(void)

#include "nocturne.h"

void core_dstrender_cpp_renderDepthOnlyStandard_FUN_00463a79(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int unaff_EBX;
  ushort *puVar10;
  int unaff_ESI;
  int iVar11;
  int unaff_EDI;
  
  uVar1 = *(uint *)(unaff_ESI + 8);
  uVar7 = *(uint *)(unaff_EDI + 8);
  uVar6 = uVar1;
  iVar11 = unaff_ESI;
  if (uVar7 < uVar1) {
    uVar6 = uVar7;
    uVar7 = uVar1;
    iVar11 = unaff_EDI;
    unaff_EDI = unaff_ESI;
  }
  uVar6 = uVar6 >> 0x10;
  iVar8 = (uVar7 >> 0x10) - uVar6;
  if (iVar8 != 0 && uVar6 <= uVar7 >> 0x10) {
    puVar10 = (ushort *)(*(int *)(&DAT_01bd2fa0 + unaff_EBX * 4) + uVar6 * 2);
    iVar2 = *(int *)(unaff_EDI + 0x28);
    iVar3 = *(int *)(iVar11 + 0x28);
    iVar4 = *(int *)(&DAT_01c00c84 + iVar8 * 4);
    iVar11 = *(int *)(iVar11 + 0x28);
    do {
      if ((uint)(iVar11 >> 8) < (uint)*puVar10) {
        *puVar10 = (ushort)((uint)iVar11 >> 8);
      }
      iVar11 = iVar11 + (int)((ulonglong)((longlong)(iVar2 - iVar3) * (longlong)iVar4) >> 0x20);
      puVar10 = puVar10 + 1;
      iVar9 = iVar8 + -1;
      bVar5 = 0 < iVar8;
      iVar8 = iVar9;
    } while (iVar9 != 0 && bVar5);
  }
  return;
}
