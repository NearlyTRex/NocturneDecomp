// Name: core_imp.cpp_CImp_ctor_FUN_004f27f0
// Address: 004f27f0
// Address Range: [[004f27f0, 004f2855]]
// Convention: __cdecl
// Signature: CImp * __cdecl core_imp_cpp_CImp_ctor_FUN_004f27f0(CImp *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CImp * __cdecl core_imp_cpp_CImp_ctor_FUN_004f27f0(CImp *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CImp *pCVar3;
  
  pCVar3 = (CImp *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410((CEnemy *)this_ptr);
  *(byte ***)&pCVar3->field_0x154 = &g_CImpVTable;
  core_skeleton_cpp_FUN_00569f50(&pCVar3->field_0x158,"imp.dfm");
  uVar1 = _DAT_006027e0;
  *(uint *)&pCVar3->field_0x2fec = 0x3f19999a;
  uVar2 = _DAT_006027e4;
  *(uint *)&pCVar3->field_0x2ff0 = 0x3f000000;
  *(uint *)&pCVar3->field_0x27c0 = 0;
  *(uint *)&pCVar3->field_0x2ff4 = uVar1;
  *(uint *)&pCVar3->field_0x2ff8 = uVar2;
  return pCVar3;
}
