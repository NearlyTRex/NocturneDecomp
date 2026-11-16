// Name: FUN_00485740
// Address: 00485740
// Address Range: [[00485740, 00485833]]
// Convention: unknown
// Signature: undefined4 FUN_00485740(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00485740(int *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = DAT_01c2a384;
  if ((((param_1[2] == 0) && (param_1[4] <= _DAT_01c2a37c)) && (param_1[5] <= _DAT_01c2a380)) &&
     ((_DAT_01c2a37c < param_1[6] && (_DAT_01c2a380 < param_1[7])))) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if (_DAT_01c26410 == param_1) {
    param_1[8] = iVar2;
    if (((bVar1 & 1) == 0) &&
       (_DAT_01c26410 = (int *)((uint)_DAT_01c26410 ^ (uint)param_1), iVar2 != 0)) {
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
  if (((_DAT_01c26410 == (int *)0x0) && ((DAT_01c2a384 & 1) != 0)) && (iVar2 != 0)) {
    param_1[8] = 1;
    _DAT_01c26410 = param_1;
    return 0;
  }
  return 0;
}
