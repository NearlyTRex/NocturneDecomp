// Name: shape_edittool.cpp_FUN_0047b770
// Address: 0047b770
// Address Range: [[0047b770, 0047b7bf]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0047b770(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void shape_edittool_cpp_FUN_0047b770(void)

{
  int iVar1;
  uint in_stack_00000004;
  
  if (_DAT_01c5baec == 0) {
    _DAT_01c6b5c0 = in_stack_00000004;
    return;
  }
  iVar1 = (in_stack_00000004 & 0xff) * 3;
  engine_mini3d_cpp_setColor_FUN_004f3520
            ((uint)(byte)(&DAT_01c6af9a)[iVar1] |
             (uint)(byte)(&DAT_01c6af99)[iVar1] << 8 | (uint)(byte)(&DAT_01c6af98)[iVar1] << 0x10);
  return;
}
