// Name: core_skeleton.cpp_CSkeleton_allocMemory_FUN_00547a80
// Address: 00547a80
// Address Range: [[00547a80, 00547b87]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CSkeleton_allocMemory_FUN_00547a80(CSkeleton *this_ptr,int bone_count,int frame_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CSkeleton_allocMemory_FUN_00547a80(CSkeleton *this_ptr,int bone_count,int frame_count)

{
  CQuaternion4f *pCVar1;
  CVector3f *pCVar2;
  
  core_skeleton_cpp_FUN_00547b90(this_ptr,0);
  if (100 < bone_count) {
    _DAT_01d71de0 = "..\\core\\skeleton.cpp";
    _DAT_01d71de4 = 200;
    core_main_c_FUN_004e4330("Too bony!");
  }
  this_ptr->bone_count = bone_count;
  this_ptr->frame_count = frame_count;
  pCVar1 = (CQuaternion4f *)
           operator_new_array
                     (this_ptr->bone_count * this_ptr->frame_count * 0x10);
  this_ptr->bone_angle_frames = pCVar1;
  pCVar2 = (CVector3f *)operator_new_array(this_ptr->frame_count * 0xc);
  this_ptr->frame_positions_1 = pCVar2;
  pCVar2 = (CVector3f *)operator_new_array(this_ptr->frame_count * 0xc);
  this_ptr->frame_positions_2 = pCVar2;
  if (((this_ptr->bone_angle_frames != (CQuaternion4f *)0x0) &&
      (this_ptr->frame_positions_1 != (CVector3f *)0x0)) &&
     (this_ptr->frame_positions_2 != (CVector3f *)0x0)) {
    return;
  }
  _DAT_01d71de0 = "..\\core\\skeleton.cpp";
  _DAT_01d71de4 = 0xdc;
  core_main_c_FUN_004e4330
            ("Out of hunk in CSkeleton::allocMemory.  boneCount=%d, frameCount=%d",this_ptr->bone_count,this_ptr->frame_count);
  return;
}
