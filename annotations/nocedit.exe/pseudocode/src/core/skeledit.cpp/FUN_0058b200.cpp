// Name: core_skeledit.cpp_FUN_0058b200
// Address: 0058b200
// Address Range: [[0058b200, 0058b253]]
// Convention: __cdecl
// Signature: int __cdecl core_skeledit_cpp_FUN_0058b200(void)

#include "nocturne.h"

int __cdecl core_skeledit_cpp_FUN_0058b200(void)

{
  uint uVar1;
  uint *puVar2;
  uint *in_stack_00000004;
  uint *in_stack_00000008;
  
  __STK();
  if (*in_stack_00000004 != *in_stack_00000008) {
    return 0;
  }
  uVar1 = *in_stack_00000004 ^ *in_stack_00000008;
  puVar2 = in_stack_00000004;
  if (0 < (int)*in_stack_00000004) {
    do {
      if (in_stack_00000008[9] != puVar2[9]) {
        return 0;
      }
      in_stack_00000008 = in_stack_00000008 + 0x21;
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 0x21;
    } while ((int)uVar1 < (int)*in_stack_00000004);
  }
  return 1;
}
