// Name: shape_edittool.cpp_FUN_00492de0
// Address: 00492de0
// Address Range: [[00492de0, 00492e0c]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00492de0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void shape_edittool_cpp_FUN_00492de0(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  if (_DAT_01c3f544 != 0) {
    engine_mini3d_cpp_drawHLine_FUN_005182e0(in_stack_00000004,in_stack_00000008,in_stack_0000000c);
    return;
  }
  engine_2d_c_drawHLine_FUN_00402f30(in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  return;
}
