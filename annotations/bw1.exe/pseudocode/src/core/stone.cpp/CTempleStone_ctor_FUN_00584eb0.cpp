// Name: core_stone.cpp_CTempleStone_ctor_FUN_00584eb0
// Address: 00584eb0
// Address Range: [[00584eb0, 00584ed1]]
// Convention: __cdecl
// Signature: CTempleStone * __cdecl core_stone_cpp_CTempleStone_ctor_FUN_00584eb0(CTempleStone *this_ptr)

#include "nocturne.h"

CTempleStone * __cdecl core_stone_cpp_CTempleStone_ctor_FUN_00584eb0(CTempleStone *this_ptr)

{
  CTempleStone *pCVar1;
  
  pCVar1 = (CTempleStone *)core_boxactor_cpp_CBoxActor_ctor_FUN_00421ca0((CBoxActor *)this_ptr);
  *(byte **)&pCVar1->field_0x154 = &g_CTempleStoneVTable;
  *(uint *)&pCVar1->field_0x678 = 0;
  return pCVar1;
}
