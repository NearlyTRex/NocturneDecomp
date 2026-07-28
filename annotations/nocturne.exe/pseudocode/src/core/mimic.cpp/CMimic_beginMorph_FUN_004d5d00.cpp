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
  float fVar2;
  byte *puVar3;
  
  if ((this_ptr->cloth).vertices[0x30b].rest_lengths[3] == 0.0) {
    PTR_01cc4800 = "..\\core\\mimic.cpp";
    INT_01cc4804 = 0x499;
    core_main_c_FUN_004c8440("CMimic::beginMorph() - can't do this unless morphActor has been created!");
  }
  *(int *)((int)(this_ptr->cloth).vertices[0x30b].rest_lengths[3] + 0x108) =
       (this_ptr->base).base.base.scale.x;
  *(int *)((int)(this_ptr->cloth).vertices[0x30b].rest_lengths[3] + 0x10c) =
       (this_ptr->base).base.base.scale.y;
  *(int *)((int)(this_ptr->cloth).vertices[0x30b].rest_lengths[3] + 0x110) =
       (this_ptr->base).base.base.scale.z;
  *(uint *)((int)(this_ptr->cloth).vertices[0x30b].rest_lengths[3] + 0xbd14) = 1;
  fVar2 = (this_ptr->cloth).vertices[0x30b].rest_lengths[3];
  *(float *)((int)fVar2 + 0x20) = (this_ptr->base).base.base.location.position.x;
  *(float *)((int)fVar2 + 0x24) = (this_ptr->base).base.base.location.position.y;
  *(float *)((int)fVar2 + 0x28) = (this_ptr->base).base.base.location.position.z;
  *(int *)((int)fVar2 + 0x2c) = (this_ptr->base).base.base.location.area_id;
  fVar2 = (this_ptr->cloth).vertices[0x30b].rest_lengths[3];
  pUVar1 = &(this_ptr->base).base.base.orient;
  if ((UOrientationVector *)((int)fVar2 + 0x30) != pUVar1) {
    *(float *)((int)fVar2 + 0x30) = (pUVar1->vec).x;
    *(float *)((int)fVar2 + 0x34) = (this_ptr->base).base.base.orient.vec.y;
    *(float *)((int)fVar2 + 0x38) = (this_ptr->base).base.base.orient.vec.z;
  }
  (this_ptr->cloth).vertices[0x30b].rest_lengths[2] = 0.0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
            (&(this_ptr->base).base.model.motion_controller,0,1);
  core_mimic_cpp_CMimic_processMorph_FUN_004d5e20(this_ptr,0.0);
  puVar3 = PTR_DAT_005ad350;
  (this_ptr->base).base.base.is_transparent = 1;
  engine_console_cpp_CConsole_printf_FUN_0043ac60
            (puVar3,"%s morphing into type %s\n",this_ptr,
             (this_ptr->cloth).vertices[0x300].connected_indices + 0xb);
  return;
}
