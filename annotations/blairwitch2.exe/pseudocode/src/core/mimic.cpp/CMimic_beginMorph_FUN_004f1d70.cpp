// Name: core_mimic.cpp_CMimic_beginMorph_FUN_004f1d70
// Address: 004f1d70
// Address Range: [[004f1d70, 004f1e83]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_beginMorph_FUN_004f1d70(CMimic *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mimic_cpp_CMimic_beginMorph_FUN_004f1d70(CMimic *this_ptr)

{
  UOrientationVector *pUVar1;
  CDemonActor *pCVar2;
  CConsole *pCVar3;
  
  if (this_ptr->morph_target_actor == (CDemonActor *)0x0) {
    _DAT_01d046a0 = "..\\core\\mimic.cpp";
    _DAT_01d046a4 = 0x499;
    core_main_c_FUN_004e4500("CMimic::beginMorph() - can't do this unless morphActor has been created!");
  }
  *(uint *)&this_ptr->morph_target_actor->field_0x108 =
       *(uint *)&(this_ptr->base).base.base.field_0x108;
  *(uint *)&this_ptr->morph_target_actor->field_0x10c =
       *(uint *)&(this_ptr->base).base.base.field_0x10c;
  *(uint *)&this_ptr->morph_target_actor->field_0x110 =
       *(uint *)&(this_ptr->base).base.base.field_0x110;
  *(uint *)&this_ptr->morph_target_actor[0x62].field_0x200 = 1;
  pCVar2 = this_ptr->morph_target_actor;
  *(uint *)&pCVar2->field_0x20 = *(uint *)&(this_ptr->base).base.base.field_0x20;
  *(uint *)&pCVar2->field_0x24 = *(uint *)&(this_ptr->base).base.base.field_0x24;
  *(uint *)&pCVar2->field_0x28 = *(uint *)&(this_ptr->base).base.base.field_0x28;
  *(uint *)&pCVar2->field_0x2c = *(uint *)&(this_ptr->base).base.base.field_0x2c;
  pCVar2 = this_ptr->morph_target_actor;
  pUVar1 = &(this_ptr->base).base.base.orient;
  if (&pCVar2->orient != pUVar1) {
    (pCVar2->orient).vec.x = (pUVar1->vec).x;
    (pCVar2->orient).vec.y = (this_ptr->base).base.base.orient.vec.y;
    (pCVar2->orient).vec.z = (this_ptr->base).base.base.orient.vec.z;
  }
  this_ptr->morph_blend = 0.0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&(this_ptr->base).base.model,0,1);
  core_mimic_cpp_CMimic_processMorph_FUN_004f1e90(this_ptr,0.0);
  pCVar3 = g_CConsolePtr;
  *(uint *)&(this_ptr->base).base.base.field_0xfc = 1;
  engine_console_cpp_FUN_00436710
            (pCVar3,"%s morphing into type %s\n",this_ptr,this_ptr->morph_actor_type);
  return;
}
