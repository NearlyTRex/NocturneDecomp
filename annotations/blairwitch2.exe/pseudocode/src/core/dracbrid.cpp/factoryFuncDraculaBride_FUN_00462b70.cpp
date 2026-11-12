// Name: core_dracbrid.cpp_factoryFuncDraculaBride_FUN_00462b70
// Address: 00462b70
// Address Range: [[00462b70, 00462b8b]]
// Convention: __cdecl
// Signature: CDraculaBride * __cdecl core_dracbrid_cpp_factoryFuncDraculaBride_FUN_00462b70(void)

#include "nocturne.h"

CDraculaBride * __cdecl core_dracbrid_cpp_factoryFuncDraculaBride_FUN_00462b70(void)

{
  CDraculaBride *pCVar1;
  
  pCVar1 = (CDraculaBride *)operator_new(0x10c28);
  if (pCVar1 == (CDraculaBride *)0x0) {
    return (CDraculaBride *)0x0;
  }
  pCVar1 = core_dracbrid_cpp_CDraculaBride_ctor_FUN_00462ba0(pCVar1);
  return pCVar1;
}
