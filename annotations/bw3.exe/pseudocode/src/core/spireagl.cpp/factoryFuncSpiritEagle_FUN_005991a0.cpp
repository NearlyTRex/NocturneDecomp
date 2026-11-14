// Name: core_spireagl.cpp_factoryFuncSpiritEagle_FUN_005991a0
// Address: 005991a0
// Address Range: [[005991a0, 005991bb]]
// Convention: __cdecl
// Signature: CSpiritEagle * __cdecl core_spireagl_cpp_factoryFuncSpiritEagle_FUN_005991a0(void)

#include "nocturne.h"

CSpiritEagle * __cdecl core_spireagl_cpp_factoryFuncSpiritEagle_FUN_005991a0(void)

{
  CSpiritEagle *pCVar1;
  
  pCVar1 = (CSpiritEagle *)operator_new(0x214ac);
  if (pCVar1 == (CSpiritEagle *)0x0) {
    return (CSpiritEagle *)0x0;
  }
  pCVar1 = core_spireagl_cpp_CSpiritEagle_ctor_FUN_005991d0(pCVar1);
  return pCVar1;
}
