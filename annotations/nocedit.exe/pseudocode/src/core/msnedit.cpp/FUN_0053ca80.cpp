// Name: core_msnedit.cpp_FUN_0053ca80
// Address: 0053ca80
// Address Range: [[0053ca80, 0053cace]]
// Convention: unknown
// Signature: void core_msnedit_cpp_FUN_0053ca80(void)

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_FUN_0053ca80(uint param_1, uint param_2) */

void core_msnedit_cpp_FUN_0053ca80(void)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000004;
  int in_stack_00000008;
  
  iVar1 = in_stack_00000008;
  if (in_stack_00000008 == 0) {
    iVar1 = in_stack_00000004[0x153];
  }
  if (iVar1 != 0) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(iVar1 + 0x150);
      if (iVar1 == 0) {
        iVar1 = in_stack_00000004[0x153];
      }
      if (iVar1 == in_stack_00000008) {
        return;
      }
      if ((*in_stack_00000004 == *(int *)(iVar1 + 0x2c)) && (*(int *)(iVar1 + 0x148) == 0)) {
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 1000);
  }
  return;
}
