// Name: FUN_00514cf0
// Address: 00514cf0
// Address Range: [[00514cf0, 00514d32]]
// Convention: unknown
// Signature: void FUN_00514cf0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00514cf0(int param_1)

{
  if (param_1 == 0) {
    _DAT_01d1d400 = "..\\engine\\mini3d.cpp";
    _DAT_01d1d404 = 0xdfe;
    FUN_005030e0("CMini3D::free32 - NULL pointer being freed");
  }
  FUN_005c09f0(param_1 - (uint)*(byte *)(param_1 + -1));
  return;
}
