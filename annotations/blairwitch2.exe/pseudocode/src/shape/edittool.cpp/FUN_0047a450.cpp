// Name: shape_edittool.cpp_FUN_0047a450
// Address: 0047a450
// Address Range: [[0047a450, 0047a476]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0047a450(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void shape_edittool_cpp_FUN_0047a450(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  if (_DAT_01c25f84 != 0) {
    engine_mini3d_cpp_drawPixel_FUN_004f8fe0(in_stack_00000004,in_stack_00000008);
    return;
  }
  engine_2d_c_plotPixel_FUN_00401130(in_stack_00000004,in_stack_00000008);
  return;
}
