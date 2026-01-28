// Name: core_manpuz.cpp_factoryFunc_FUN_005088e0
// Address: 005088e0
// Address Range: [[005088e0, 00508905]]
// Convention: __cdecl
// Signature: CMansionPuzzleCircle * __cdecl core_manpuz_cpp_factoryFunc_FUN_005088e0(void)

#include "nocturne.h"

CMansionPuzzleCircle * __cdecl core_manpuz_cpp_factoryFunc_FUN_005088e0(void)

{
  CMansionPuzzleCircle *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x1514,"..\\core\\manpuz.cpp",0xeb);
  if (pCVar1 == (CMansionPuzzleCircle *)0x0) {
    return (CMansionPuzzleCircle *)0x0;
  }
  pCVar1 = core_manpuz_cpp_CMansionPuzzleCircle_ctor_FUN_00508920(pCVar1);
  return pCVar1;
}
