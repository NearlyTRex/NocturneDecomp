// Name: shape_edittool.cpp_plotPixelWithClipping_FUN_0046efa0
// Address: 0046efa0
// Address Range: [[0046efa0, 0046eff2]]
// Convention: unknown
// Signature: void shape_edittool_cpp_plotPixelWithClipping_FUN_0046efa0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void shape_edittool_cpp_plotPixelWithClipping_FUN_0046efa0(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  if (((((-1 < in_stack_00000004) && (-1 < in_stack_00000008)) && (in_stack_00000004 < DAT_005b761c)
       ) && (in_stack_00000008 < DAT_005b7620)) &&
     ((in_stack_0000000c == 0 ||
      (((_DAT_01c00c58 <= in_stack_00000004 && (in_stack_00000004 < _DAT_01c00c60)) &&
       ((_DAT_01c00c5c <= in_stack_00000008 && (in_stack_00000008 < _DAT_01c00c64)))))))) {
    engine_2d_c_plotPixel_FUN_00401530(in_stack_00000004,in_stack_00000008);
    return;
  }
  return;
}
