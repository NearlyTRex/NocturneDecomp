// Name: core_door.cpp_CDoor_getPropertyList_FUN_00481320
// Address: 00481320
// Address Range: [[00481320, 00481586]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_CDoor_getPropertyList_FUN_00481320(CDoor *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_door_cpp_CDoor_getPropertyList_FUN_00481320(CDoor *this_ptr,CActorPropertyList *property_list)

{
  char *property_name;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
            (property_list,"Model file (.kfm)",&this_ptr->model,0);
  core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640
            (property_list,"Door type",4,(int *)&PTR_s_Normal_00670300);
  if (this_ptr->door_type == 2) {
    core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640
              (property_list,"Door side",2,(int *)&PTR_s_Left_00670320);
  }
  core_actor_cpp_CActorPropertyList_addAction_FUN_0040e670
            (property_list,"Door state",
             core_door_cpp_CDoor_propertyDisplayCallback_FUN_00481250,
             core_door_cpp_CDoor_propertyActionCallback_FUN_004812b0);
  if (this_ptr->door_type == 0) {
    core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640
              (property_list,"Door swing",2,(int *)&PTR_s_Clockwise_00670330);
  }
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"Open condition",this_ptr->unk1);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"Close condition",this_ptr->unk1 + 100);
  core_actor_cpp_CActorPropertyList_addRuleList_FUN_0040e5a0
            (property_list,"Open rule",(CRuleList *)&this_ptr->open_rules,-1);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (property_list,"Open sound",this_ptr->unk2 + 1000);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (property_list,"Close sound",this_ptr->unk2 + 0x44c);
  core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
            (property_list,"Key mask",&this_ptr->key_mask,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  if (this_ptr->door_type == 1) {
    property_name = "Maximum open distance (ft)";
  }
  else {
    property_name = "Maximum open param";
  }
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,property_name,&this_ptr->max_param,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Opening speed (sec)",&this_ptr->open_speed,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Close speed (sec)",&this_ptr->close_speed,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addGroundType_FUN_0040e300
            (property_list,"groundType",&this_ptr->ground_type);
  core_actor_cpp_CActorPropertyList_addButton_FUN_0040e480
            (property_list,"Event to trigger when open",this_ptr->unk1 + 200);
  core_actor_cpp_CActorPropertyList_addButton_FUN_0040e480
            (property_list,"Event to trigger when closed",this_ptr->unk1 + 300);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Block virtual director",&this_ptr->block_virtual_director_flag)
  ;
  core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640
            (property_list,"One shot",3,(int *)&PTR_s_No_00670340);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Plot as box in shadow",&this_ptr->plot_as_box_in_shadow);
  core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640
            (property_list,"Open from side",4,(int *)&PTR_s_Both_00670358);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Leave bullet holes on me",&this_ptr->allow_bullet_holes);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (property_list,"Locked sound",this_ptr->unk2 + 0x4b0);
  return;
}
