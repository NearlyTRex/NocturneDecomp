// Name: shape_edittool.cpp_FUN_0047a71e
// Address: 0047a71e
// Address Range: [[0047a71e, 0047a76f]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0047a71e(uint param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_0047a71e(uint param_1)

{
  int iVar1;
  
  if (_DAT_01c25f84 == 0) {
    _DAT_01c35e60 = param_1;
    return;
  }
  iVar1 = (param_1 & 0xff) * 3;
  engine_mini3d_cpp_FUN_004f8e20
            ((uint)(byte)(&DAT_01c3583a)[iVar1] |
             (uint)(byte)(&DAT_01c35839)[iVar1] << 8 | (uint)(byte)(&DAT_01c35838)[iVar1] << 0x10);
  return;
}
