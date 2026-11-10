// Name: core_skeleton.cpp_CSkeleton_allocMemory_FUN_00562e60
// Address: 00562e60
// Address Range: [[00562e60, 00562f67]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CSkeleton_allocMemory_FUN_00562e60(CSkeleton *this_ptr,int bone_count,int frame_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CSkeleton_allocMemory_FUN_00562e60(CSkeleton *this_ptr,int bone_count,int frame_count)

{
  CQuaternion4f *pCVar1;
  uint uVar2;
  
  core_skeleton_cpp_FUN_00562f70(this_ptr,0);
  if (100 < bone_count) {
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 200;
    core_main_c_FUN_005030e0("Too bony!");
  }
  this_ptr->bone_count = bone_count;
  this_ptr->frame_count = frame_count;
  pCVar1 = (CQuaternion4f *)
           FUN_005c1268(this_ptr->bone_count * this_ptr->frame_count * 0x10);
  this_ptr->bone_angle_frames = pCVar1;
  uVar2 = FUN_005c1268(this_ptr->frame_count * 0xc);
  *(uint *)&this_ptr->field_0x1ec94 = uVar2;
  uVar2 = FUN_005c1268(this_ptr->frame_count * 0xc);
  *(uint *)&this_ptr->field_0x1ec98 = uVar2;
  if (((this_ptr->bone_angle_frames != (CQuaternion4f *)0x0) &&
      (*(int *)&this_ptr->field_0x1ec94 != 0)) && (*(int *)&this_ptr->field_0x1ec98 != 0)) {
    return;
  }
  _DAT_01d1d400 = "..\\core\\skeleton.cpp";
  _DAT_01d1d404 = 0xdc;
  core_main_c_FUN_005030e0
            ("Out of hunk in CSkeleton::allocMemory.  boneCount=%d, frameCount=%d",this_ptr->bone_count,this_ptr->frame_count);
  return;
}
