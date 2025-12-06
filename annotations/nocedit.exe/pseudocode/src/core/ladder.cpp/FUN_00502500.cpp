// Name: core_ladder.cpp_FUN_00502500
// Address: 00502500
// Address Range: [[00502500, 00502522]]
// Convention: unknown
// Signature: undefined core_ladder.cpp_FUN_00502500()

#include "nocturne.h"

void core_ladder_cpp_FUN_00502500(void)

{
  CLadder *this_ptr;
  
  this_ptr = (CLadder *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x300,"..\\core\\ladder.cpp",0x2d);
  if (this_ptr == (CLadder *)0x0) {
    return;
  }
  core_ladder_cpp_FUN_00502540(this_ptr);
  return;
}
