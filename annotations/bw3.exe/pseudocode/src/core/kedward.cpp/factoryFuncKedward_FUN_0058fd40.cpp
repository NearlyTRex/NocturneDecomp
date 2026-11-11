// Name: core_kedward.cpp_factoryFuncKedward_FUN_0058fd40
// Address: 0058fd40
// Address Range: [[0058fd40, 0058fd5b]]
// Convention: unknown
// Signature: void core_kedward_cpp_factoryFuncKedward_FUN_0058fd40(void)

#include "nocturne.h"

void core_kedward_cpp_factoryFuncKedward_FUN_0058fd40(void)

{
  CKedward *this_ptr;
  
  this_ptr = (CKedward *)operator_new(0xd0d8);
  if (this_ptr == (CKedward *)0x0) {
    return;
  }
  core_kedward_cpp_CKedward_ctor_FUN_0058fd70(this_ptr);
  return;
}
