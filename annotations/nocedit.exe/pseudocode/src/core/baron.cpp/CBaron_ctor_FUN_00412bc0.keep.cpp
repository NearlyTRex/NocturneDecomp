// Name: core_baron.cpp_CBaron_ctor_FUN_00412bc0
// Address: 00412bc0
// MANUAL RECONSTRUCTION
// Address Range: [[00412bc0, 00412ca1]]
// Convention: __cdecl
// Signature: CBaron * __cdecl core_baron_cpp_CBaron_ctor_FUN_00412bc0(CBaron *this_ptr)

#include "nocturne.h"

CBaron * __cdecl core_baron_cpp_CBaron_ctor_FUN_00412bc0(CBaron *this_ptr)

{
  CBaron *pCVar2;

  pCVar2 = (CBaron *)core_hero_cpp_CHero_ctor_FUN_004f2340(&this_ptr->base);
  (pCVar2->base).base.base.vtable._ub = &g_CBaronVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar2->base).base.model,"baron.dfm");
  pCVar2->head_blend_weight = 1.0;
  (pCVar2->head_rotation).x = 0.0;
  (pCVar2->head_rotation).y = 0.0;
  (pCVar2->head_rotation).z = 0.0;
  pCVar2->target_actor = (CDemonActor *)0x0;
  pCVar2->new_attack = 0;
  (pCVar2->base).base.base.is_transparent = 1;
  pCVar2->summoned = 0;
  strcpy(pCVar2->summon_event,"none");
  strcpy(pCVar2->go_away_event,"none");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&g_CKeyFramedModelInstanceInstance,"baronshell.kfm");
  pCVar2->shell_visible = 0;
  return pCVar2;
}
