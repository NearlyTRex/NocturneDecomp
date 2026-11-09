// Name: unkafter_basicene.cpp_FUN_005a01d0
// Address: 005a01d0
// Address Range: [[005a01d0, 005a023f]]
// Convention: unknown
// Signature: void unkafter_basicene_cpp_FUN_005a01d0(int param_1,undefined4 *param_2)

#include "nocturne.h"

void unkafter_basicene_cpp_FUN_005a01d0(int param_1,uint *param_2)

{
  float fVar1;
  CMotionList *this_ptr;
  int iVar2;
  
  this_ptr = core_motion_cpp_FUN_00503860((CMotionController *)(param_1 + 0x2b4));
  iVar2 = core_motion_cpp_FUN_00502f10(this_ptr,(char *)(param_2 + 1),1);
  param_2[9] = iVar2;
  param_2[10] = *(uint *)(this_ptr + iVar2 * 0x118 + 0x1c8c);
  fVar1 = *(float *)(this_ptr + param_2[9] * 0x118 + 0x1c48);
  *param_2 = 0;
  param_2[0xd] = 0;
  param_2[0xc] = (float)(int)param_2[10] / fVar1;
  return;
}
