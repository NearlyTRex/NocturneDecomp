// Name: core_drip.cpp_CDrip_ctor_FUN_0048e000
// Address: 0048e000
// Address Range: [[0048e000, 0048e0de]]
// Convention: __cdecl
// Signature: CDrip * __cdecl core_drip_cpp_CDrip_ctor_FUN_0048e000(CDrip *this_ptr)

#include "nocturne.h"

CDrip * __cdecl core_drip_cpp_CDrip_ctor_FUN_0048e000(CDrip *this_ptr)

{
  char cVar1;
  CDrip *pCVar2;
  CDrip_ptr_344 this_ptr_00;
  char *pcVar2;
  char *pcVar3;
  
  pCVar2 = (CDrip *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar2->model);
  ADJ(this_ptr_00)->base.vtable._ub = &g_CDripVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"stalag.kfm");
  ADJ(this_ptr_00)->type = DRIP_TYPE_STALAG;
  ADJ(this_ptr_00)->auto_drop = 1;
  (ADJ(this_ptr_00)->vel).z = 0.0;
  (ADJ(this_ptr_00)->vel).y = (ADJ(this_ptr_00)->vel).z;
  (ADJ(this_ptr_00)->vel).x = (ADJ(this_ptr_00)->vel).y;
  ADJ(this_ptr_00)->min_auto_drip_time = 5.0;
  ADJ(this_ptr_00)->max_auto_drip_time = 10.0;
  *(char *)(this_ptr_00[1].part_visibility_flags + 2) = '\0';
  *(char *)((int)(this_ptr_00[1].part_visibility_flags + 2) + 1) = '\0';
  *(char *)((int)(this_ptr_00[1].part_visibility_flags + 2) + 2) = '\0';
  *(char *)((int)(this_ptr_00[1].part_visibility_flags + 2) + 3) = '\0';
  pcVar2 = "rock-x.wav";
  ADJ(this_ptr_00)->drip_radius = 0.0;
  ADJ(this_ptr_00)->damage = 10.0;
  pcVar3 = ADJ(this_ptr_00)->hit_sound;
  ADJ(this_ptr_00)->unk3 = 0;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  ADJ(this_ptr_00)->no_rock_flag = 0;
  return ADJ(this_ptr_00);
}
