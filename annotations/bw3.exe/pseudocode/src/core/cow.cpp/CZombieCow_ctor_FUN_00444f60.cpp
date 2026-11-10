// Name: core_cow.cpp_CZombieCow_ctor_FUN_00444f60
// Address: 00444f60
// Address Range: [[00444f60, 00444fcf]]
// Convention: unknown
// Signature: CZombieCow * core_cow_cpp_CZombieCow_ctor_FUN_00444f60(CZombieCow *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CZombieCow * core_cow_cpp_CZombieCow_ctor_FUN_00444f60(CZombieCow *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CZombieCow *pCVar3;
  
  pCVar3 = (CZombieCow *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CZombieCowVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar3->base).base.model,(char *)0x5b98b0);
  *(uint *)&(pCVar3->base).base.field_0x326c = 0x3fe00000;
  uVar1 = _DAT_005ddbac;
  *(uint *)&(pCVar3->base).base.field_0x3270 = 0x40600000;
  uVar2 = _DAT_005ddbb0;
  pCVar3->sfx_handle = 0;
  *(uint *)&(pCVar3->base).base.field_0x252c = 0x3f490fdb;
  *(uint *)&(pCVar3->base).base.field_0x3274 = uVar1;
  *(uint *)&(pCVar3->base).base.field_0x3278 = uVar2;
  return pCVar3;
}
