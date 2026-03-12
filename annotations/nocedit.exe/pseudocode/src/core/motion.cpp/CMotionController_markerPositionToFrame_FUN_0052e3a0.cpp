// Name: core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
// Address: 0052e3a0
// Address Range: [[0052e3a0, 0052e4b7]]
// Convention: __cdecl
// Signature: float __cdecl core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0(CMotionController *this_ptr,int motion_index,float marker_position)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

float __cdecl core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0(CMotionController *this_ptr,int motion_index,float marker_position)

{
  int iVar4;
  int iVar5;
  float local_18;
  float fVar3;
  int iVar1;
  CMotionList *pCVar2;
  
  pCVar2 = this_ptr->motion_list_ptr;
  if (marker_position <= 0.0) {
    local_18 = 0.0;
  }
  else if ((float)(pCVar2->motions[motion_index].marker_count + 1) <= marker_position) {
    local_18 = (float)(pCVar2->motions[motion_index].frame_count + -1);
  }
  else {
    iVar1 = (int)ROUND(ROUND(marker_position));
    iVar5 = 0;
    if (0 < iVar1) {
      iVar5 = pCVar2->motions[motion_index].markers[iVar1 + -1];
    }
    iVar4 = pCVar2->motions[motion_index].frame_count;
    if (iVar1 < pCVar2->motions[motion_index].marker_count) {
      iVar4 = pCVar2->motions[motion_index].markers[iVar1];
    }
    fVar3 = (float)iVar5 * (1.0 - (marker_position - (float)iVar1)) +
            (float)iVar4 * (marker_position - (float)iVar1);
    if (fVar3 < 0.0) {
      local_18 = 0.0;
    }
    else {
      local_18 = (float)(pCVar2->motions[motion_index].frame_count + -1);
      if (fVar3 <= local_18) {
        return fVar3;
      }
    }
  }
  return local_18;
}
