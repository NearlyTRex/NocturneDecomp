// Name: FUN_004f04c0
// Address: 004f04c0
// Address Range: [[004f04c0, 004f0502]]
// Convention: unknown
// Signature: void FUN_004f04c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f04c0(int param_1)

{
  if (param_1 == 0) {
    _DAT_01d71de0 = "..\\engine\\mini3d.cpp";
    _DAT_01d71de4 = 0xdfe;
    FUN_004e4330("CMini3D::free32 - NULL pointer being freed");
  }
  FUN_005a3770(param_1 - (uint)*(byte *)(param_1 + -1));
  return;
}
