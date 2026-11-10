// Name: core_mimic.cpp_CMimic_beginMorph_FUN_00510b00
// Address: 00510b00
// Address Range: [[00510b00, 00510c13]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_beginMorph_FUN_00510b00(CMimic *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mimic_cpp_CMimic_beginMorph_FUN_00510b00(CMimic *this_ptr)

{
  UOrientationVector *pUVar1;
  CDemonActor *pCVar2;
  CConsole *pCVar3;
  
  if (this_ptr->morph_target_actor == (CDemonActor *)0x0) {
    _DAT_01d1d400 = "..\\core\\mimic.cpp";
    _DAT_01d1d404 = 0x499;
    core_main_c_FUN_005030e0("CMimic::beginMorph() - can't do this unless morphActor has been created!");
  }
  (this_ptr->morph_target_actor->scale).x = (this_ptr->base).base.base.scale.x;
  (this_ptr->morph_target_actor->scale).y = (this_ptr->base).base.base.scale.y;
  (this_ptr->morph_target_actor->scale).z = (this_ptr->base).base.base.scale.z;
  pCVar2 = this_ptr->morph_target_actor;
  pCVar2[0x90].create_event[0x60] = '\x01';
  pCVar2[0x90].create_event[0x61] = '\0';
  pCVar2[0x90].create_event[0x62] = '\0';
  pCVar2[0x90].create_event[99] = '\0';
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
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            (&(this_ptr->base).base.model.base,0,1);
  core_mimic_cpp_CMimic_processMorph_FUN_00510c20(this_ptr,0.0);
  pCVar3 = g_CConsolePtr;
  (this_ptr->base).base.base.is_transparent = 1;
  engine_console_cpp_FUN_00445430
            (pCVar3,"%s morphing into type %s\n",this_ptr,this_ptr->morph_actor_type);
  return;
}
