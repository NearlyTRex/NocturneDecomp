// Name: FUN_00486940
// Address: 00486940
// Address Range: [[00486940, 00486a33]]
// Convention: unknown
// Signature: undefined4 FUN_00486940(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00486940(int *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = DAT_01c5fae4;
  if ((((param_1[2] == 0) && (param_1[4] <= _DAT_01c5fadc)) && (param_1[5] <= _DAT_01c5fae0)) &&
     ((_DAT_01c5fadc < param_1[6] && (_DAT_01c5fae0 < param_1[7])))) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if (_DAT_01c5bb78 == param_1) {
    param_1[8] = iVar2;
    if (((bVar1 & 1) == 0) &&
       (_DAT_01c5bb78 = (int *)((uint)_DAT_01c5bb78 ^ (uint)param_1), iVar2 != 0)) {
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
  if (((_DAT_01c5bb78 == (int *)0x0) && ((DAT_01c5fae4 & 1) != 0)) && (iVar2 != 0)) {
    param_1[8] = 1;
    _DAT_01c5bb78 = param_1;
    return 0;
  }
  return 0;
}
