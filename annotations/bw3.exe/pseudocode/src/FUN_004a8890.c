// Name: FUN_004a8890
// Address: 004a8890
// Address Range: [[004a8890, 004a88c0]]
// Convention: unknown
// Signature: undefined4 FUN_004a8890(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004a8890(int param_1,int param_2)

{
  if (_DAT_01d0cfa0 == 0) {
    return 0;
  }
  if (param_2 != 1) {
    return 1;
  }
  FUN_004a8b90(_DAT_01d0cfa0,param_1 + 0x2c);
  return 1;
}
