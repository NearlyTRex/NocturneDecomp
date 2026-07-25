// Name: FUN_00548e20
// Address: 00548e20
// Address Range: [[00548e20, 00548e6b]]
// Convention: unknown
// Signature: void FUN_00548e20(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_00548e20(void)

{
  char *pcVar1;
  int in_stack_00000004;
  char *in_stack_00000008;
  
  support_trisock_cpp_formatIPAddress_FUN_00548bb0();
  do {
    pcVar1 = in_stack_00000008;
    if (*in_stack_00000008 == '\0') goto LAB_00548e60;
    if (*in_stack_00000008 == '\0') break;
    pcVar1 = in_stack_00000008 + 1;
    if (*pcVar1 == '\0') goto LAB_00548e60;
    in_stack_00000008 = in_stack_00000008 + 2;
  } while (*pcVar1 != '\0');
  pcVar1 = (char *)0x0;
LAB_00548e60:
  _sprintf(pcVar1,":%d",*(ushort *)(in_stack_00000004 + 4));
  return;
}
