// Name: core_beast.cpp_CBeast_ctor_FUN_00415050
// Address: 00415050
// Address Range: [[00415050, 004150ab]]
// Convention: __cdecl
// Signature: CBeast * __cdecl core_beast_cpp_CBeast_ctor_FUN_00415050(CBeast *this_ptr)

#include "nocturne.h"

CBeast * __cdecl core_beast_cpp_CBeast_ctor_FUN_00415050(CBeast *this_ptr)

{
  float fVar1;
  float fVar2;
  CEnemy *pCVar3;
  
  pCVar3 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(&this_ptr->base);
  (pCVar3->base).base.vtable._ub = &g_CBeastVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (&(pCVar3->base).model,"beast.dfm");
  fVar2 = 100.0f;
  fVar1 = 100.0f;
  (pCVar3->base).collision_cylinder_height = 10.0;
  (pCVar3->base).collision_cylinder_radius = 10.0;
  (pCVar3->base).ai_detection_range_min = fVar1;
  (pCVar3->base).ai_detection_range_max = fVar2;
  return (CBeast *)pCVar3;
}
