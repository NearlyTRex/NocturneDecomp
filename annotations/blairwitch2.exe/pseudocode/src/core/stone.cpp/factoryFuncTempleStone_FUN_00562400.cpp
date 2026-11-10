// Name: core_stone.cpp_factoryFuncTempleStone_FUN_00562400
// Address: 00562400
// Address Range: [[00562400, 0056241b]]
// Convention: unknown
// Signature: void core_stone_cpp_factoryFuncTempleStone_FUN_00562400(void)

#include "nocturne.h"

void core_stone_cpp_factoryFuncTempleStone_FUN_00562400(void)

{
  CTempleStone *this_ptr;
  
  this_ptr = (CTempleStone *)debugAllocTracked1(0x7d8);
  if (this_ptr == (CTempleStone *)0x0) {
    return;
  }
  core_stone_cpp_CTempleStone_ctor_FUN_00562430(this_ptr);
  return;
}
