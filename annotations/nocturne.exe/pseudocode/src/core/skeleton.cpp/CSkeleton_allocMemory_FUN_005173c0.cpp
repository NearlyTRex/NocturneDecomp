// Name: core_skeleton.cpp_CSkeleton_allocMemory_FUN_005173c0
// Address: 005173c0
// Address Range: [[005173c0, 005174df]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CSkeleton_allocMemory_FUN_005173c0(CSkeleton *this_ptr,int bone_count,int frame_count)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CSkeleton_allocMemory_FUN_005173c0(CSkeleton *this_ptr,int bone_count,int frame_count)

{
  float fVar1;
  CQuaternion4f *pCVar2;
  CVector3f *pCVar3;
  CVector3f *pCVar4;
  
  core_skeleton_cpp_CSkeleton_FUN_005174e0(this_ptr);
  if (100 < bone_count) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 198;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Too bony!");
  }
  this_ptr->bone_count = bone_count;
  this_ptr->frame_count = frame_count;
  pCVar2 = shape_memdbg_cpp_malloc_FUN_00564c18(this_ptr->bone_count * this_ptr->frame_count * 0x10)
  ;
  fVar1 = (float)this_ptr->frame_count;
  this_ptr->bone_angle_frames = pCVar2;
  pCVar3 = shape_memdbg_cpp_malloc_FUN_00564c18((int)fVar1 * 0xc + 4);
  pCVar4 = pCVar3;
  if (pCVar3 != (CVector3f *)0x0) {
    pCVar4 = (CVector3f *)&pCVar3->y;
    pCVar3->x = fVar1;
  }
  fVar1 = (float)this_ptr->frame_count;
  this_ptr->frame_positions_1 = pCVar4;
  pCVar3 = shape_memdbg_cpp_malloc_FUN_00564c18((int)fVar1 * 0xc + 4);
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
  g_CurrentLineNumber = 218;
  core_main_c_displayErrorAndQuit_FUN_004c8440
            ("Out of hunk in CSkeleton::allocMemory.  boneCount=%d, frameCount=%d",this_ptr->bone_count,this_ptr->frame_count);
  return;
}
