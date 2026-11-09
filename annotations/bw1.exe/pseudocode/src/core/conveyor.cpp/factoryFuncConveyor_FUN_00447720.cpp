// Name: core_conveyor.cpp_factoryFuncConveyor_FUN_00447720
// Address: 00447720
// Address Range: [[00447720, 0044773b]]
// Convention: unknown
// Signature: void core_conveyor_cpp_factoryFuncConveyor_FUN_00447720(void)

#include "nocturne.h"

void core_conveyor_cpp_factoryFuncConveyor_FUN_00447720(void)

{
  CConveyor *this_ptr;
  
  this_ptr = (CConveyor *)FUN_005c0f32(0x85c);
  if (this_ptr == (CConveyor *)0x0) {
    return;
  }
  core_conveyor_cpp_CConveyor_ctor_FUN_00447750(this_ptr);
  return;
}
