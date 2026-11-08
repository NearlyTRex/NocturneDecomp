// Name: FUN_00573600
// Address: 00573600
// Address Range: [[00573600, 00573611]]
// Convention: unknown
// Signature: undefined4 FUN_00573600(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00573600(int param_1)

{
  int iVar1;
  
  _DAT_02c8065c = param_1;
  if (param_1 == 0) {
    return 0;
  }
  FUN_00573b00();
  if (_DAT_02c80650 != (int *)0x0) {
    iVar1 = (**(code **)(*_DAT_02c80650 + 8))(_DAT_02c80650);
    if (iVar1 == 0) {
      return 0;
    }
  }
  _DAT_02c80654 = 0;
  FUN_0056f630();
  return 1;
}
