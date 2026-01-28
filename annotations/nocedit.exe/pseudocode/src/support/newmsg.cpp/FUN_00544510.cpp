// Name: support_newmsg.cpp_FUN_00544510
// Address: 00544510
// Address Range: [[00544510, 00544538]]
// Convention: unknown
// Signature: undefined4 support_newmsg_cpp_FUN_00544510(void)

#include "nocturne.h"

uint support_newmsg_cpp_FUN_00544510(void)

{
  int in_stack_00000004;
  uint in_stack_00000008;
  
  if (((g_MouseButtonFlags & in_stack_00000008) != 0) && (*(int *)(in_stack_00000004 + 0x25c) == 0))
  {
    *(uint *)(in_stack_00000004 + 0x25c) = 1;
    return 0;
  }
  return 0;
}
