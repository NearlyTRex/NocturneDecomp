// Name: core_bugs.cpp_factoryFuncBugs_FUN_00420e70
// Address: 00420e70
// Address Range: [[00420e70, 00420e8b]]
// Convention: unknown
// Signature: void core_bugs_cpp_factoryFuncBugs_FUN_00420e70(void)

#include "nocturne.h"

void core_bugs_cpp_factoryFuncBugs_FUN_00420e70(void)

{
  CBugs *this_ptr;
  
  this_ptr = (CBugs *)FUN_005a3cb2(0x1bea4);
  if (this_ptr == (CBugs *)0x0) {
    return;
  }
  core_bugs_cpp_CBugs_ctor_FUN_00420ea0(this_ptr);
  return;
}
