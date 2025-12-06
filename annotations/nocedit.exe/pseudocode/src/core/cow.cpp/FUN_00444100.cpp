// Name: core_cow.cpp_FUN_00444100
// Address: 00444100
// Address Range: [[00444100, 00444122]]
// Convention: unknown
// Signature: undefined core_cow.cpp_FUN_00444100()

#include "nocturne.h"

void core_cow_cpp_FUN_00444100(void)

{
  CZombieCow *this_ptr;
  
  this_ptr = (CZombieCow *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbef0,"..\\core\\cow.cpp",0x36);
  if (this_ptr == (CZombieCow *)0x0) {
    return;
  }
  core_cow_cpp_FUN_00444140(this_ptr);
  return;
}
