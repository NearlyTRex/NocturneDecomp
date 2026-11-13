// Name: support_trisock.cpp_FUN_00571260
// Address: 00571260
// Address Range: [[00571260, 005712f4]]
// Convention: unknown
// Signature: void support_trisock_cpp_FUN_00571260(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void support_trisock_cpp_FUN_00571260(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int in_stack_00000004;
  char *in_stack_00000008;
  
  pcVar3 = (char *)(in_stack_00000004 + 0x200);
  do {
    cVar1 = *in_stack_00000008;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000008[1];
    in_stack_00000008 = in_stack_00000008 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  iVar2 = support_trisock_cpp_FUN_005709c0
                    ((char *)(in_stack_00000004 + 0x200),in_stack_00000004 + 0x400,
                     in_stack_00000004 + 0x604,in_stack_00000004 + 0x500,0x100);
  if (iVar2 != 0) {
    *(uint *)(in_stack_00000004 + 0xd28) = 1;
    support_trisock_cpp_FUN_00570db0(in_stack_00000004 + 0xd30,in_stack_00000004 + 0x400);
    return;
  }
  *(uint *)(in_stack_00000004 + 0xd28) = 0xffffffff;
  _sprintf((char *)(in_stack_00000004 + 0xa18),"Invalid URL: %s");
  return;
}
