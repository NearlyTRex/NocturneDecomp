// Name: core_basicene.cpp_FUN_005a01d0
// Address: 005a01d0
// Address Range: [[005a01d0, 005a023f]]
// Convention: unknown
// Signature: void core_basicene_cpp_FUN_005a01d0(int param_1,undefined4 *param_2)

#include "nocturne.h"

void core_basicene_cpp_FUN_005a01d0(int param_1,uint *param_2)

{
  float fVar1;
  CMotionList *this_ptr;
  int iVar2;
  
  this_ptr = core_motion_cpp_CMotionController_getMotionList_FUN_00503860
                       ((CMotionController *)(param_1 + 0x2b4));
  iVar2 = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10(this_ptr,(char *)(param_2 + 1),1)
  ;
  param_2[9] = iVar2;
  param_2[10] = this_ptr->motions[iVar2].frame_count;
  fVar1 = this_ptr->motions[param_2[9]].fps;
  *param_2 = 0;
  param_2[0xd] = 0;
  param_2[0xc] = (float)(int)param_2[10] / fVar1;
  return;
}
