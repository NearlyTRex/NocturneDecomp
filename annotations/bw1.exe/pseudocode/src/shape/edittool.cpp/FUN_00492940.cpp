// Name: shape_edittool.cpp_FUN_00492940
// Address: 00492940
// Address Range: [[00492940, 00492966]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00492940(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void shape_edittool_cpp_FUN_00492940(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  if (_DAT_01c3f544 != 0) {
    engine_mini3d_cpp_drawPixel_FUN_00517f10(in_stack_00000004,in_stack_00000008);
    return;
  }
  engine_2d_c_plotPixel_FUN_00401130(in_stack_00000004,in_stack_00000008);
  return;
}
