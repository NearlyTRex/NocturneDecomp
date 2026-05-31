// Name: core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
// Address: 0052e2b0
// MANUAL RECONSTRUCTION
// Address Range: [[0052e2b0, 0052e391]]
// Convention: __cdecl
// Signature: float __cdecl core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0(CMotionController *this_ptr)

#include "nocturne.h"

float __cdecl core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0(CMotionController *this_ptr)

{
  int iVar1;
  SMotion *pSVar3;
  int iVar4;
  float local_1c;
  
  pSVar3 = this_ptr->motion_list_ptr->motions + this_ptr->current_motion_index;
  if (this_ptr->current_frame_number <= 0.0) {
    local_1c = 0.0;
  }
  else if ((float)pSVar3->frame_count <= this_ptr->current_frame_number) {
    local_1c = (float)(pSVar3->marker_count + 1);
  }
  else {
    iVar1 = 0;
    iVar4 = 0;
    if (0 < pSVar3->marker_count) {
      do {
        if (this_ptr->current_frame_number < (float)pSVar3->markers[iVar1]) {
          return (float)iVar1 +
                 (this_ptr->current_frame_number - (float)iVar4) /
                 (float)(pSVar3->markers[iVar1] - iVar4);
        }
        iVar4 = pSVar3->markers[iVar1];
        iVar1 = iVar1 + 1;
      } while (iVar1 < pSVar3->marker_count);
    }
    local_1c = (float)pSVar3->marker_count +
               (this_ptr->current_frame_number - (float)iVar4) /
               (float)(pSVar3->frame_count - iVar4);
  }
  return local_1c;
}
