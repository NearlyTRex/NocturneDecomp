// Name: core_stone.cpp_CTempleStone_ctor_FUN_00568920
// Address: 00568920
// Address Range: [[00568920, 00568941]]
// Convention: __cdecl
// Signature: CTempleStone * __cdecl core_stone_cpp_CTempleStone_ctor_FUN_00568920(CTempleStone *this_ptr)

#include "nocturne.h"

CTempleStone * __cdecl core_stone_cpp_CTempleStone_ctor_FUN_00568920(CTempleStone *this_ptr)

{
  CTempleStone *pCVar1;
  
  pCVar1 = (CTempleStone *)core_boxactor_cpp_CBoxActor_ctor_FUN_0041efe0((CBoxActor *)this_ptr);
  *(byte **)&pCVar1->field_0x154 = &g_CTempleStoneVTable;
  *(uint *)&pCVar1->field_0x6e8 = 0;
  return pCVar1;
}
