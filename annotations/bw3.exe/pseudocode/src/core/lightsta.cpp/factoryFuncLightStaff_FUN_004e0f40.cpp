// Name: core_lightsta.cpp_factoryFuncLightStaff_FUN_004e0f40
// Address: 004e0f40
// Address Range: [[004e0f40, 004e0f5b]]
// Convention: __cdecl
// Signature: CLightStaff * __cdecl core_lightsta_cpp_factoryFuncLightStaff_FUN_004e0f40(void)

#include "nocturne.h"

CLightStaff * __cdecl core_lightsta_cpp_factoryFuncLightStaff_FUN_004e0f40(void)

{
  CLightStaff *pCVar1;
  
  pCVar1 = (CLightStaff *)operator_new(0x608);
  if (pCVar1 == (CLightStaff *)0x0) {
    return (CLightStaff *)0x0;
  }
  pCVar1 = core_lightsta_cpp_CLightStaff_ctor_FUN_004e0f70(pCVar1);
  return pCVar1;
}
