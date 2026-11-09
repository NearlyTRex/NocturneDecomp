// Name: core_bugs.cpp_factoryFuncBugs_FUN_0041ef20
// Address: 0041ef20
// Address Range: [[0041ef20, 0041ef3b]]
// Convention: unknown
// Signature: void core_bugs_cpp_factoryFuncBugs_FUN_0041ef20(void)

#include "nocturne.h"

void core_bugs_cpp_factoryFuncBugs_FUN_0041ef20(void)

{
  CBugs *this_ptr;
  
  this_ptr = (CBugs *)FUN_005b8be2(0x1e634);
  if (this_ptr == (CBugs *)0x0) {
    return;
  }
  core_bugs_cpp_CBugs_ctor_FUN_0041ef50(this_ptr);
  return;
}
