// Name: core_gasmask.cpp_factoryFunc_FUN_004a89e0
// Address: 004a89e0
// Address Range: [[004a89e0, 004a89fb]]
// Convention: __cdecl
// Signature: CGasMask * __cdecl core_gasmask_cpp_factoryFunc_FUN_004a89e0(void)

#include "nocturne.h"

CGasMask * __cdecl core_gasmask_cpp_factoryFunc_FUN_004a89e0(void)

{
  int iVar1;
  CGasMask *pCVar2;
  
  iVar1 = FUN_0056497c(0x2d0);
  if (iVar1 == 0) {
    return (CGasMask *)0x0;
  }
  pCVar2 = (CGasMask *)core_gasmask_cpp_FUN_004a8a10(iVar1);
  return pCVar2;
}
