// Name: core_set.cpp_FUN_0054fbf0
// Address: 0054fbf0
// Address Range: [[0054fbf0, 0054fc16]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_0054fbf0(CDemonSet *this_ptr,int clear_enabled,int is_clearing,int screen_height)

#include "nocturne.h"

void __cdecl core_set_cpp_FUN_0054fbf0(CDemonSet *this_ptr,int clear_enabled,int is_clearing,int screen_height)

{
  core_dcamera_cpp_CDemonCamera_init_FUN_0044cc30(&g_CDemonCameraInstance,screen_height);
  core_set_cpp_CDemonSet_setCameraView_FUN_0054f0d0(this_ptr,*(int *)&this_ptr->field_0x15aeb8);
  return;
}
