// Name: core_smiley.cpp_CSmiley_ctor_FUN_005497d0
// Address: 005497d0
// Address Range: [[005497d0, 00549867]]
// Convention: __cdecl
// Signature: CSmiley * __cdecl core_smiley_cpp_CSmiley_ctor_FUN_005497d0(CSmiley *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSmiley * __cdecl core_smiley_cpp_CSmiley_ctor_FUN_005497d0(CSmiley *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CSmiley *pCVar3;
  
  pCVar3 = (CSmiley *)core_enemy_cpp_CEnemy_ctor_FUN_00487db0(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CSmileyVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(pCVar3->base).base.model,(char *)0x5e765d);
  pCVar3->attack_cooldown = 0.0;
  pCVar3->guard_distance = 100.0;
  *(uint *)&(pCVar3->base).base.field_0x3430 = 0x3f19999a;
  *(uint *)&(pCVar3->base).base.field_0x3434 = 0x3f666666;
  pCVar3->attack_hit_count = 0;
  uVar1 = _DAT_005fba5c;
  pCVar3->dismember_hit_count = 0;
  uVar2 = _DAT_005fba60;
  pCVar3->dismember_cooldown = 0.0;
  pCVar3->model_variant = 1;
  *(uint *)&(pCVar3->base).base.field_0x3438 = uVar1;
  *(uint *)&(pCVar3->base).base.field_0x343c = uVar2;
  return pCVar3;
}
