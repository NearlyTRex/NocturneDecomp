// Name: core_skeledit.cpp_FUN_00589500
// Address: 00589500
// Address Range: [[00589500, 00589523]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_00589500()

#include "nocturne.h"

void core_skeledit_cpp_FUN_00589500(void)

{
  char *in_stack_0000000c;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(4);
  while ((g_CharacterClassificationTable[(byte)(*in_stack_0000000c + 1)] & 2U) != 0) {
    in_stack_0000000c = in_stack_0000000c + 1;
  }
  return;
}
