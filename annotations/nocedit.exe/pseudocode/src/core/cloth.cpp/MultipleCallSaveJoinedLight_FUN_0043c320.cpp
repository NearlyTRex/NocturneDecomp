// Name: core_cloth.cpp_MultipleCallSaveJoinedLight_FUN_0043c320
// Address: 0043c320
// Address Range: [[0043c320, 0043c394]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_MultipleCallSaveJoinedLight_FUN_0043c320(void)

#include "nocturne.h"

/* Signature: byte core_cloth.cpp_MultipleCallSaveJoinedLight(uint param_1, uint
   param_2) */

void __cdecl core_cloth_cpp_MultipleCallSaveJoinedLight_FUN_0043c320(void)

{
  int *piVar1;
  int iVar2;
  int *in_stack_00000004;
  int in_stack_00000008;
  
  if ((in_stack_00000008 != 0) && (iVar2 = 0, piVar1 = in_stack_00000004, 0 < *in_stack_00000004)) {
    do {
      iVar2 = iVar2 + 1;
      core_cloth_cpp_CCloth_saveJoinedLight_FUN_0043b9f0((CCloth *)piVar1[0x65]);
      piVar1 = piVar1 + 1;
    } while (iVar2 < *in_stack_00000004);
  }
  iVar2 = 0;
  if (0 < *in_stack_00000004) {
    do {
      iVar2 = iVar2 + 1;
      core_cloth_cpp_FUN_0043bae0();
    } while (iVar2 < *in_stack_00000004);
  }
  return;
}
