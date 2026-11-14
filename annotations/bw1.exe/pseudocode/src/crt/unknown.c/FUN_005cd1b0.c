// Name: crt_unknown.c_FUN_005cd1b0
// Address: 005cd1b0
// Address Range: [[005cd1b0, 005cd20e]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005cd1b0(int param_1)

#include "nocturne.h"

uint FUN_005cd1b0(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = FUN_005cd144(4);
    if (iVar1 == 0) {
      return 0;
    }
    processSignal(4);
  }
  else {
    if (param_1 != 1) {
      return 0;
    }
    iVar1 = FUN_005cd144(7);
    if (iVar1 == 0) {
      return 0;
    }
    processSignal(7);
  }
  if ((iVar1 != 2) && (iVar1 != 3)) {
    return 1;
  }
  return 0;
}
