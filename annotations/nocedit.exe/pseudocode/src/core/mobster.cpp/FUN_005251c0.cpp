// Name: core_mobster.cpp_FUN_005251c0
// Address: 005251c0
// Address Range: [[005251c0, 005251e5]]
// Convention: unknown
// Signature: undefined core_mobster.cpp_FUN_005251c0()

#include "nocturne.h"

void core_mobster_cpp_FUN_005251c0(void)

{
  CMobster *this_ptr;
  
  this_ptr = (CMobster *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbf94,"..\\core\\mobster.cpp",0x85);
  if (this_ptr == (CMobster *)0x0) {
    return;
  }
  core_mobster_cpp_CMobster_ctor_FUN_00525200(this_ptr);
  return;
}
