// Name: core_skeleton.cpp_CSkeleton_allocMemory_FUN_00562e60
// Address: 00562e60
// Address Range: [[00562e60, 00562f67]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CSkeleton_allocMemory_FUN_00562e60(CSkeleton *this_ptr,int bone_count,int frame_count)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CSkeleton_allocMemory_FUN_00562e60(CSkeleton *this_ptr,int bone_count,int frame_count)

{
  CQuaternion4f *pCVar1;
  CVector3f *pCVar2;
  
  core_skeleton_cpp_CSkeleton_free_FUN_00562f70(this_ptr,0);
  if (100 < bone_count) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 200;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Too bony!");
  }
  this_ptr->bone_count = bone_count;
  this_ptr->frame_count = frame_count;
  pCVar1 = operator_new_array
                     (this_ptr->bone_count * this_ptr->frame_count * 0x10);
  this_ptr->bone_angle_frames = pCVar1;
  pCVar2 = operator_new_array(this_ptr->frame_count * 0xc);
  this_ptr->frame_positions_1 = pCVar2;
  pCVar2 = operator_new_array(this_ptr->frame_count * 0xc);
  this_ptr->frame_positions_2 = pCVar2;
  if (((this_ptr->bone_angle_frames != (CQuaternion4f *)0x0) &&
      (this_ptr->frame_positions_1 != (CVector3f *)0x0)) &&
     (this_ptr->frame_positions_2 != (CVector3f *)0x0)) {
    return;
  }
  g_CurrentFilename = "..\\core\\skeleton.cpp";
  g_CurrentLineNumber = 220;
  core_main_c_displayErrorAndQuit_FUN_005030e0("Out of hunk in CSkeleton::allocMemory.  boneCount=%d, frameCount=%d");
  return;
}
