// Name: core_mine.cpp_factoryFuncSpiritMine_FUN_005ad390
// Address: 005ad390
// Address Range: [[005ad390, 005ad3ab]]
// Convention: unknown
// Signature: void core_mine_cpp_factoryFuncSpiritMine_FUN_005ad390(void)

#include "nocturne.h"

void core_mine_cpp_factoryFuncSpiritMine_FUN_005ad390(void)

{
  CSpiritMine *this_ptr;
  
  this_ptr = (CSpiritMine *)operator_new(0x838);
  if (this_ptr == (CSpiritMine *)0x0) {
    return;
  }
  core_mine_cpp_CSpiritMine_ctor_FUN_005ad3c0(this_ptr);
  return;
}
