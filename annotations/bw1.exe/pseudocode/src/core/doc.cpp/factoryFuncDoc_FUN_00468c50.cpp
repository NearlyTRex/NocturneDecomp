// Name: core_doc.cpp_factoryFuncDoc_FUN_00468c50
// Address: 00468c50
// Address Range: [[00468c50, 00468c6b]]
// Convention: unknown
// Signature: void core_doc_cpp_factoryFuncDoc_FUN_00468c50(void)

#include "nocturne.h"

void core_doc_cpp_factoryFuncDoc_FUN_00468c50(void)

{
  CDoc *this_ptr;
  
  this_ptr = (CDoc *)FUN_005c0f32(0x200e4);
  if (this_ptr == (CDoc *)0x0) {
    return;
  }
  core_doc_cpp_CDoc_ctor_FUN_00468c80(this_ptr);
  return;
}
