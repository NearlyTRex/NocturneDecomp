// Name: core_stone.cpp_CTempleStone_ctor_FUN_00562430
// Address: 00562430
// Address Range: [[00562430, 00562451]]
// Convention: __cdecl
// Signature: CTempleStone * __cdecl core_stone_cpp_CTempleStone_ctor_FUN_00562430(CTempleStone *this_ptr)

#include "nocturne.h"

CTempleStone * __cdecl core_stone_cpp_CTempleStone_ctor_FUN_00562430(CTempleStone *this_ptr)

{
  CTempleStone *pCVar1;
  
  pCVar1 = (CTempleStone *)core_boxactor_cpp_CBoxActor_ctor_FUN_0041bd30((CBoxActor *)this_ptr);
  *(byte **)&pCVar1->field_0x2b0 = &g_CTempleStoneVTable;
  *(uint *)&pCVar1->field_0x7d4 = 0;
  return pCVar1;
}
