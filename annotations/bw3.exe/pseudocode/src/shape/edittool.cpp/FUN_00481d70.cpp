// Name: shape_edittool.cpp_FUN_00481d70
// Address: 00481d70
// Address Range: [[00481d70, 00481de2]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00481d70(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void shape_edittool_cpp_FUN_00481d70(void)

{
  uint in_stack_00000004;
  float *in_stack_00000008;
  uint in_stack_0000000c;
  SProjectedVertex aSStack_40 [2];
  CVector3i CStack_10;
  
  CStack_10.x = (int)ROUND(*in_stack_00000008 * _DAT_005deffc);
  CStack_10.y = (int)ROUND(in_stack_00000008[1] * _DAT_005deffc);
  CStack_10.z = (int)ROUND(in_stack_00000008[2] * _DAT_005deffc);
  engine_special_cpp_FUN_005632a3(aSStack_40,&CStack_10);
  if ((aSStack_40[0].screen_x & 0x80000000U) != 0) {
    return;
  }
  shape_edittool_cpp_FUN_00481ab0
            (in_stack_00000004,aSStack_40[0].screen_x >> 0x10,aSStack_40[0].screen_y >> 0x10,
             in_stack_0000000c);
  return;
}
