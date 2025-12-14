// Name: core_tentacle.cpp_FUN_005daf20
// Address: 005daf20
// Address Range: [[005daf20, 005daf42]]
// Convention: unknown
// Signature: undefined core_tentacle.cpp_FUN_005daf20()

#include "nocturne.h"

void core_tentacle_cpp_FUN_005daf20(void)

{
  CTentacle *this_ptr;
  
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbf2c,"..\\core\\tentacle.cpp",0x67);
  if (this_ptr == (CTentacle *)0x0) {
    return;
  }
  core_tentacle_cpp_CTentacle_ctor_FUN_005daf60(this_ptr);
  return;
}
