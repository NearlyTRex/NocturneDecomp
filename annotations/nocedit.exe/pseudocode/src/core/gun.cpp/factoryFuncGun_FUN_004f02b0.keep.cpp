// Name: core_gun.cpp_factoryFuncGun_FUN_004f02b0
// Address: 004f02b0
// MANUAL RECONSTRUCTION
// Address Range: [[004f02b0, 004f02d2]]
// Convention: __cdecl
// Signature: CGun * __cdecl core_gun_cpp_factoryFuncGun_FUN_004f02b0(void)

#include "nocturne.h"

CGun * __cdecl core_gun_cpp_factoryFuncGun_FUN_004f02b0(void)

{
  CGun *pCVar1;
  
  pCVar1 = (CGun *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CGun),"..\\core\\gun.cpp",41);
  if (pCVar1 == (CGun *)0x0) {
    return (CGun *)0x0;
  }
  pCVar1 = core_gun_cpp_CGun_ctor_FUN_004f02f0(pCVar1);
  return pCVar1;
}
