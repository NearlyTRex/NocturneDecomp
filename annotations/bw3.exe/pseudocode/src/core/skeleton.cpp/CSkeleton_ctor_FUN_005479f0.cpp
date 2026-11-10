// Name: core_skeleton.cpp_CSkeleton_ctor_FUN_005479f0
// Address: 005479f0
// Address Range: [[005479f0, 00547a40]]
// Convention: unknown
// Signature: CSkeleton * core_skeleton_cpp_CSkeleton_ctor_FUN_005479f0(CSkeleton *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSkeleton * core_skeleton_cpp_CSkeleton_ctor_FUN_005479f0(CSkeleton *this_ptr)

{
  CSkeleton *pCVar1;
  uint unaff_retaddr;
  
  FUN_005a5ff7(8);
  pCVar1 = (CSkeleton *)unkafter_morph_cpp_FUN_004fb1c0(unaff_retaddr);
  pCVar1->bone_count = 0;
  pCVar1->frame_count = 0;
  pCVar1->bone_angle_frames = (CQuaternion4f *)0x0;
  *(uint *)&pCVar1->field_0x1ec94 = 0;
  *(uint *)&pCVar1->field_0x1ec98 = 0;
  pCVar1->field_0x1de28 = 0;
  return pCVar1;
}
