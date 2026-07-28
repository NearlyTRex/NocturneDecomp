// Name: core_dstrender.cpp_renderZBufferFill16xUnrolled_FUN_00463c42
// Address: 00463c42
// Address Range: [[00463c42, 00463d97]]
// Convention: unknown
// Signature: uint core_dstrender_cpp_renderZBufferFill16xUnrolled_FUN_00463c42(void)

#include "nocturne.h"

uint core_dstrender_cpp_renderZBufferFill16xUnrolled_FUN_00463c42(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_EBX;
  uint *puVar6;
  uint *puVar7;
  int unaff_ESI;
  uint uVar8;
  int unaff_EDI;
  
  uVar8 = *(uint *)(unaff_ESI + 8);
  uVar2 = *(uint *)(unaff_EDI + 8);
  uVar1 = uVar8;
  iVar4 = unaff_ESI;
  if (uVar2 < uVar8) {
    uVar1 = uVar2;
    uVar2 = uVar8;
    iVar4 = unaff_EDI;
    unaff_EDI = unaff_ESI;
  }
  uVar1 = uVar1 >> 0x10;
  iVar3 = (uVar2 >> 0x10) - uVar1;
  if (iVar3 != 0 && uVar1 <= uVar2 >> 0x10) {
    puVar7 = (uint *)(*(int *)(&DAT_01bd4260 + unaff_EBX * 4) + uVar1 * 4);
    iVar5 = (int)((ulonglong)
                  ((longlong)(*(int *)(unaff_EDI + 0x28) - *(int *)(iVar4 + 0x28)) *
                  (longlong)*(int *)(&DAT_01c00c80 + (iVar3 + 1) * 4)) >> 0x20);
    uVar8 = *(uint *)(iVar4 + 0x28);
    uVar1 = *(uint *)(&DAT_01c00024 + (uint)DAT_01c00c70 * 4);
    while (iVar4 = iVar3 + -4, puVar6 = puVar7, 3 < iVar3) {
      *puVar7 = uVar8 >> 8;
      puVar7[1] = uVar8 + iVar5 >> 8;
      uVar8 = uVar8 + iVar5 + iVar5;
      puVar7[2] = uVar8 >> 8;
      uVar8 = uVar8 + iVar5;
      puVar7[3] = uVar8 >> 8;
      uVar8 = uVar8 + iVar5;
      puVar6 = puVar7 + 4;
      iVar4 = iVar3 + -8;
      if (iVar3 + -4 < 4) break;
      *puVar6 = uVar8 >> 8;
      puVar7[5] = uVar8 + iVar5 >> 8;
      uVar8 = uVar8 + iVar5 + iVar5;
      puVar7[6] = uVar8 >> 8;
      uVar8 = uVar8 + iVar5;
      puVar7[7] = uVar8 >> 8;
      uVar8 = uVar8 + iVar5;
      puVar6 = puVar7 + 8;
      iVar4 = iVar3 + -0xc;
      if (iVar3 + -8 < 4) break;
      *puVar6 = uVar8 >> 8;
      puVar7[9] = uVar8 + iVar5 >> 8;
      uVar8 = uVar8 + iVar5 + iVar5;
      puVar7[10] = uVar8 >> 8;
      uVar8 = uVar8 + iVar5;
      puVar7[0xb] = uVar8 >> 8;
      uVar8 = uVar8 + iVar5;
      puVar6 = puVar7 + 0xc;
      iVar4 = iVar3 + -0x10;
      if (iVar3 + -0xc < 4) break;
      *puVar6 = uVar8 >> 8;
      puVar7[0xd] = uVar8 + iVar5 >> 8;
      uVar8 = uVar8 + iVar5 + iVar5;
      puVar7[0xe] = uVar8 >> 8;
      uVar8 = uVar8 + iVar5;
      puVar7[0xf] = uVar8 >> 8;
      uVar8 = uVar8 + iVar5;
      puVar7 = puVar7 + 0x10;
      iVar3 = iVar4;
    }
    if (-4 < iVar4) {
      *puVar6 = uVar8 >> 8;
      if (iVar4 != -3 && 0 < iVar4 + 4) {
        puVar6[1] = uVar8 + iVar5 >> 8;
        if (1 < iVar4 + 3) {
          puVar6[2] = uVar8 + iVar5 + iVar5 >> 8;
        }
      }
    }
  }
  return uVar1;
}
