// Name: core_set.cpp_CDemonSet_reinitCamera_FUN_005090f0
// Address: 005090f0
// Address Range: [[005090f0, 00509131]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_reinitCamera_FUN_005090f0(CDemonSet *this_ptr,int clear_enabled,int is_clearing,int screen_height)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_reinitCamera_FUN_005090f0(CDemonSet *this_ptr,int clear_enabled,int is_clearing,int screen_height)

{
  core_dcamera_cpp_CDemonCamera_init_FUN_00440010(&g_CDemonCameraInstance,screen_height);
  core_dcamera_cpp_CDemonCamera_setFramebufferSize_FUN_004401b0
            (&g_CDemonCameraInstance,clear_enabled,is_clearing);
  core_set_cpp_CDemonSet_setCameraView_FUN_005088f0(this_ptr,this_ptr->selected_camera_index);
  return;
}
