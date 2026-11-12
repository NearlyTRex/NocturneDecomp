// Name: core_villain.cpp_factoryFuncSteuben_FUN_005a5b10
// Address: 005a5b10
// Address Range: [[005a5b10, 005a5b2b]]
// Convention: unknown
// Signature: void core_villain_cpp_factoryFuncSteuben_FUN_005a5b10(void)

#include "nocturne.h"

void core_villain_cpp_factoryFuncSteuben_FUN_005a5b10(void)

{
  CSteuben *this_ptr;
  
  this_ptr = (CSteuben *)operator_new(0x11850);
  if (this_ptr == (CSteuben *)0x0) {
    return;
  }
  core_villain_cpp_CSteuben_ctor_FUN_005a5b40(this_ptr);
  return;
}
