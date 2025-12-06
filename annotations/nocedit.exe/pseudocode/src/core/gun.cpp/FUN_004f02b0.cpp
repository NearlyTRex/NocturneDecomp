// Name: core_gun.cpp_FUN_004f02b0
// Address: 004f02b0
// Address Range: [[004f02b0, 004f02d2]]
// Convention: unknown
// Signature: undefined core_gun.cpp_FUN_004f02b0()

#include "nocturne.h"

void core_gun_cpp_FUN_004f02b0(void)

{
  CGun *this_ptr;
  
  this_ptr = (CGun *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x578,"..\\core\\gun.cpp",0x29);
  if (this_ptr == (CGun *)0x0) {
    return;
  }
  core_gun_cpp_FUN_004f02f0(this_ptr);
  return;
}
