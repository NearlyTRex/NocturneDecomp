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
  float fVar1;
  int iVar2;
  int iVar3;
  SMotion *pSVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  double dVar9;
  float local_14;
  
  pSVar4 = this_ptr->motion_list_ptr->motions + motion_index;
  if (0.0 < marker_position) {
    iVar2 = pSVar4->marker_count + 1;
    fVar1 = (float)iVar2;
    if (fVar1 < marker_position || (fVar1 == marker_position) != 0) {
      local_14 = (float)(pSVar4->frame_count + -1);
    }
    else {
      fVar7 = (float10)marker_position;
      fVar8 = fVar7;
      dVar9 = crt_math_c_round_FUN_005fe6b0
                        ((double)CONCAT44 /* combine 2-byte values */(pSVar4,CONCAT22 /* combine 2-byte values */((short)((uint)iVar2 >> 0x10),
                                                          (ushort)(fVar1 < marker_position) << 8 |
                                                          (ushort)(NAN(fVar1) ||
                                                                  NAN(marker_position)) << 10 |
                                                          (ushort)(fVar1 == marker_position) << 0xe)
                                         ));
      iVar5 = (int)((ulonglong)dVar9 >> 0x20);
      iVar2 = (int)ROUND(fVar7);
      iVar6 = 0;
      if (0 < iVar2) {
        iVar6 = *(int *)(iVar5 + 0x520 + iVar2 * 4);
      }
      iVar3 = *(int *)(iVar5 + 100);
      if (iVar2 < *(int *)(iVar5 + 0x520)) {
        iVar3 = *(int *)(iVar5 + 0x524 + iVar2 * 4);
      }
      fVar1 = (float)iVar6 * (1.0 - (float)(fVar8 - (float10)iVar2)) +
              (float)iVar3 * (float)(fVar8 - (float10)iVar2);
      if (fVar1 < 0.0) {
        local_14 = 0.0;
      }
      else {
        local_14 = (float)(*(int *)(iVar5 + 100) + -1);
        if (fVar1 <= local_14) {
          return fVar1;
        }
      }
    }
  }
  return local_14;
}
