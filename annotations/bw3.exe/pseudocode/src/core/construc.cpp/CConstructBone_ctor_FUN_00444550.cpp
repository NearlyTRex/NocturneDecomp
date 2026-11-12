// Name: core_construc.cpp_CConstructBone_ctor_FUN_00444550
// Address: 00444550
// Address Range: [[00444550, 004445c0]]
// Convention: unknown
// Signature: CConstructBone * core_construc_cpp_CConstructBone_ctor_FUN_00444550(CConstructBone *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CConstructBone * core_construc_cpp_CConstructBone_ctor_FUN_00444550(CConstructBone *this_ptr)

{
  CConstruct *pCVar1;
  CConstructBone *pCVar2;
  float10 fVar3;
  
  pCVar1 = core_construc_cpp_CConstruct_ctor_FUN_00442420(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CConstructBoneVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar1->base).base.model,"bonestruct.dfm");
  (pCVar1->base).base.hit_points = 55.0;
  (pCVar1->base).attack_damage = 15.0;
  (pCVar1->base).pain_threshold = 10.0;
  pCVar1->construct_variant = 1;
  pCVar1->trail_texture_type = 3;
  fVar3 = (float10)(pCVar1->base).base.hit_points;
  pCVar2 = (CConstructBone *)round();
  pCVar1->initial_hit_points = (int)ROUND(fVar3);
  return pCVar2;
}
