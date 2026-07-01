// Name: core_batman.cpp_factoryFunc_FUN_00416410
// Address: 00416410
// MANUAL RECONSTRUCTION
// Address Range: [[00416410, 00416432]]
// Convention: __cdecl
// Signature: CBatman * __cdecl core_batman_cpp_factoryFunc_FUN_00416410(void)

#include "nocturne.h"

CBatman * __cdecl core_batman_cpp_factoryFunc_FUN_00416410(void)

{
  CBatman *pCVar1;
  
  pCVar1 = (CBatman *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CBatman),"..\\core\\batman.cpp",0x58);
  if (pCVar1 == (CBatman *)0x0) {
    return (CBatman *)0x0;
  }
  pCVar1 = core_batman_cpp_CBatman_ctor_FUN_00416450(pCVar1);
  return pCVar1;
}
