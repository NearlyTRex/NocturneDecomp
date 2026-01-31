// Name: core_stranger.cpp_CStranger_FUN_005c6750
// Address: 005c6750
// Address Range: [[005c6750, 005c67b4]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005c6750(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005c6750(CStranger *this_ptr)

{
  CHero *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_hero_cpp_CHero_FUN_004f3b20(&this_ptr->base);
  this_ptr->unk1[0x50] = '\0';
  this_ptr->unk1[0x51] = '\0';
  this_ptr->unk1[0x52] = '\0';
  this_ptr->unk1[0x53] = '\0';
  this_ptr->unk1[0x54] = '\0';
  this_ptr->unk1[0x55] = '\0';
  this_ptr->unk1[0x56] = '\0';
  this_ptr->unk1[0x57] = '\0';
  this_ptr->action_pending = 0;
  pCVar1 = &this_ptr->base;
  (pCVar1->base).unk3[0x46c] = '\0';
  (pCVar1->base).unk3[0x46d] = '\0';
  (pCVar1->base).unk3[0x46e] = '\0';
  (pCVar1->base).unk3[0x46f] = '\0';
  pCVar1 = &this_ptr->base;
  (pCVar1->base).unk3[0x470] = '\0';
  (pCVar1->base).unk3[0x471] = '\0';
  (pCVar1->base).unk3[0x472] = '\0';
  (pCVar1->base).unk3[0x473] = '\0';
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
            (&this_ptr_00->motion_controller,"stand",0.0);
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&this_ptr_00->motion_controller,0,1);
  return;
}
