// Name: crt_watcom.c__memset_FUN_00495ec0
// Address: 00495ec0
// Address Range: [[00495ec0, 00495f19] [00495f1c, 00495f26] [00495f28, 00495f2e]]
// Convention: __fastcall
// Signature: void __fastcall crt_watcom_c__memset_FUN_00495ec0(void *dest,int fill_byte,uint size)

#include "nocturne.h"

void __fastcall _memset(void *dest,int fill_byte,uint size)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  byte uVar5;
  uint uVar6;
  bool bVar7;
  
  lVar1 = *(longlong *)(&DAT_005fbc30 + (fill_byte & 0xffU) * 8);
  uVar2 = *(uint *)(&DAT_005fbc30 + (fill_byte & 0xffU) * 8);
  uVar3 = size - 8;
  if (size < 8 || uVar3 == 0) goto LAB_00495f08;
  uVar6 = -(int)dest & 7;
  plVar4 = (longlong *)((int)dest + uVar6);
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
