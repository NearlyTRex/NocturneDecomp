// Name: core_mimic.cpp_CMimic_beginMorph_FUN_004f1d70
// Address: 004f1d70
// Address Range: [[004f1d70, 004f1e83]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_beginMorph_FUN_004f1d70(CMimic *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mimic_cpp_CMimic_beginMorph_FUN_004f1d70(CMimic *this_ptr)

{
  UOrientationVector *pUVar1;
  CDemonActor *pCVar2;
  CConsole *this_ptr_00;
  
  if (this_ptr->morph_target_actor == (CDemonActor *)0x0) {
    _DAT_01d046a0 = "..\\core\\mimic.cpp";
    _DAT_01d046a4 = 0x499;
    core_main_c_FUN_004e4500("CMimic::beginMorph() - can't do this unless morphActor has been created!");
  }
  (this_ptr->morph_target_actor->scale).x = (this_ptr->base).base.base.scale.x;
  (this_ptr->morph_target_actor->scale).y = (this_ptr->base).base.base.scale.y;
  (this_ptr->morph_target_actor->scale).z = (this_ptr->base).base.base.scale.z;
  this_ptr->morph_target_actor[0x62].particle_systems[2].fade_start = 1.4013e-45;
  pCVar2 = this_ptr->morph_target_actor;
  (pCVar2->location).position.x = (this_ptr->base).base.base.location.position.x;
  (pCVar2->location).position.y = (this_ptr->base).base.base.location.position.y;
  (pCVar2->location).position.z = (this_ptr->base).base.base.location.position.z;
  (pCVar2->location).area_id = (this_ptr->base).base.base.location.area_id;
  pCVar2 = this_ptr->morph_target_actor;
  pUVar1 = &(this_ptr->base).base.base.orient;
  if (&pCVar2->orient != pUVar1) {
    (pCVar2->orient).vec.x = (pUVar1->vec).x;
    (pCVar2->orient).vec.y = (this_ptr->base).base.base.orient.vec.y;
    (pCVar2->orient).vec.z = (this_ptr->base).base.base.orient.vec.z;
  }
  this_ptr->morph_blend = 0.0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&(this_ptr->base).base.model.base,0,1);
  core_mimic_cpp_CMimic_processMorph_FUN_004f1e90(this_ptr,0.0);
  this_ptr_00 = g_CConsolePtr;
  (this_ptr->base).base.base.is_transparent = 1;
  engine_console_cpp_CConsole_printf_FUN_00436710(this_ptr_00,"%s morphing into type %s\n");
  return;
}
