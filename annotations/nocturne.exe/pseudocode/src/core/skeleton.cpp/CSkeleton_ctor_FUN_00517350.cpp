// Name: core_skeleton.cpp_CSkeleton_ctor_FUN_00517350
// Address: 00517350
// Address Range: [[00517350, 00517399]]
// Convention: __cdecl
// Signature: CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_ctor_FUN_00517350(CSkeleton *this_ptr)

#include "nocturne.h"

CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_ctor_FUN_00517350(CSkeleton *this_ptr)

{
  CSkeleton *pCVar1;
  
  FUN_005670b1(8);
  pCVar1 = (CSkeleton *)core_motion_cpp_CMotionList_ctor_FUN_004e0900(&this_ptr->motion_list);
  pCVar1->bone_count = 0;
  pCVar1->frame_count = 0;
  pCVar1->bone_angle_frames = (CQuaternion4f *)0x0;
  pCVar1->frame_positions_1 = (CVector3f *)0x0;
  pCVar1->frame_positions_2 = (CVector3f *)0x0;
  return pCVar1;
}
