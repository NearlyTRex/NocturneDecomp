// Name: core_thehand.cpp_factoryFuncTheHand_FUN_00599040
// Address: 00599040
// Address Range: [[00599040, 0059905b]]
// Convention: unknown
// Signature: void core_thehand_cpp_factoryFuncTheHand_FUN_00599040(void)

#include "nocturne.h"

void core_thehand_cpp_factoryFuncTheHand_FUN_00599040(void)

{
  CTheHand *this_ptr;
  
  this_ptr = (CTheHand *)debugAllocTracked1(0xc2e0);
  if (this_ptr == (CTheHand *)0x0) {
    return;
  }
  core_thehand_cpp_CTheHand_ctor_FUN_00599070(this_ptr);
  return;
}
