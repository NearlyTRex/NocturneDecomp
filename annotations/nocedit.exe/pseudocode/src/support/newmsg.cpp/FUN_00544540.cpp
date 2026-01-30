// Name: support_newmsg.cpp_FUN_00544540
// Address: 00544540
// Address Range: [[00544540, 00544593]]
// Convention: __cdecl
// Signature: int __cdecl support_newmsg_cpp_FUN_00544540(void)

#include "nocturne.h"

int __cdecl support_newmsg_cpp_FUN_00544540(void)

{
  int in_stack_00000004;
  uint in_stack_00000008;
  int in_stack_0000000c;
  
  if ((g_MouseButtonFlags & in_stack_00000008) != 0) {
    if (*(int *)(in_stack_00000004 + 0x25c) == 0) {
      if (in_stack_0000000c == 0) {
        *(uint *)(in_stack_00000004 + 0x25c) = 1;
      }
      else {
        *(uint *)(in_stack_00000004 + 0x25c) = 2;
      }
    }
    g_MouseButtonFlags = g_MouseButtonFlags & (in_stack_00000008 ^ 0xff);
    return 1;
  }
  return 0;
}
