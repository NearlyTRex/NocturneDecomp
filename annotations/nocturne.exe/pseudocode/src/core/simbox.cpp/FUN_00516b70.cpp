// Name: core_simbox.cpp_FUN_00516b70
// Address: 00516b70
// Address Range: [[00516b70, 00516b8b]]
// Convention: unknown
// Signature: void core_simbox_cpp_FUN_00516b70(void)

#include "nocturne.h"

void core_simbox_cpp_FUN_00516b70(void)

{
  CSimBox *this_ptr;
  
  this_ptr = (CSimBox *)FUN_0056497c(0x5c4);
  if (this_ptr == (CSimBox *)0x0) {
    return;
  }
  core_simbox_cpp_CSimBox_ctor_FUN_00516ba0(this_ptr);
  return;
}
