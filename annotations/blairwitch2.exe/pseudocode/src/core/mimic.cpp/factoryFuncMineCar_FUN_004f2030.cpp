// Name: core_mimic.cpp_factoryFuncMineCar_FUN_004f2030
// Address: 004f2030
// Address Range: [[004f2030, 004f2055]]
// Convention: unknown
// Signature: void core_mimic_cpp_factoryFuncMineCar_FUN_004f2030(void)

#include "nocturne.h"

void core_mimic_cpp_factoryFuncMineCar_FUN_004f2030(void)

{
  CPlatform *pCVar1;
  
  pCVar1 = (CPlatform *)debugAllocTracked1(0x888);
  if (pCVar1 == (CPlatform *)0x0) {
    return;
  }
  pCVar1 = core_platfrm_cpp_CPlatform_ctor_FUN_005180b0(pCVar1);
  (pCVar1->base).vtable._ub = &g_CMineCarVTable;
  return;
}
