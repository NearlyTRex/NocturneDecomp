// Name: core_conveyor.cpp_factoryFuncConstruct_FUN_00436ad0
// Address: 00436ad0
// Address Range: [[00436ad0, 00436aeb]]
// Convention: unknown
// Signature: void core_conveyor_cpp_factoryFuncConstruct_FUN_00436ad0(void)

#include "nocturne.h"

void core_conveyor_cpp_factoryFuncConstruct_FUN_00436ad0(void)

{
  CConstruct *this_ptr;
  
  this_ptr = (CConstruct *)FUN_005b8be2(0x112e4);
  if (this_ptr == (CConstruct *)0x0) {
    return;
  }
  unkafter_conveyor_cpp_CConstruct_ctor_FUN_00436b00(this_ptr);
  return;
}
