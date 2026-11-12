// Name: core_mimic.cpp_factoryFuncMimic_FUN_004f02e0
// Address: 004f02e0
// Address Range: [[004f02e0, 004f02fb]]
// Convention: unknown
// Signature: void core_mimic_cpp_factoryFuncMimic_FUN_004f02e0(void)

#include "nocturne.h"

void core_mimic_cpp_factoryFuncMimic_FUN_004f02e0(void)

{
  CMimic *this_ptr;
  
  this_ptr = (CMimic *)operator_new(0x4c354);
  if (this_ptr == (CMimic *)0x0) {
    return;
  }
  core_mimic_cpp_CMimic_ctor_FUN_004f0310(this_ptr);
  return;
}
