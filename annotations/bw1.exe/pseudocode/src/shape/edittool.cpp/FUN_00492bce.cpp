// Name: shape_edittool.cpp_FUN_00492bce
// Address: 00492bce
// Address Range: [[00492bce, 00492c1f]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00492bce(uint param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_00492bce(uint param_1)

{
  int iVar1;
  
  if (_DAT_01c3f544 == 0) {
    _DAT_01c4f020 = param_1;
    return;
  }
  iVar1 = (param_1 & 0xff) * 3;
  engine_mini3d_cpp_FUN_00517d50
            ((uint)(byte)(&DAT_01c4e9fa)[iVar1] |
             (uint)(byte)(&DAT_01c4e9f9)[iVar1] << 8 | (uint)(byte)(&DAT_01c4e9f8)[iVar1] << 0x10);
  return;
}
