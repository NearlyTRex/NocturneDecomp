// Name: core_fire.cpp_CToss_create_FUN_004c3ee0
// Address: 004c3ee0
// Address Range: [[004c3ee0, 004c3fff]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CToss_create_FUN_004c3ee0(CToss * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c8e40 (004c8e40) at 004c8e6e [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_dynamitestick_kfm_00629ddb
//   TerminatedCString s_core_fire_cpp_00629ded
//   TerminatedCString s_CToss_create_invalid_tos_00629dfe
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_box.cpp_CBox_setupCorners_FUN_0041dd20
//   core_box.cpp_CBox_setupVelocities_FUN_00420180
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl core_fire_cpp_CToss_create_FUN_004c3ee0(CToss *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  float unaff_ESI;
  undefined4 in_stack_00000008;
  CVector3f *in_stack_00000018;
  CVector3f *in_stack_0000001c;
  CVector3f *in_stack_00000024;
  
  *(undefined4 *)this_ptr->field0_0x0 = in_stack_00000008;
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


// Assembly code:
// 004c3ee0: PUSH EBX
//   Label: core_fire.cpp_CToss_create_FUN_004c3ee0
// 004c3ee1: PUSH ESI
// 004c3ee2: PUSH EDI
// 004c3ee3: PUSH EBP
// 004c3ee4: SUB ESP,0x1c
// 004c3ee7: MOV EBX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 004c3eeb: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 004c3eef: MOV dword ptr [EBX],EAX
// 004c3ef1: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x18] (READ)
// 004c3ef5: MOV dword ptr [EBX + 0x3dc],EAX
// 004c3efb: MOV EAX,dword ptr [EBX]
// 004c3efd: MOV dword ptr [EBX + 0x3e0],0x0
// 004c3f07: TEST EAX,EAX
// 004c3f09: JZ 0x004c3fe1
//   XREF to: 004c3fe1 (CONDITIONAL_JUMP)
// 004c3f0f: MOV EDX,0x629ded
//   XREF to: 00629ded (PARAM)
// 004c3f14: MOV ECX,0xba2
// 004c3f19: PUSH 0x629dfe
//   XREF to: 00629dfe (DATA)
// 004c3f1e: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004c3f24: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004c3f2a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004c3f2f: ADD ESP,0x4
// 004c3f32: FLD float ptr [EBX + 0x3dc]
//   Label: LAB_004c3f32
// 004c3f38: FLDZ
// 004c3f3a: FCOMPP
// 004c3f3c: FNSTSW AX
// 004c3f3e: SAHF
// 004c3f3f: JC 0x004c3f4b
//   XREF to: 004c3f4b (CONDITIONAL_JUMP)
// 004c3f41: MOV dword ptr [EBX + 0x3dc],0x40a00000
// 004c3f4b: LEA ESI,[EBX + 0x4]
//   Label: LAB_004c3f4b
// 004c3f4e: PUSH ESI
// 004c3f4f: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 004c3f54: ADD ESP,0x4
// 004c3f57: PUSH ESI
// 004c3f58: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 004c3f5d: MOV EDX,EAX
// 004c3f5f: FLD float ptr [EDX + 0x5684]
// 004c3f65: FSUB float ptr [EAX + 0x5678]
// 004c3f6b: ADD ESP,0x4
// 004c3f6e: FSTP float ptr [ESP]
//   XREF to: Stack[-0x2c] (DATA)
// 004c3f71: FLD float ptr [EDX + 0x5688]
// 004c3f77: FSUB float ptr [EAX + 0x567c]
// 004c3f7d: ADD EAX,0x5678
// 004c3f82: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x28] (WRITE)
// 004c3f86: FLD float ptr [EDX + 0x568c]
// 004c3f8c: FSUB float ptr [EAX + 0x8]
// 004c3f8f: MOV EAX,ESP
// 004c3f91: PUSH dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 004c3f95: PUSH EAX
// 004c3f96: MOV EDI,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x10] (READ)
// 004c3f9a: PUSH EDI
// 004c3f9b: MOV EBP,dword ptr [ESP + 0x44]
//   XREF to: Stack[0xc] (READ)
// 004c3f9f: PUSH EBP
// 004c3fa0: ADD EBX,0x180
// 004c3fa6: PUSH EBX
// 004c3fa7: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (WRITE)
// 004c3fab: CALL core_box.cpp_CBox_setupCorners_FUN_0041dd20
//   XREF to: 0041dd20 (UNCONDITIONAL_CALL)
// 004c3fb0: ADD ESP,0x14
// 004c3fb3: XOR EAX,EAX
// 004c3fb5: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004c3fb9: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004c3fbd: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x20] (DATA)
// 004c3fc1: PUSH EAX
// 004c3fc2: MOV ESI,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x14] (READ)
// 004c3fc6: PUSH ESI
// 004c3fc7: MOV ECX,0x4116cbe4
// 004c3fcc: PUSH EBX
// 004c3fcd: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 004c3fd1: CALL core_box.cpp_CBox_setupVelocities_FUN_00420180
//   XREF to: 00420180 (UNCONDITIONAL_CALL)
// 004c3fd6: ADD ESP,0xc
// 004c3fd9: ADD ESP,0x1c
// 004c3fdc: POP EBP
// 004c3fdd: POP EDI
// 004c3fde: POP ESI
// 004c3fdf: POP EBX
// 004c3fe0: RET
// 004c3fe1: PUSH 0x629ddb
//   Label: LAB_004c3fe1
//   XREF to: 00629ddb (DATA)
// 004c3fe6: LEA EAX,[EBX + 0x4]
// 004c3fe9: PUSH EAX
// 004c3fea: MOV ESI,0x3f800000
// 004c3fef: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004c3ff4: ADD ESP,0x8
// 004c3ff7: MOV dword ptr [ESP + 0x18],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 004c3ffb: JMP 0x004c3f32
//   XREF to: 004c3f32 (UNCONDITIONAL_JUMP)
