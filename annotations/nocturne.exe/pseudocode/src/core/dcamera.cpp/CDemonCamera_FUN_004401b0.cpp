// Name: core_dcamera.cpp_CDemonCamera_FUN_004401b0
// Address: 004401b0
// Address Range: [[004401b0, 004401c8]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_FUN_004401b0(CDemonCamera *this_ptr,int param_2,int param_3)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_FUN_004401b0(CDemonCamera *this_ptr,int param_2,int param_3)

{
  this_ptr->framebuffer_width = param_2;
  this_ptr->framebuffer_height = param_3;
  return;
}
