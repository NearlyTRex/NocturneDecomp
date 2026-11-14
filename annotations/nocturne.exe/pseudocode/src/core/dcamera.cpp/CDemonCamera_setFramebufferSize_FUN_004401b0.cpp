// Name: core_dcamera.cpp_CDemonCamera_setFramebufferSize_FUN_004401b0
// Address: 004401b0
// Address Range: [[004401b0, 004401c8]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_setFramebufferSize_FUN_004401b0(CDemonCamera *this_ptr,int width,int height)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_setFramebufferSize_FUN_004401b0(CDemonCamera *this_ptr,int width,int height)

{
  this_ptr->framebuffer_width = width;
  this_ptr->framebuffer_height = height;
  return;
}
