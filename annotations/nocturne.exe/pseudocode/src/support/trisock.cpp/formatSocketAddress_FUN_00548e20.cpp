// Name: support_trisock.cpp_formatSocketAddress_FUN_00548e20
// Address: 00548e20
// Address Range: [[00548e20, 00548e6b]]
// Convention: unknown
// Signature: void support_trisock_cpp_formatSocketAddress_FUN_00548e20(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void support_trisock_cpp_formatSocketAddress_FUN_00548e20(void)

{
  uchar *puVar1;
  char *in_stack_00000004;
  uchar *in_stack_00000008;
  
  support_trisock_cpp_formatIPAddress_FUN_00548bb0(in_stack_00000004,in_stack_00000008);
  do {
    puVar1 = in_stack_00000008;
    if (*in_stack_00000008 == '\0') goto LAB_00548e60;
    if (*in_stack_00000008 == '\0') break;
    puVar1 = in_stack_00000008 + 1;
    if (*puVar1 == '\0') goto LAB_00548e60;
    in_stack_00000008 = in_stack_00000008 + 2;
  } while (*puVar1 != '\0');
  puVar1 = (uchar *)0x0;
LAB_00548e60:
  _sprintf(puVar1,":%d",*(ushort *)(in_stack_00000004 + 4));
  return;
}
