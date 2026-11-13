// Name: shape_edittool.cpp_FUN_0047b980
// Address: 0047b980
// Address Range: [[0047b980, 0047b9ac]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0047b980(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void shape_edittool_cpp_FUN_0047b980(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  if (_DAT_01c5baec != 0) {
    engine_mini3d_cpp_drawHLine_FUN_004f3ab0(in_stack_00000004,in_stack_00000008,in_stack_0000000c);
    return;
  }
  engine_2d_c_drawHLine_FUN_00402f30(in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  return;
}
