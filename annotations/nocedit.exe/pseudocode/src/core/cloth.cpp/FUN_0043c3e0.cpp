// Name: core_cloth.cpp_FUN_0043c3e0
// Address: 0043c3e0
// Address Range: [[0043c3e0, 0043c42f]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043c3e0()

#include "nocturne.h"

void core_cloth_cpp_FUN_0043c3e0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *in_stack_00000004;
  uint *in_stack_00000008;
  
  iVar3 = 0;
  piVar2 = in_stack_00000004;
  if (0 < *in_stack_00000004) {
    do {
      while( true ) {
        iVar1 = piVar2[0x65];
        if ((uint *)(iVar1 + 0x3fe64) == in_stack_00000008) break;
        *(uint *)(iVar1 + 0x3fe64) = *in_stack_00000008;
        *(uint *)(iVar1 + 0x3fe68) = in_stack_00000008[1];
        *(uint *)(iVar1 + 0x3fe6c) = in_stack_00000008[2];
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 1;
        if (*in_stack_00000004 <= iVar3) {
          return;
        }
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *in_stack_00000004);
  }
  return;
}
