// Name: core_skeleton.cpp_CSkeleton_allocMemory_FUN_00540870
// Address: 00540870
// Address Range: [[00540870, 00540977]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CSkeleton_allocMemory_FUN_00540870(CSkeleton *this_ptr,int bone_count,int frame_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CSkeleton_allocMemory_FUN_00540870(CSkeleton *this_ptr,int bone_count,int frame_count)

{
  CQuaternion4f *pCVar1;
  CVector3f *pCVar2;
  
  core_skeleton_cpp_CSkeleton_free_FUN_00540980(this_ptr,0);
  if (100 < bone_count) {
    _DAT_01d046a0 = "..\\core\\skeleton.cpp";
    _DAT_01d046a4 = 199;
    core_main_c_FUN_004e4500("Too bony!");
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
  _DAT_01d046a0 = "..\\core\\skeleton.cpp";
  _DAT_01d046a4 = 0xdb;
  core_main_c_FUN_004e4500
            ("Out of hunk in CSkeleton::allocMemory.  boneCount=%d, frameCount=%d",this_ptr->bone_count,this_ptr->frame_count);
  return;
}
