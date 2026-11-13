// Name: core_meleeaxe.cpp_factoryFuncMeleeAxe_FUN_0059d1f0
// Address: 0059d1f0
// Address Range: [[0059d1f0, 0059d20b]]
// Convention: __cdecl
// Signature: CMeleeAxe * __cdecl core_meleeaxe_cpp_factoryFuncMeleeAxe_FUN_0059d1f0(void)

#include "nocturne.h"

CMeleeAxe * __cdecl core_meleeaxe_cpp_factoryFuncMeleeAxe_FUN_0059d1f0(void)

{
  CMeleeAxe *pCVar1;
  
  pCVar1 = (CMeleeAxe *)operator_new(0x828);
  if (pCVar1 == (CMeleeAxe *)0x0) {
    return (CMeleeAxe *)0x0;
  }
  pCVar1 = core_meleeaxe_cpp_CMeleeAxe_ctor_FUN_0059d220(pCVar1);
  return pCVar1;
}
