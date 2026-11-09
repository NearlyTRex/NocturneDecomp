// Name: core_gargoyle.cpp_CGargoyle_ctor_FUN_004c4de0
// Address: 004c4de0
// Address Range: [[004c4de0, 004c4ed1]]
// Convention: __cdecl
// Signature: CGargoyle * __cdecl core_gargoyle_cpp_CGargoyle_ctor_FUN_004c4de0(CGargoyle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CGargoyle * __cdecl core_gargoyle_cpp_CGargoyle_ctor_FUN_004c4de0(CGargoyle *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CGargoyle *pCVar3;
  
  pCVar3 = (CGargoyle *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0((CEnemy *)this_ptr);
  *(byte ***)&pCVar3->field_0x154 = &g_CGargoyleVTable;
  core_skeleton_cpp_FUN_0054eae0(&pCVar3->field_0x158,"gargoyle.dfm");
  *(uint *)&pCVar3->field_0x326c = 0x3f19999a;
  *(uint *)&pCVar3->field_0x3270 = 0x3f19999a;
  *(uint *)&pCVar3->field_0x27a0 = 2;
  *(uint *)&pCVar3->field_0x2538 = 0x41f00000;
  *(uint *)&pCVar3->field_0x108 = 0xffff;
  *(uint *)&pCVar3->field_0x10c = 0xffff;
  *(uint *)&pCVar3->field_0x110 = 0xffff;
  *(uint *)&pCVar3->field_0xd09c = 0xffff;
  *(uint *)&pCVar3->field_0xd0a0 = 0xffff;
  *(uint *)&pCVar3->field_0xd0a4 = 0xffff;
  *(uint *)&pCVar3->field_0xd084 = 0x80;
  *(uint *)&pCVar3->field_0xd088 = 0x80;
  *(uint *)&pCVar3->field_0xd08c = 0x80;
  *(uint *)&pCVar3->field_0xd090 = 0;
  uVar1 = _DAT_005e0770;
  *(uint *)&pCVar3->field_0xd0a8 = 0;
  uVar2 = _DAT_005e0774;
  *(uint *)&pCVar3->field_0xd0ac = 0;
  *(uint *)&pCVar3->field_0x27c0 = 0;
  *(uint *)&pCVar3->field_0x3274 = uVar1;
  *(uint *)&pCVar3->field_0x3278 = uVar2;
  return pCVar3;
}
