// Name: core_doc.cpp_factoryFuncDoc_FUN_00468c50
// Address: 00468c50
// Address Range: [[00468c50, 00468c6b]]
// Convention: __cdecl
// Signature: CDoc * __cdecl core_doc_cpp_factoryFuncDoc_FUN_00468c50(void)

#include "nocturne.h"

CDoc * __cdecl core_doc_cpp_factoryFuncDoc_FUN_00468c50(void)

{
  CDoc *pCVar1;
  
  pCVar1 = (CDoc *)operator_new(0x200e4);
  if (pCVar1 == (CDoc *)0x0) {
    return (CDoc *)0x0;
  }
  pCVar1 = core_doc_cpp_CDoc_ctor_FUN_00468c80(pCVar1);
  return pCVar1;
}
