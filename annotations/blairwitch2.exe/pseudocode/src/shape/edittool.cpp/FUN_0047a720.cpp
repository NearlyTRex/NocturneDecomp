// Name: shape_edittool.cpp_FUN_0047a720
// Address: 0047a720
// Address Range: [[0047a720, 0047a76f]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0047a720(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void shape_edittool_cpp_FUN_0047a720(void)

{
  int iVar1;
  uint in_stack_00000004;
  
  if (_DAT_01c25f84 == 0) {
    _DAT_01c35e60 = in_stack_00000004;
    return;
  }
  iVar1 = (in_stack_00000004 & 0xff) * 3;
  engine_mini3d_cpp_setColor_FUN_004f8e20
            ((uint)(byte)(&DAT_01c3583a)[iVar1] |
             (uint)(byte)(&DAT_01c35839)[iVar1] << 8 | (uint)(byte)(&DAT_01c35838)[iVar1] << 0x10);
  return;
}
