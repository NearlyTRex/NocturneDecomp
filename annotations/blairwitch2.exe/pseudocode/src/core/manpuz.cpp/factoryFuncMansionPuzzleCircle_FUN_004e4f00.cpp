// Name: core_manpuz.cpp_factoryFuncMansionPuzzleCircle_FUN_004e4f00
// Address: 004e4f00
// Address Range: [[004e4f00, 004e4f1b]]
// Convention: __cdecl
// Signature: CMansionPuzzleCircle * __cdecl core_manpuz_cpp_factoryFuncMansionPuzzleCircle_FUN_004e4f00(void)

#include "nocturne.h"

CMansionPuzzleCircle * __cdecl core_manpuz_cpp_factoryFuncMansionPuzzleCircle_FUN_004e4f00(void)

{
  CMansionPuzzleCircle *pCVar1;
  
  pCVar1 = (CMansionPuzzleCircle *)operator_new(0x1670);
  if (pCVar1 == (CMansionPuzzleCircle *)0x0) {
    return (CMansionPuzzleCircle *)0x0;
  }
  pCVar1 = core_manpuz_cpp_CMansionPuzzleCircle_ctor_FUN_004e4f30(pCVar1);
  return pCVar1;
}
