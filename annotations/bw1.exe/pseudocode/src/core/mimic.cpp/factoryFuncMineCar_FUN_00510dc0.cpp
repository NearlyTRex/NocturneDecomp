// Name: core_mimic.cpp_factoryFuncMineCar_FUN_00510dc0
// Address: 00510dc0
// Address Range: [[00510dc0, 00510de5]]
// Convention: unknown
// Signature: void core_mimic_cpp_factoryFuncMineCar_FUN_00510dc0(void)

#include "nocturne.h"

void core_mimic_cpp_factoryFuncMineCar_FUN_00510dc0(void)

{
  CPlatform *pCVar1;
  
  pCVar1 = (CPlatform *)FUN_005c0f32(0x72c);
  if (pCVar1 == (CPlatform *)0x0) {
    return;
  }
  pCVar1 = core_platfrm_cpp_CPlatform_ctor_FUN_00539400(pCVar1);
  *(byte **)&pCVar1->field_0x154 = &g_CMineCarVTable;
  return;
}
