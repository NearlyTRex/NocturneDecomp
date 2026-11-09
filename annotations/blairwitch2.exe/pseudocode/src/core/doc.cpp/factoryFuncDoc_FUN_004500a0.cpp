// Name: core_doc.cpp_factoryFuncDoc_FUN_004500a0
// Address: 004500a0
// Address Range: [[004500a0, 004500bb]]
// Convention: unknown
// Signature: void core_doc_cpp_factoryFuncDoc_FUN_004500a0(void)

#include "nocturne.h"

void core_doc_cpp_factoryFuncDoc_FUN_004500a0(void)

{
  CDoc *this_ptr;
  
  this_ptr = (CDoc *)FUN_005b8be2(0x26188);
  if (this_ptr == (CDoc *)0x0) {
    return;
  }
  core_doc_cpp_CDoc_ctor_FUN_004500d0(this_ptr);
  return;
}
