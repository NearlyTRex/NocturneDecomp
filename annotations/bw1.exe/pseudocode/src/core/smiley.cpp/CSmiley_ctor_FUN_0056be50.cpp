// Name: core_smiley.cpp_CSmiley_ctor_FUN_0056be50
// Address: 0056be50
// Address Range: [[0056be50, 0056bee7]]
// Convention: __cdecl
// Signature: CSmiley * __cdecl core_smiley_cpp_CSmiley_ctor_FUN_0056be50(CSmiley *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSmiley * __cdecl core_smiley_cpp_CSmiley_ctor_FUN_0056be50(CSmiley *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CSmiley *pCVar3;
  
  pCVar3 = (CSmiley *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CSmileyVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            (&(pCVar3->base).base.model,(char *)0x5f2857);
  pCVar3->attack_cooldown = 0.0;
  pCVar3->guard_distance = 100.0;
  *(uint *)&(pCVar3->base).base.field_0x2fec = 0x3f19999a;
  *(uint *)&(pCVar3->base).base.field_0x2ff0 = 0x3f666666;
  pCVar3->attack_hit_count = 0;
  uVar1 = _DAT_0060594c;
  pCVar3->dismember_hit_count = 0;
  uVar2 = _DAT_00605950;
  pCVar3->dismember_cooldown = 0.0;
  pCVar3->model_variant = 1;
  *(uint *)&(pCVar3->base).base.field_0x2ff4 = uVar1;
  *(uint *)&(pCVar3->base).base.field_0x2ff8 = uVar2;
  return pCVar3;
}
