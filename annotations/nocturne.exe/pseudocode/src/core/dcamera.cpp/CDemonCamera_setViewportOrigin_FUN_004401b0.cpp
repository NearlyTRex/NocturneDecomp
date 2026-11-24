// Name: core_dcamera.cpp_CDemonCamera_setViewportOrigin_FUN_004401b0
// Address: 004401b0
// Address Range: [[004401b0, 004401c8]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_setViewportOrigin_FUN_004401b0(CDemonCamera *this_ptr,int viewport_x,int viewport_y)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_setViewportOrigin_FUN_004401b0(CDemonCamera *this_ptr,int viewport_x,int viewport_y)

{
  this_ptr->viewport_x = viewport_x;
  this_ptr->viewport_y = viewport_y;
  return;
}
