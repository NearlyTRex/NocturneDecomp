// Name: FUN_005a3780
// Address: 005a3780
// Address Range: [[005a3780, 005a3885]]
// Convention: unknown
// Signature: void FUN_005a3780(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a3780(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1 != (int *)0x0) {
    (*(code *)PTR_FUN_006079bc)();
    if (((_DAT_02d25290 == (int *)0x0) ||
        ((((param_1 < _DAT_02d25290 ||
           (piVar2 = _DAT_02d25290, (int *)(*_DAT_02d25290 + (int)_DAT_02d25290) <= param_1)) &&
          ((piVar2 = (int *)_DAT_02d25290[1], piVar2 == (int *)0x0 ||
           ((param_1 < piVar2 || ((int *)(*piVar2 + (int)piVar2) <= param_1)))))) &&
         ((piVar2 = (int *)_DAT_02d25290[2], piVar2 == (int *)0x0 ||
          ((param_1 < piVar2 || ((int *)(*piVar2 + (int)piVar2) <= param_1)))))))) &&
       ((piVar1 = DAT_006075c4, DAT_006075c8 == (int *)0x0 ||
        ((((param_1 < DAT_006075c8 ||
           (piVar2 = DAT_006075c8, (int *)(*DAT_006075c8 + (int)DAT_006075c8) <= param_1)) &&
          ((piVar2 = (int *)DAT_006075c8[1], piVar2 == (int *)0x0 ||
           ((param_1 < piVar2 || ((int *)(*piVar2 + (int)piVar2) <= param_1)))))) &&
         ((piVar2 = (int *)DAT_006075c8[2], piVar2 == (int *)0x0 ||
          ((param_1 < piVar2 || ((int *)(*piVar2 + (int)piVar2) <= param_1)))))))))) {
      while (piVar2 = piVar1, piVar2 != (int *)0x0) {
        if ((piVar2 <= param_1) && (param_1 < (int *)(*piVar2 + (int)piVar2))) goto LAB_005a383c;
        piVar1 = (int *)piVar2[2];
      }
    }
    else {
LAB_005a383c:
      FUN_005a95c0();
      if ((piVar2 < DAT_006075c8) && (DAT_006075cc < (uint)piVar2[5])) {
        DAT_006075cc = piVar2[5];
      }
      DAT_02d258e0 = 0;
      _DAT_02d25290 = piVar2;
    }
    (*(code *)PTR_FUN_006079c4)();
  }
  return;
}
