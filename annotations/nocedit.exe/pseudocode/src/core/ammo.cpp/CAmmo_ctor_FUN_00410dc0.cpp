// Name: core_ammo.cpp_CAmmo_ctor_FUN_00410dc0
// Address: 00410dc0
// Address Range: [[00410dc0, 00410e40]]
// Convention: __cdecl
// Signature: CAmmo * __cdecl core_ammo_cpp_CAmmo_ctor_FUN_00410dc0(CAmmo *this_ptr)

#include "nocturne.h"

CAmmo * __cdecl core_ammo_cpp_CAmmo_ctor_FUN_00410dc0(CAmmo *this_ptr)

{
  char cVar1;
  CAmmo *pCVar2;
  CAmmo_ptr_344 this_ptr_00;
  char *pcVar2;
  char *pcVar3;
  
  pCVar2 = (CAmmo *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar2->model);
  ADJ(this_ptr_00)->base.vtable._ub = &g_CAmmoVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"bullet.kfm");
  pcVar2 = "CGun";
  pcVar3 = ADJ(this_ptr_00)->weapon_class_name;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  ADJ(this_ptr_00)->ammo_count = 0x14;
  ADJ(this_ptr_00)->ammo_type = AMMO_TYPE_GENERIC;
  return ADJ(this_ptr_00);
}
