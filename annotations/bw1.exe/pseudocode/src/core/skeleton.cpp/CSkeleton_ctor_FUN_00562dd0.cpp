// Name: core_skeleton.cpp_CSkeleton_ctor_FUN_00562dd0
// Address: 00562dd0
// Address Range: [[00562dd0, 00562e20]]
// Convention: __cdecl
// Signature: CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_ctor_FUN_00562dd0(CSkeleton *this_ptr)

#include "nocturne.h"

CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_ctor_FUN_00562dd0(CSkeleton *this_ptr)

{
  CSkeleton *pCVar1;
  uint unaff_retaddr;
  
  FUN_005c3187(8);
  pCVar1 = (CSkeleton *)core_morph_cpp_FUN_005238c0(unaff_retaddr);
  pCVar1->bone_count = 0;
  pCVar1->frame_count = 0;
  pCVar1->bone_angle_frames = (CQuaternion4f *)0x0;
  pCVar1->frame_positions_1 = (CVector3f *)0x0;
  pCVar1->frame_positions_2 = (CVector3f *)0x0;
  pCVar1->loaded_filename[0] = '\0';
  return pCVar1;
}
