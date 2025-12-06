// Name: core_vessel.cpp_FUN_005e8e20
// Address: 005e8e20
// Address Range: [[005e8e20, 005e8e42]]
// Convention: unknown
// Signature: undefined core_vessel.cpp_FUN_005e8e20()

#include "nocturne.h"

void core_vessel_cpp_FUN_005e8e20(void)

{
  CCryptVessel *this_ptr;
  
  this_ptr = (CCryptVessel *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x7f4,"..\\core\\vessel.cpp",0x26);
  if (this_ptr == (CCryptVessel *)0x0) {
    return;
  }
  core_vessel_cpp_CCryptVessel_ctor_FUN_005e8e60(this_ptr);
  return;
}
