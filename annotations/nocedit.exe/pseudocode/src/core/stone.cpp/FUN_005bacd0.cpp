// Name: core_stone.cpp_FUN_005bacd0
// Address: 005bacd0
// Address Range: [[005bacd0, 005bacf2]]
// Convention: unknown
// Signature: undefined core_stone.cpp_FUN_005bacd0()

#include "nocturne.h"

void core_stone_cpp_FUN_005bacd0(void)

{
  CTempleStone *this_ptr;
  
  this_ptr = (CTempleStone *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x670,"..\\core\\stone.cpp",0x1e);
  if (this_ptr == (CTempleStone *)0x0) {
    return;
  }
  core_stone_cpp_CTempleStone_ctor_FUN_005bad10(this_ptr);
  return;
}
