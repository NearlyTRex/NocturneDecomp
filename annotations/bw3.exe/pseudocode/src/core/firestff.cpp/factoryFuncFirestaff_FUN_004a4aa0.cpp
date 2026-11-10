// Name: core_firestff.cpp_factoryFuncFirestaff_FUN_004a4aa0
// Address: 004a4aa0
// Address Range: [[004a4aa0, 004a4abb]]
// Convention: unknown
// Signature: void core_firestff_cpp_factoryFuncFirestaff_FUN_004a4aa0(void)

#include "nocturne.h"

void core_firestff_cpp_factoryFuncFirestaff_FUN_004a4aa0(void)

{
  CFirestaff *this_ptr;
  
  this_ptr = (CFirestaff *)debugAllocTracked1(0x25c8);
  if (this_ptr == (CFirestaff *)0x0) {
    return;
  }
  core_firestff_cpp_CFirestaff_ctor_FUN_004a4ad0(this_ptr);
  return;
}
