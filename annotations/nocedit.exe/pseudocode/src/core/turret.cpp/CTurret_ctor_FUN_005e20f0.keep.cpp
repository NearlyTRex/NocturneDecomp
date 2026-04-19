// Name: core_turret.cpp_CTurret_ctor_FUN_005e20f0
// Address: 005e20f0
// MANUAL RECONSTRUCTION
// Address Range: [[005e20f0, 005e2237]]
// Convention: __cdecl
// Signature: CTurret * __cdecl core_turret_cpp_CTurret_ctor_FUN_005e20f0(CTurret *this_ptr)

#include "nocturne.h"

CTurret * __cdecl core_turret_cpp_CTurret_ctor_FUN_005e20f0(CTurret *this_ptr)

{
  CTurret *pCVar2;
  CTurret_ptr_1412 this_ptr_00;
  CVector3f *pCVar3;
  CVector3f local_24;
  CVector3f local_18;

  pCVar2 = (CTurret *)core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar2->model);
  ADJ(this_ptr_00)->base.base.vtable._ub = &g_CTurretVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&ADJ(this_ptr_00)->base.model,"gturret_head.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"gturret_tripod.kfm");
  ADJ(this_ptr_00)->state = TURRET_STATE_IDLE;
  ADJ(this_ptr_00)->activate_event[0] = '\0';
  ADJ(this_ptr_00)->charge_time = 3.0;
  ADJ(this_ptr_00)->patrol_time = 6.0;
  ADJ(this_ptr_00)->power_down_time = 3.0;
  ADJ(this_ptr_00)->fire_delay_time = 0.2;
  ADJ(this_ptr_00)->rotate_deg_per_sec = 30.0;
  ADJ(this_ptr_00)->timer = 0.0;
  ADJ(this_ptr_00)->base.fire_cooldown_timer = 0.0;
  ADJ(this_ptr_00)->guard_zone_box_trigger = (CDemonActor *)0x0;
  strcpy(ADJ(this_ptr_00)->allowed_victim_types,"CCharacter");
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
