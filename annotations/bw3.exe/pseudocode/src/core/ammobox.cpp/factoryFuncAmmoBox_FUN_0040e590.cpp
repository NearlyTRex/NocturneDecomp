// Name: core_ammobox.cpp_factoryFuncAmmoBox_FUN_0040e590
// Address: 0040e590
// Address Range: [[0040e590, 0040e5ab]]
// Convention: __cdecl
// Signature: CAmmoBox * __cdecl core_ammobox_cpp_factoryFuncAmmoBox_FUN_0040e590(void)

#include "nocturne.h"

CAmmoBox * __cdecl core_ammobox_cpp_factoryFuncAmmoBox_FUN_0040e590(void)

{
  CAmmoBox *pCVar1;
  
  pCVar1 = (CAmmoBox *)operator_new(0x34c);
  if (pCVar1 == (CAmmoBox *)0x0) {
    return (CAmmoBox *)0x0;
  }
  pCVar1 = core_ammobox_cpp_CAmmoBox_ctor_FUN_0040e5c0(pCVar1);
  return pCVar1;
}
