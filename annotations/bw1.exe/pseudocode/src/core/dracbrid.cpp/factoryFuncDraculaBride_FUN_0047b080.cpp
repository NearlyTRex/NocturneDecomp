// Name: core_dracbrid.cpp_factoryFuncDraculaBride_FUN_0047b080
// Address: 0047b080
// Address Range: [[0047b080, 0047b09b]]
// Convention: __cdecl
// Signature: CDraculaBride * __cdecl core_dracbrid_cpp_factoryFuncDraculaBride_FUN_0047b080(void)

#include "nocturne.h"

CDraculaBride * __cdecl core_dracbrid_cpp_factoryFuncDraculaBride_FUN_0047b080(void)

{
  CDraculaBride *pCVar1;
  
  pCVar1 = (CDraculaBride *)operator_new(0xc410);
  if (pCVar1 == (CDraculaBride *)0x0) {
    return (CDraculaBride *)0x0;
  }
  pCVar1 = core_dracbrid_cpp_CDraculaBride_ctor_FUN_0047b0b0(pCVar1);
  return pCVar1;
}
