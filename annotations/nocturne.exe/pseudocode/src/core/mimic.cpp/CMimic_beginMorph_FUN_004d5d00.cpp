// Name: core_mimic.cpp_CMimic_beginMorph_FUN_004d5d00
// Address: 004d5d00
// Address Range: [[004d5d00, 004d5e13]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_beginMorph_FUN_004d5d00(CMimic *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_mimic_cpp_CMimic_beginMorph_FUN_004d5d00(CMimic *this_ptr)

{
  UOrientationVector *pUVar1;
  CDemonActor *pCVar2;
  CConsole *this_ptr_00;
  
  if (this_ptr->morph_target_actor == (CDemonActor *)0x0) {
    g_CurrentFilename = "..\\core\\mimic.cpp";
    g_CurrentLineNumber = 1177;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CMimic::beginMorph() - can't do this unless morphActor has been created!");
  }
  (this_ptr->morph_target_actor->scale).x = (this_ptr->base).base.base.scale.x;
  (this_ptr->morph_target_actor->scale).y = (this_ptr->base).base.base.scale.y;
  (this_ptr->morph_target_actor->scale).z = (this_ptr->base).base.base.scale.z;
  pCVar2 = this_ptr->morph_target_actor;
  pCVar2[0x90].actor_name[0x14] = '\x01';
  pCVar2[0x90].actor_name[0x15] = '\0';
  pCVar2[0x90].actor_name[0x16] = '\0';
  pCVar2[0x90].actor_name[0x17] = '\0';
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
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
            (&(this_ptr->base).base.model.motion_controller,0,1);
  core_mimic_cpp_CMimic_processMorph_FUN_004d5e20(this_ptr,0.0);
  this_ptr_00 = g_CConsole_PTR_005ad350;
  (this_ptr->base).base.base.is_transparent = 1;
  engine_console_cpp_CConsole_printf_FUN_0043ac60(this_ptr_00,"%s morphing into type %s\n");
  return;
}
