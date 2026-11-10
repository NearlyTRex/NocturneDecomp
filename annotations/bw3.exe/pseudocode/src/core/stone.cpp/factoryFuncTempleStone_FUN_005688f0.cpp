// Name: core_stone.cpp_factoryFuncTempleStone_FUN_005688f0
// Address: 005688f0
// Address Range: [[005688f0, 0056890b]]
// Convention: unknown
// Signature: void core_stone_cpp_factoryFuncTempleStone_FUN_005688f0(void)

#include "nocturne.h"

void core_stone_cpp_factoryFuncTempleStone_FUN_005688f0(void)

{
  CTempleStone *this_ptr;
  
  this_ptr = (CTempleStone *)debugAllocTracked1(0x6ec);
  if (this_ptr == (CTempleStone *)0x0) {
    return;
  }
  core_stone_cpp_CTempleStone_ctor_FUN_00568920(this_ptr);
  return;
}
