// Name: cockpit_ckptutil.c_FUN_00435ee0
// Address: 00435ee0
// Address Range: [[00435ee0, 0043601a]]
// Convention: unknown
// Signature: undefined8 cockpit_ckptutil_c_FUN_00435ee0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong cockpit_ckptutil_c_FUN_00435ee0(void)

{
  int count;
  int iVar1;
  ColorConversionFunc *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *src_buffer;
  int iVar6;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  
  count = (in_stack_00000010 - in_stack_00000008) + 1;
  iVar1 = _DAT_01c5faf0 - _DAT_01c5faec;
  iVar3 = iVar1;
  iVar5 = _DAT_01c5faec;
  if (in_stack_00000004 != 0) {
    pCVar2 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00434e80();
    src_buffer = (void *)(DAT_005fba18 / 2 +
                          in_stack_0000000c * in_stack_00000020 + in_stack_00000004 +
                         in_stack_00000008);
    iVar4 = in_stack_00000014 - in_stack_0000001c;
    iVar3 = (in_stack_0000000c + in_stack_0000001c) * 4;
    if (DAT_005fba20 == 8) {
      iVar6 = *(int *)(&DAT_01c5faec + iVar3) + in_stack_00000008;
      iVar5 = 8;
      if (in_stack_0000000c < iVar4) {
        do {
          (*pCVar2)((void *)(iVar6 - in_stack_00000018),src_buffer,count);
          in_stack_0000000c = in_stack_0000000c + 1;
          iVar6 = iVar6 + iVar1;
          src_buffer = (void *)((int)src_buffer + in_stack_00000020);
        } while (in_stack_0000000c < iVar4);
        return CONCAT44(iVar4,in_stack_00000020);
      }
    }
    else {
      iVar6 = *(int *)(&DAT_01c5faec + iVar3) + in_stack_00000008 * 2;
      iVar3 = (iVar1 / 2) * 2;
      iVar5 = iVar1 >> 0x1f;
      if (in_stack_0000000c < iVar4) {
        do {
          (*pCVar2)((void *)(iVar6 + in_stack_00000018 * -2),src_buffer,count);
          in_stack_0000000c = in_stack_0000000c + 1;
          iVar6 = iVar6 + iVar3;
          src_buffer = (void *)((int)src_buffer + in_stack_00000020);
        } while (in_stack_0000000c < iVar4);
        return CONCAT44(iVar4,in_stack_00000020);
      }
    }
  }
  return CONCAT44(iVar5,iVar3);
}
