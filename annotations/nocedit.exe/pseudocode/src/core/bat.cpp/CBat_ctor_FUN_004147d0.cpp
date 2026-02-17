// Name: core_bat.cpp_CBat_ctor_FUN_004147d0
// Address: 004147d0
// Address Range: [[004147d0, 0041489f]]
// Convention: __cdecl
// Signature: CBat * __cdecl core_bat_cpp_CBat_ctor_FUN_004147d0(CBat *this_ptr)

#include "nocturne.h"

CBat * __cdecl core_bat_cpp_CBat_ctor_FUN_004147d0(CBat *this_ptr)

{
  char cVar1;
  CBat *pCVar2;
  CBat_ptr_376 pCVar3;
  CBat_ptr_392 this_ptr_00;
  char *pcVar2;
  char *pcVar3;
  
  pCVar2 = (CBat *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  pCVar3 = core_course_cpp_CCourse_ctor_FUN_004424c0(&pCVar2->course);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&ADJ(pCVar3)->model);
  ADJ(this_ptr_00)->base.vtable._ub = &g_CBatVTable;
  ADJ(this_ptr_00)->anim_frame = 0.0;
  ADJ(this_ptr_00)->param = 0.0;
  pcVar2 = "batpath.pth";
  ADJ(this_ptr_00)->course_speed = 30.0;
  ADJ(this_ptr_00)->speed = 1.0;
  pcVar3 = ADJ(this_ptr_00)->course_filename;
  ADJ(this_ptr_00)->flap_speed = 30.0;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(this_ptr_00,"bat.kfm");
  ADJ(this_ptr_00)->periodic_sound[0] = '\0';
  ADJ(this_ptr_00)->periodic_sound_timer_min = 15.0;
  ADJ(this_ptr_00)->periodic_sound_timer_max = 30.0;
  ADJ(this_ptr_00)->sound_timer = 0.0;
  return ADJ(this_ptr_00);
}
