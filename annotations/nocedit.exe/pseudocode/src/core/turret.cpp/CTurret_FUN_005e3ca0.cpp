// Name: core_turret.cpp_CTurret_FUN_005e3ca0
// Address: 005e3ca0
// Address Range: [[005e3ca0, 005e3dcc]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_FUN_005e3ca0(CTurret *this_ptr)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_FUN_005e3ca0(CTurret *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  
  core_weapon_cpp_CWeapon_getPropertyList_FUN_005ee9f0(&this_ptr->base,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640
            (in_stack_00000008,"State",5,(int *)&PTR_s_Inactive_00684414);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (in_stack_00000008,"Activate event",this_ptr->unk2);
  core_actor_cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
            (in_stack_00000008,"Charge time",&this_ptr->charge_time,0.0,99999.0,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
            (in_stack_00000008,"Patrol time",&this_ptr->patrol_time,0.0,99999.0,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
            (in_stack_00000008,"Power down time",&this_ptr->power_down_time,0.0,99999.0,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
            (in_stack_00000008,"Fire delay time",&this_ptr->fire_delay_time,0.0,99999.0,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
            (in_stack_00000008,"Rotate speed (deg/sec)",&this_ptr->rotate_deg_per_sec,0.0,
             99999.0,(CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (in_stack_00000008,"Guard zone box (trigger)",this_ptr->unk3,1,
             "CTrigger",(CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
            (in_stack_00000008,"Allowed victim types",this_ptr->unk3 + 4,200,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (in_stack_00000008,"canManualAim",&this_ptr->can_manual_aim);
  return;
}
