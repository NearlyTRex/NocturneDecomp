// Name: FUN_00410940
// Address: 00410940
// Address Range: [[00410940, 00410998]]
// Convention: unknown
// Signature: void FUN_00410940(int param_1)

#include "nocturne.h"

void FUN_00410940(int param_1)

{
  FUN_0040c040(param_1);
  FUN_0040b1c0(param_1 + 0x158,&DAT_005d359a);
  if (0x00000002 < 2) {
    return;
  }
  FUN_0040b440(param_1 + 0x168,"effectClassNameList");
  FUN_0040b670(param_1 + 0x164,"addToPathGrid");
  return;
}
