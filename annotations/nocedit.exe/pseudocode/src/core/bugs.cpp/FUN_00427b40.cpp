// Name: core_bugs.cpp_FUN_00427b40
// Address: 00427b40
// Address Range: [[00427b40, 00427b50]]
// Convention: __cdecl
// Signature: int __cdecl core_bugs_cpp_FUN_00427b40(void)

#include "nocturne.h"

int __cdecl core_bugs_cpp_FUN_00427b40(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  return *(int *)(in_stack_00000008 * 4 + in_stack_00000004 + 0x2c);
}
