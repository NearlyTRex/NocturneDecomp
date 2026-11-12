// Name: core_tbplayer.cpp_factoryFuncDrummer_FUN_00571d80
// Address: 00571d80
// Address Range: [[00571d80, 00571d9b]]
// Convention: __cdecl
// Signature: CDrummer * __cdecl core_tbplayer_cpp_factoryFuncDrummer_FUN_00571d80(void)

#include "nocturne.h"

CDrummer * __cdecl core_tbplayer_cpp_factoryFuncDrummer_FUN_00571d80(void)

{
  CDrummer *pCVar1;
  
  pCVar1 = (CDrummer *)operator_new(0x24350);
  if (pCVar1 == (CDrummer *)0x0) {
    return (CDrummer *)0x0;
  }
  pCVar1 = core_tbplayer_cpp_CDrummer_ctor_FUN_00571db0(pCVar1);
  return pCVar1;
}
