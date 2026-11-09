// Name: core_marquee.cpp_factoryFuncMarquee_FUN_004e7c50
// Address: 004e7c50
// Address Range: [[004e7c50, 004e7c6b]]
// Convention: unknown
// Signature: void core_marquee_cpp_factoryFuncMarquee_FUN_004e7c50(void)

#include "nocturne.h"

void core_marquee_cpp_factoryFuncMarquee_FUN_004e7c50(void)

{
  CMarquee *this_ptr;
  
  this_ptr = (CMarquee *)FUN_005b8be2(0x318);
  if (this_ptr == (CMarquee *)0x0) {
    return;
  }
  core_marquee_cpp_CMarquee_ctor_FUN_004e7c80(this_ptr);
  return;
}
