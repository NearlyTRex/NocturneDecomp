// Name: core_manpuz.cpp_FUN_00506420
// Address: 00506420
// Address Range: [[00506420, 0050643b]]
// Convention: unknown
// Signature: void core_manpuz_cpp_FUN_00506420(void)

#include "nocturne.h"

void core_manpuz_cpp_FUN_00506420(void)

{
  CMirrorHack *this_ptr;
  
  this_ptr = (CMirrorHack *)FUN_005c0f32(0x2d8);
  if (this_ptr == (CMirrorHack *)0x0) {
    return;
  }
  core_manpuz_cpp_CMirrorHack_ctor_FUN_00506450(this_ptr);
  return;
}
