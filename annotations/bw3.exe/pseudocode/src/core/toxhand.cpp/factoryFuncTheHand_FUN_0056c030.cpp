// Name: core_toxhand.cpp_factoryFuncTheHand_FUN_0056c030
// Address: 0056c030
// Address Range: [[0056c030, 0056c04b]]
// Convention: unknown
// Signature: void core_toxhand_cpp_factoryFuncTheHand_FUN_0056c030(void)

#include "nocturne.h"

void core_toxhand_cpp_factoryFuncTheHand_FUN_0056c030(void)

{
  CTheHand *this_ptr;
  
  this_ptr = (CTheHand *)operator_new(0xd0cc);
  if (this_ptr == (CTheHand *)0x0) {
    return;
  }
  core_toxhand_cpp_CTheHand_ctor_FUN_0056c060(this_ptr);
  return;
}
