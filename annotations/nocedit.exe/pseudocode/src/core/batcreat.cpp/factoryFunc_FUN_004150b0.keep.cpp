// Name: core_batcreat.cpp_factoryFunc_FUN_004150b0
// Address: 004150b0
// MANUAL RECONSTRUCTION
// Address Range: [[004150b0, 004150d2]]
// Convention: __cdecl
// Signature: CBatCreature * __cdecl core_batcreat_cpp_factoryFunc_FUN_004150b0(void)

#include "nocturne.h"

CBatCreature * __cdecl core_batcreat_cpp_factoryFunc_FUN_004150b0(void)

{
  CBatCreature *pCVar1;
  
  pCVar1 = (CBatCreature *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                     (sizeof(CBatCreature),"..\\core\\batcreat.cpp",77);
  if (pCVar1 == (CBatCreature *)0x0) {
    return (CBatCreature *)0x0;
  }
  pCVar1 = core_batcreat_cpp_CBatCreature_ctor_FUN_004150f0(pCVar1);
  return pCVar1;
}
