// Name: FUN_00495ec0
// Address: 00495ec0
// Address Range: [[00495ec0, 00495f19] [00495f1c, 00495f26] [00495f28, 00495f2e]]
// Convention: unknown
// Signature: void FUN_00495ec0(uint param_1)

#include "nocturne.h"

void FUN_00495ec0(uint param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  longlong *plVar4;
  byte uVar5;
  uint in_EDX;
  uint uVar6;
  bool bVar7;
  
  lVar1 = *(longlong *)(&DAT_005fbc30 + (in_EDX & 0xff) * 8);
  uVar2 = *(uint *)(&DAT_005fbc30 + (in_EDX & 0xff) * 8);
  uVar3 = param_1 - 8;
  if (param_1 < 8 || uVar3 == 0) goto LAB_00495f08;
  uVar6 = -in_ECX & 7;
  plVar4 = (longlong *)(in_ECX + uVar6);
  bVar7 = uVar3 < uVar6;
  uVar3 = uVar3 - uVar6;
  uVar5 = (byte)uVar2;
  switch(uVar6) {
  case 0:
    goto switchD_00495ee9_caseD_0;
  case 1:
    *(byte *)((int)plVar4 + -1) = uVar5;
    break;
  case 3:
    *(byte *)((int)plVar4 + -3) = uVar5;
  case 2:
    *(short *)((int)plVar4 + -2) = (short)uVar2;
    break;
  case 5:
    *(byte *)((int)plVar4 + -5) = uVar5;
    *(uint *)((int)plVar4 + -4) = uVar2;
joined_r0x00495f16:
    if (bVar7 || uVar3 == 0) goto LAB_00495f08;
    goto switchD_00495ee9_caseD_0;
  case 7:
    *(byte *)((int)plVar4 + -7) = uVar5;
  case 6:
    *(short *)((int)plVar4 + -6) = (short)uVar2;
  case 4:
    *(uint *)((int)plVar4 + -4) = uVar2;
    goto joined_r0x00495f16;
  }
  if (!bVar7 && uVar3 != 0) {
switchD_00495ee9_caseD_0:
    do {
      *plVar4 = (longlong)ROUND((float10)lVar1);
      plVar4 = plVar4 + 1;
      bVar7 = 7 < uVar3;
      uVar3 = uVar3 - 8;
    } while (bVar7 && uVar3 != 0);
  }
LAB_00495f08:
                    /* WARNING: Could not recover jumptable at 0x00495f09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_005fc470 + uVar3 * 4))();
  return;
}
