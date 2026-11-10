// Name: core_shadowsc.cpp_CShadowsc_ctor_FUN_005604a0
// Address: 005604a0
// Address Range: [[005604a0, 0056050f]]
// Convention: unknown
// Signature: CShadowsc * core_shadowsc_cpp_CShadowsc_ctor_FUN_005604a0(CShadowsc *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CShadowsc * core_shadowsc_cpp_CShadowsc_ctor_FUN_005604a0(CShadowsc *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CShadowsc *pCVar3;
  
  pCVar3 = (CShadowsc *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410((CEnemy *)this_ptr);
  ((UActorVTable *)&pCVar3->field_0x154)->_ub = &g_CShadowscVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            ((CDeformableModelInstance *)&pCVar3->field_0x158,"shadowscorp.dfm");
  *(uint *)&pCVar3->field_0x2fec = 0x3fe00000;
  uVar1 = _DAT_00605340;
  *(uint *)&pCVar3->field_0x2ff0 = 0x40600000;
  uVar2 = _DAT_00605344;
  *(uint *)&pCVar3->field_0xc27c = 0;
  *(uint *)&pCVar3->field_0xc284 = 0;
  *(uint *)&pCVar3->field_0x2ff4 = uVar1;
  *(uint *)&pCVar3->field_0x2ff8 = uVar2;
  return pCVar3;
}
