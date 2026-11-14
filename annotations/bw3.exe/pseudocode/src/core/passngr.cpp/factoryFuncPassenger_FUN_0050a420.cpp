// Name: core_passngr.cpp_factoryFuncPassenger_FUN_0050a420
// Address: 0050a420
// Address Range: [[0050a420, 0050a43b]]
// Convention: __cdecl
// Signature: CPassenger * __cdecl core_passngr_cpp_factoryFuncPassenger_FUN_0050a420(void)

#include "nocturne.h"

CPassenger * __cdecl core_passngr_cpp_factoryFuncPassenger_FUN_0050a420(void)

{
  CPassenger *pCVar1;
  
  pCVar1 = (CPassenger *)operator_new(0x21408);
  if (pCVar1 == (CPassenger *)0x0) {
    return (CPassenger *)0x0;
  }
  pCVar1 = core_passngr_cpp_CPassenger_ctor_FUN_0050a450(pCVar1);
  return pCVar1;
}
