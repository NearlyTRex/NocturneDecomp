// Name: FUN_005cba50
// Address: 005cba50
// Address Range: [[005cba50, 005cba8b]]
// Convention: unknown
// Signature: undefined4 FUN_005cba50(void)

#include "nocturne.h"

uint FUN_005cba50(void)

{
  int *piVar1;
  int *piVar2;
  
  (*(code *)PTR_FUN_00626618)();
  piVar1 = DAT_00626220;
  while (piVar2 = piVar1, piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    if (*piVar2 + -0x2c == *(int *)piVar2[9]) {
      FUN_005cbaec(piVar2);
    }
  }
  (*(code *)PTR_FUN_00626620)();
  return 0;
}
