// Name: core_skeledit.cpp_FUN_005896b0
// Address: 005896b0
// Address Range: [[005896b0, 00589733]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_FUN_005896b0(void)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_FUN_005896b0(void)

{
  char *in_stack_00000004;
  char *in_stack_00000008;
  char local_304 [256];
  char local_204 [256];
  char local_104 [252];
  uint uStack_8;
  
  uStack_8 = 0x5896ba;
  __STK(0x31c);
  splitpath
            (in_stack_00000004,&stack0xfffffffc,local_104,local_304,local_204);
  if (local_204[0] != '\0') {
    return;
  }
  makepath
            (in_stack_00000004,&stack0xfffffffc,local_104,local_304,in_stack_00000008);
  return;
}
