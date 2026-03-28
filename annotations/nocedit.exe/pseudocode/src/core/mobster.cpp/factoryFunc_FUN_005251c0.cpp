// Name: core_mobster.cpp_factoryFunc_FUN_005251c0
// Address: 005251c0
// Address Range: [[005251c0, 005251e5]]
// Convention: __cdecl
// Signature: CMobster * __cdecl core_mobster_cpp_factoryFunc_FUN_005251c0(void)

#include "nocturne.h"

CMobster * __cdecl core_mobster_cpp_factoryFunc_FUN_005251c0(void)

{
  CMobster *pCVar1;
  
  pCVar1 = (CMobster *)shape_memdbg_cpp_debugAllocTracked_FUN_0050f1b0(0xbf94,"..\\core\\mobster.cpp",0x85);
  if (pCVar1 == (CMobster *)0x0) {
    return (CMobster *)0x0;
  }
  pCVar1 = core_mobster_cpp_CMobster_ctor_FUN_00525200(pCVar1);
  return pCVar1;
}
