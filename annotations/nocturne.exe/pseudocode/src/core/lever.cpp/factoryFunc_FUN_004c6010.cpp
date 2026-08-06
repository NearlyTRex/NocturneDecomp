// Name: core_lever.cpp_factoryFunc_FUN_004c6010
// Address: 004c6010
// Address Range: [[004c6010, 004c602b]]
// Convention: __cdecl
// Signature: CLever * __cdecl core_lever_cpp_factoryFunc_FUN_004c6010(void)

#include "nocturne.h"

CLever * __cdecl core_lever_cpp_factoryFunc_FUN_004c6010(void)

{
  CLever *pCVar1;
  
  pCVar1 = operator_new(0x80c);
  if (pCVar1 == (CLever *)0x0) {
    return (CLever *)0x0;
  }
  pCVar1 = core_lever_cpp_CLever_ctor_FUN_004c6040(pCVar1);
  return pCVar1;
}
