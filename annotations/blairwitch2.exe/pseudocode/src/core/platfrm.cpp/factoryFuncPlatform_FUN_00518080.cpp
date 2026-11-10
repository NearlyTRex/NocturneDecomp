// Name: core_platfrm.cpp_factoryFuncPlatform_FUN_00518080
// Address: 00518080
// Address Range: [[00518080, 0051809b]]
// Convention: unknown
// Signature: void core_platfrm_cpp_factoryFuncPlatform_FUN_00518080(void)

#include "nocturne.h"

void core_platfrm_cpp_factoryFuncPlatform_FUN_00518080(void)

{
  CPlatform *this_ptr;
  
  this_ptr = (CPlatform *)debugAllocTracked1(0x884);
  if (this_ptr == (CPlatform *)0x0) {
    return;
  }
  core_platfrm_cpp_CPlatform_ctor_FUN_005180b0(this_ptr);
  return;
}
