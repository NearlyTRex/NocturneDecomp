// Name: core_lightgun.cpp_factoryFunc_FUN_005058c0
// Address: 005058c0
// Address Range: [[005058c0, 005058e2]]
// Convention: __cdecl
// Signature: CLightGun * __cdecl core_lightgun_cpp_factoryFunc_FUN_005058c0(void)

#include "nocturne.h"

CLightGun * __cdecl core_lightgun_cpp_factoryFunc_FUN_005058c0(void)

{
  CLightGun *pCVar1;
  
  pCVar1 = (CLightGun *)shape_memdbg_cpp_debugAllocTracked_FUN_0050f1b0(0x590,"..\\core\\lightgun.cpp",0x3a);
  if (pCVar1 == (CLightGun *)0x0) {
    return (CLightGun *)0x0;
  }
  pCVar1 = core_lightgun_cpp_CLightGun_ctor_FUN_00505900(pCVar1);
  return pCVar1;
}
