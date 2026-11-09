// Name: shape_edittool.cpp_FUN_0047b76e
// Address: 0047b76e
// Address Range: [[0047b76e, 0047b7bf]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0047b76e(uint param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_0047b76e(uint param_1)

{
  int iVar1;
  
  if (_DAT_01c5baec == 0) {
    _DAT_01c6b5c0 = param_1;
    return;
  }
  iVar1 = (param_1 & 0xff) * 3;
  engine_mini3d_cpp_FUN_004f3520
            ((uint)(byte)(&DAT_01c6af9a)[iVar1] |
             (uint)(byte)(&DAT_01c6af99)[iVar1] << 8 | (uint)(byte)(&DAT_01c6af98)[iVar1] << 0x10);
  return;
}
