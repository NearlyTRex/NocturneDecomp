// Name: core_set.cpp_FUN_0052e910
// Address: 0052e910
// Address Range: [[0052e910, 0052e936]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_0052e910(CDemonSet *this_ptr,int clear_enabled,int is_clearing,int screen_height)

#include "nocturne.h"

void __cdecl core_set_cpp_FUN_0052e910(CDemonSet *this_ptr,int clear_enabled,int is_clearing,int screen_height)

{
  core_dcamera_cpp_CDemonCamera_init_FUN_0043b570(&g_CDemonCameraInstance,screen_height);
  core_set_cpp_CDemonSet_setCameraView_FUN_0052ddf0(this_ptr,*(int *)&this_ptr->field_0x15aeb8);
  return;
}
