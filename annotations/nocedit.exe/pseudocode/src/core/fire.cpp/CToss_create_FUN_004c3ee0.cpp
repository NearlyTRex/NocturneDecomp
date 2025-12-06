// Name: core_fire.cpp_CToss_create_FUN_004c3ee0
// Address: 004c3ee0
// Address Range: [[004c3ee0, 004c3fff]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CToss_create_FUN_004c3ee0(CToss * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CToss_create_FUN_004c3ee0(CToss *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  float unaff_ESI;
  uint in_stack_00000008;
  CVector3f *in_stack_00000018;
  CVector3f *in_stack_0000001c;
  CVector3f *in_stack_00000024;
  
  *(uint *)this_ptr->field0_0x0 = in_stack_00000008;
  *(CVector3f **)(this_ptr->field0_0x0 + 0x3dc) = in_stack_00000018;
  iVar1 = *(int *)this_ptr->field0_0x0;
  this_ptr->field0_0x0[0x3e0] = '\0';
  this_ptr->field0_0x0[0x3e1] = '\0';
  this_ptr->field0_0x0[0x3e2] = '\0';
  this_ptr->field0_0x0[0x3e3] = '\0';
  if (iVar1 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)(this_ptr->field0_0x0 + 4),"dynamitestick.kfm");
  }
  else {
    g_CurrentFilename = "..\\core\\fire.cpp";
    g_CurrentLineNumber = 0xba2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CToss::create - invalid toss type.");
  }
  if (*(float *)(this_ptr->field0_0x0 + 0x3dc) <= 0.0) {
    this_ptr->field0_0x0[0x3dc] = '\0';
    this_ptr->field0_0x0[0x3dd] = '\0';
    this_ptr->field0_0x0[0x3de] = -0x60;
    this_ptr->field0_0x0[0x3df] = '@';
  }
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(this_ptr->field0_0x0 + 4));
  core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
            ((CKeyFramedModelInstance *)(this_ptr->field0_0x0 + 4));
  core_box_cpp_CBox_setupCorners_FUN_0041dd20
            ((CBox *)(this_ptr->field0_0x0 + 0x180),in_stack_00000018,in_stack_0000001c,
             (CVector3f *)&stack0xffffffe0,unaff_ESI);
  core_box_cpp_CBox_setupVelocities_FUN_00420180
            ((CBox *)(this_ptr->field0_0x0 + 0x180),in_stack_00000024,(CVector3f *)&stack0xfffffff0)
  ;
  return;
}
