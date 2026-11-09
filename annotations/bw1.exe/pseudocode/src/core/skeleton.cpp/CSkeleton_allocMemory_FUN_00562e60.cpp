// Name: core_skeleton.cpp_CSkeleton_allocMemory_FUN_00562e60
// Address: 00562e60
// Address Range: [[00562e60, 00562f67]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CSkeleton_allocMemory_FUN_00562e60(CSkeleton *this_ptr,int bone_count,int frame_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CSkeleton_allocMemory_FUN_00562e60(CSkeleton *this_ptr,int bone_count,int frame_count)

{
  uint uVar1;
  
  core_skeleton_cpp_FUN_00562f70(this_ptr,0);
  if (100 < bone_count) {
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 200;
    core_main_c_FUN_005030e0("Too bony!");
  }
  *(int *)&this_ptr->field_0x1de78 = bone_count;
  *(int *)&this_ptr->field_0x1ec8c = frame_count;
  uVar1 = FUN_005c1268
                    (*(int *)&this_ptr->field_0x1de78 * *(int *)&this_ptr->field_0x1ec8c * 0x10);
  *(uint *)&this_ptr->field_0x1ec90 = uVar1;
  uVar1 = FUN_005c1268(*(int *)&this_ptr->field_0x1ec8c * 0xc);
  *(uint *)&this_ptr->field_0x1ec94 = uVar1;
  uVar1 = FUN_005c1268(*(int *)&this_ptr->field_0x1ec8c * 0xc);
  *(uint *)&this_ptr->field_0x1ec98 = uVar1;
  if (((*(int *)&this_ptr->field_0x1ec90 != 0) && (*(int *)&this_ptr->field_0x1ec94 != 0)) &&
     (*(int *)&this_ptr->field_0x1ec98 != 0)) {
    return;
  }
  _DAT_01d1d400 = "..\\core\\skeleton.cpp";
  _DAT_01d1d404 = 0xdc;
  core_main_c_FUN_005030e0
            ("Out of hunk in CSkeleton::allocMemory.  boneCount=%d, frameCount=%d",*(uint *)&this_ptr->field_0x1de78,
             *(uint *)&this_ptr->field_0x1ec8c);
  return;
}
