// Name: core_bride.cpp_CBride_ctor_FUN_004238c0
// Address: 004238c0
// Address Range: [[004238c0, 00423939]]
// Convention: unknown
// Signature: CBride * core_bride_cpp_CBride_ctor_FUN_004238c0(CBride *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CBride * core_bride_cpp_CBride_ctor_FUN_004238c0(CBride *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CBride *pCVar3;
  
  pCVar3 = (CBride *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CBrideVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            (&(pCVar3->base).base.model,"bride.dfm");
  *(uint *)&(pCVar3->base).base.field_0x2fec = 0x3f400000;
  *(uint *)&(pCVar3->base).base.field_0x2ff0 = 0x3fc00000;
  uVar1 = _DAT_005fd090;
  *(uint *)&pCVar3->field_0xc290 = 0;
  uVar2 = _DAT_005fd094;
  *(uint *)&(pCVar3->base).base.field_0x252c = 0x3fc90fdb;
  *(uint *)&pCVar3->field_0xc28c = 0;
  *(uint *)&(pCVar3->base).base.field_0x2ff4 = uVar1;
  *(uint *)&(pCVar3->base).base.field_0x2ff8 = uVar2;
  return pCVar3;
}
