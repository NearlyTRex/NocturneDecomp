// Name: core_gore.cpp_FUN_004eb950
// Address: 004eb950
// Address Range: [[004eb950, 004eb99c]]
// Convention: unknown
// Signature: void core_gore_cpp_FUN_004eb950(void)

#include "nocturne.h"

void core_gore_cpp_FUN_004eb950(void)

{
  uint in_stack_00000004;
  uint *in_stack_00000008;
  uint *in_stack_0000000c;
  uint *in_stack_00000010;
  
  if (in_stack_00000004 != 0) {
    if (in_stack_00000004 < 2) {
      *in_stack_00000008 = 0;
      *in_stack_0000000c = 0x7f80;
      *in_stack_00000010 = 0;
      return;
    }
    if (in_stack_00000004 == 2) {
      *in_stack_00000008 = 0;
      goto LAB_004eb973;
    }
  }
  *in_stack_00000008 = 0x2000;
LAB_004eb973:
  *in_stack_0000000c = 0;
  *in_stack_00000010 = 0;
  return;
}
