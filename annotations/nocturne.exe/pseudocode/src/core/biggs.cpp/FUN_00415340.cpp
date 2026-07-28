// Name: core_biggs.cpp_FUN_00415340
// Address: 00415340
// Address Range: [[00415340, 0041535b]]
// Convention: unknown
// Signature: void core_biggs_cpp_FUN_00415340(void)

#include "nocturne.h"

void core_biggs_cpp_FUN_00415340(void)

{
  CBiggs *this_ptr;
  
  this_ptr = (CBiggs *)FUN_0056497c(0xcb38);
  if (this_ptr == (CBiggs *)0x0) {
    return;
  }
  core_biggs_cpp_CBiggs_ctor_FUN_00415370(this_ptr);
  return;
}
