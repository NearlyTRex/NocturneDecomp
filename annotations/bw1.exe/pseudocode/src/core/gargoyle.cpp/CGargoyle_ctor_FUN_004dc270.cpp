// Name: core_gargoyle.cpp_CGargoyle_ctor_FUN_004dc270
// Address: 004dc270
// Address Range: [[004dc270, 004dc361]]
// Convention: __cdecl
// Signature: CGargoyle * __cdecl core_gargoyle_cpp_CGargoyle_ctor_FUN_004dc270(CGargoyle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CGargoyle * __cdecl core_gargoyle_cpp_CGargoyle_ctor_FUN_004dc270(CGargoyle *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CGargoyle *pCVar3;
  
  pCVar3 = (CGargoyle *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410((CEnemy *)this_ptr);
  *(byte ***)&pCVar3->field_0x154 = &g_CGargoyleVTable;
  core_skeleton_cpp_FUN_00569f50(&pCVar3->field_0x158,"gargoyle.dfm");
  *(uint *)&pCVar3->field_0x2fec = 0x3f19999a;
  *(uint *)&pCVar3->field_0x2ff0 = 0x3f19999a;
  *(uint *)&pCVar3->field_0x27a0 = 2;
  *(uint *)&pCVar3->field_0x2538 = 0x41f00000;
  *(uint *)&pCVar3->field_0x108 = 0xffff;
  *(uint *)&pCVar3->field_0x10c = 0xffff;
  *(uint *)&pCVar3->field_0x110 = 0xffff;
  *(uint *)&pCVar3->field_0xc2b0 = 0xffff;
  *(uint *)&pCVar3->field_0xc2b4 = 0xffff;
  *(uint *)&pCVar3->field_0xc2b8 = 0xffff;
  *(uint *)&pCVar3->field_0xc298 = 0x80;
  *(uint *)&pCVar3->field_0xc29c = 0x80;
  *(uint *)&pCVar3->field_0xc2a0 = 0x80;
  *(uint *)&pCVar3->field_0xc2a4 = 0;
  uVar1 = _DAT_00601000;
  *(uint *)&pCVar3->field_0xc2bc = 0;
  uVar2 = _DAT_00601004;
  *(uint *)&pCVar3->field_0xc2c0 = 0;
  *(uint *)&pCVar3->field_0x27c0 = 0;
  *(uint *)&pCVar3->field_0x2ff4 = uVar1;
  *(uint *)&pCVar3->field_0x2ff8 = uVar2;
  return pCVar3;
}
