// Name: core_gasmask.cpp_factoryFunc_FUN_004a89e0
// Address: 004a89e0
// Address Range: [[004a89e0, 004a89fb]]
// Convention: __cdecl
// Signature: CGasMask * __cdecl core_gasmask_cpp_factoryFunc_FUN_004a89e0(void)

#include "nocturne.h"

CGasMask * __cdecl core_gasmask_cpp_factoryFunc_FUN_004a89e0(void)

{
  CGasMask *pCVar1;
  
  pCVar1 = operator_new(0x2d0);
  if (pCVar1 == (CGasMask *)0x0) {
    return (CGasMask *)0x0;
  }
  pCVar1 = core_gasmask_cpp_CGasMask_ctor_FUN_004a8a10(pCVar1);
  return pCVar1;
}
