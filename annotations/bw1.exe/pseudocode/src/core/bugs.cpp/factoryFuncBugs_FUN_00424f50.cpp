// Name: core_bugs.cpp_factoryFuncBugs_FUN_00424f50
// Address: 00424f50
// Address Range: [[00424f50, 00424f6b]]
// Convention: unknown
// Signature: void core_bugs_cpp_factoryFuncBugs_FUN_00424f50(void)

#include "nocturne.h"

void core_bugs_cpp_factoryFuncBugs_FUN_00424f50(void)

{
  CBugs *this_ptr;
  
  this_ptr = (CBugs *)operator_new(0x19da4);
  if (this_ptr == (CBugs *)0x0) {
    return;
  }
  core_bugs_cpp_CBugs_ctor_FUN_00424f80(this_ptr);
  return;
}
