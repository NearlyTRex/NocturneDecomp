// Name: core_yow.cpp_CYow_ctor_FUN_005b8160
// Address: 005b8160
// Address Range: [[005b8160, 005b81c5]]
// Convention: unknown
// Signature: CYow * core_yow_cpp_CYow_ctor_FUN_005b8160(CYow *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CYow * core_yow_cpp_CYow_ctor_FUN_005b8160(CYow *this_ptr)

{
  float fVar1;
  float fVar2;
  CYow *pCVar3;
  
  pCVar3 = (CYow *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CYowVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            (&(pCVar3->base).base.model,"blackdog.dfm");
  fVar1 = _DAT_00608210;
  (pCVar3->base).base.collision_cylinder_height = 0.75;
  fVar2 = _DAT_00608214;
  (pCVar3->base).base.collision_cylinder_radius = 1.5;
  pCVar3->sfx_handle = 0;
  (pCVar3->base).base.ai_detection_range_min = fVar1;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  return pCVar3;
}
