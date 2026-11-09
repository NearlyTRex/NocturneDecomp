// Name: core_lever.cpp_factoryFuncLever_FUN_004ff010
// Address: 004ff010
// Address Range: [[004ff010, 004ff02b]]
// Convention: unknown
// Signature: void core_lever_cpp_factoryFuncLever_FUN_004ff010(void)

#include "nocturne.h"

void core_lever_cpp_factoryFuncLever_FUN_004ff010(void)

{
  CLever *this_ptr;
  
  this_ptr = (CLever *)FUN_005c0f32(0x814);
  if (this_ptr == (CLever *)0x0) {
    return;
  }
  core_lever_cpp_CLever_ctor_FUN_004ff040(this_ptr);
  return;
}
