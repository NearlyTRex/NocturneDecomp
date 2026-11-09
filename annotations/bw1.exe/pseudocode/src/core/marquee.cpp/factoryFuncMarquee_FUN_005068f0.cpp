// Name: core_marquee.cpp_factoryFuncMarquee_FUN_005068f0
// Address: 005068f0
// Address Range: [[005068f0, 0050690b]]
// Convention: unknown
// Signature: void core_marquee_cpp_factoryFuncMarquee_FUN_005068f0(void)

#include "nocturne.h"

void core_marquee_cpp_factoryFuncMarquee_FUN_005068f0(void)

{
  CMarquee *this_ptr;
  
  this_ptr = (CMarquee *)FUN_005c0f32(0x1bc);
  if (this_ptr == (CMarquee *)0x0) {
    return;
  }
  core_marquee_cpp_CMarquee_ctor_FUN_00506920(this_ptr);
  return;
}
