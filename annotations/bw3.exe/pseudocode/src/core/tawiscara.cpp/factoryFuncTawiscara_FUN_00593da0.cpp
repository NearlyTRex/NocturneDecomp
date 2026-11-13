// Name: core_tawiscara.cpp_factoryFuncTawiscara_FUN_00593da0
// Address: 00593da0
// Address Range: [[00593da0, 00593dbb]]
// Convention: __cdecl
// Signature: CTawiscara * __cdecl core_tawiscara_cpp_factoryFuncTawiscara_FUN_00593da0(void)

#include "nocturne.h"

CTawiscara * __cdecl core_tawiscara_cpp_factoryFuncTawiscara_FUN_00593da0(void)

{
  CTawiscara *pCVar1;
  
  pCVar1 = (CTawiscara *)operator_new(0xd09c);
  if (pCVar1 == (CTawiscara *)0x0) {
    return (CTawiscara *)0x0;
  }
  pCVar1 = core_tawiscara_cpp_CTawiscara_ctor_FUN_00593dd0(pCVar1);
  return pCVar1;
}
