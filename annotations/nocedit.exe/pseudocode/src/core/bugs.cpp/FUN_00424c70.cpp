// Name: core_bugs.cpp_FUN_00424c70
// Address: 00424c70
// Address Range: [[00424c70, 00424c92]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_00424c70()

#include "nocturne.h"

void core_bugs_cpp_FUN_00424c70(void)

{
  CBugs *this_ptr;
  
  this_ptr = (CBugs *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0
                                (0x199f8,"..\\core\\bugs.cpp",0x3e);
  if (this_ptr == (CBugs *)0x0) {
    return;
  }
  core_bugs_cpp_CBugs_ctor_FUN_00424cb0(this_ptr);
  return;
}
