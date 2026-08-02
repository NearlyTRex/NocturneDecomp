// Name: crt_unknown.c_FUN_0056f2d0
// Address: 0056f2d0
// Address Range: [[0056f2d0, 0056f30b]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_0056f2d0(void)

#include "nocturne.h"

uint FUN_0056f2d0(void)

{
  int *piVar1;
  int *piVar2;
  
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ad8)();
  piVar1 = DAT_005c1680;
  while (piVar2 = piVar1, piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    if (*piVar2 + -0x2c == *(int *)piVar2[9]) {
      FUN_0056f36c(piVar2);
    }
  }
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ae0)();
  return 0;
}
