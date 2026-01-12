// Name: core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
// Address: 0052e3a0
// Address Range: [[0052e3a0, 0052e4b7]]
// Convention: __cdecl
// Signature: float core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0(CMotionController * this_ptr, int motion_index, float marker_position)

#include "nocturne.h"

float __cdecl
core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
          (CMotionController *this_ptr,int motion_index,float marker_position)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int extraout_EDX;
  int iVar4;
  float10 fVar5;
  double dVar6;
  float local_18;
  
  if ((0.0 < marker_position) &&
     (marker_position < (float)(this_ptr->motion_list_ptr->motions[motion_index].marker_count + 1)))
  {
    fVar5 = (float10)marker_position;
    dVar6 = crt_math_c_round_FUN_005fe6b0((double)marker_position);
    iVar1 = (int)ROUND(dVar6);
    iVar4 = 0;
    if (0 < iVar1) {
      iVar4 = *(int *)(extraout_EDX + 0x520 + iVar1 * 4);
    }
    iVar3 = *(int *)(extraout_EDX + 100);
    if (iVar1 < *(int *)(extraout_EDX + 0x520)) {
      iVar3 = *(int *)(extraout_EDX + 0x524 + iVar1 * 4);
    }
    fVar2 = (float)iVar4 * (1.0 - (float)(fVar5 - (float10)iVar1)) +
            (float)iVar3 * (float)(fVar5 - (float10)iVar1);
    if (fVar2 < 0.0) {
      local_18 = 0.0;
    }
    else {
      local_18 = (float)(*(int *)(extraout_EDX + 100) + -1);
      if (fVar2 <= local_18) {
        return fVar2;
      }
    }
  }
  return local_18;
}
