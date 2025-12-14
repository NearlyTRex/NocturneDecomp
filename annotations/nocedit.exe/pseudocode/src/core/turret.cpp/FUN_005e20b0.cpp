// Name: core_turret.cpp_FUN_005e20b0
// Address: 005e20b0
// Address Range: [[005e20b0, 005e20d5]]
// Convention: unknown
// Signature: undefined core_turret.cpp_FUN_005e20b0()

#include "nocturne.h"

void core_turret_cpp_FUN_005e20b0(void)

{
  CTurret *this_ptr;
  
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x8bc,"..\\core\\turret.cpp",0xa2);
  if (this_ptr == (CTurret *)0x0) {
    return;
  }
  core_turret_cpp_CTurret_ctor_FUN_005e20f0(this_ptr);
  return;
}
