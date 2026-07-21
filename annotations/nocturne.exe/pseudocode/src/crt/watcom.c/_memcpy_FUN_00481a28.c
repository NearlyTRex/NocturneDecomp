// Name: crt_watcom.c__memcpy_FUN_00481a28
// Address: 00481a28
// Address Range: [[00481a28, 00481a45] [00481a48, 00481a62] [00481a64, 00481a81] [00481a84, 00481a99] [00481a9c, 00481ac3]]
// Convention: unknown
// Signature: void crt_watcom_c__memcpy_FUN_00481a28(uint param_1)

#include "nocturne.h"

void _memcpy(uint param_1)

{
  longlong lVar1;
  uint uVar2;
  int in_ECX;
  longlong *plVar3;
  int in_EDX;
  longlong *plVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  uVar2 = param_1 - 8;
  if (7 < param_1 && uVar2 != 0) {
    uVar5 = -in_ECX & 7;
    plVar3 = (longlong *)(in_ECX + uVar5);
    plVar4 = (longlong *)(in_EDX + uVar5);
    bVar6 = uVar2 < uVar5;
    uVar2 = uVar2 - uVar5;
    bVar7 = uVar2 == 0;
    switch(uVar5) {
    case 1:
      *(byte *)((int)plVar3 + -1) = *(byte *)((int)plVar4 + -1);
      if (bVar6 || bVar7) {
                    /* WARNING: Could not recover jumptable at 0x00481abd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(&DAT_005b8014 + uVar2 * 4))();
        return;
      }
      break;
    case 3:
      *(byte *)((int)plVar3 + -3) = *(byte *)((int)plVar4 + -3);
    case 2:
      *(ushort *)((int)plVar3 + -2) = *(ushort *)((int)plVar4 + -2);
      if (bVar6 || bVar7) {
                    /* WARNING: Could not recover jumptable at 0x00481aad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(&DAT_005b8014 + uVar2 * 4))();
        return;
      }
      break;
    case 5:
      *(byte *)((int)plVar3 + -5) = *(byte *)((int)plVar4 + -5);
      *(uint *)((int)plVar3 + -4) = *(uint *)((int)plVar4 + -4);
      if (bVar6 || bVar7) {
                    /* WARNING: Could not recover jumptable at 0x00481a93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(&DAT_005b8014 + uVar2 * 4))();
        return;
      }
      break;
    case 7:
      *(byte *)((int)plVar3 + -7) = *(byte *)((int)plVar4 + -7);
    case 6:
      *(ushort *)((int)plVar3 + -6) = *(ushort *)((int)plVar4 + -6);
    case 4:
      *(uint *)((int)plVar3 + -4) = *(uint *)((int)plVar4 + -4);
      if (bVar6 || bVar7) {
                    /* WARNING: Could not recover jumptable at 0x00481a7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(&DAT_005b8014 + uVar2 * 4))();
        return;
      }
    }
    while( true ) {
      lVar1 = *plVar4;
      plVar4 = plVar4 + 1;
      bVar6 = uVar2 < 8;
      uVar2 = uVar2 - 8;
      if (bVar6 || uVar2 == 0) break;
      *plVar3 = (longlong)ROUND((float10)lVar1);
      plVar3 = plVar3 + 1;
    }
    *plVar3 = (longlong)ROUND((float10)lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00481a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_005b8014 + uVar2 * 4))();
  return;
}
