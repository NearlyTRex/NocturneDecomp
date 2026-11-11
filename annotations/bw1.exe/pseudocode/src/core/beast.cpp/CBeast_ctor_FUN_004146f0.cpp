// Name: core_beast.cpp_CBeast_ctor_FUN_004146f0
// Address: 004146f0
// Address Range: [[004146f0, 0041474b]]
// Convention: __cdecl
// Signature: CBeast * __cdecl core_beast_cpp_CBeast_ctor_FUN_004146f0(CBeast *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBeast * __cdecl core_beast_cpp_CBeast_ctor_FUN_004146f0(CBeast *this_ptr)

{
  float fVar1;
  float fVar2;
  CEnemy *pCVar3;
  
  pCVar3 = core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  (pCVar3->base).base.vtable._ub = &g_CBeastVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            (&(pCVar3->base).model,"beast.dfm");
  fVar2 = _DAT_005fc42c;
  fVar1 = _DAT_005fc428;
  (pCVar3->base).collision_cylinder_height = 10.0;
  (pCVar3->base).collision_cylinder_radius = 10.0;
  (pCVar3->base).ai_detection_range_min = fVar1;
  (pCVar3->base).ai_detection_range_max = fVar2;
  return (CBeast *)pCVar3;
}
