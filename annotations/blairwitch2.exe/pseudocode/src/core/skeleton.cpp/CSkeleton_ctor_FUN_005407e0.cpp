// Name: core_skeleton.cpp_CSkeleton_ctor_FUN_005407e0
// Address: 005407e0
// Address Range: [[005407e0, 00540830]]
// Convention: unknown
// Signature: CSkeleton * core_skeleton_cpp_CSkeleton_ctor_FUN_005407e0(CSkeleton *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSkeleton * core_skeleton_cpp_CSkeleton_ctor_FUN_005407e0(CSkeleton *this_ptr)

{
  CSkeleton *pCVar1;
  uint unaff_retaddr;
  
  FUN_005badc7(8);
  pCVar1 = (CSkeleton *)core_moon_cpp_FUN_00502760(unaff_retaddr);
  pCVar1->bone_count = 0;
  pCVar1->frame_count = 0;
  pCVar1->bone_angle_frames = (CQuaternion4f *)0x0;
  pCVar1->frame_positions_1 = (CVector3f *)0x0;
  pCVar1->frame_positions_2 = (CVector3f *)0x0;
  pCVar1->loaded_filename[0] = '\0';
  return pCVar1;
}
