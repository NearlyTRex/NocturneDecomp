// Name: core_cow.cpp_factoryFuncConveyor_FUN_00438460
// Address: 00438460
// Address Range: [[00438460, 0043847b]]
// Convention: unknown
// Signature: void core_cow_cpp_factoryFuncConveyor_FUN_00438460(void)

#include "nocturne.h"

void core_cow_cpp_factoryFuncConveyor_FUN_00438460(void)

{
  CConveyor *this_ptr;
  
  this_ptr = (CConveyor *)debugAllocTracked1(0x9b8);
  if (this_ptr == (CConveyor *)0x0) {
    return;
  }
  core_conveyor_cpp_CConveyor_ctor_FUN_00438490(this_ptr);
  return;
}
