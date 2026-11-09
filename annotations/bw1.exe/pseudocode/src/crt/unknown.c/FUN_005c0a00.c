// Name: crt_unknown.c_FUN_005c0a00
// Address: 005c0a00
// Address Range: [[005c0a00, 005c0b05]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c0a00(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c0a00(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1 != (int *)0x0) {
    (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626618)();
    if (((_DAT_02c9f040 == (int *)0x0) ||
        ((((param_1 < _DAT_02c9f040 ||
           (piVar2 = _DAT_02c9f040, (int *)(*_DAT_02c9f040 + (int)_DAT_02c9f040) <= param_1)) &&
          ((piVar2 = (int *)_DAT_02c9f040[1], piVar2 == (int *)0x0 ||
           ((param_1 < piVar2 || ((int *)(*piVar2 + (int)piVar2) <= param_1)))))) &&
         ((piVar2 = (int *)_DAT_02c9f040[2], piVar2 == (int *)0x0 ||
          ((param_1 < piVar2 || ((int *)(*piVar2 + (int)piVar2) <= param_1)))))))) &&
       ((piVar1 = DAT_00626220, DAT_00626224 == (int *)0x0 ||
        ((((param_1 < DAT_00626224 ||
           (piVar2 = DAT_00626224, (int *)(*DAT_00626224 + (int)DAT_00626224) <= param_1)) &&
          ((piVar2 = (int *)DAT_00626224[1], piVar2 == (int *)0x0 ||
           ((param_1 < piVar2 || ((int *)(*piVar2 + (int)piVar2) <= param_1)))))) &&
         ((piVar2 = (int *)DAT_00626224[2], piVar2 == (int *)0x0 ||
          ((param_1 < piVar2 || ((int *)(*piVar2 + (int)piVar2) <= param_1)))))))))) {
      while (piVar2 = piVar1, piVar2 != (int *)0x0) {
        if ((piVar2 <= param_1) && (param_1 < (int *)(*piVar2 + (int)piVar2))) goto LAB_005c0abc;
        piVar1 = (int *)piVar2[2];
      }
    }
    else {
LAB_005c0abc:
      FUN_005c6750();
      if ((piVar2 < DAT_00626224) && (DAT_00626228 < (uint)piVar2[5])) {
        DAT_00626228 = piVar2[5];
      }
      DAT_02c9f690 = 0;
      _DAT_02c9f040 = piVar2;
    }
    (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626620)();
  }
  return;
}
