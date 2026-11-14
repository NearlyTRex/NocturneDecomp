// Name: core_gasmask.cpp_factoryFuncGasMask_FUN_004dda90
// Address: 004dda90
// Address Range: [[004dda90, 004ddaab]]
// Convention: __cdecl
// Signature: CGasMask * __cdecl core_gasmask_cpp_factoryFuncGasMask_FUN_004dda90(void)

#include "nocturne.h"

CGasMask * __cdecl core_gasmask_cpp_factoryFuncGasMask_FUN_004dda90(void)

{
  CGasMask *pCVar1;
  
  pCVar1 = (CGasMask *)operator_new(0x2d8);
  if (pCVar1 == (CGasMask *)0x0) {
    return (CGasMask *)0x0;
  }
  pCVar1 = core_gasmask_cpp_CGasMask_ctor_FUN_004ddac0(pCVar1);
  return pCVar1;
}
