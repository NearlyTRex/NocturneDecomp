// Name: core_lever.cpp_factoryFuncLever_FUN_004e00d0
// Address: 004e00d0
// Address Range: [[004e00d0, 004e00eb]]
// Convention: unknown
// Signature: void core_lever_cpp_factoryFuncLever_FUN_004e00d0(void)

#include "nocturne.h"

void core_lever_cpp_factoryFuncLever_FUN_004e00d0(void)

{
  CLever *this_ptr;
  
  this_ptr = (CLever *)operator_new(0x814);
  if (this_ptr == (CLever *)0x0) {
    return;
  }
  core_lever_cpp_CLever_ctor_FUN_004e0100(this_ptr);
  return;
}
