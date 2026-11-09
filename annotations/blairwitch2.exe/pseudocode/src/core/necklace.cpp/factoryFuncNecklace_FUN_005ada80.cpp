// Name: core_necklace.cpp_factoryFuncNecklace_FUN_005ada80
// Address: 005ada80
// Address Range: [[005ada80, 005ada9b]]
// Convention: unknown
// Signature: void core_necklace_cpp_factoryFuncNecklace_FUN_005ada80(void)

#include "nocturne.h"

void core_necklace_cpp_factoryFuncNecklace_FUN_005ada80(void)

{
  CNecklace *this_ptr;
  
  this_ptr = (CNecklace *)FUN_005b8be2(0x7d4);
  if (this_ptr == (CNecklace *)0x0) {
    return;
  }
  core_necklace_cpp_CNecklace_ctor_FUN_005adab0(this_ptr);
  return;
}
