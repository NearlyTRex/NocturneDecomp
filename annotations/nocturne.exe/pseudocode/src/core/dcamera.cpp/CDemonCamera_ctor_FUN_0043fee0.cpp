// Name: core_dcamera.cpp_CDemonCamera_ctor_FUN_0043fee0
// Address: 0043fee0
// Address Range: [[0043fee0, 0043ff2a]]
// Convention: __cdecl
// Signature: CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_ctor_FUN_0043fee0(CDemonCamera *this_ptr)

#include "nocturne.h"

CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_ctor_FUN_0043fee0(CDemonCamera *this_ptr)

{
  this_ptr->framebuffer_raw = (void *)0x0;
  this_ptr->zbuffer_aligned = (void *)0x0;
  this_ptr->zbuffer_raw = (void *)0x0;
  this_ptr->corona_blend_factor = 0;
  this_ptr->scene_open_flag = 0;
  this_ptr->fixed_point_scale = 999.9;
  this_ptr->framebuffer_aligned = (void *)0x0;
  return this_ptr;
}
