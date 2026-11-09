// Name: core_imp.cpp_CImp_ctor_FUN_004d6700
// Address: 004d6700
// Address Range: [[004d6700, 004d6765]]
// Convention: __cdecl
// Signature: CImp * __cdecl core_imp_cpp_CImp_ctor_FUN_004d6700(CImp *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CImp * __cdecl core_imp_cpp_CImp_ctor_FUN_004d6700(CImp *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CImp *pCVar3;
  
  pCVar3 = (CImp *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0((CEnemy *)this_ptr);
  *(byte ***)&pCVar3->field_0x154 = &g_CImpVTable;
  core_skeleton_cpp_FUN_0054eae0(&pCVar3->field_0x158,0x5c5455);
  uVar1 = _DAT_005e1ef0;
  *(uint *)&pCVar3->field_0x326c = 0x3f19999a;
  uVar2 = _DAT_005e1ef4;
  *(uint *)&pCVar3->field_0x3270 = 0x3f000000;
  *(uint *)&pCVar3->field_0x27c0 = 0;
  *(uint *)&pCVar3->field_0x3274 = uVar1;
  *(uint *)&pCVar3->field_0x3278 = uVar2;
  return pCVar3;
}
