// Name: core_shotgun.cpp_factoryFuncShadowsc_FUN_00546290
// Address: 00546290
// Address Range: [[00546290, 005462ab]]
// Convention: unknown
// Signature: void core_shotgun_cpp_factoryFuncShadowsc_FUN_00546290(void)

#include "nocturne.h"

void core_shotgun_cpp_factoryFuncShadowsc_FUN_00546290(void)

{
  CShadowsc *this_ptr;
  
  this_ptr = (CShadowsc *)debugAllocTracked1(0xd06c);
  if (this_ptr == (CShadowsc *)0x0) {
    return;
  }
  core_shotgun_cpp_CShadowsc_ctor_FUN_005462c0(this_ptr);
  return;
}
