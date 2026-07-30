// Name: core_ammobox.cpp_factoryFunc_FUN_0040f010
// Address: 0040f010
// Address Range: [[0040f010, 0040f02b]]
// Convention: __cdecl
// Signature: CAmmoBox * __cdecl core_ammobox_cpp_factoryFunc_FUN_0040f010(void)

#include "nocturne.h"

CAmmoBox * __cdecl core_ammobox_cpp_factoryFunc_FUN_0040f010(void)

{
  CAmmoBox *pCVar1;
  
  pCVar1 = (CAmmoBox *)FUN_0056497c(0x344);
  if (pCVar1 == (CAmmoBox *)0x0) {
    return (CAmmoBox *)0x0;
  }
  pCVar1 = core_ammobox_cpp_FUN_0040f040(pCVar1);
  return pCVar1;
}
