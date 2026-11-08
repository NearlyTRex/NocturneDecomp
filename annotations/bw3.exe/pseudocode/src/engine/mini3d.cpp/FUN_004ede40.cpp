// Name: FUN_004ede40
// Address: 004ede40
// Address Range: [[004ede40, 004ede99]]
// Convention: unknown
// Signature: void FUN_004ede40(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ede40(void)

{
  if (_DAT_01d76f5c != 0) {
    return;
  }
  _DAT_01d76f5c = FUN_005a3650(0x9c440);
  if (_DAT_01d76f5c == 0) {
    _DAT_01d71de0 = "..\\engine\\mini3d.cpp";
    _DAT_01d71de4 = 0x67d;
    FUN_004e4330("CMini3D::allocVertexList - Out of memory!");
  }
  _DAT_01d76f60 = _DAT_01d76f5c + 0x3fU & 0xffffffc0;
  _DAT_01d76f64 = _DAT_01d76f60;
  return;
}
