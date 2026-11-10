// Name: core_larva.cpp_CLarva_ctor_FUN_004e0580
// Address: 004e0580
// Address Range: [[004e0580, 004e060d]]
// Convention: unknown
// Signature: CLarva * core_larva_cpp_CLarva_ctor_FUN_004e0580(CLarva *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CLarva * core_larva_cpp_CLarva_ctor_FUN_004e0580(CLarva *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CLarva *pCVar3;
  
  pCVar3 = (CLarva *)core_enemy_cpp_CEnemy_ctor_FUN_00487db0(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CLarvaVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(pCVar3->base).base.model,(char *)0x5dbda5);
  *(uint *)&(pCVar3->base).base.field_0x3430 = 0x3e800000;
  *(uint *)&(pCVar3->base).base.field_0x3434 = 0x3f000000;
  (pCVar3->base).base.blood_type = BLOOD_TYPE_ICHOR;
  (pCVar3->base).base.hit_points = 15.0;
  uVar1 = _DAT_005f92c0;
  pCVar3->sfx_handles[0] = 0;
  uVar2 = _DAT_005f92c4;
  pCVar3->sfx_handles[1] = 0;
  *(uint *)&(pCVar3->base).base.field_0x259c = 0x3f490fdb;
  *(uint *)&(pCVar3->base).base.field_0x3438 = uVar1;
  *(uint *)&(pCVar3->base).base.field_0x343c = uVar2;
  return pCVar3;
}
