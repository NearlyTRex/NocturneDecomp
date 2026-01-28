// Name: core_cloth.cpp_MultipleCallSaveJoinedLight_FUN_0043c320
// Address: 0043c320
// Address Range: [[0043c320, 0043c394]]
// Convention: unknown
// Signature: int core_cloth_cpp_MultipleCallSaveJoinedLight_FUN_0043c320(int param_1)

#include "nocturne.h"

/* Signature: byte core_cloth.cpp_MultipleCallSaveJoinedLight(uint param_1, uint
   param_2) */

int core_cloth_cpp_MultipleCallSaveJoinedLight_FUN_0043c320(int param_1)

{
  int *piVar1;
  int iVar2;
  int *in_stack_00000004;
  int in_stack_00000008;
  
  if ((in_stack_00000008 != 0) && (iVar2 = 0, piVar1 = in_stack_00000004, 0 < *in_stack_00000004)) {
    do {
      iVar2 = iVar2 + 1;
      core_cloth_cpp_CCloth_saveJoinedLight_FUN_0043b9f0((CCloth *)piVar1[0x65]);
      param_1 = *in_stack_00000004;
      piVar1 = piVar1 + 1;
    } while (iVar2 < param_1);
  }
  iVar2 = 0;
  if (0 < *in_stack_00000004) {
    do {
      iVar2 = iVar2 + 1;
      core_cloth_cpp_FUN_0043bae0(param_1);
      param_1 = *in_stack_00000004;
    } while (iVar2 < param_1);
  }
  return param_1;
}
