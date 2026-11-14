// Name: core_manpuz.cpp_factoryFuncMansionPuzzleCircle_FUN_00503b10
// Address: 00503b10
// Address Range: [[00503b10, 00503b2b]]
// Convention: __cdecl
// Signature: CMansionPuzzleCircle * __cdecl core_manpuz_cpp_factoryFuncMansionPuzzleCircle_FUN_00503b10(void)

#include "nocturne.h"

CMansionPuzzleCircle * __cdecl core_manpuz_cpp_factoryFuncMansionPuzzleCircle_FUN_00503b10(void)

{
  CMansionPuzzleCircle *pCVar1;
  
  pCVar1 = (CMansionPuzzleCircle *)operator_new(0x1514);
  if (pCVar1 == (CMansionPuzzleCircle *)0x0) {
    return (CMansionPuzzleCircle *)0x0;
  }
  pCVar1 = core_manpuz_cpp_CMansionPuzzleCircle_ctor_FUN_00503b40(pCVar1);
  return pCVar1;
}
