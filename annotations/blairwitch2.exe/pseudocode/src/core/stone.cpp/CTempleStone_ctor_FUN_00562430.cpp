// Name: core_stone.cpp_CTempleStone_ctor_FUN_00562430
// Address: 00562430
// Address Range: [[00562430, 00562451]]
// Convention: __cdecl
// Signature: CTempleStone * __cdecl core_stone_cpp_CTempleStone_ctor_FUN_00562430(CTempleStone *this_ptr)

#include "nocturne.h"

CTempleStone * __cdecl core_stone_cpp_CTempleStone_ctor_FUN_00562430(CTempleStone *this_ptr)

{
  CTempleStone *pCVar1;
  
  pCVar1 = (CTempleStone *)core_boxactor_cpp_CBoxActor_ctor_FUN_0041bd30(&this_ptr->base);
  (pCVar1->base).base.vtable._ub = &g_CTempleStoneVTable;
  pCVar1->dest_actor = (CDemonActor *)0x0;
  return pCVar1;
}
