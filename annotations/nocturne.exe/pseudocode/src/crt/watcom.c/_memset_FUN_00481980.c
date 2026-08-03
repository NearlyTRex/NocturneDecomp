// Name: crt_watcom.c__memset_FUN_00481980
// Address: 00481980
// Address Range: [[00481980, 004819d9] [004819dc, 004819e6] [004819e8, 004819ee]]
// Convention: __fastcall
// Signature: void __fastcall crt_watcom_c__memset_FUN_00481980(void *dest,int fill_byte,uint size)

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
  
  lVar1 = *(longlong *)(&DAT_005b7790 + (fill_byte & 0xffU) * 8);
  uVar2 = *(uint *)(&DAT_005b7790 + (fill_byte & 0xffU) * 8);
  uVar3 = size - 8;
  if (size < 8 || uVar3 == 0) goto LAB_004819c8;
  uVar6 = -(int)dest & 7;
  plVar4 = (longlong *)((int)dest + uVar6);
  bVar7 = uVar3 < uVar6;
  uVar3 = uVar3 - uVar6;
  uVar5 = (byte)uVar2;
  switch(uVar6) {
  case 0:
    goto switchD_004819a9_caseD_0;
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
joined_r0x004819d6:
    if (bVar7 || uVar3 == 0) goto LAB_004819c8;
    goto switchD_004819a9_caseD_0;
  case 7:
    *(byte *)((int)plVar4 + -7) = uVar5;
  case 6:
    *(short *)((int)plVar4 + -6) = (short)uVar2;
  case 4:
    *(uint *)((int)plVar4 + -4) = uVar2;
    goto joined_r0x004819d6;
  }
  if (!bVar7 && uVar3 != 0) {
switchD_004819a9_caseD_0:
    do {
      *plVar4 = (longlong)ROUND((float10)lVar1);
      plVar4 = plVar4 + 1;
      bVar7 = 7 < uVar3;
      uVar3 = uVar3 - 8;
    } while (bVar7 && uVar3 != 0);
  }
LAB_004819c8:
                    /* WARNING: Could not recover jumptable at 0x004819c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_005b7fd0 + uVar3 * 4))();
  return;
}
