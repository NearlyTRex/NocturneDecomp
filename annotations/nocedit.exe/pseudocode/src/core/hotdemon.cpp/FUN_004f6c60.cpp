// Name: core_hotdemon.cpp_FUN_004f6c60
// Address: 004f6c60
// Address Range: [[004f6c60, 004f6c82]]
// Convention: unknown
// Signature: undefined core_hotdemon.cpp_FUN_004f6c60()

#include "nocturne.h"

void core_hotdemon_cpp_FUN_004f6c60(void)

{
  CHotDemon *this_ptr;
  
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbef0,"..\\core\\hotdemon.cpp",0x54);
  if (this_ptr == (CHotDemon *)0x0) {
    return;
  }
  core_hotdemon_cpp_CHotDemon_ctor_FUN_004f6ca0(this_ptr);
  return;
}
