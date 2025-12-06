// Name: core_skeledit.cpp_FUN_0058b200
// Address: 0058b200
// Address Range: [[0058b200, 0058b253]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058b200()

#include "nocturne.h"

uint core_skeledit_cpp_FUN_0058b200(void)

{
  uint uVar1;
  uint *puVar2;
  uint *in_stack_0000000c;
  uint *in_stack_00000010;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x14);
  if (*in_stack_0000000c != *in_stack_00000010) {
    return 0;
  }
  uVar1 = *in_stack_0000000c ^ *in_stack_00000010;
  puVar2 = in_stack_0000000c;
  if (0 < (int)*in_stack_0000000c) {
    do {
      if (in_stack_00000010[9] != puVar2[9]) {
        return 0;
      }
      in_stack_00000010 = in_stack_00000010 + 0x21;
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 0x21;
    } while ((int)uVar1 < (int)*in_stack_0000000c);
  }
  return 1;
}
