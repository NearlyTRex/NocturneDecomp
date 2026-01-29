// Name: core_skeledit.cpp_FUN_00589500
// Address: 00589500
// Address Range: [[00589500, 00589523]]
// Convention: unknown
// Signature: void core_skeledit_cpp_FUN_00589500(void)

#include "nocturne.h"

void core_skeledit_cpp_FUN_00589500(void)

{
  char *in_stack_00000004;
  
  __STK(4);
  while ((g_CharacterClassificationTable[(byte)(*in_stack_00000004 + 1)] & 2U) != 0) {
    in_stack_00000004 = in_stack_00000004 + 1;
  }
  return;
}
