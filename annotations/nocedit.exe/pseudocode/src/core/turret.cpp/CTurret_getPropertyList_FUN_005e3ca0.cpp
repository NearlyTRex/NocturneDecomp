// Name: core_turret.cpp_CTurret_getPropertyList_FUN_005e3ca0
// Address: 005e3ca0
// Address Range: [[005e3ca0, 005e3dcc]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_getPropertyList_FUN_005e3ca0(CTurret *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_getPropertyList_FUN_005e3ca0(CTurret *this_ptr,CActorPropertyList *property_list)

{
  core_weapon_cpp_CWeapon_getPropertyList_FUN_005ee9f0(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640
            (property_list,"State",5,g_TurretStateTypePairs,&this_ptr->state);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"Activate event",this_ptr->activate_event);
  core_actor_cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
            (property_list,"Charge time",&this_ptr->charge_time,0.0,99999.0,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
            (property_list,"Patrol time",&this_ptr->patrol_time,0.0,99999.0,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
            (property_list,"Power down time",&this_ptr->power_down_time,0.0,99999.0,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
            (property_list,"Fire delay time",&this_ptr->fire_delay_time,0.0,99999.0,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
            (property_list,"Rotate speed (deg/sec)",&this_ptr->rotate_deg_per_sec,0.0,99999.0
             ,(CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (property_list,"Guard zone box (trigger)",&this_ptr->guard_zone_box_trigger,1,
             "CTrigger",(CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
            (property_list,"Allowed victim types",this_ptr->allowed_victim_types,200,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"canManualAim",&this_ptr->can_manual_aim);
  return;
}
