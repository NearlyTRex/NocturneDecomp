// Name: core_beast.cpp_CBeast_ctor_FUN_00414a00
// Address: 00414a00
// Address Range: [[00414a00, 00414a5b]]
// Convention: __cdecl
// Signature: CBeast * __cdecl core_beast_cpp_CBeast_ctor_FUN_00414a00(CBeast *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBeast * __cdecl core_beast_cpp_CBeast_ctor_FUN_00414a00(CBeast *this_ptr)

{
  float fVar1;
  float fVar2;
  CEnemy *pCVar3;
  
  pCVar3 = core_enemy_cpp_CEnemy_ctor_FUN_00487db0(&this_ptr->base);
  (pCVar3->base).base.vtable._ub = &g_CBeastVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(pCVar3->base).model,"beast.dfm");
  fVar2 = _DAT_005f336c;
  fVar1 = _DAT_005f3368;
  (pCVar3->base).collision_cylinder_height = 10.0;
  (pCVar3->base).collision_cylinder_radius = 10.0;
  (pCVar3->base).ai_detection_range_min = fVar1;
  (pCVar3->base).ai_detection_range_max = fVar2;
  return (CBeast *)pCVar3;
}
