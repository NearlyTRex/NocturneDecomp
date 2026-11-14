// Name: crt_watcom.c__memset_FUN_00492670
// Address: 00492670
// Address Range: [[00492670, 004926c9] [004926cc, 004926d6] [004926d8, 004926de]]
// Convention: __fastcall
// Signature: void __fastcall crt_watcom_c__memset_FUN_00492670(void *dest,int fill_byte,uint size)

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
  
  lVar1 = *(longlong *)(&DAT_006143c0 + (fill_byte & 0xffU) * 8);
  uVar2 = *(uint *)(&DAT_006143c0 + (fill_byte & 0xffU) * 8);
  uVar3 = size - 8;
  if (size < 8 || uVar3 == 0) goto LAB_004926b8;
  uVar6 = -(int)dest & 7;
  plVar4 = (longlong *)((int)dest + uVar6);
  bVar7 = uVar3 < uVar6;
  uVar3 = uVar3 - uVar6;
  uVar5 = (byte)uVar2;
  switch(uVar6) {
  case 0:
    goto switchD_00492699_caseD_0;
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
joined_r0x004926c6:
    if (bVar7 || uVar3 == 0) goto LAB_004926b8;
    goto switchD_00492699_caseD_0;
  case 7:
    *(byte *)((int)plVar4 + -7) = uVar5;
  case 6:
    *(short *)((int)plVar4 + -6) = (short)uVar2;
  case 4:
    *(uint *)((int)plVar4 + -4) = uVar2;
    goto joined_r0x004926c6;
  }
  if (!bVar7 && uVar3 != 0) {
switchD_00492699_caseD_0:
    do {
      *plVar4 = (longlong)ROUND((float10)lVar1);
      plVar4 = plVar4 + 1;
      bVar7 = 7 < uVar3;
      uVar3 = uVar3 - 8;
    } while (bVar7 && uVar3 != 0);
  }
LAB_004926b8:
                    /* WARNING: Could not recover jumptable at 0x004926b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_00614c00 + uVar3 * 4))();
  return;
}
