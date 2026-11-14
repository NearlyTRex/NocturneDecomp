// Name: core_ammobox.cpp_factoryFuncAmmoBox_FUN_0040e4e0
// Address: 0040e4e0
// Address Range: [[0040e4e0, 0040e4fb]]
// Convention: __cdecl
// Signature: CAmmoBox * __cdecl core_ammobox_cpp_factoryFuncAmmoBox_FUN_0040e4e0(void)

#include "nocturne.h"

CAmmoBox * __cdecl core_ammobox_cpp_factoryFuncAmmoBox_FUN_0040e4e0(void)

{
  CAmmoBox *pCVar1;
  
  pCVar1 = (CAmmoBox *)operator_new(0x4a8);
  if (pCVar1 == (CAmmoBox *)0x0) {
    return (CAmmoBox *)0x0;
  }
  pCVar1 = core_ammobox_cpp_CAmmoBox_ctor_FUN_0040e510(pCVar1);
  return pCVar1;
}
