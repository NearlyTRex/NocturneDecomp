// Name: core_marquee.cpp_FUN_004cc0b0
// Address: 004cc0b0
// Address Range: [[004cc0b0, 004cc0cb]]
// Convention: unknown
// Signature: void core_marquee_cpp_FUN_004cc0b0(void)

#include "nocturne.h"

void core_marquee_cpp_FUN_004cc0b0(void)

{
  CMarquee *this_ptr;
  
  this_ptr = (CMarquee *)FUN_0056497c(0x1b4);
  if (this_ptr == (CMarquee *)0x0) {
    return;
  }
  core_marquee_cpp_CMarquee_ctor_FUN_004cc0e0(this_ptr);
  return;
}
