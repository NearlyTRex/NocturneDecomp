// Name: core_smiley.cpp_factoryFuncSmiley_FUN_005497a0
// Address: 005497a0
// Address Range: [[005497a0, 005497bb]]
// Convention: __cdecl
// Signature: CSmiley * __cdecl core_smiley_cpp_factoryFuncSmiley_FUN_005497a0(void)

#include "nocturne.h"

CSmiley * __cdecl core_smiley_cpp_factoryFuncSmiley_FUN_005497a0(void)

{
  CSmiley *pCVar1;
  
  pCVar1 = (CSmiley *)operator_new(0x10b3c);
  if (pCVar1 == (CSmiley *)0x0) {
    return (CSmiley *)0x0;
  }
  pCVar1 = core_smiley_cpp_CSmiley_ctor_FUN_005497d0(pCVar1);
  return pCVar1;
}
