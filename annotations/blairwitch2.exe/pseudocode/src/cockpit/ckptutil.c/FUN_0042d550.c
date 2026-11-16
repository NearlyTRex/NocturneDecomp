// Name: cockpit_ckptutil.c_FUN_0042d550
// Address: 0042d550
// Address Range: [[0042d550, 0042d5bd]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_FUN_0042d550(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void cockpit_ckptutil_c_FUN_0042d550(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  
  if ((in_stack_00000010 != 0) && (in_stack_00000004 != 0)) {
    pcVar1 = (code *)FUN_0042c430();
    iVar2 = in_stack_00000004 + in_stack_00000020 * in_stack_00000008 + in_stack_0000001c;
    iVar3 = 0;
    if (0 < in_stack_00000018) {
      do {
        iVar3 = iVar3 + 1;
        (*pcVar1)(iVar2,in_stack_00000010);
        in_stack_00000010 = in_stack_00000010 + in_stack_00000014;
        iVar2 = iVar2 + in_stack_00000008;
      } while (iVar3 < in_stack_00000018);
      return;
    }
  }
  return;
}
