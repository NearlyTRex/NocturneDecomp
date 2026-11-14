// Name: core_mattnntt.cpp_factoryFuncMattanntote_FUN_00591b70
// Address: 00591b70
// Address Range: [[00591b70, 00591b8b]]
// Convention: __cdecl
// Signature: CMattanntote * __cdecl core_mattnntt_cpp_factoryFuncMattanntote_FUN_00591b70(void)

#include "nocturne.h"

CMattanntote * __cdecl core_mattnntt_cpp_factoryFuncMattanntote_FUN_00591b70(void)

{
  CMattanntote *pCVar1;
  
  pCVar1 = (CMattanntote *)operator_new(0xf09c);
  if (pCVar1 == (CMattanntote *)0x0) {
    return (CMattanntote *)0x0;
  }
  pCVar1 = core_mattnntt_cpp_CMattanntote_ctor_FUN_00591ba0(pCVar1);
  return pCVar1;
}
