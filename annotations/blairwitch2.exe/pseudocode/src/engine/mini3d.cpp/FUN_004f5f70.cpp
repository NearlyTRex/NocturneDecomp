// Name: FUN_004f5f70
// Address: 004f5f70
// Address Range: [[004f5f70, 004f5fb2]]
// Convention: unknown
// Signature: void FUN_004f5f70(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f5f70(int param_1)

{
  if (param_1 == 0) {
    _DAT_01d046a0 = "..\\engine\\mini3d.cpp";
    _DAT_01d046a4 = 0xe11;
    FUN_004e4500("CMini3D::free32 - NULL pointer being freed");
  }
  FUN_005b86a0(param_1 - (uint)*(byte *)(param_1 + -1));
  return;
}
