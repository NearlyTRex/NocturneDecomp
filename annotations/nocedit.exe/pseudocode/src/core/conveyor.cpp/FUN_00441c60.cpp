// Name: core_conveyor.cpp_FUN_00441c60
// Address: 00441c60
// Address Range: [[00441c60, 00441c82]]
// Convention: unknown
// Signature: undefined core_conveyor.cpp_FUN_00441c60()

#include "nocturne.h"

void core_conveyor_cpp_FUN_00441c60(void)

{
  CConveyor *this_ptr;
  
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x860,"..\\core\\conveyor.cpp",0x23);
  if (this_ptr == (CConveyor *)0x0) {
    return;
  }
  core_conveyor_cpp_ctor_FUN_00441ca0(this_ptr);
  return;
}
