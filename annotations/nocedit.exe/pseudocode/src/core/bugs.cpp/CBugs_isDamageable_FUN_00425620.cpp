// Name: core_bugs.cpp_CBugs_isDamageable_FUN_00425620
// Address: 00425620
// Address Range: [[00425620, 0042563d]]
// Convention: __cdecl
// Signature: int __cdecl core_bugs_cpp_CBugs_isDamageable_FUN_00425620(CBugs *this_ptr)

#include "nocturne.h"

int __cdecl core_bugs_cpp_CBugs_isDamageable_FUN_00425620(CBugs *this_ptr)

{
  if ((this_ptr->base).base.base.was_created == 2) {
    return 2;
  }
  if (this_ptr->unk == 3) {
    return 2;
  }
  return 0;
}
