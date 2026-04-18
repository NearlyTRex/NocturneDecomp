// Name: core_ammobox.cpp_CAmmoBox_ctor_FUN_004115a0
// Address: 004115a0
// MANUAL RECONSTRUCTION
// Address Range: [[004115a0, 0041164f]]
// Convention: __cdecl
// Signature: CAmmoBox * __cdecl core_ammobox_cpp_CAmmoBox_ctor_FUN_004115a0(CAmmoBox *this_ptr)

#include "nocturne.h"

CAmmoBox * __cdecl core_ammobox_cpp_CAmmoBox_ctor_FUN_004115a0(CAmmoBox *this_ptr)

{
  CAmmoBox *pCVar2;
  CAmmoBox_ptr_344 this_ptr_00;

  pCVar2 = (CAmmoBox *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar2->model);
  ADJ(this_ptr_00)->base.vtable._ub = &g_CAmmoBoxVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"ammobag.kfm");
  strcpy(ADJ(this_ptr_00)->weapon_class_name,"CGun");
  ADJ(this_ptr_00)->ammo_count = 0x14;
  ADJ(this_ptr_00)->ammo_type = AMMOBOX_TYPE_GENERIC;
  ADJ(this_ptr_00)->open_pct = 0.0;
  ADJ(this_ptr_00)->item = (CDemonActor *)0x0;
  ADJ(this_ptr_00)->has_collision = 0;
  ADJ(this_ptr_00)->open_sound[0] = '\0';
  ADJ(this_ptr_00)->is_sound_playing = 0;
  return ADJ(this_ptr_00);
}
