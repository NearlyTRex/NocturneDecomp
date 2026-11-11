// Name: core_hand.cpp_factoryFuncHand_FUN_005a9bd0
// Address: 005a9bd0
// Address Range: [[005a9bd0, 005a9beb]]
// Convention: unknown
// Signature: void core_hand_cpp_factoryFuncHand_FUN_005a9bd0(void)

#include "nocturne.h"

void core_hand_cpp_factoryFuncHand_FUN_005a9bd0(void)

{
  CHand *this_ptr;
  
  this_ptr = (CHand *)operator_new(0x1186c);
  if (this_ptr == (CHand *)0x0) {
    return;
  }
  core_hand_cpp_CHand_ctor_FUN_005a9c00(this_ptr);
  return;
}
