// Name: core_dstrendr.cpp_renderTexturedDecalMMXScanline_FUN_00487d8d
// Address: 00487d8d
// Address Range: [[00487d8d, 00487eab]]
// Convention: unknown
// Signature: void core_dstrendr_cpp_renderTexturedDecalMMXScanline_FUN_00487d8d(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dstrendr_cpp_renderTexturedDecalMMXScanline_FUN_00487d8d(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EBX;
  int unaff_ESI;
  int iVar5;
  int unaff_EDI;
  
  uVar3 = *(uint *)(unaff_ESI + 8);
  uVar4 = *(uint *)(unaff_EDI + 8);
  uVar1 = uVar3;
  iVar5 = unaff_ESI;
  if (uVar4 < uVar3) {
    uVar1 = uVar4;
    uVar4 = uVar3;
    iVar5 = unaff_EDI;
    unaff_EDI = unaff_ESI;
  }
  uVar1 = uVar1 >> 0x10;
  iVar2 = (uVar4 >> 0x10) - uVar1;
  if (iVar2 != 0 && uVar1 <= uVar4 >> 0x10) {
    DAT_00614540 = *(int *)(&DAT_01c4354c + unaff_EBX * 4) + uVar1 * 4;
    DAT_00614544 = iVar2 * 4;
    DAT_00614548 = *(int *)(&DAT_01c4480c + unaff_EBX * 4) + uVar1 * 4;
    uVar3 = *(uint *)(iVar5 + 0x18);
    _DAT_00614534 =
         (int)((ulonglong)
               ((longlong)(int)(*(int *)(unaff_EDI + 0x18) - uVar3) *
               (longlong)*(int *)(&DAT_01c4f034 + DAT_00614544)) >> 0x20);
    uVar4 = *(uint *)(iVar5 + 0x20);
    _DAT_00614538 =
         (int)((ulonglong)
               ((longlong)(int)(*(int *)(unaff_EDI + 0x20) - uVar4) *
               (longlong)*(int *)(&DAT_01c4f034 + DAT_00614544)) >> 0x20);
    iVar5 = *(int *)(iVar5 + 0x28);
    _DAT_0061453c =
         (int)((ulonglong)
               ((longlong)(*(int *)(unaff_EDI + 0x28) - iVar5) *
               (longlong)*(int *)(&DAT_01c4f034 + DAT_00614544)) >> 0x20);
    uVar1 = 0;
    DAT_00614518 = uVar3;
    DAT_0061451c = uVar4;
    DAT_00614524 = iVar5;
    while( true ) {
      if (*(int *)(DAT_00614548 + uVar1) <= iVar5) {
        *(uint *)(DAT_00614540 + uVar1) =
             *(uint *)
              (&DAT_01c4e3d4 +
              (uint)*(byte *)((uVar3 >> _DAT_00623eb8 & (uint)_DAT_00623ef8) +
                              (uVar4 >> _DAT_00623ed8 & (uint)_DAT_00623f18) + _DAT_01c50930) * 4);
      }
      uVar1 = uVar1 + 4;
      if (DAT_00614544 < uVar1) break;
      uVar3 = uVar3 + _DAT_00614534;
      uVar4 = uVar4 + _DAT_00614538;
      iVar5 = iVar5 + _DAT_0061453c;
    }
  }
  return;
}
