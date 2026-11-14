// Name: crt_unknown.c_FUN_005c3750
// Address: 005c3750
// Address Range: [[005c3750, 005c378b]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c3750(void)

#include "nocturne.h"

uint FUN_005c3750(void)

{
  int *piVar1;
  int *piVar2;
  
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2c0)();
  piVar1 = DAT_0061eea0;
  while (piVar2 = piVar1, piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    if (*piVar2 + -0x2c == *(int *)piVar2[9]) {
      FUN_005c37ec(piVar2);
    }
  }
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2c8)();
  return 0;
}
