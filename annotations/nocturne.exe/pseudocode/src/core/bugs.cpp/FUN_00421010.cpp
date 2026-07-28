// Name: core_bugs.cpp_FUN_00421010
// Address: 00421010
// Address Range: [[00421010, 0042102b]]
// Convention: unknown
// Signature: void core_bugs_cpp_FUN_00421010(void)

#include "nocturne.h"

void core_bugs_cpp_FUN_00421010(void)

{
  CBugs *this_ptr;
  
  this_ptr = (CBugs *)FUN_0056497c(0x19860);
  if (this_ptr == (CBugs *)0x0) {
    return;
  }
  core_bugs_cpp_CBugs_ctor_FUN_00421040(this_ptr);
  return;
}
