// Name: core_batcreat.cpp_CBatCreature_ctor_FUN_00411210
// Address: 00411210
// Address Range: [[00411210, 00411275]]
// Convention: unknown
// Signature: CBatCreature * core_batcreat_cpp_CBatCreature_ctor_FUN_00411210(CBatCreature *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CBatCreature * core_batcreat_cpp_CBatCreature_ctor_FUN_00411210(CBatCreature *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CBatCreature *pCVar3;
  
  pCVar3 = (CBatCreature *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CBatCreatureVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            (&(pCVar3->base).base.model,"batcreat.dfm");
  uVar1 = _DAT_005fbfd0;
  *(uint *)&(pCVar3->base).base.field_0x2fec = 0x3f19999a;
  uVar2 = _DAT_005fbfd4;
  *(uint *)&(pCVar3->base).base.field_0x2ff0 = 0x3fc00000;
  *(uint *)&pCVar3->field_0xc268 = 0;
  *(uint *)&(pCVar3->base).base.field_0x2ff4 = uVar1;
  *(uint *)&(pCVar3->base).base.field_0x2ff8 = uVar2;
  return pCVar3;
}
