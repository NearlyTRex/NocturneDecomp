// Name: core_passngr.cpp_factoryFuncPassenger_FUN_005113e0
// Address: 005113e0
// Address Range: [[005113e0, 005113fb]]
// Convention: __cdecl
// Signature: CPassenger * __cdecl core_passngr_cpp_factoryFuncPassenger_FUN_005113e0(void)

#include "nocturne.h"

CPassenger * __cdecl core_passngr_cpp_factoryFuncPassenger_FUN_005113e0(void)

{
  CPassenger *pCVar1;
  
  pCVar1 = (CPassenger *)operator_new(0x25088);
  if (pCVar1 == (CPassenger *)0x0) {
    return (CPassenger *)0x0;
  }
  pCVar1 = core_passngr_cpp_CPassenger_ctor_FUN_00511410(pCVar1);
  return pCVar1;
}
