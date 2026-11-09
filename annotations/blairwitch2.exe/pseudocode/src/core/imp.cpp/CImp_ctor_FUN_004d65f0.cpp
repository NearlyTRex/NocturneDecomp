// Name: core_imp.cpp_CImp_ctor_FUN_004d65f0
// Address: 004d65f0
// Address Range: [[004d65f0, 004d6655]]
// Convention: __cdecl
// Signature: CImp * __cdecl core_imp_cpp_CImp_ctor_FUN_004d65f0(CImp *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CImp * __cdecl core_imp_cpp_CImp_ctor_FUN_004d65f0(CImp *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CImp *pCVar3;
  
  pCVar3 = (CImp *)core_enemy_cpp_CEnemy_ctor_FUN_00487db0((CEnemy *)this_ptr);
  *(byte **)&pCVar3->field_0x2b0 = &g_CImpVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar3->field_0x2b4,(char *)0x5da92e);
  uVar1 = _DAT_005f8d60;
  *(uint *)&pCVar3->field_0x3430 = 0x3f19999a;
  uVar2 = _DAT_005f8d64;
  *(uint *)&pCVar3->field_0x3434 = 0x3f000000;
  *(uint *)&pCVar3->field_0x282c = 0;
  *(uint *)&pCVar3->field_0x3438 = uVar1;
  *(uint *)&pCVar3->field_0x343c = uVar2;
  return pCVar3;
}
