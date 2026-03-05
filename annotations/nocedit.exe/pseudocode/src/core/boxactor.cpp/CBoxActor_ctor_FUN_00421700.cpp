// Name: core_boxactor.cpp_CBoxActor_ctor_FUN_00421700
// Address: 00421700
// Address Range: [[00421700, 00421825]]
// Convention: __cdecl
// Signature: CBoxActor * __cdecl core_boxactor_cpp_CBoxActor_ctor_FUN_00421700(CBoxActor *this_ptr)

#include "nocturne.h"

CBoxActor * __cdecl core_boxactor_cpp_CBoxActor_ctor_FUN_00421700(CBoxActor *this_ptr)

{
  CBoxActor *pCVar1;
  CBoxActor_ptr_344 pCVar2;
  CBoxActor_ptr_916 pCVar3;
  
  pCVar1 = (CBoxActor *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar1->model);
  pCVar3 = core_box_cpp_CBox_ctor_FUN_0041dc50(&ADJ(pCVar2)->physics_box);
  ADJ(pCVar3)->base.vtable._ub = &g_CBoxActorVTable;
  ADJ(pCVar3)->weight_in_pounds = 0.0;
  ADJ(pCVar3)->fps = 20.0;
  ADJ(pCVar3)->anim_frame = 0.0;
  (ADJ(pCVar3)->rpm).z = 0.0;
  (ADJ(pCVar3)->rpm).y = (ADJ(pCVar3)->rpm).z;
  (ADJ(pCVar3)->rpm).x = (ADJ(pCVar3)->rpm).y;
  ADJ(pCVar3)->loop_wav_name[0] = '\0';
  ADJ(pCVar3)->collision_wav_name[0] = '\0';
  ADJ(pCVar3)->sfx_handle = 0;
  ADJ(pCVar3)->pickup_type = 0;
  ADJ(pCVar3)->can_be_pushed = 0;
  ADJ(pCVar3)->carrier_actor = (CDemonActor *)0x0;
  ADJ(pCVar3)->pushed_by_actor = (CDemonActor *)0x0;
  ADJ(pCVar3)->push_sound[0] = '\0';
  ADJ(pCVar3)->constrain_extents_actor = (CDemonActor *)0x0;
  ADJ(pCVar3)->ground_type = GROUND_TYPE_DEFAULT;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&ADJ(pCVar3)->model,"question.kfm");
  pCVar3->is_valid = -1;
  ADJ(pCVar3)->plot_in_shadow_flag = 1;
  ADJ(pCVar3)->collision_flag = 1;
  ADJ(pCVar3)->dont_use_normals = 0;
  ADJ(pCVar3)->use_event[0] = '\0';
  ADJ(pCVar3)->allowed_melee_attack_types = 0;
  ADJ(pCVar3)->block_virtual_director_flag = 0;
  return ADJ(pCVar3);
}
