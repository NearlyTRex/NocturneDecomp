// Name: core_vessel.cpp_CCryptVessel_FUN_005e9b90
// Address: 005e9b90
// Address Range: [[005e9b90, 005e9baa]]
// Convention: __cdecl
// Signature: int core_vessel.cpp_CCryptVessel_FUN_005e9b90(CCryptVessel * this_ptr)

#include "nocturne.h"

int __cdecl core_vessel_cpp_CCryptVessel_FUN_005e9b90(CCryptVessel *this_ptr)

{
  if (((this_ptr->base).was_created == 1) && (this_ptr->unk2 == 0)) {
    return 1;
  }
  return 0;
}
