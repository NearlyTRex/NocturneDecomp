// Name: unkafter_asgaya.cpp_FUN_005ae8c0
// Address: 005ae8c0
// Address Range: [[005ae8c0, 005ae8fb]]
// Convention: unknown
// Signature: undefined4 unkafter_asgaya_cpp_FUN_005ae8c0(void)

#include "nocturne.h"

uint unkafter_asgaya_cpp_FUN_005ae8c0(void)

{
  int *piVar1;
  int *piVar2;
  
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079bc)();
  piVar1 = DAT_006075c4;
  while (piVar2 = piVar1, piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    if (*piVar2 + -0x2c == *(int *)piVar2[9]) {
      unkafter_asgaya_cpp_FUN_005ae95c(piVar2);
    }
  }
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079c4)();
  return 0;
}
