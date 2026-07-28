// Name: core_conveyor.cpp_FUN_0043b020
// Address: 0043b020
// Address Range: [[0043b020, 0043b03b]]
// Convention: unknown
// Signature: void core_conveyor_cpp_FUN_0043b020(void)

#include "nocturne.h"

void core_conveyor_cpp_FUN_0043b020(void)

{
  CConveyor *this_ptr;
  
  this_ptr = (CConveyor *)FUN_0056497c(0x854);
  if (this_ptr == (CConveyor *)0x0) {
    return;
  }
  core_conveyor_cpp_CConveyor_ctor_FUN_0043b050(this_ptr);
  return;
}
