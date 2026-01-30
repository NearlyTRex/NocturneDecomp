// Name: core_skeledit.cpp_FUN_0058a1b0
// Address: 0058a1b0
// Address Range: [[0058a1b0, 0058a25c]]
// Convention: __cdecl
// Signature: int __cdecl core_skeledit_cpp_FUN_0058a1b0(void)

#include "nocturne.h"

int __cdecl core_skeledit_cpp_FUN_0058a1b0(void)

{
  int in_stack_00000004;
  char *in_stack_00000008;
  int local_10;
  
  __STK(0x2c);
  local_10 = -1;
  sscanf
            (in_stack_00000008,"\"%[^\"]\", \"%[^\"]\", \"%[^\"]\"%n",in_stack_00000004,in_stack_00000004 + 0x100,
             in_stack_00000004 + 0x200,&local_10);
  if (local_10 < 0) {
    sscanf
              (in_stack_00000008,"\"%[^\"]\", \"%[^\"]\"%n",in_stack_00000004,in_stack_00000004 + 0x100,&local_10)
    ;
    if (local_10 < 0) {
      return 0;
    }
    *(byte *)(in_stack_00000004 + 0x200) = 0;
  }
  *(uint *)(in_stack_00000004 + 0x300) = 0;
  *(uint *)(in_stack_00000004 + 0x304) = 0;
  sscanf
            (in_stack_00000008 + local_10," , %d , %d",(uint *)(in_stack_00000004 + 0x300),
             in_stack_00000004 + 0x304);
  return 1;
}
