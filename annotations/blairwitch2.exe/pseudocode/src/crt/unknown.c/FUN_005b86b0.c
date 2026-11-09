// Name: crt_unknown.c_FUN_005b86b0
// Address: 005b86b0
// Address Range: [[005b86b0, 005b87b5]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005b86b0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b86b0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1 != (int *)0x0) {
    (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2c0)();
    if (((_DAT_02680150 == (int *)0x0) ||
        ((((param_1 < _DAT_02680150 ||
           (piVar2 = _DAT_02680150, (int *)(*_DAT_02680150 + (int)_DAT_02680150) <= param_1)) &&
          ((piVar2 = (int *)_DAT_02680150[1], piVar2 == (int *)0x0 ||
           ((param_1 < piVar2 || ((int *)(*piVar2 + (int)piVar2) <= param_1)))))) &&
         ((piVar2 = (int *)_DAT_02680150[2], piVar2 == (int *)0x0 ||
          ((param_1 < piVar2 || ((int *)(*piVar2 + (int)piVar2) <= param_1)))))))) &&
       ((piVar1 = DAT_0061eea0, DAT_0061eea4 == (int *)0x0 ||
        ((((param_1 < DAT_0061eea4 ||
           (piVar2 = DAT_0061eea4, (int *)(*DAT_0061eea4 + (int)DAT_0061eea4) <= param_1)) &&
          ((piVar2 = (int *)DAT_0061eea4[1], piVar2 == (int *)0x0 ||
           ((param_1 < piVar2 || ((int *)(*piVar2 + (int)piVar2) <= param_1)))))) &&
         ((piVar2 = (int *)DAT_0061eea4[2], piVar2 == (int *)0x0 ||
          ((param_1 < piVar2 || ((int *)(*piVar2 + (int)piVar2) <= param_1)))))))))) {
      while (piVar2 = piVar1, piVar2 != (int *)0x0) {
        if ((piVar2 <= param_1) && (param_1 < (int *)(*piVar2 + (int)piVar2))) goto LAB_005b876c;
        piVar1 = (int *)piVar2[2];
      }
    }
    else {
LAB_005b876c:
      FUN_005be480();
      if ((piVar2 < DAT_0061eea4) && (DAT_0061eea8 < (uint)piVar2[5])) {
        DAT_0061eea8 = piVar2[5];
      }
      DAT_026807a0 = 0;
      _DAT_02680150 = piVar2;
    }
    (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2c8)();
  }
  return;
}
