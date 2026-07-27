// Name: crt_unknown.c_FUN_005638e0
// Address: 005638e0
// Address Range: [[005638e0, 005639e5]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005638e0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005638e0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1 != (int *)0x0) {
    (*(code *)PTR_FUN_005c1ad8)();
    if (((_DAT_02de4e10 == (int *)0x0) ||
        ((((param_1 < _DAT_02de4e10 ||
           (piVar2 = _DAT_02de4e10, (int *)(*_DAT_02de4e10 + (int)_DAT_02de4e10) <= param_1)) &&
          ((piVar2 = (int *)_DAT_02de4e10[1], piVar2 == (int *)0x0 ||
           ((param_1 < piVar2 || ((int *)(*piVar2 + (int)piVar2) <= param_1)))))) &&
         ((piVar2 = (int *)_DAT_02de4e10[2], piVar2 == (int *)0x0 ||
          ((param_1 < piVar2 || ((int *)(*piVar2 + (int)piVar2) <= param_1)))))))) &&
       ((piVar1 = DAT_005c1680, DAT_005c1684 == (int *)0x0 ||
        ((((param_1 < DAT_005c1684 ||
           (piVar2 = DAT_005c1684, (int *)(*DAT_005c1684 + (int)DAT_005c1684) <= param_1)) &&
          ((piVar2 = (int *)DAT_005c1684[1], piVar2 == (int *)0x0 ||
           ((param_1 < piVar2 || ((int *)(*piVar2 + (int)piVar2) <= param_1)))))) &&
         ((piVar2 = (int *)DAT_005c1684[2], piVar2 == (int *)0x0 ||
          ((param_1 < piVar2 || ((int *)(*piVar2 + (int)piVar2) <= param_1)))))))))) {
      while (piVar2 = piVar1, piVar2 != (int *)0x0) {
        if ((piVar2 <= param_1) && (param_1 < (int *)(*piVar2 + (int)piVar2))) goto LAB_0056399c;
        piVar1 = (int *)piVar2[2];
      }
    }
    else {
LAB_0056399c:
      FUN_00568bb0();
      if ((piVar2 < DAT_005c1684) && (DAT_005c1688 < (uint)piVar2[5])) {
        DAT_005c1688 = piVar2[5];
      }
      DAT_02de5460 = 0;
      _DAT_02de4e10 = piVar2;
    }
    (*(code *)PTR_FUN_005c1ae0)();
  }
  return;
}
