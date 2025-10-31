// Name: core_baron.cpp_CBaron_process_FUN_00412e80
// Address: 00412e80
// Address Range: [[00412e80, 00413463]]
// Convention: __cdecl
// Signature: void core_baron.cpp_CBaron_process_FUN_00412e80(CBaron * this_ptr)
// Globals:
//   void* switchdataD_00412e68 = 004133c2
//   TerminatedCString s_s_confused_while_walking_00614ff9
//   undefined4 DAT_00615029
//   undefined4 DAT_00615031
//   undefined4 DAT_00615039
//   SMRGLTextureBasic DAT_0066e460
//   CConsole* g_CConsolePtr = 0083b1a4
//   CEventList* g_CEventListInstance = 02d05310
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CGame* g_CGamePtr = 02d81a9c
//   undefined4 DAT_00822498
//   undefined4 DAT_008224cc
//   undefined4 DAT_008224d0
//   undefined4 DAT_008224dc
//   CConsole g_ConsolePtr
//   undefined4 DAT_02d05310
//   CFireEffect g_CFireEffectInstance
//   undefined4 DAT_02d81cc4
//   CVector3f g_ZeroVector
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_baron.cpp_FUN_004135e0
//   core_baron.cpp_FUN_00413a00
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   core_charactr.cpp_CCharacter_FUN_00429820
//   core_charactr.cpp_CCharacter_FUN_00429870
//   core_charactr.cpp_CCharacter_FUN_0042ca70
//   core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   core_fire.cpp_CFireEffect_FUN_004c7b20
//   core_fire.cpp_CFireEffect_FUN_004c90c0
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059e020
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059f750
//   core_xform.cpp_eulerToQuaternion_FUN_005f7b20
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_baron_cpp_CBaron_process_FUN_00412e80(CBaron *this_ptr)

{
  char *pcVar1;
  uint uVar2;
  float fVar3;
  CCharacter *pCVar4;
  CGame *pCVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  undefined4 unaff_EBP;
  undefined4 *puVar9;
  byte bVar10;
  float in_stack_00000018;
  float in_stack_00000024;
  float in_stack_00000044;
  CDeformableModelInstance *apCStackY_1858 [1514];
  CDeformableModelInstance *pCStack_8c;
  undefined4 in_stack_ffffff84;
  undefined4 uStack_74;
  undefined4 local_6c;
  CVector3f local_68 [2];
  float local_50;
  float local_4c;
  float local_48;
  float fStack_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  float local_2c;
  float local_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  CVector3f CStack_18;
  
  bVar10 = 0;
  if (*(int *)(this_ptr->field1_0x1fbd4 + 0xf8) == 0) {
    iVar6 = core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
                      (g_CEventListInstance,this_ptr->field1_0x1fbd4);
    if (iVar6 != 0) {
      this_ptr->field1_0x1fbd4[0xf8] = '\x01';
      this_ptr->field1_0x1fbd4[0xf9] = '\0';
      this_ptr->field1_0x1fbd4[0xfa] = '\0';
      this_ptr->field1_0x1fbd4[0xfb] = '\0';
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
      this_ptr->field1_0x1fbd4[0xfc] = '\x01';
      this_ptr->field1_0x1fbd4[0xfd] = '\0';
      this_ptr->field1_0x1fbd4[0xfe] = '\0';
      this_ptr->field1_0x1fbd4[0xff] = '\0';
    }
  }
  else {
    iVar6 = core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
                      (g_CEventListInstance,this_ptr->field1_0x1fbd4 + 100);
    if (iVar6 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
    }
  }
  if (((*(int *)(this_ptr->field1_0x1fbd4 + 0xf8) == 0) &&
      ((this_ptr->field0_0x0).control_type == 2)) ||
     (iVar6 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr), iVar6 == 0)) {
    return;
  }
  if ((this_ptr->field0_0x0).control_type == 2) {
    core_baron_cpp_FUN_004135e0();
  }
  pCVar5 = g_CGamePtr;
  *(float *)((this_ptr->field0_0x0).base_character.field2_0x240c + 0x2c) =
       in_stack_00000018 * (float)_DAT_00615029;
  if (pCVar5->letterbox_mode != 0) {
    *(float *)((this_ptr->field0_0x0).base_character.field2_0x240c + 0x2c) =
         *(float *)((this_ptr->field0_0x0).base_character.field2_0x240c + 0x2c) *
         (float)_DAT_00615031;
  }
  fVar3 = (float)(this_ptr->field0_0x0).field1_0xbe24 - in_stack_00000018;
  (this_ptr->field0_0x0).field1_0xbe24 = (int)fVar3;
  if (fVar3 < 0.0) {
    (this_ptr->field0_0x0).field1_0xbe24 = 0;
  }
  pCVar4 = &(this_ptr->field0_0x0).base_character;
  (pCVar4->model).padding_0x0[0x225c] = '\0';
  (pCVar4->model).padding_0x0[0x225d] = '\0';
  (pCVar4->model).padding_0x0[0x225e] = '\0';
  (pCVar4->model).padding_0x0[0x225f] = '\0';
  *(undefined4 *)((this_ptr->field0_0x0).base_character.model.padding_0x0 + 0x2258) =
       *(undefined4 *)((this_ptr->field0_0x0).base_character.model.padding_0x0 + 0x225c);
  *(undefined4 *)((this_ptr->field0_0x0).base_character.model.padding_0x0 + 0x2254) =
       *(undefined4 *)((this_ptr->field0_0x0).base_character.model.padding_0x0 + 0x2258);
  core_baron_cpp_FUN_00413a00();
  if (*(int *)(this_ptr->field1_0x1fbd4 + 0xf8) == 0) {
    return;
  }
  iVar6 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar6 == 0) {
    iVar6 = core_motion_cpp_CMotionController_FUN_0052dab0();
    switch(*(undefined4 *)(iVar6 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
      iVar6 = 0;
      if (*(int *)(this_ptr->field0_0x0).field3_0xbe2c != 0) {
        if (*(int *)((this_ptr->field0_0x0).field3_0xbe2c + 8) == 0) {
          iVar6 = 1;
        }
        else {
          iVar6 = 3;
        }
      }
      if (*(int *)((this_ptr->field0_0x0).field3_0xbe2c + 4) != 0) {
        iVar6 = 2;
      }
      if (*(int *)((this_ptr->field0_0x0).field3_0xbe2c + 0xc) != 0) {
        this_ptr->field1_0x1fbd4[0xdc] = '\x01';
        this_ptr->field1_0x1fbd4[0xdd] = '\0';
        this_ptr->field1_0x1fbd4[0xde] = '\0';
        this_ptr->field1_0x1fbd4[0xdf] = '\0';
        iVar6 = 4;
        (this_ptr->field0_0x0).field3_0xbe2c[0xc] = '\0';
        (this_ptr->field0_0x0).field3_0xbe2c[0xd] = '\0';
        (this_ptr->field0_0x0).field3_0xbe2c[0xe] = '\0';
        (this_ptr->field0_0x0).field3_0xbe2c[0xf] = '\0';
      }
      *(float *)((this_ptr->field0_0x0).base_character.field2_0x240c + 0xc) =
           *(float *)((this_ptr->field0_0x0).field3_0xbe2c + 0x24) *
           *(float *)((this_ptr->field0_0x0).base_character.field2_0x240c + 0x2c);
      iVar8 = core_motion_cpp_CMotionController_FUN_0052dab0();
      if (iVar6 == *(int *)(iVar8 + 0x24)) break;
      pCStack_8c = (CDeformableModelInstance *)0x1;
      goto LAB_0041300c;
    case 4:
      core_xform_cpp_transformVector3x4_FUN_005f4dc0
                (local_68,&g_ZeroVector,
                 (CMatrix3x4f *)
                 ((this_ptr->field0_0x0).base_character.model.padding_0x0 +
                 DAT_008224cc * 0x30 + 0xe80));
      pfVar7 = core_actor_cpp_CDemonActor_FUN_00408ec0((CDemonActor *)this_ptr);
      if (&local_24 != pfVar7) {
        local_24 = *pfVar7;
        fStack_20 = pfVar7[1];
        fStack_1c = pfVar7[2];
      }
      core_xform_cpp_transformVector3x4_FUN_005f4dc0
                (&CStack_18,&g_ZeroVector,
                 (CMatrix3x4f *)
                 ((this_ptr->field0_0x0).base_character.model.padding_0x0 +
                 DAT_008224d0 * 0x30 + 0xe80));
      pfVar7 = core_actor_cpp_CDemonActor_FUN_00408ec0((CDemonActor *)this_ptr);
      if (&fStack_40 != pfVar7) {
        fStack_40 = *pfVar7;
        local_3c = pfVar7[1];
        local_38 = pfVar7[2];
      }
      if (*(int *)(this_ptr->field1_0x1fbd4 + 0xdc) == 0) {
        core_fire_cpp_CFireEffect_FUN_004c90c0(g_CFireEffectPtr);
        core_fire_cpp_CFireEffect_FUN_004c90c0(g_CFireEffectPtr);
      }
      if ((float *)(this_ptr->field1_0x1fbd4 + 0xe0) != &CStack_18.y) {
        *(float *)(this_ptr->field1_0x1fbd4 + 0xe0) = CStack_18.y;
        *(float *)(this_ptr->field1_0x1fbd4 + 0xe4) = CStack_18.z;
        *(undefined4 *)(this_ptr->field1_0x1fbd4 + 0xe8) = unaff_EBP;
      }
      if ((float *)(this_ptr->field1_0x1fbd4 + 0xec) != &local_38) {
        *(float *)(this_ptr->field1_0x1fbd4 + 0xec) = local_38;
        *(undefined4 *)(this_ptr->field1_0x1fbd4 + 0xf0) = local_34;
        *(undefined4 *)(this_ptr->field1_0x1fbd4 + 0xf4) = local_30;
      }
      this_ptr->field1_0x1fbd4[0xdc] = '\0';
      this_ptr->field1_0x1fbd4[0xdd] = '\0';
      this_ptr->field1_0x1fbd4[0xde] = '\0';
      this_ptr->field1_0x1fbd4[0xdf] = '\0';
    }
  }
  else {
    uVar2 = *(uint *)((this_ptr->field0_0x0).base_character.field11_0x25a0 + 0x10);
    if (((1 < uVar2) && (2 < uVar2)) && (uVar2 == 3)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
      goto switchD_0041345d_default;
    }
LAB_0041300c:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
  }
switchD_0041345d_default:
  pcVar1 = (this_ptr->field0_0x0).base_character.model.padding_0x0 + 0x2254;
  fVar3 = (float)_DAT_00615039;
  local_50 = *(float *)pcVar1;
  local_4c = *(float *)((this_ptr->field0_0x0).base_character.model.padding_0x0 + 0x2258);
  local_48 = *(float *)((this_ptr->field0_0x0).base_character.model.padding_0x0 + 0x225c);
  pCVar4 = &(this_ptr->field0_0x0).base_character;
  (pCVar4->model).padding_0x0[0x225c] = '\0';
  (pCVar4->model).padding_0x0[0x225d] = '\0';
  (pCVar4->model).padding_0x0[0x225e] = '\0';
  (pCVar4->model).padding_0x0[0x225f] = '\0';
  *(undefined4 *)((this_ptr->field0_0x0).base_character.model.padding_0x0 + 0x2258) =
       *(undefined4 *)((this_ptr->field0_0x0).base_character.model.padding_0x0 + 0x225c);
  *(float *)pcVar1 = *(float *)((this_ptr->field0_0x0).base_character.model.padding_0x0 + 0x2258);
  *(float *)((this_ptr->field0_0x0).base_character.field2_0x240c + 0x20) =
       *(float *)((this_ptr->field0_0x0).base_character.field2_0x240c + 0x20) -
       in_stack_00000024 * fVar3;
  fStack_20 = *(float *)((this_ptr->field0_0x0).base_character.field2_0x240c + 0x1c) *
              in_stack_00000024;
  fStack_1c = *(float *)((this_ptr->field0_0x0).base_character.field2_0x240c + 0x20) *
              in_stack_00000024;
  CStack_18.x = *(float *)((this_ptr->field0_0x0).base_character.field2_0x240c + 0x24) *
                in_stack_00000024;
  local_50 = local_50 + fStack_20;
  local_4c = local_4c + fStack_1c;
  local_48 = local_48 + CStack_18.x;
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  pCStack_8c = &(this_ptr->field0_0x0).base_character.model;
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059e020();
  pCStack_8c = (CDeformableModelInstance *)DAT_00822498;
  core_xform_cpp_eulerToQuaternion_FUN_005f7b20
            ((CQuaternion4f *)(this_ptr->field1_0x1fbd4 + 200),
             *(CVector3f **)(this_ptr->field1_0x1fbd4 + 0xd4));
  local_6c = in_stack_ffffff84;
  puVar9 = (undefined4 *)((int)local_68 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 4);
  *(undefined4 *)((int)local_68 + (uint)bVar10 * -8) =
       *(undefined4 *)((int)local_68 + (uint)bVar10 * -8 + -0x10);
  *puVar9 = *(undefined4 *)((int)&stack0xffffff8c + (uint)bVar10 * -8 + (uint)bVar10 * -8);
  puVar9[(uint)bVar10 * -2 + 1] =
       ((undefined4 *)((int)&stack0xffffff8c + (uint)bVar10 * -8 + (uint)bVar10 * -8))
       [(uint)bVar10 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059f750();
  iVar6 = 0;
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  do {
    local_2c = core_actor_cpp_getRandomFloat_FUN_0040cc10(-2.0,2.0);
    iVar6 = iVar6 + 1;
    local_28 = 2.0;
    fStack_20 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-2.0,2.0);
    uStack_74 = 0xffff;
    local_28 = local_28 + (this_ptr->field0_0x0).base_character.base_actor.location.position.x;
    local_24 = local_24 + (this_ptr->field0_0x0).base_character.base_actor.location.position.y;
    fStack_20 = fStack_20 + (this_ptr->field0_0x0).base_character.base_actor.location.position.z;
    core_fire_cpp_CFireEffect_FUN_004c7b20(g_CFireEffectPtr);
  } while (iVar6 < 2);
  DAT_008224dc = DAT_008224dc + in_stack_00000044;
  return;
}


// Assembly code:
// 00412e80: PUSH EBX
//   Label: core_baron.cpp_CBaron_process_FUN_00412e80
// 00412e81: PUSH ESI
// 00412e82: PUSH EBP
// 00412e83: SUB ESP,0x98
// 00412e89: MOV EBP,dword ptr [ESP + 0xa8]
//   XREF to: Stack[0x4] (READ)
// 00412e90: MOV EDX,dword ptr [EBP + 0x1fccc]
// 00412e96: LEA EBX,[EBP + 0x158]
// 00412e9c: TEST EDX,EDX
// 00412e9e: JZ 0x00412ee3
//   XREF to: 00412ee3 (CONDITIONAL_JUMP)
// 00412ea0: LEA EAX,[EBP + 0x1fc38]
// 00412ea6: PUSH EAX
// 00412ea7: MOV ECX,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 00412ead: PUSH ECX
//   XREF to: 02d05310 (DATA)
// 00412eae: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 00412eb3: ADD ESP,0x8
// 00412eb6: TEST EAX,EAX
// 00412eb8: JZ 0x00412ec7
//   XREF to: 00412ec7 (CONDITIONAL_JUMP)
// 00412eba: PUSH 0x1
// 00412ebc: PUSH 0x7
// 00412ebe: PUSH EBX
// 00412ebf: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00412ec4: ADD ESP,0xc
// 00412ec7: CMP dword ptr [EBP + 0x1fccc],0x0
//   Label: LAB_00412ec7
// 00412ece: JNZ 0x00412f20
//   XREF to: 00412f20 (CONDITIONAL_JUMP)
// 00412ed0: CMP dword ptr [EBP + 0xbe28],0x2
// 00412ed7: JNZ 0x00412f20
//   XREF to: 00412f20 (CONDITIONAL_JUMP)
// 00412ed9: ADD ESP,0x98
//   Label: LAB_00412ed9
// 00412edf: POP EBP
// 00412ee0: POP ESI
// 00412ee1: POP EBX
// 00412ee2: RET
// 00412ee3: LEA EAX,[EBP + 0x1fbd4]
//   Label: LAB_00412ee3
// 00412ee9: PUSH EAX
// 00412eea: MOV ESI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 00412ef0: PUSH ESI
//   XREF to: 02d05310 (DATA)
// 00412ef1: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 00412ef6: ADD ESP,0x8
// 00412ef9: TEST EAX,EAX
// 00412efb: JZ 0x00412ec7
//   XREF to: 00412ec7 (CONDITIONAL_JUMP)
// 00412efd: PUSH 0x1
// 00412eff: PUSH 0x6
// 00412f01: PUSH EBX
// 00412f02: MOV dword ptr [EBP + 0x1fccc],0x1
// 00412f0c: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00412f11: ADD ESP,0xc
// 00412f14: MOV dword ptr [EBP + 0x1fcd0],0x1
// 00412f1e: JMP 0x00412ec7
//   XREF to: 00412ec7 (UNCONDITIONAL_JUMP)
// 00412f20: PUSH dword ptr [ESP + 0xac]
//   Label: LAB_00412f20
//   XREF to: Stack[0x8] (READ)
// 00412f27: PUSH EBP
// 00412f28: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 00412f2d: ADD ESP,0x8
// 00412f30: TEST EAX,EAX
// 00412f32: JZ 0x00412ed9
//   XREF to: 00412ed9 (CONDITIONAL_JUMP)
// 00412f34: CMP dword ptr [EBP + 0xbe28],0x2
// 00412f3b: JZ 0x004131ef
//   XREF to: 004131ef (CONDITIONAL_JUMP)
// 00412f41: FLD float ptr [ESP + 0xac]
//   Label: LAB_00412f41
//   XREF to: Stack[0x8] (READ)
// 00412f48: FMUL double ptr [0x00615029]
//   XREF to: 00615029 (READ)
// 00412f4e: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00412f53: FSTP float ptr [EBP + 0x2438]
// 00412f59: CMP dword ptr [EAX + 0x228],0x0
//   XREF to: 02d81cc4 (READ)
// 00412f60: JZ 0x00412f74
//   XREF to: 00412f74 (CONDITIONAL_JUMP)
// 00412f62: FLD float ptr [EBP + 0x2438]
// 00412f68: FMUL double ptr [0x00615031]
//   XREF to: 00615031 (READ)
// 00412f6e: FSTP float ptr [EBP + 0x2438]
// 00412f74: FLD float ptr [EBP + 0xbe24]
//   Label: LAB_00412f74
// 00412f7a: FSUB float ptr [ESP + 0xac]
//   XREF to: Stack[0x8] (READ)
// 00412f81: FST float ptr [EBP + 0xbe24]
// 00412f87: FLDZ
// 00412f89: FCOMPP
// 00412f8b: FNSTSW AX
// 00412f8d: SAHF
// 00412f8e: JBE 0x00412f9a
//   XREF to: 00412f9a (CONDITIONAL_JUMP)
// 00412f90: MOV dword ptr [EBP + 0xbe24],0x0
// 00412f9a: LEA EAX,[EBP + 0x23ac]
//   Label: LAB_00412f9a
// 00412fa0: PUSH dword ptr [ESP + 0xac]
//   XREF to: Stack[0x8] (READ)
// 00412fa7: MOV dword ptr [EAX + 0x8],0x0
// 00412fae: PUSH EBP
// 00412faf: MOV EDX,dword ptr [EAX + 0x8]
// 00412fb2: MOV dword ptr [EAX + 0x4],EDX
// 00412fb5: MOV EDX,dword ptr [EAX + 0x4]
// 00412fb8: MOV dword ptr [EAX],EDX
// 00412fba: CALL core_baron.cpp_FUN_00413a00
//   XREF to: 00413a00 (UNCONDITIONAL_CALL)
// 00412fbf: MOV EBX,dword ptr [EBP + 0x1fccc]
// 00412fc5: ADD ESP,0x8
// 00412fc8: TEST EBX,EBX
// 00412fca: JZ 0x00412ed9
//   XREF to: 00412ed9 (CONDITIONAL_JUMP)
// 00412fd0: PUSH EDI
// 00412fd1: PUSH dword ptr [ESP + 0xb0]
//   XREF to: Stack[0x8] (READ)
// 00412fd8: PUSH EBP
// 00412fd9: CALL core_charactr.cpp_CCharacter_FUN_0042ca70
//   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
// 00412fde: MOV EBX,EAX
// 00412fe0: ADD ESP,0x8
// 00412fe3: LEA EAX,[EBP + 0x158]
// 00412fe9: TEST EBX,EBX
// 00412feb: JZ 0x00413448
//   XREF to: 00413448 (CONDITIONAL_JUMP)
// 00412ff1: MOV EBX,dword ptr [EBP + 0x25b0]
// 00412ff7: CMP EBX,0x2
// 00412ffa: JNC 0x00413230
//   XREF to: 00413230 (CONDITIONAL_JUMP)
// 00413000: CMP EBX,0x1
// 00413003: JNZ 0x00413237
//   XREF to: 00413237 (CONDITIONAL_JUMP)
// 00413009: PUSH EBX
// 0041300a: PUSH EBX
// 0041300b: PUSH EAX
//   Label: LAB_0041300b
// 0041300c: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   Label: LAB_0041300c
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00413011: ADD ESP,0xc
//   Label: LAB_00413011
// 00413014: FLD float ptr [ESP + 0xb0]
//   Label: default
//   XREF to: Stack[0x8] (READ)
// 0041301b: XOR EDX,EDX
// 0041301d: LEA EBX,[EBP + 0x23ac]
// 00413023: MOV dword ptr [ESP + 0x3c],EDX
//   XREF to: Stack[-0x6c] (WRITE)
// 00413027: MOV dword ptr [ESP + 0x40],EDX
//   XREF to: Stack[-0x68] (WRITE)
// 0041302b: MOV dword ptr [ESP + 0x44],EDX
//   XREF to: Stack[-0x64] (WRITE)
// 0041302f: FMUL double ptr [0x00615039]
//   XREF to: 00615039 (READ)
// 00413035: MOV EAX,dword ptr [EBX]
// 00413037: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 0041303b: MOV EAX,dword ptr [EBX + 0x4]
// 0041303e: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 00413042: MOV EAX,dword ptr [EBX + 0x8]
// 00413045: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 00413049: MOV dword ptr [EBX + 0x8],EDX
// 0041304c: MOV EAX,dword ptr [EBX + 0x8]
// 0041304f: MOV dword ptr [EBX + 0x4],EAX
// 00413052: MOV EAX,dword ptr [EBX + 0x4]
// 00413055: MOV dword ptr [EBX],EAX
// 00413057: FLD float ptr [EBP + 0x242c]
// 0041305d: FXCH
// 0041305f: FSUBR ST0,ST1
// 00413061: LEA EAX,[EBP + 0x2428]
// 00413067: FSTP ST1
// 00413069: FSTP float ptr [EBP + 0x242c]
// 0041306f: FLD float ptr [EAX]
// 00413071: FMUL float ptr [ESP + 0xb0]
//   XREF to: Stack[0x8] (READ)
// 00413078: FSTP float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x3c] (WRITE)
// 0041307c: FLD float ptr [EAX + 0x4]
// 0041307f: FMUL float ptr [ESP + 0xb0]
//   XREF to: Stack[0x8] (READ)
// 00413086: FSTP float ptr [ESP + 0x70]
//   XREF to: Stack[-0x38] (WRITE)
// 0041308a: FLD float ptr [EAX + 0x8]
// 0041308d: FMUL float ptr [ESP + 0xb0]
//   XREF to: Stack[0x8] (READ)
// 00413094: PUSH EBP
// 00413095: FLD float ptr [ESP + 0x44]
//   XREF to: Stack[-0x68] (READ)
// 00413099: FLD float ptr [ESP + 0x40]
//   XREF to: Stack[-0x6c] (READ)
// 0041309d: FADD float ptr [ESP + 0x70]
//   XREF to: Stack[-0x3c] (READ)
// 004130a1: FLD float ptr [ESP + 0x48]
//   XREF to: Stack[-0x64] (READ)
// 004130a5: FXCH
// 004130a7: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x6c] (WRITE)
// 004130ab: FXCH
// 004130ad: FADD float ptr [ESP + 0x74]
//   XREF to: Stack[-0x38] (READ)
// 004130b1: FXCH ST2
// 004130b3: FSTP float ptr [ESP + 0x78]
//   XREF to: Stack[-0x34] (WRITE)
// 004130b7: FADD float ptr [ESP + 0x78]
//   XREF to: Stack[-0x34] (READ)
// 004130bb: FXCH
// 004130bd: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0x68] (WRITE)
// 004130c1: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x64] (WRITE)
// 004130c5: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 004130ca: ADD ESP,0x4
// 004130cd: LEA EBX,[EBP + 0x158]
// 004130d3: PUSH EBX
// 004130d4: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 004130d9: ADD ESP,0x4
// 004130dc: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 004130e1: MOV ESI,dword ptr [0x00822498]
//   XREF to: 00822498 (READ)
// 004130e7: PUSH ESI
// 004130e8: LEA EAX,[EBP + 0x1fc9c]
// 004130ee: PUSH dword ptr [EBP + 0x1fca8]
// 004130f4: PUSH EAX
// 004130f5: LEA ESI,[ESP + 0x14]
//   XREF to: Stack[-0xa4] (DATA)
// 004130f9: CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20
//   XREF to: 005f7b20 (UNCONDITIONAL_CALL)
// 004130fe: ADD ESP,0x4
// 00413101: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0x94] (DATA)
// 00413105: PUSH EAX
// 00413106: LEA EDI,[ESP + 0x24]
//   XREF to: Stack[-0x94] (DATA)
// 0041310a: LEA ESI,[ESP + 0x14]
//   XREF to: Stack[-0xa4] (DATA)
// 0041310e: PUSH EBX
// 0041310f: MOVSD ES:EDI,ESI
// 00413110: MOVSD ES:EDI,ESI
// 00413111: MOVSD ES:EDI,ESI
// 00413112: MOVSD ES:EDI,ESI
// 00413113: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059f750
//   XREF to: 0059f750 (UNCONDITIONAL_CALL)
// 00413118: ADD ESP,0x14
// 0041311b: PUSH dword ptr [ESP + 0xb0]
//   XREF to: Stack[0x8] (READ)
// 00413122: PUSH EBP
// 00413123: MOV EDI,0x40000000
// 00413128: XOR EBX,EBX
// 0041312a: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 0041312f: ADD ESP,0x8
// 00413132: LEA ESI,[EBP + 0x20]
// 00413135: PUSH 0x40000000
//   Label: LAB_00413135
// 0041313a: PUSH 0xc0000000
// 0041313f: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 00413144: MOV dword ptr [ESP + 0xa0],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0041314b: FLD float ptr [ESP + 0xa0]
//   XREF to: Stack[-0x10] (READ)
// 00413152: ADD ESP,0x8
// 00413155: INC EBX
// 00413156: PUSH 0x40000000
// 0041315b: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x60] (WRITE)
// 0041315f: PUSH 0xc0000000
// 00413164: MOV dword ptr [ESP + 0x54],EDI
//   XREF to: Stack[-0x5c] (WRITE)
// 00413168: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 0041316d: MOV dword ptr [ESP + 0xa0],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 00413174: MOV EBP,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
// 0041317a: FLD float ptr [ESP + 0xa0]
//   XREF to: Stack[-0x10] (READ)
// 00413181: ADD ESP,0x8
// 00413184: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x60] (DATA)
// 00413188: FLD float ptr [ESP + 0x48]
//   XREF to: Stack[-0x60] (READ)
// 0041318c: FLD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 00413190: FXCH ST2
// 00413192: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x58] (WRITE)
// 00413196: PUSH 0xffff
// 0041319b: FLD float ptr [ESP + 0x54]
//   XREF to: Stack[-0x58] (READ)
// 0041319f: PUSH 0x0
// 004131a1: FXCH
// 004131a3: FADD float ptr [ESI]
// 004131a5: PUSH 0x40000000
// 004131aa: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0x60] (WRITE)
// 004131ae: FXCH
// 004131b0: FADD float ptr [ESI + 0x4]
// 004131b3: PUSH EAX
// 004131b4: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x5c] (WRITE)
// 004131b8: FADD float ptr [ESI + 0x8]
// 004131bb: PUSH EBP
//   XREF to: 02d12db0 (DATA)
// 004131bc: FSTP float ptr [ESP + 0x64]
//   XREF to: Stack[-0x58] (WRITE)
// 004131c0: CALL core_fire.cpp_CFireEffect_FUN_004c7b20
//   XREF to: 004c7b20 (UNCONDITIONAL_CALL)
// 004131c5: ADD ESP,0x14
// 004131c8: CMP EBX,0x2
// 004131cb: JL 0x00413135
//   XREF to: 00413135 (CONDITIONAL_JUMP)
// 004131d1: FLD float ptr [0x008224dc]
//   XREF to: 008224dc (READ)
// 004131d7: FADD float ptr [ESP + 0xb0]
//   XREF to: Stack[0x8] (READ)
// 004131de: FSTP float ptr [0x008224dc]
//   XREF to: 008224dc (WRITE)
// 004131e4: POP EDI
// 004131e5: ADD ESP,0x98
// 004131eb: POP EBP
// 004131ec: POP ESI
// 004131ed: POP EBX
// 004131ee: RET
// 004131ef: PUSH dword ptr [ESP + 0xac]
//   Label: LAB_004131ef
//   XREF to: Stack[0x8] (READ)
// 004131f6: PUSH EBP
// 004131f7: CALL core_baron.cpp_FUN_004135e0
//   XREF to: 004135e0 (UNCONDITIONAL_CALL)
// 004131fc: ADD ESP,0x8
// 004131ff: JMP 0x00412f41
//   XREF to: 00412f41 (UNCONDITIONAL_JUMP)
// 00413204: PUSH 0x1
//   Label: LAB_00413204
// 00413206: PUSH 0x0
// 00413208: PUSH EAX
// 00413209: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0041320e: ADD ESP,0xc
// 00413211: PUSH EBP
// 00413212: PUSH 0x614ff9
//   XREF to: 00614ff9 (DATA)
// 00413217: MOV EAX,[0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 0041321c: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 0041321d: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 00413222: JMP 0x00413011
//   XREF to: 00413011 (UNCONDITIONAL_JUMP)
// 00413227: PUSH 0x1
//   Label: LAB_00413227
// 00413229: PUSH 0x3
// 0041322b: JMP 0x0041300b
//   XREF to: 0041300b (UNCONDITIONAL_JUMP)
// 00413230: JBE 0x00413227
//   Label: LAB_00413230
//   XREF to: 00413227 (CONDITIONAL_JUMP)
// 00413232: CMP EBX,0x3
// 00413235: JZ 0x00413204
//   XREF to: 00413204 (CONDITIONAL_JUMP)
// 00413237: PUSH 0x1
//   Label: LAB_00413237
// 00413239: PUSH 0x0
// 0041323b: LEA EAX,[EBP + 0x158]
// 00413241: JMP 0x0041300b
//   XREF to: 0041300b (UNCONDITIONAL_JUMP)
// 00413246: MOV EBX,dword ptr [0x008224cc]
//   Label: caseD_4
//   XREF to: 008224cc (READ)
// 0041324c: LEA EAX,[EBX*0x4 + 0x0]
// 00413253: SUB EAX,EBX
// 00413255: SHL EAX,0x4
// 00413258: LEA EBX,[EBP + 0xfd8]
// 0041325e: ADD EAX,EBX
// 00413260: PUSH EAX
// 00413261: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 00413266: LEA EAX,[ESP + 0x2c]
//   XREF to: Stack[-0x84] (DATA)
// 0041326a: PUSH EAX
// 0041326b: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 00413270: ADD ESP,0xc
// 00413273: PUSH EAX
// 00413274: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x48] (DATA)
// 00413278: PUSH EAX
// 00413279: PUSH EBP
// 0041327a: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0041327f: MOV EBX,EAX
// 00413281: LEA EAX,[ESP + 0x84]
//   XREF to: Stack[-0x30] (DATA)
// 00413288: ADD ESP,0xc
// 0041328b: CMP EAX,EBX
// 0041328d: JZ 0x004132a6
//   XREF to: 004132a6 (CONDITIONAL_JUMP)
// 0041328f: MOV EAX,dword ptr [EBX]
// 00413291: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00413295: MOV EAX,dword ptr [EBX + 0x4]
// 00413298: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0041329c: MOV EAX,dword ptr [EBX + 0x8]
// 0041329f: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004132a6: MOV EBX,dword ptr [0x008224d0]
//   Label: LAB_004132a6
//   XREF to: 008224d0 (READ)
// 004132ac: LEA EAX,[EBX*0x4 + 0x0]
// 004132b3: SUB EAX,EBX
// 004132b5: SHL EAX,0x4
// 004132b8: LEA EBX,[EBP + 0xfd8]
// 004132be: ADD EAX,EBX
// 004132c0: PUSH EAX
// 004132c1: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 004132c6: LEA EAX,[ESP + 0x8c]
//   XREF to: Stack[-0x24] (DATA)
// 004132cd: PUSH EAX
// 004132ce: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 004132d3: ADD ESP,0xc
// 004132d6: PUSH EAX
// 004132d7: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x78] (DATA)
// 004132db: PUSH EAX
// 004132dc: PUSH EBP
// 004132dd: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004132e2: MOV EBX,EAX
// 004132e4: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x54] (DATA)
// 004132e8: ADD ESP,0xc
// 004132eb: CMP EAX,EBX
// 004132ed: JZ 0x00413303
//   XREF to: 00413303 (CONDITIONAL_JUMP)
// 004132ef: MOV EAX,dword ptr [EBX]
// 004132f1: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 004132f5: MOV EAX,dword ptr [EBX + 0x4]
// 004132f8: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 004132fc: MOV EAX,dword ptr [EBX + 0x8]
// 004132ff: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00413303: CMP dword ptr [EBP + 0x1fcb0],0x0
//   Label: LAB_00413303
// 0041330a: JNZ 0x0041336c
//   XREF to: 0041336c (CONDITIONAL_JUMP)
// 0041330c: PUSH 0x66e460
//   XREF to: 0066e460 (DATA)
// 00413311: PUSH 0x3f000000
// 00413316: PUSH 0x3f000000
// 0041331b: LEA EAX,[EBP + 0x1fcb4]
// 00413321: PUSH 0x40000000
// 00413326: PUSH EAX
// 00413327: LEA EAX,[ESP + 0x8c]
//   XREF to: Stack[-0x30] (DATA)
// 0041332e: PUSH EAX
// 0041332f: MOV EDI,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
// 00413335: PUSH EDI
//   XREF to: 02d12db0 (DATA)
// 00413336: CALL core_fire.cpp_CFireEffect_FUN_004c90c0
//   XREF to: 004c90c0 (UNCONDITIONAL_CALL)
// 0041333b: ADD ESP,0x1c
// 0041333e: PUSH 0x66e460
//   XREF to: 0066e460 (DATA)
// 00413343: PUSH 0x3f000000
// 00413348: PUSH 0x3f000000
// 0041334d: LEA EAX,[EBP + 0x1fcc0]
// 00413353: PUSH 0x40000000
// 00413358: PUSH EAX
// 00413359: LEA EAX,[ESP + 0x68]
//   XREF to: Stack[-0x54] (DATA)
// 0041335d: PUSH EAX
// 0041335e: MOV EAX,[0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
//   XREF to: 02d12db0 (PARAM)
// 00413363: PUSH EAX
//   XREF to: 02d12db0 (DATA)
// 00413364: CALL core_fire.cpp_CFireEffect_FUN_004c90c0
//   XREF to: 004c90c0 (UNCONDITIONAL_CALL)
// 00413369: ADD ESP,0x1c
// 0041336c: LEA EAX,[ESP + 0x78]
//   Label: LAB_0041336c
//   XREF to: Stack[-0x30] (DATA)
// 00413370: LEA EBX,[EBP + 0x1fcb4]
// 00413376: CMP EBX,EAX
// 00413378: JZ 0x00413391
//   XREF to: 00413391 (CONDITIONAL_JUMP)
// 0041337a: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x30] (DATA)
// 0041337e: MOV dword ptr [EBX],EAX
// 00413380: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x2c] (READ)
// 00413384: MOV dword ptr [EBX + 0x4],EAX
// 00413387: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x28] (READ)
// 0041338e: MOV dword ptr [EBX + 0x8],EAX
// 00413391: LEA EAX,[ESP + 0x54]
//   Label: LAB_00413391
//   XREF to: Stack[-0x54] (DATA)
// 00413395: LEA EBX,[EBP + 0x1fcc0]
// 0041339b: CMP EBX,EAX
// 0041339d: JZ 0x004133b3
//   XREF to: 004133b3 (CONDITIONAL_JUMP)
// 0041339f: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x54] (DATA)
// 004133a3: MOV dword ptr [EBX],EAX
// 004133a5: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x50] (READ)
// 004133a9: MOV dword ptr [EBX + 0x4],EAX
// 004133ac: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x4c] (READ)
// 004133b0: MOV dword ptr [EBX + 0x8],EAX
// 004133b3: MOV dword ptr [EBP + 0x1fcb0],0x0
//   Label: LAB_004133b3
// 004133bd: JMP 0x00413014
//   XREF to: 00413014 (UNCONDITIONAL_JUMP)
// 004133c2: MOV EDX,dword ptr [EBP + 0xbe2c]
//   Label: caseD_0
// 004133c8: XOR EBX,EBX
// 004133ca: TEST EDX,EDX
// 004133cc: JZ 0x004133dc
//   XREF to: 004133dc (CONDITIONAL_JUMP)
// 004133ce: CMP dword ptr [EBP + 0xbe34],0x0
// 004133d5: JZ 0x00413441
//   XREF to: 00413441 (CONDITIONAL_JUMP)
// 004133d7: MOV EBX,0x3
// 004133dc: CMP dword ptr [EBP + 0xbe30],0x0
//   Label: LAB_004133dc
// 004133e3: JZ 0x004133ea
//   XREF to: 004133ea (CONDITIONAL_JUMP)
// 004133e5: MOV EBX,0x2
// 004133ea: CMP dword ptr [EBP + 0xbe38],0x0
//   Label: LAB_004133ea
// 004133f1: JZ 0x0041340c
//   XREF to: 0041340c (CONDITIONAL_JUMP)
// 004133f3: MOV dword ptr [EBP + 0x1fcb0],0x1
// 004133fd: MOV EBX,0x4
// 00413402: MOV dword ptr [EBP + 0xbe38],0x0
// 0041340c: FLD float ptr [EBP + 0xbe50]
//   Label: LAB_0041340c
// 00413412: LEA ESI,[EBP + 0x158]
// 00413418: FMUL float ptr [EBP + 0x2438]
// 0041341e: PUSH ESI
// 0041341f: FSTP float ptr [EBP + 0x2418]
// 00413425: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0041342a: MOV EAX,dword ptr [EAX + 0x24]
// 0041342d: ADD ESP,0x4
// 00413430: CMP EBX,EAX
// 00413432: JZ 0x00413014
//   XREF to: 00413014 (CONDITIONAL_JUMP)
// 00413438: PUSH 0x1
// 0041343a: PUSH EBX
// 0041343b: PUSH ESI
// 0041343c: JMP 0x0041300c
//   XREF to: 0041300c (UNCONDITIONAL_JUMP)
// 00413441: MOV EBX,0x1
//   Label: LAB_00413441
// 00413446: JMP 0x004133dc
//   XREF to: 004133dc (UNCONDITIONAL_JUMP)
// 00413448: PUSH EAX
//   Label: LAB_00413448
// 00413449: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0041344e: MOV EAX,dword ptr [EAX + 0x24]
// 00413451: ADD ESP,0x4
// 00413454: CMP EAX,0x4
// 00413457: JA 0x00413014
//   XREF to: 00413014 (CONDITIONAL_JUMP)
// 0041345d: JMP dword ptr [EAX*0x4 + 0x412e68]
//   Label: switchD
//   XREF to: 004133c2 (COMPUTED_JUMP)
//   XREF to: 00413246 (COMPUTED_JUMP)
//   XREF to: 00412e68 (DATA)
