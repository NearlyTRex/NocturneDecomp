// Name: core_manpuz.cpp_factoryFunc_FUN_004c9400
// Address: 004c9400
// Address Range: [[004c9400, 004c941b]]
// Convention: __cdecl
// Signature: CMansionPuzzleCircle * __cdecl core_manpuz_cpp_factoryFunc_FUN_004c9400(void)

#include "nocturne.h"

CMansionPuzzleCircle * __cdecl core_manpuz_cpp_factoryFunc_FUN_004c9400(void)

{
  CMansionPuzzleCircle *pCVar1;
  
  pCVar1 = operator_new(0x150c);
  if (pCVar1 == (CMansionPuzzleCircle *)0x0) {
    return (CMansionPuzzleCircle *)0x0;
  }
  pCVar1 = core_manpuz_cpp_CMansionPuzzleCircle_ctor_FUN_004c9430(pCVar1);
  return pCVar1;
}
