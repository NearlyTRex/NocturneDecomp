// Name: core_spireagl.cpp_factoryFuncSpiritEagle_FUN_005991a0
// Address: 005991a0
// Address Range: [[005991a0, 005991bb]]
// Convention: unknown
// Signature: void core_spireagl_cpp_factoryFuncSpiritEagle_FUN_005991a0(void)

#include "nocturne.h"

void core_spireagl_cpp_factoryFuncSpiritEagle_FUN_005991a0(void)

{
  CSpiritEagle *this_ptr;
  
  this_ptr = (CSpiritEagle *)debugAllocTracked1(0x214ac);
  if (this_ptr == (CSpiritEagle *)0x0) {
    return;
  }
  core_spireagl_cpp_CSpiritEagle_ctor_FUN_005991d0(this_ptr);
  return;
}
