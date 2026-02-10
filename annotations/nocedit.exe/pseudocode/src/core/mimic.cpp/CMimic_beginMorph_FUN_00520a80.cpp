// Name: core_mimic.cpp_CMimic_beginMorph_FUN_00520a80
// Address: 00520a80
// Address Range: [[00520a80, 00520b93]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_beginMorph_FUN_00520a80(CMimic *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_mimic_cpp_CMimic_beginMorph_FUN_00520a80(CMimic *this_ptr)

{
  UOrientationVector *pUVar1;
  int iVar2;
  CConsole *this_ptr_00;
  
  if (*(int *)(this_ptr->unk4 + 0xc54) == 0) {
    g_CurrentFilename = "..\\core\\mimic.cpp";
    g_CurrentLineNumber = 0x499;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMimic::beginMorph() - can't do this unless morphActor has been created!");
  }
  *(int *)(*(int *)(this_ptr->unk4 + 0xc54) + 0x108) = (this_ptr->base).base.base.scale.x;
  *(int *)(*(int *)(this_ptr->unk4 + 0xc54) + 0x10c) = (this_ptr->base).base.base.scale.y;
  *(int *)(*(int *)(this_ptr->unk4 + 0xc54) + 0x110) = (this_ptr->base).base.base.scale.z;
  *(uint *)(*(int *)(this_ptr->unk4 + 0xc54) + 0xbeac) = 1;
  iVar2 = *(int *)(this_ptr->unk4 + 0xc54);
  *(float *)(iVar2 + 0x20) = (this_ptr->base).base.base.location.position.x;
  *(float *)(iVar2 + 0x24) = (this_ptr->base).base.base.location.position.y;
  *(float *)(iVar2 + 0x28) = (this_ptr->base).base.base.location.position.z;
  *(int *)(iVar2 + 0x2c) = (this_ptr->base).base.base.location.area_id;
  iVar2 = *(int *)(this_ptr->unk4 + 0xc54);
  pUVar1 = &(this_ptr->base).base.base.orient;
  if ((UOrientationVector *)(iVar2 + 0x30) != pUVar1) {
    *(float *)(iVar2 + 0x30) = (pUVar1->vec).x;
    *(float *)(iVar2 + 0x34) = (this_ptr->base).base.base.orient.vec.y;
    *(float *)(iVar2 + 0x38) = (this_ptr->base).base.base.orient.vec.z;
  }
  this_ptr->unk4[0xc50] = '\0';
  this_ptr->unk4[0xc51] = '\0';
  this_ptr->unk4[0xc52] = '\0';
  this_ptr->unk4[0xc53] = '\0';
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(this_ptr->base).base.model.motion_controller,0,1);
  core_mimic_cpp_CMimic_processMorph_FUN_00520ba0(this_ptr);
  this_ptr_00 = g_CConsolePtr;
  (this_ptr->base).base.base.is_transparent = 1;
  engine_console_cpp_CConsole_printf_FUN_00441890
            (this_ptr_00,"%s morphing into type %s\n",this_ptr,&this_ptr->morph_actor_type);
  return;
}
