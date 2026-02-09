// Name: core_vessel.cpp_factoryFunc_FUN_005e8e20
// Address: 005e8e20
// Address Range: [[005e8e20, 005e8e42]]
// Convention: __cdecl
// Signature: CCryptVessel * __cdecl core_vessel_cpp_factoryFunc_FUN_005e8e20(void)

#include "nocturne.h"

CCryptVessel * __cdecl core_vessel_cpp_factoryFunc_FUN_005e8e20(void)

{
  CCryptVessel *pCVar1;
  
  pCVar1 = (CCryptVessel *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x7f4,"..\\core\\vessel.cpp",0x26);
  if (pCVar1 == (CCryptVessel *)0x0) {
    return (CCryptVessel *)0x0;
  }
  pCVar1 = core_vessel_cpp_CCryptVessel_ctor_FUN_005e8e60(pCVar1);
  return pCVar1;
}
