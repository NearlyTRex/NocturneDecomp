// Name: crt_watcom.c__memcpy_FUN_004b1a78
// Address: 004b1a78
// Address Range: [[004b1a78, 004b1a95] [004b1a98, 004b1ab2] [004b1ab4, 004b1ad1] [004b1ad4, 004b1ae9] [004b1aec, 004b1b13]]
// Convention: __fastcall
// Signature: void __fastcall crt_watcom_c__memcpy_FUN_004b1a78(void *dest,void *src,uint size)

#include "nocturne.h"

void __fastcall _memcpy(void *dest,void *src,uint size)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  uint unaff_EBX;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  uVar2 = size - 8;
  if (7 < size && uVar2 != 0) {
    uVar4 = -(int)dest & 7;
    plVar3 = (longlong *)((int)dest + uVar4);
    src = (void *)((int)src + uVar4);
    bVar5 = uVar2 < uVar4;
    uVar2 = uVar2 - uVar4;
    bVar6 = uVar2 == 0;
    switch(uVar4) {
    case 1:
      *(byte *)((int)plVar3 + -1) = *(byte *)((int)src + -1);
      if (bVar5 || bVar6) {
                    /* WARNING: Could not recover jumptable at 0x004b1b0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(&DAT_00679d94 + uVar2 * 4))(uVar2,src,unaff_EBX);
        return;
      }
      break;
    case 3:
      *(byte *)((int)plVar3 + -3) = *(byte *)((int)src + -3);
    case 2:
      *(ushort *)((int)plVar3 + -2) = *(ushort *)((int)src + -2);
      if (bVar5 || bVar6) {
                    /* WARNING: Could not recover jumptable at 0x004b1afd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(&DAT_00679d94 + uVar2 * 4))(uVar2,src,unaff_EBX);
        return;
      }
      break;
    case 5:
      *(byte *)((int)plVar3 + -5) = *(byte *)((int)src + -5);
      *(uint *)((int)plVar3 + -4) = *(uint *)((int)src + -4);
      if (bVar5 || bVar6) {
                    /* WARNING: Could not recover jumptable at 0x004b1ae3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(&DAT_00679d94 + uVar2 * 4))(uVar2,src,unaff_EBX);
        return;
      }
      break;
    case 7:
      *(byte *)((int)plVar3 + -7) = *(byte *)((int)src + -7);
    case 6:
      *(ushort *)((int)plVar3 + -6) = *(ushort *)((int)src + -6);
    case 4:
      *(uint *)((int)plVar3 + -4) = *(uint *)((int)src + -4);
      if (bVar5 || bVar6) {
                    /* WARNING: Could not recover jumptable at 0x004b1acb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(&DAT_00679d94 + uVar2 * 4))(uVar2,src,unaff_EBX);
        return;
      }
    }
    while( true ) {
      lVar1 = *(longlong *)src;
      src = (void *)((int)src + 8);
      bVar5 = uVar2 < 8;
      uVar2 = uVar2 - 8;
      if (bVar5 || uVar2 == 0) break;
      *plVar3 = (longlong)ROUND((float10)lVar1);
      plVar3 = plVar3 + 1;
    }
    *plVar3 = (longlong)ROUND((float10)lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x004b1aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_00679d94 + uVar2 * 4))(uVar2,src,unaff_EBX);
  return;
}
