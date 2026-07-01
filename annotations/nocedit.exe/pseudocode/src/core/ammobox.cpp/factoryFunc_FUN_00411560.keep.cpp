// Name: core_ammobox.cpp_factoryFunc_FUN_00411560
// Address: 00411560
// MANUAL RECONSTRUCTION
// Address Range: [[00411560, 00411582]]
// Convention: __cdecl
// Signature: CAmmoBox * __cdecl core_ammobox_cpp_factoryFunc_FUN_00411560(void)

#include "nocturne.h"

CAmmoBox * __cdecl core_ammobox_cpp_factoryFunc_FUN_00411560(void)

{
  CAmmoBox *pCVar1;
  
  pCVar1 = (CAmmoBox *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CAmmoBox),"..\\core\\ammobox.cpp",0x25);
  if (pCVar1 == (CAmmoBox *)0x0) {
    return (CAmmoBox *)0x0;
  }
  pCVar1 = core_ammobox_cpp_CAmmoBox_ctor_FUN_004115a0(pCVar1);
  return pCVar1;
}
