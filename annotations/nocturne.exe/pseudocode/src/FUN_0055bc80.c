// Name: FUN_0055bc80
// Address: 0055bc80
// Address Range: [[0055bc80, 0055bca6]]
// Convention: unknown
// Signature: void FUN_0055bc80(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_0055bc80(void)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  uint *in_stack_00000004;
  uint local_38 [12];
  
  bVar3 = 0;
  core_xform_cpp_inverse_FUN_0055bd00();
  puVar2 = local_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_stack_00000004 = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    in_stack_00000004 = in_stack_00000004 + (uint)bVar3 * -2 + 1;
  }
  return;
}
