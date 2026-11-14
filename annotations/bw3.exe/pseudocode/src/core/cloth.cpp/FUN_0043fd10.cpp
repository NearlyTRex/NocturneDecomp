// Name: core_cloth.cpp_FUN_0043fd10
// Address: 0043fd10
// Address Range: [[0043fd10, 0043fd5f]]
// Convention: unknown
// Signature: void core_cloth_cpp_FUN_0043fd10(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_cloth_cpp_FUN_0043fd10(void)

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
        if ((uint *)(iVar1 + 0x3ab24) == in_stack_00000008) break;
        *(uint *)(iVar1 + 0x3ab24) = *in_stack_00000008;
        *(uint *)(iVar1 + 0x3ab28) = in_stack_00000008[1];
        *(uint *)(iVar1 + 0x3ab2c) = in_stack_00000008[2];
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
