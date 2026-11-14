// Name: core_motion.cpp_CMotionController_markerPositionToFrame_FUN_004fca20
// Address: 004fca20
// Address Range: [[004fca20, 004fcb42]]
// Convention: __cdecl
// Signature: float __cdecl core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004fca20(CMotionController *this_ptr,int motion_index,float marker_position)

#include "nocturne.h"

float __cdecl core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004fca20(CMotionController *this_ptr,int motion_index,float marker_position)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int extraout_EDX;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float local_1c;
  
  if (marker_position <= 0.0) {
    local_1c = 0.0;
  }
  else if ((float)(this_ptr->motion_list_ptr->motions[motion_index].marker_count + 1) <=
           marker_position) {
    local_1c = (float)(this_ptr->motion_list_ptr->motions[motion_index].frame_count + -1);
  }
  else {
    fVar5 = (float10)marker_position;
    fVar6 = fVar5;
    round();
    iVar1 = (int)ROUND(fVar5);
    iVar4 = 0;
    if (0 < iVar1) {
      iVar4 = *(int *)(extraout_EDX + 0xf4 + iVar1 * 4);
    }
    iVar3 = *(int *)(extraout_EDX + 100);
    if (iVar1 < *(int *)(extraout_EDX + 0xf4)) {
      iVar3 = *(int *)(extraout_EDX + 0xf8 + iVar1 * 4);
    }
    fVar2 = (float)iVar4 * (1.0 - (float)(fVar6 - (float10)iVar1)) +
            (float)iVar3 * (float)(fVar6 - (float10)iVar1);
    if (fVar2 < 0.0) {
      local_1c = 0.0;
    }
    else {
      local_1c = (float)(*(int *)(extraout_EDX + 100) + -1);
      if (fVar2 <= local_1c) {
        return fVar2;
      }
    }
  }
  return local_1c;
}
