// Name: core_gargoyle.cpp_CGargoyle_ctor_FUN_004bfae0
// Address: 004bfae0
// Address Range: [[004bfae0, 004bfbd1]]
// Convention: __cdecl
// Signature: CGargoyle * __cdecl core_gargoyle_cpp_CGargoyle_ctor_FUN_004bfae0(CGargoyle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CGargoyle * __cdecl core_gargoyle_cpp_CGargoyle_ctor_FUN_004bfae0(CGargoyle *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CGargoyle *pCVar3;
  
  pCVar3 = (CGargoyle *)core_enemy_cpp_CEnemy_ctor_FUN_00487db0((CEnemy *)this_ptr);
  *(byte **)&pCVar3->field_0x2b0 = &g_CGargoyleVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar3->field_0x2b4,"gargoyle.dfm");
  *(uint *)&pCVar3->field_0x3430 = 0x3f19999a;
  *(uint *)&pCVar3->field_0x3434 = 0x3f19999a;
  *(uint *)&pCVar3->field_0x280c = 2;
  *(uint *)&pCVar3->field_0x25a8 = 0x41f00000;
  *(uint *)&pCVar3->field_0x108 = 0xffff;
  *(uint *)&pCVar3->field_0x10c = 0xffff;
  *(uint *)&pCVar3->field_0x110 = 0xffff;
  *(uint *)&pCVar3->field_0x10b40 = 0xffff;
  *(uint *)&pCVar3->field_0x10b44 = 0xffff;
  *(uint *)&pCVar3->field_0x10b48 = 0xffff;
  *(uint *)&pCVar3->field_0x10b28 = 0x80;
  *(uint *)&pCVar3->field_0x10b2c = 0x80;
  *(uint *)&pCVar3->field_0x10b30 = 0x80;
  *(uint *)&pCVar3->field_0x10b34 = 0;
  uVar1 = _DAT_005f75e0;
  *(uint *)&pCVar3->field_0x10b4c = 0;
  uVar2 = _DAT_005f75e4;
  *(uint *)&pCVar3->field_0x10b50 = 0;
  *(uint *)&pCVar3->field_0x282c = 0;
  *(uint *)&pCVar3->field_0x3438 = uVar1;
  *(uint *)&pCVar3->field_0x343c = uVar2;
  return pCVar3;
}
