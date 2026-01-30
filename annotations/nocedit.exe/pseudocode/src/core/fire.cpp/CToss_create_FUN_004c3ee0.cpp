// Name: core_fire.cpp_CToss_create_FUN_004c3ee0
// Address: 004c3ee0
// Address Range: [[004c3ee0, 004c3fff]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CToss_create_FUN_004c3ee0(CToss *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CToss_create_FUN_004c3ee0(CToss *this_ptr)

{
  int iVar1;
  CKeyFramedModel *pCVar2;
  int in_stack_00000008;
  CVector3f *in_stack_0000000c;
  CVector3f *in_stack_00000010;
  CVector3f *in_stack_00000014;
  uint in_stack_00000018;
  CVector3f local_2c;
  CVector3f local_20;
  float local_14;
  
  this_ptr->unk1 = in_stack_00000008;
  *(uint *)(this_ptr->unk2 + 0x25c) = in_stack_00000018;
  iVar1 = this_ptr->unk1;
  this_ptr->unk2[0x260] = '\0';
  this_ptr->unk2[0x261] = '\0';
  this_ptr->unk2[0x262] = '\0';
  this_ptr->unk2[0x263] = '\0';
  if (iVar1 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              (&this_ptr->model,"dynamitestick.kfm");
    local_14 = 1.0;
  }
  else {
    g_CurrentFilename = "..\\core\\fire.cpp";
    g_CurrentLineNumber = 0xba2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CToss::create - invalid toss type.");
  }
  if (*(float *)(this_ptr->unk2 + 0x25c) <= 0.0) {
    this_ptr->unk2[0x25c] = '\0';
    this_ptr->unk2[0x25d] = '\0';
    this_ptr->unk2[0x25e] = -0x60;
    this_ptr->unk2[0x25f] = '@';
  }
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  local_2c.x = (pCVar2->bounds_max).x - (pCVar2->bounds_min).x;
  local_2c.y = (pCVar2->bounds_max).y - (pCVar2->bounds_min).y;
  local_2c.z = (pCVar2->bounds_max).z - (pCVar2->bounds_min).z;
  core_box_cpp_CBox_setupCorners_FUN_0041dd20
            ((CBox *)this_ptr->unk2,in_stack_0000000c,in_stack_00000010,&local_2c,local_14);
  local_20.z = 0.0;
  local_20.y = 0.0;
  local_20.x = 9.424778;
  core_box_cpp_CBox_setupVelocities_FUN_00420180((CBox *)this_ptr->unk2,in_stack_00000014,&local_20)
  ;
  return;
}
