// Name: FUN_0048a7d9
// Address: 0048a7d9
// Address Range: [[0048a7d9, 0048a8b2] [0048a8c0, 0048a8c5]]
// Convention: unknown
// Signature: uint FUN_0048a7d9(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0048a7d9(void)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBX;
  int unaff_ESI;
  int iVar6;
  int unaff_EDI;
  uint uVar7;
  
  uVar4 = *(uint *)(unaff_ESI + 8);
  uVar5 = *(uint *)(unaff_EDI + 8);
  uVar2 = uVar4;
  iVar6 = unaff_ESI;
  if (uVar5 < uVar4) {
    uVar2 = uVar5;
    uVar5 = uVar4;
    iVar6 = unaff_EDI;
    unaff_EDI = unaff_ESI;
  }
  uVar2 = uVar2 >> 0x10;
  iVar3 = (uVar5 >> 0x10) - uVar2;
  if (iVar3 != 0 && uVar2 <= uVar5 >> 0x10) {
    DAT_00614540 = *(int *)(&DAT_01c4354c + unaff_EBX * 4) + uVar2 * 4;
    DAT_00614544 = iVar3 * 4;
    uVar4 = *(uint *)(iVar6 + 0x18);
    _DAT_00614534 =
         (int)((ulonglong)
               ((longlong)(int)(*(int *)(unaff_EDI + 0x18) - uVar4) *
               (longlong)*(int *)(&DAT_01c4f034 + DAT_00614544)) >> 0x20);
    uVar5 = *(uint *)(iVar6 + 0x20);
    lVar1 = (longlong)(int)(*(int *)(unaff_EDI + 0x20) - uVar5) *
            (longlong)*(int *)(&DAT_01c4f034 + DAT_00614544);
    _DAT_00614538 = (int)((ulonglong)lVar1 >> 0x20);
    uVar2 = (uint)lVar1;
    uVar7 = 0;
    DAT_00614518 = uVar4;
    DAT_0061451c = uVar5;
    while( true ) {
      *(uint *)(DAT_00614540 + uVar7) =
           *(uint *)
            (((uVar4 >> _DAT_00623eb8 & (uint)_DAT_00623ef8) +
             (uVar5 >> _DAT_00623ed8 & (uint)_DAT_00623f18)) * 4 + _DAT_01c50930);
      uVar7 = uVar7 + 4;
      if (DAT_00614544 <= uVar7) break;
      uVar4 = uVar4 + _DAT_00614534;
      uVar5 = uVar5 + _DAT_00614538;
    }
  }
  return uVar2;
}
