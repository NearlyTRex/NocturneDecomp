// Name: FUN_0049dda0
// Address: 0049dda0
// Address Range: [[0049dda0, 0049de93]]
// Convention: unknown
// Signature: undefined4 FUN_0049dda0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0049dda0(int *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = DAT_01c43544;
  if ((((param_1[2] == 0) && (param_1[4] <= _DAT_01c4353c)) && (param_1[5] <= _DAT_01c43540)) &&
     ((_DAT_01c4353c < param_1[6] && (_DAT_01c43540 < param_1[7])))) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if (_DAT_01c3f5d0 == param_1) {
    param_1[8] = iVar2;
    if (((bVar1 & 1) == 0) &&
       (_DAT_01c3f5d0 = (int *)((uint)_DAT_01c3f5d0 ^ (uint)param_1), iVar2 != 0)) {
      param_1[8] = 0;
      if (*param_1 == 1) {
        iVar2 = param_1[1];
        param_1[1] = iVar2 + 1;
        if (2 < iVar2 + 1) {
          param_1[1] = 0;
          return 1;
        }
      }
      else {
        param_1[1] = (uint)(param_1[1] == 0);
      }
      return 1;
    }
    return 0;
  }
  if (((_DAT_01c3f5d0 == (int *)0x0) && ((DAT_01c43544 & 1) != 0)) && (iVar2 != 0)) {
    param_1[8] = 1;
    _DAT_01c3f5d0 = param_1;
    return 0;
  }
  return 0;
}
