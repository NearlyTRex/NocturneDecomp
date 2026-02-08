// Name: core_bat.cpp_CBat_getPropertyList_FUN_00414dc0
// Address: 00414dc0
// Address Range: [[00414dc0, 00414ebe]]
// Convention: __cdecl
// Signature: void __cdecl core_bat_cpp_CBat_getPropertyList_FUN_00414dc0(CBat *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_bat_cpp_CBat_getPropertyList_FUN_00414dc0(CBat *this_ptr,CActorPropertyList *property_list)

{
  CActorProperty *pCVar1;
  char local_6c [100];
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addFile_FUN_0040e3e0
            (property_list,"Course file",this_ptr->course_filename,"data",
             "*.pth",0);
  _sprintf
            (local_6c,"Parameter (0..%d)",*(uint *)(this_ptr->course_filename + 0x20));
  pCVar1 = core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
                     (property_list,local_6c,&this_ptr->param,(CActorPropertyValidatorFunc *)0x0);
  pCVar1->auto_update_flag = 1;
  core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
            (property_list,"Model file (.kfm)",&this_ptr->model,0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Course Speed",&this_ptr->course_speed,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Flap speed mult",&this_ptr->speed,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (property_list,"Periodic sound",this_ptr->unused);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Sound period min",&this_ptr->periodic_sound_timer_min,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Sound period max",&this_ptr->periodic_sound_timer_max,
             (CActorPropertyValidatorFunc *)0x0);
  return;
}
