// Name: core_pendulum.cpp_FUN_00549350
// Address: 00549350
// Address Range: [[00549350, 00549372]]
// Convention: unknown
// Signature: undefined core_pendulum.cpp_FUN_00549350()

#include "nocturne.h"

void core_pendulum_cpp_FUN_00549350(void)

{
  CPendulum *this_ptr;
  
  this_ptr = (CPendulum *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x444,"..\\core\\pendulum.cpp",0x2b);
  if (this_ptr == (CPendulum *)0x0) {
    return;
  }
  core_pendulum_cpp_CPendulum_ctor_FUN_00549390(this_ptr);
  return;
}
