// Name: core_shotgun.cpp_FUN_00587ea0
// Address: 00587ea0
// Address Range: [[00587ea0, 00587ec2]]
// Convention: unknown
// Signature: undefined core_shotgun.cpp_FUN_00587ea0()

#include "nocturne.h"

void core_shotgun_cpp_FUN_00587ea0(void)

{
  CShotgun *this_ptr;
  
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x584,"..\\core\\shotgun.cpp",0x2e);
  if (this_ptr == (CShotgun *)0x0) {
    return;
  }
  core_shotgun_cpp_CShotgun_ctor_FUN_00587ee0(this_ptr);
  return;
}
