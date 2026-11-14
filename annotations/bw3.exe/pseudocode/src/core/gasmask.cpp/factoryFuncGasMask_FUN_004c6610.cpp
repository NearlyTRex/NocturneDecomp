// Name: core_gasmask.cpp_factoryFuncGasMask_FUN_004c6610
// Address: 004c6610
// Address Range: [[004c6610, 004c662b]]
// Convention: __cdecl
// Signature: CGasMask * __cdecl core_gasmask_cpp_factoryFuncGasMask_FUN_004c6610(void)

#include "nocturne.h"

CGasMask * __cdecl core_gasmask_cpp_factoryFuncGasMask_FUN_004c6610(void)

{
  CGasMask *pCVar1;
  
  pCVar1 = (CGasMask *)operator_new(0x2d8);
  if (pCVar1 == (CGasMask *)0x0) {
    return (CGasMask *)0x0;
  }
  pCVar1 = core_gasmask_cpp_CGasMask_ctor_FUN_004c6640(pCVar1);
  return pCVar1;
}
