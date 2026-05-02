// Name: core_manpuz.cpp_CMansionPuzzleCircle_ctor_FUN_00508920
// Address: 00508920
// MANUAL RECONSTRUCTION
// Address Range: [[00508920, 00508a60]]
// Convention: __cdecl
// Signature: CMansionPuzzleCircle * __cdecl core_manpuz_cpp_CMansionPuzzleCircle_ctor_FUN_00508920(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

CMansionPuzzleCircle * __cdecl core_manpuz_cpp_CMansionPuzzleCircle_ctor_FUN_00508920(CMansionPuzzleCircle *this_ptr)

{
  CMansionPuzzleCircle *pCVar2;
  CMansionPuzzleCircle_ptr_344 pCVar3;
  CMansionPuzzleCircle_ptr_724 pCVar4;
  CMansionPuzzleCircle_ptr_1104 pCVar5;
  CMansionPuzzleCircle_ptr_1520 pvVar2;
  CMansionPuzzleCircle_ptr_2720 pvVar3;
  CMansionPuzzleCircle_ptr_4928 pvVar4;
  char *pcVar3;
  
  pCVar2 = (CMansionPuzzleCircle *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar2->panel_model);
  pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&ADJ(pCVar3)->gem_model);
  pCVar5 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&ADJ(pCVar4)->reflector_model);
  pvVar2 = __arrinit(ADJ(pCVar5)->panels,0xc,&g_SPanelTypeInfo);
  pvVar3 = __arrinit(ADJ(pvVar2)->gems,0xc,&g_SGemTypeInfo);
  pvVar4 = __arrinit(ADJ(pvVar3)->reflectors,2,&g_SReflectorTypeInfo);
  ADJ(pvVar4)->base.vtable._ub = &g_CMansionPuzzleCircleVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&ADJ(pvVar4)->panel_model,"doorpuzz.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&ADJ(pvVar4)->gem_model,"puzz-rec.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&ADJ(pvVar4)->reflector_model,"mirrhack.kfm");
  pcVar3 = (ADJ(pvVar4)->light_texture).textures[0].texture_name;
  strcpy(pcVar3,"headlite.raw");
  (ADJ(pvVar4)->gem_pos).z = 0.0;
  (ADJ(pvVar4)->gem_pos).y = (ADJ(pvVar4)->gem_pos).z;
  (ADJ(pvVar4)->gem_pos).x = (ADJ(pvVar4)->gem_pos).y;
  (ADJ(pvVar4)->gem_orient).vec.z = 0.0;
  (ADJ(pvVar4)->gem_orient).vec.y = (ADJ(pvVar4)->gem_orient).vec.z;
  (ADJ(pvVar4)->gem_orient).vec.x = (ADJ(pvVar4)->gem_orient).vec.y;
  (ADJ(pvVar4)->emitter_pos).f.z = 0.0;
  (ADJ(pvVar4)->emitter_pos).f.y = (ADJ(pvVar4)->emitter_pos).f.z;
  (ADJ(pvVar4)->emitter_pos).f.x = (ADJ(pvVar4)->emitter_pos).f.y;
  core_manpuz_cpp_CMansionPuzzleCircle_initPuzzleState_FUN_005098f0(ADJ(pvVar4));
  return ADJ(pvVar4);
}
