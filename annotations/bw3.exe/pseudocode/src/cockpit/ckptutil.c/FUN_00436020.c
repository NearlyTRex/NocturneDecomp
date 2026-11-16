// Name: cockpit_ckptutil.c_FUN_00436020
// Address: 00436020
// Address Range: [[00436020, 004360f7]]
// Convention: unknown
// Signature: int cockpit_ckptutil_c_FUN_00436020(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int cockpit_ckptutil_c_FUN_00436020(void)

{
  int *piVar1;
  int count;
  ColorConversionFunc *pCVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000004;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  
  count = (in_stack_00000014 - in_stack_0000000c) + 1;
  iVar4 = count;
  if (in_stack_00000004 != 0) {
    pCVar2 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00434e80();
    iVar4 = in_stack_00000010 * 4;
    if (DAT_005fba20 == 8) {
      if (in_stack_00000010 < in_stack_00000018) {
        do {
          iVar3 = DAT_005fba18 * in_stack_00000010;
          piVar1 = (int *)(&DAT_01c5faec + iVar4);
          iVar4 = iVar4 + 4;
          in_stack_00000010 = in_stack_00000010 + 1;
          iVar3 = (*pCVar2)((void *)(*piVar1 + in_stack_0000000c),
                            (void *)(in_stack_00000004 + iVar3 + in_stack_0000000c),count);
        } while (in_stack_00000010 < in_stack_00000018);
        return iVar3;
      }
    }
    else if (in_stack_00000010 < in_stack_00000018) {
      do {
        iVar3 = DAT_005fba18 * in_stack_00000010;
        piVar1 = (int *)(&DAT_01c5faec + iVar4);
        iVar4 = iVar4 + 4;
        in_stack_00000010 = in_stack_00000010 + 1;
        iVar3 = (*pCVar2)((void *)(*piVar1 + in_stack_0000000c * 2),
                          (void *)(iVar3 + in_stack_0000000c + in_stack_00000004),count);
      } while (in_stack_00000010 < in_stack_00000018);
      return iVar3;
    }
  }
  return iVar4;
}
