// Name: core_turret.cpp_CTurret_ctor_FUN_005e20f0
// Address: 005e20f0
// Address Range: [[005e20f0, 005e2237]]
// Convention: __cdecl
// Signature: CTurret * __cdecl core_turret_cpp_CTurret_ctor_FUN_005e20f0(CTurret *this_ptr)

#include "nocturne.h"

CTurret * __cdecl core_turret_cpp_CTurret_ctor_FUN_005e20f0(CTurret *this_ptr)

{
  char cVar2;
  CTurret *pCVar2;
  CTurret_ptr_1412 this_ptr_00;
  CVector3f *pCVar3;
  char *pcVar4;
  char *pcVar5;
  CVector3f local_24;
  CVector3f local_18;
  char cVar1;
  
  pCVar2 = (CTurret *)core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar2->model);
  ADJ(this_ptr_00)->base.base.vtable._ub = &g_CTurretVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&ADJ(this_ptr_00)->base.model,"gturret_head.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"gturret_tripod.kfm");
  ADJ(this_ptr_00)->state = 0;
  ADJ(this_ptr_00)->activate_event[0] = '\0';
  ADJ(this_ptr_00)->charge_time = 3.0;
  ADJ(this_ptr_00)->patrol_time = 6.0;
  ADJ(this_ptr_00)->power_down_time = 3.0;
  ADJ(this_ptr_00)->fire_delay_time = 0.2;
  ADJ(this_ptr_00)->rotate_deg_per_sec = 30.0;
  pcVar4 = "CCharacter";
  ADJ(this_ptr_00)->timer = 0.0;
  ADJ(this_ptr_00)->base.fire_cooldown_timer = 0.0;
  pcVar5 = ADJ(this_ptr_00)->allowed_victim_types;
  ADJ(this_ptr_00)->guard_zone_box_trigger = (CDemonActor *)0x0;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  local_18.x = 0.0;
  local_18.y = 0.0;
  local_18.z = 1.0;
  pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     ((CDemonActor *)ADJ(this_ptr_00),&local_24,&local_18);
  if (&ADJ(this_ptr_00)->patrol_target != pCVar3) {
    (ADJ(this_ptr_00)->patrol_target).x = pCVar3->x;
    (ADJ(this_ptr_00)->patrol_target).y = pCVar3->y;
    (ADJ(this_ptr_00)->patrol_target).z = pCVar3->z;
  }
  ADJ(this_ptr_00)->user = (CDemonActor *)0x0;
  ADJ(this_ptr_00)->fire_sound_timer = 0.0;
  ADJ(this_ptr_00)->can_manual_aim = 0;
  return ADJ(this_ptr_00);
}
