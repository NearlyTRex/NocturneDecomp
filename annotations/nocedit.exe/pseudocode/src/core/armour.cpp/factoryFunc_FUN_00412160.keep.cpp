// Name: core_armour.cpp_factoryFunc_FUN_00412160
// Address: 00412160
// MANUAL RECONSTRUCTION
// Address Range: [[00412160, 00412182]]
// Convention: __cdecl
// Signature: CArmour * __cdecl core_armour_cpp_factoryFunc_FUN_00412160(void)

#include "nocturne.h"

CArmour * __cdecl core_armour_cpp_factoryFunc_FUN_00412160(void)

{
  CArmour *pCVar1;
  
  pCVar1 = (CArmour *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CArmour),"..\\core\\armour.cpp",0x2f);
  if (pCVar1 == (CArmour *)0x0) {
    return (CArmour *)0x0;
  }
  pCVar1 = core_armour_cpp_CArmour_ctor_FUN_004121a0(pCVar1);
  return pCVar1;
}
