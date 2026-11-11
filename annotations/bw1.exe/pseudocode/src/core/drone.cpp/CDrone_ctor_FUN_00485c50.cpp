// Name: core_drone.cpp_CDrone_ctor_FUN_00485c50
// Address: 00485c50
// Address Range: [[00485c50, 00485cbf]]
// Convention: __cdecl
// Signature: CDrone * __cdecl core_drone_cpp_CDrone_ctor_FUN_00485c50(CDrone *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDrone * __cdecl core_drone_cpp_CDrone_ctor_FUN_00485c50(CDrone *this_ptr)

{
  float fVar1;
  float fVar2;
  CDrone *pCVar3;
  
  pCVar3 = (CDrone *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CDroneVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            (&(pCVar3->base).base.model,"drone.dfm");
  (pCVar3->base).base.collision_cylinder_height = 0.75;
  fVar1 = _DAT_005ff48c;
  (pCVar3->base).base.collision_cylinder_radius = 1.5;
  fVar2 = _DAT_005ff490;
  (pCVar3->base).base.blood_type = BLOOD_TYPE_ICHOR;
  (pCVar3->base).base.hit_points = 75.0;
  (pCVar3->base).base.ai_detection_range_min = fVar1;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  return pCVar3;
}
