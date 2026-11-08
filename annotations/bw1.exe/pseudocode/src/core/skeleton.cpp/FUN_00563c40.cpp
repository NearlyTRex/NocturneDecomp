// Name: FUN_00563c40
// Address: 00563c40
// Address Range: [[00563c40, 00563c87]]
// Convention: unknown
// Signature: undefined4 FUN_00563c40(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00563c40(int param_1)

{
  if (*(int *)(param_1 + 0x35ac) != 0) {
    return *(uint *)(param_1 + 0x35ac);
  }
  _DAT_01d1d400 = "..\\core\\skeleton.cpp";
  _DAT_01d1d404 = 0x2ff;
  FUN_005030e0("Tried to do something with the skeleton, but skeleton ptr not set!");
  return *(uint *)(param_1 + 0x35ac);
}
