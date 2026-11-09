// Name: crt_watcom.c__memcpy_FUN_004ab0c8
// Address: 004ab0c8
// Address Range: [[004ab0c8, 004ab0e5] [004ab0e8, 004ab102] [004ab104, 004ab121] [004ab124, 004ab139] [004ab13c, 004ab163]]
// Convention: unknown
// Signature: void crt_watcom_c__memcpy_FUN_004ab0c8(uint param_1)

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
                    /* WARNING: Could not recover jumptable at 0x004ab15d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(&DAT_0061bf24 + uVar2 * 4))();
        return;
      }
      break;
    case 3:
      *(byte *)((int)plVar3 + -3) = *(byte *)((int)plVar4 + -3);
    case 2:
      *(ushort *)((int)plVar3 + -2) = *(ushort *)((int)plVar4 + -2);
      if (bVar6 || bVar7) {
                    /* WARNING: Could not recover jumptable at 0x004ab14d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(&DAT_0061bf24 + uVar2 * 4))();
        return;
      }
      break;
    case 5:
      *(byte *)((int)plVar3 + -5) = *(byte *)((int)plVar4 + -5);
      *(uint *)((int)plVar3 + -4) = *(uint *)((int)plVar4 + -4);
      if (bVar6 || bVar7) {
                    /* WARNING: Could not recover jumptable at 0x004ab133. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(&DAT_0061bf24 + uVar2 * 4))();
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
                    /* WARNING: Could not recover jumptable at 0x004ab11b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(&DAT_0061bf24 + uVar2 * 4))();
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
                    /* WARNING: Could not recover jumptable at 0x004ab0fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_0061bf24 + uVar2 * 4))();
  return;
}
