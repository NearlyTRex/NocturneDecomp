// Name: core_turret.cpp_FUN_00549470
// Address: 00549470
// Address Range: [[00549470, 0054948b]]
// Convention: unknown
// Signature: void core_turret_cpp_FUN_00549470(void)

#include "nocturne.h"

void core_turret_cpp_FUN_00549470(void)

{
  CTurret *this_ptr;
  
  this_ptr = (CTurret *)FUN_0056497c(0x8b4);
  if (this_ptr == (CTurret *)0x0) {
    return;
  }
  core_turret_cpp_CTurret_ctor_FUN_005494a0(this_ptr);
  return;
}
