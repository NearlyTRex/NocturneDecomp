// Name: core_health.cpp_FUN_004d2150
// Address: 004d2150
// Address Range: [[004d2150, 004d216b]]
// Convention: unknown
// Signature: void core_health_cpp_FUN_004d2150(void)

#include "nocturne.h"

void core_health_cpp_FUN_004d2150(void)

{
  CHealthItemSmall *this_ptr;
  
  this_ptr = (CHealthItemSmall *)debugAllocTracked1(0x2e4);
  if (this_ptr == (CHealthItemSmall *)0x0) {
    return;
  }
  core_health_cpp_CHealthItemSmall_ctor_FUN_004d2180(this_ptr);
  return;
}
