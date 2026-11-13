// Name: cockpit_ckptutil.c_blitRectangleClipped_FUN_004357a0
// Address: 004357a0
// Address Range: [[004357a0, 00435905]]
// Convention: unknown
// Signature: int cockpit_ckptutil_c_blitRectangleClipped_FUN_004357a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int cockpit_ckptutil_c_blitRectangleClipped_FUN_004357a0(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  
  iVar1 = _DAT_01c6b5b0 - in_stack_00000008;
  iVar2 = _DAT_01c5faf0 - _DAT_01c5faec;
  iVar6 = _DAT_01c6b5a8 - in_stack_00000008;
  iVar4 = iVar2;
  if (in_stack_00000004 != 0) {
    pcVar3 = (code *)cockpit_ckptutil_c_FUN_00434e80();
    iVar4 = in_stack_00000010 + -1;
    if (DAT_005fba20 == 8) {
      iVar7 = *(int *)(&DAT_01c5faec + in_stack_0000000c * 4) + in_stack_00000008;
      iVar5 = 0;
      if (((iVar6 < 1) || (iVar5 = iVar6, iVar6 <= iVar4)) &&
         (((iVar6 = iVar4, iVar4 <= iVar1 || (iVar6 = iVar1, iVar5 <= iVar1)) &&
          (iVar1 = 0, iVar4 = in_stack_00000014, 0 < in_stack_00000014)))) {
        do {
          (*pcVar3)(iVar7 + iVar5,in_stack_00000004 + iVar5,(iVar6 - iVar5) + 1);
          iVar1 = iVar1 + 1;
          iVar7 = iVar7 + iVar2;
          in_stack_00000004 = in_stack_00000004 + in_stack_00000010;
        } while (iVar1 < in_stack_00000014);
        return iVar2;
      }
    }
    else {
      iVar7 = *(int *)(&DAT_01c5faec + in_stack_0000000c * 4) + in_stack_00000008 * 2;
      iVar5 = 0;
      if (((iVar6 < 1) || (iVar5 = iVar6, iVar6 <= iVar4)) &&
         ((iVar6 = iVar4, iVar4 <= iVar1 || (iVar4 = iVar1, iVar6 = iVar1, iVar5 <= iVar1)))) {
        iVar1 = 0;
        iVar4 = in_stack_00000014;
        if (0 < in_stack_00000014) {
          do {
            (*pcVar3)(iVar5 * 2 + iVar7,in_stack_00000004 + iVar5,(iVar6 - iVar5) + 1);
            iVar1 = iVar1 + 1;
            iVar7 = iVar7 + (iVar2 / 2) * 2;
            in_stack_00000004 = in_stack_00000004 + in_stack_00000010;
          } while (iVar1 < in_stack_00000014);
          return in_stack_00000010;
        }
      }
    }
  }
  return iVar4;
}
