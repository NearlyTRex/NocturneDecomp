// Name: core_shadowsc.cpp_factoryFuncShadowsc_FUN_00560470
// Address: 00560470
// Address Range: [[00560470, 0056048b]]
// Convention: unknown
// Signature: void core_shadowsc_cpp_factoryFuncShadowsc_FUN_00560470(void)

#include "nocturne.h"

void core_shadowsc_cpp_factoryFuncShadowsc_FUN_00560470(void)

{
  CShadowsc *this_ptr;
  
  this_ptr = (CShadowsc *)debugAllocTracked1(0xc29c);
  if (this_ptr == (CShadowsc *)0x0) {
    return;
  }
  core_shadowsc_cpp_CShadowsc_ctor_FUN_005604a0(this_ptr);
  return;
}
