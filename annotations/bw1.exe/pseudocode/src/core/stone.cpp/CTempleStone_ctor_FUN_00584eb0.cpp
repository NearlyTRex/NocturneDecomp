// Name: core_stone.cpp_CTempleStone_ctor_FUN_00584eb0
// Address: 00584eb0
// Address Range: [[00584eb0, 00584ed1]]
// Convention: __cdecl
// Signature: CTempleStone * __cdecl core_stone_cpp_CTempleStone_ctor_FUN_00584eb0(CTempleStone *this_ptr)

#include "nocturne.h"

CTempleStone * __cdecl core_stone_cpp_CTempleStone_ctor_FUN_00584eb0(CTempleStone *this_ptr)

{
  CTempleStone *pCVar1;
  
  pCVar1 = (CTempleStone *)core_boxactor_cpp_CBoxActor_ctor_FUN_00421ca0(&this_ptr->base);
  (pCVar1->base).base.vtable._ub = &g_CTempleStoneVTable;
  pCVar1->dest_actor = (CDemonActor *)0x0;
  return pCVar1;
}
