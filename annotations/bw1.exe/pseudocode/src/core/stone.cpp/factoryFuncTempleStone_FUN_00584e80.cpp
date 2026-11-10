// Name: core_stone.cpp_factoryFuncTempleStone_FUN_00584e80
// Address: 00584e80
// Address Range: [[00584e80, 00584e9b]]
// Convention: unknown
// Signature: void core_stone_cpp_factoryFuncTempleStone_FUN_00584e80(void)

#include "nocturne.h"

void core_stone_cpp_factoryFuncTempleStone_FUN_00584e80(void)

{
  CTempleStone *this_ptr;
  
  this_ptr = (CTempleStone *)debugAllocTracked1(0x67c);
  if (this_ptr == (CTempleStone *)0x0) {
    return;
  }
  core_stone_cpp_CTempleStone_ctor_FUN_00584eb0(this_ptr);
  return;
}
