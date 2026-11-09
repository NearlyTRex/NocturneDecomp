// Name: core_set.cpp_FUN_005353b0
// Address: 005353b0
// Address Range: [[005353b0, 005353d6]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_005353b0(CDemonSet *this_ptr,int clear_enabled,int is_clearing,int screen_height)

#include "nocturne.h"

void __cdecl core_set_cpp_FUN_005353b0(CDemonSet *this_ptr,int clear_enabled,int is_clearing,int screen_height)

{
  core_dcamera_cpp_CDemonCamera_init_FUN_00448d70(&g_CDemonCameraInstance,screen_height);
  core_set_cpp_CDemonSet_setCameraView_FUN_00534890(this_ptr,*(int *)&this_ptr->field_0x15aeb8);
  return;
}
