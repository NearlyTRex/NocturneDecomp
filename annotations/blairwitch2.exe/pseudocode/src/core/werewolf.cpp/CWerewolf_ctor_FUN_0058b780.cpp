// Name: core_werewolf.cpp_CWerewolf_ctor_FUN_0058b780
// Address: 0058b780
// Address Range: [[0058b780, 0058b82d]]
// Convention: __cdecl
// Signature: CWerewolf * __cdecl core_werewolf_cpp_CWerewolf_ctor_FUN_0058b780(CWerewolf *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CWerewolf * __cdecl core_werewolf_cpp_CWerewolf_ctor_FUN_0058b780(CWerewolf *this_ptr)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  CWerewolf *pCVar4;
  
  pCVar4 = (CWerewolf *)core_enemy_cpp_CEnemy_ctor_FUN_00487db0(&this_ptr->base);
  (pCVar4->base).base.base.vtable._ub = &g_CWerewolfVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(pCVar4->base).base.model,(char *)0x5ee5fc);
  *(uint *)&(pCVar4->base).base.field_0x3430 = 0x3f800000;
  *(uint *)&(pCVar4->base).base.field_0x3434 = 0x40000000;
  pCVar4->type = WEREWOLF_TYPE_TRAIN;
  pCVar4->light_up_eyes = 1;
  pCVar4->chain_anchor = (CDemonActor *)0x0;
  uVar1 = _DAT_005fe0d0;
  pCVar4->chain_length = 5.0;
  uVar2 = _DAT_005fe0d4;
  pCVar4->alpha1 = (CDemonActor *)0x0;
  fVar3 = 0x41200000;
  pCVar4->alpha2 = (CDemonActor *)0x0;
  pCVar4->phase = 0;
  *(uint *)&(pCVar4->base).base.field_0x3438 = uVar1;
  *(uint *)&(pCVar4->base).base.field_0x343c = uVar2;
  pCVar4->phase_timer = fVar3;
  return pCVar4;
}
