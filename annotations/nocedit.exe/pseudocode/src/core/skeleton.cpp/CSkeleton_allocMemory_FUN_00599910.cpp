// Name: core_skeleton.cpp_CSkeleton_allocMemory_FUN_00599910
// Address: 00599910
// Address Range: [[00599910, 00599a4d]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CSkeleton_allocMemory_FUN_00599910(CSkeleton *this_ptr,int bone_count,int frame_count)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CSkeleton_allocMemory_FUN_00599910(CSkeleton *this_ptr,int bone_count,int frame_count)

{
  float fVar1;
  CQuaternion4f *pCVar2;
  CVector3f *pCVar3;
  CVector3f *pCVar4;
  
  core_skeleton_cpp_CSkeleton_free_FUN_00599a50(this_ptr);
  if (100 < bone_count) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0xc6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too bony!");
  }
  this_ptr->bone_count = bone_count;
  this_ptr->frame_count = frame_count;
  pCVar2 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     (this_ptr->bone_count * this_ptr->frame_count * 0x10,
                      "..\\core\\skeleton.cpp",0xcf);
  fVar1 = (float)this_ptr->frame_count;
  this_ptr->bone_angle_frames = pCVar2;
  pCVar3 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     ((int)fVar1 * 0xc + 4,"..\\core\\skeleton.cpp",0xd0);
  pCVar4 = pCVar3;
  if (pCVar3 != (CVector3f *)0x0) {
    pCVar4 = (CVector3f *)&pCVar3->y;
    pCVar3->x = fVar1;
  }
  fVar1 = (float)this_ptr->frame_count;
  this_ptr->frame_positions_1 = pCVar4;
  pCVar3 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     ((int)fVar1 * 0xc + 4,"..\\core\\skeleton.cpp",0xd1);
  pCVar4 = pCVar3;
  if (pCVar3 != (CVector3f *)0x0) {
    pCVar4 = (CVector3f *)&pCVar3->y;
    pCVar3->x = fVar1;
  }
  this_ptr->frame_positions_2 = pCVar4;
  if (((this_ptr->bone_angle_frames != (CQuaternion4f *)0x0) &&
      (this_ptr->frame_positions_1 != (CVector3f *)0x0)) && (pCVar4 != (CVector3f *)0x0)) {
    return;
  }
  g_CurrentFilename = "..\\core\\skeleton.cpp";
  g_CurrentLineNumber = 0xda;
  core_main_c_displayErrorAndQuit_FUN_00506f10
            ("Out of hunk in CSkeleton::allocMemory.  boneCount=%d, frameCount=%d",this_ptr->bone_count,this_ptr->frame_count);
  return;
}
