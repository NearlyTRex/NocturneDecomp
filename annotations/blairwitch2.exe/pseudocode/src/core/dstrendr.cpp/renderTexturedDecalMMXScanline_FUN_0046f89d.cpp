// Name: core_dstrendr.cpp_renderTexturedDecalMMXScanline_FUN_0046f89d
// Address: 0046f89d
// Address Range: [[0046f89d, 0046f9bb]]
// Convention: unknown
// Signature: void core_dstrendr_cpp_renderTexturedDecalMMXScanline_FUN_0046f89d(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dstrendr_cpp_renderTexturedDecalMMXScanline_FUN_0046f89d(void)

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
    DAT_0060d260 = *(int *)(&DAT_01c2a38c + unaff_EBX * 4) + uVar1 * 4;
    DAT_0060d264 = iVar2 * 4;
    DAT_0060d268 = *(int *)(&DAT_01c2b64c + unaff_EBX * 4) + uVar1 * 4;
    uVar3 = *(uint *)(iVar5 + 0x18);
    _DAT_0060d254 =
         (int)((ulonglong)
               ((longlong)(int)(*(int *)(unaff_EDI + 0x18) - uVar3) *
               (longlong)*(int *)(&DAT_01c35e74 + DAT_0060d264)) >> 0x20);
    uVar4 = *(uint *)(iVar5 + 0x20);
    _DAT_0060d258 =
         (int)((ulonglong)
               ((longlong)(int)(*(int *)(unaff_EDI + 0x20) - uVar4) *
               (longlong)*(int *)(&DAT_01c35e74 + DAT_0060d264)) >> 0x20);
    iVar5 = *(int *)(iVar5 + 0x28);
    _DAT_0060d25c =
         (int)((ulonglong)
               ((longlong)(*(int *)(unaff_EDI + 0x28) - iVar5) *
               (longlong)*(int *)(&DAT_01c35e74 + DAT_0060d264)) >> 0x20);
    uVar1 = 0;
    DAT_0060d238 = uVar3;
    DAT_0060d23c = uVar4;
    DAT_0060d244 = iVar5;
    while( true ) {
      if (*(int *)(DAT_0060d268 + uVar1) <= iVar5) {
        *(uint *)(DAT_0060d260 + uVar1) =
             *(uint *)
              (&DAT_01c35214 +
              (uint)*(byte *)((uVar3 >> _DAT_0061c868 & (uint)_DAT_0061c8a8) +
                              (uVar4 >> _DAT_0061c888 & (uint)_DAT_0061c8c8) + _DAT_01c37770) * 4);
      }
      uVar1 = uVar1 + 4;
      if (DAT_0060d264 < uVar1) break;
      uVar3 = uVar3 + _DAT_0060d254;
      uVar4 = uVar4 + _DAT_0060d258;
      iVar5 = iVar5 + _DAT_0060d25c;
    }
  }
  return;
}
