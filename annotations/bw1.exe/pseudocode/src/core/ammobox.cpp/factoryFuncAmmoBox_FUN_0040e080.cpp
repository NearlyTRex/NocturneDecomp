// Name: core_ammobox.cpp_factoryFuncAmmoBox_FUN_0040e080
// Address: 0040e080
// Address Range: [[0040e080, 0040e09b]]
// Convention: __cdecl
// Signature: CAmmoBox * __cdecl core_ammobox_cpp_factoryFuncAmmoBox_FUN_0040e080(void)

#include "nocturne.h"

CAmmoBox * __cdecl core_ammobox_cpp_factoryFuncAmmoBox_FUN_0040e080(void)

{
  CAmmoBox *pCVar1;
  
  pCVar1 = (CAmmoBox *)operator_new(0x34c);
  if (pCVar1 == (CAmmoBox *)0x0) {
    return (CAmmoBox *)0x0;
  }
  pCVar1 = core_ammobox_cpp_CAmmoBox_ctor_FUN_0040e0b0(pCVar1);
  return pCVar1;
}
