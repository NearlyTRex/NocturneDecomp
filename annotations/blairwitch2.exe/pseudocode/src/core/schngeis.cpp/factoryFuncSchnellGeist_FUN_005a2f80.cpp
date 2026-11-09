// Name: core_schngeis.cpp_factoryFuncSchnellGeist_FUN_005a2f80
// Address: 005a2f80
// Address Range: [[005a2f80, 005a2f9b]]
// Convention: unknown
// Signature: void core_schngeis_cpp_factoryFuncSchnellGeist_FUN_005a2f80(void)

#include "nocturne.h"

void core_schngeis_cpp_factoryFuncSchnellGeist_FUN_005a2f80(void)

{
  CSchnellGeist *this_ptr;
  
  this_ptr = (CSchnellGeist *)FUN_005b8be2(0x11870);
  if (this_ptr == (CSchnellGeist *)0x0) {
    return;
  }
  core_schngeis_cpp_CSchnellGeist_ctor_FUN_005a2fb0(this_ptr);
  return;
}
