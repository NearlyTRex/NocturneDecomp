// Name: core_tentacle.cpp_factoryFunc_FUN_005daf20
// Address: 005daf20
// Address Range: [[005daf20, 005daf42]]
// Convention: __cdecl
// Signature: CTentacle * __cdecl core_tentacle_cpp_factoryFunc_FUN_005daf20(void)

#include "nocturne.h"

CTentacle * __cdecl core_tentacle_cpp_factoryFunc_FUN_005daf20(void)

{
  CTentacle *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbf2c,"..\\core\\tentacle.cpp",0x67);
  if (pCVar1 == (CTentacle *)0x0) {
    return (CTentacle *)0x0;
  }
  pCVar1 = core_tentacle_cpp_CTentacle_ctor_FUN_005daf60(pCVar1);
  return pCVar1;
}
