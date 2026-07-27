// Name: cockpit_ckptutil.c_FUN_0042d180
// Address: 0042d180
// Address Range: [[0042d180, 0042d1f3]]
// Convention: unknown
// Signature: undefined4 cockpit_ckptutil_c_FUN_0042d180(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint cockpit_ckptutil_c_FUN_0042d180(void)

{
  uint uVar1;
  int iVar2;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  
  if (in_stack_00000014 == 0) {
    iVar2 = malloc(in_stack_00000008 * in_stack_0000000c);
    if (iVar2 == 0) {
      return 0;
    }
  }
  uVar1 = cockpit_ckptutil_c_readBitmapFile_FUN_0042d240();
  cockpit_ckptutil_c_FUN_0042d370();
  if (in_stack_00000010 != 0) {
    cockpit_ckptutil_c_FUN_00431260(uVar1);
  }
  return uVar1;
}
