// Name: core_doc.cpp_factoryFuncDoc_FUN_004500a0
// Address: 004500a0
// Address Range: [[004500a0, 004500bb]]
// Convention: __cdecl
// Signature: CDoc * __cdecl core_doc_cpp_factoryFuncDoc_FUN_004500a0(void)

#include "nocturne.h"

CDoc * __cdecl core_doc_cpp_factoryFuncDoc_FUN_004500a0(void)

{
  CDoc *pCVar1;
  
  pCVar1 = (CDoc *)operator_new(0x26188);
  if (pCVar1 == (CDoc *)0x0) {
    return (CDoc *)0x0;
  }
  pCVar1 = core_doc_cpp_CDoc_ctor_FUN_004500d0(pCVar1);
  return pCVar1;
}
