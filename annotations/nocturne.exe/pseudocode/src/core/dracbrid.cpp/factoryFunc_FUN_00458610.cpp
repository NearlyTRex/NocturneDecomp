// Name: core_dracbrid.cpp_factoryFunc_FUN_00458610
// Address: 00458610
// Address Range: [[00458610, 0045862b]]
// Convention: __cdecl
// Signature: CDraculaBride * __cdecl core_dracbrid_cpp_factoryFunc_FUN_00458610(void)

#include "nocturne.h"

CDraculaBride * __cdecl core_dracbrid_cpp_factoryFunc_FUN_00458610(void)

{
  CDraculaBride *pCVar1;
  
  pCVar1 = operator_new(0xbe54);
  if (pCVar1 == (CDraculaBride *)0x0) {
    return (CDraculaBride *)0x0;
  }
  pCVar1 = core_dracbrid_cpp_CDraculaBride_ctor_FUN_00458640(pCVar1);
  return pCVar1;
}
