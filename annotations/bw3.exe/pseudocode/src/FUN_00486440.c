// Name: FUN_00486440
// Address: 00486440
// Address Range: [[00486440, 004864e2]]
// Convention: unknown
// Signature: undefined4 FUN_00486440(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00486440(int *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  bVar1 = DAT_01c5fae4;
  if ((((*param_1 == 0) && (param_1[2] <= _DAT_01c5fadc)) && (param_1[3] <= _DAT_01c5fae0)) &&
     ((_DAT_01c5fadc < param_1[4] && (_DAT_01c5fae0 < param_1[5])))) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  if (_DAT_01c5bb78 == param_1) {
    param_1[6] = iVar3;
    if (((bVar1 & 1) == 0) &&
       (_DAT_01c5bb78 = (int *)((uint)_DAT_01c5bb78 ^ (uint)param_1), iVar3 != 0)) {
      param_1[6] = 0;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
  if (((_DAT_01c5bb78 == (int *)0x0) && ((DAT_01c5fae4 & 1) != 0)) && (iVar3 != 0)) {
    param_1[6] = 1;
    _DAT_01c5bb78 = param_1;
    return 0;
  }
  return 0;
}
