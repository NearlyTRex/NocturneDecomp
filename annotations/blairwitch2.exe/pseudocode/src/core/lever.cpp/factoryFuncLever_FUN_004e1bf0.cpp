// Name: core_lever.cpp_factoryFuncLever_FUN_004e1bf0
// Address: 004e1bf0
// Address Range: [[004e1bf0, 004e1c0b]]
// Convention: unknown
// Signature: void core_lever_cpp_factoryFuncLever_FUN_004e1bf0(void)

#include "nocturne.h"

void core_lever_cpp_factoryFuncLever_FUN_004e1bf0(void)

{
  CLever *this_ptr;
  
  this_ptr = (CLever *)FUN_005b8be2(0x970);
  if (this_ptr == (CLever *)0x0) {
    return;
  }
  core_lever_cpp_CLever_ctor_FUN_004e1c20(this_ptr);
  return;
}
