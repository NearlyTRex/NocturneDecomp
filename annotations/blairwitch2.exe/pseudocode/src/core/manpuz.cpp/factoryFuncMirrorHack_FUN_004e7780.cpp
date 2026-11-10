// Name: core_manpuz.cpp_factoryFuncMirrorHack_FUN_004e7780
// Address: 004e7780
// Address Range: [[004e7780, 004e779b]]
// Convention: unknown
// Signature: void core_manpuz_cpp_factoryFuncMirrorHack_FUN_004e7780(void)

#include "nocturne.h"

void core_manpuz_cpp_factoryFuncMirrorHack_FUN_004e7780(void)

{
  CMirrorHack *this_ptr;
  
  this_ptr = (CMirrorHack *)debugAllocTracked1(0x434);
  if (this_ptr == (CMirrorHack *)0x0) {
    return;
  }
  core_manpuz_cpp_CMirrorHack_ctor_FUN_004e77b0(this_ptr);
  return;
}
