// Name: core_drip.cpp_FUN_00462030
// Address: 00462030
// Address Range: [[00462030, 0046204b]]
// Convention: unknown
// Signature: void core_drip_cpp_FUN_00462030(void)

#include "nocturne.h"

void core_drip_cpp_FUN_00462030(void)

{
  CDrip *this_ptr;
  
  this_ptr = (CDrip *)FUN_0056497c(0x334);
  if (this_ptr == (CDrip *)0x0) {
    return;
  }
  core_drip_cpp_CDrip_ctor_FUN_00462060(this_ptr);
  return;
}
