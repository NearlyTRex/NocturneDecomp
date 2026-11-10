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
  
  pCVar3 = (CImp *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CImpVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            (&(pCVar3->base).base.model,"imp.dfm");
  uVar1 = _DAT_006027e0;
  *(uint *)&(pCVar3->base).base.field_0x2fec = 0x3f19999a;
  uVar2 = _DAT_006027e4;
  *(uint *)&(pCVar3->base).base.field_0x2ff0 = 0x3f000000;
  (pCVar3->base).base.gun_flame_ignitable = 0;
  *(uint *)&(pCVar3->base).base.field_0x2ff4 = uVar1;
  *(uint *)&(pCVar3->base).base.field_0x2ff8 = uVar2;
  return pCVar3;
}
