// Name: core_biggs.cpp_CBiggs_FUN_00418700
// Address: 00418700
// Address Range: [[00418700, 004189ad]]
// Convention: __cdecl
// Signature: void core_biggs.cpp_CBiggs_FUN_00418700(CBiggs * this_ptr)
// Globals:
//   TerminatedCString s_s_confused_while_walking_00615ada
//   undefined4 DAT_00615b09
//   undefined4 DAT_00615b11
//   undefined4 DAT_0065ac10
//   CConsole* g_CConsolePtr = 0083b1a4
//   CEventList* g_CEventListPtr = 02d05310
//   CConsole g_ConsolePtr
//   CEventList g_CEventListInstance
// Function calls:
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   core_charactr.cpp_CCharacter_FUN_00428f40
//   core_charactr.cpp_CCharacter_FUN_004297e0
//   core_charactr.cpp_CCharacter_FUN_00429820
//   core_charactr.cpp_CCharacter_FUN_00429870
//   core_charactr.cpp_CCharacter_FUN_0042ca70
//   core_charactr.cpp_CCharacter_FUN_0042ec40
//   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   core_motion.cpp_CMotionController_advance_FUN_0052d610
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_biggs_cpp_CBiggs_FUN_00418700(CBiggs *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  uint uVar1;
  float fVar2;
  CEnemy *pCVar3;
  int iVar4;
  float fVar5;
  float in_stack_00000008;
  
  iVar4 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar4 == 0) {
    return;
  }
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y =
       (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.x =
       (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y;
  fVar5 = in_stack_00000008 * (this_ptr->base_enemy).speed;
  this_ptr_00 = &(this_ptr->base_enemy).base_character.model;
  while (0.0 < fVar5) {
    fVar5 = (float)core_motion_cpp_CMotionController_advance_FUN_0052d610
                             (&this_ptr_00->motion_controller);
    core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
  }
  fVar5 = (this_ptr->base_enemy).speed;
  fVar2 = (float)_DAT_00615b09;
  *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x28) =
       (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
  *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c) =
       in_stack_00000008 * fVar2 * fVar5;
  core_motion_cpp_CMotionController_FUN_0052dab0(&this_ptr_00->motion_controller);
  iVar4 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar4 == 0) goto LAB_004187db;
  uVar1 = *(uint *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x10);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_004187b0:
      iVar4 = 1;
    }
    else {
LAB_00418994:
      iVar4 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base_enemy).base_character.model.motion_controller,iVar4,1);
  }
  else {
    if (uVar1 < 3) goto LAB_004187b0;
    if (uVar1 != 3) goto LAB_00418994;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr_00->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y =
       (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.x =
       (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y;
LAB_004187db:
  if (0.0 < *(float *)(this_ptr->base_enemy).field6_0xbe38) {
    *(float *)(this_ptr->base_enemy).field6_0xbe38 =
         *(float *)(this_ptr->base_enemy).field6_0xbe38 - in_stack_00000008;
  }
  iVar4 = core_charactr_cpp_CCharacter_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar4 != 0) {
    *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x20) =
         *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x20) -
         in_stack_00000008 * (float)_DAT_00615b11;
    pCVar3 = &this_ptr->base_enemy;
    (pCVar3->base_character).field2_0x240c[0x18] = '\0';
    (pCVar3->base_character).field2_0x240c[0x19] = '\0';
    (pCVar3->base_character).field2_0x240c[0x1a] = '\0';
    (pCVar3->base_character).field2_0x240c[0x1b] = '\0';
    *(undefined4 *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14) =
         *(undefined4 *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x18);
    *(undefined4 *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x10) =
         *(undefined4 *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14);
    (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y =
         (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
    (this_ptr->base_enemy).base_character.model.accumulated_root_motion.x =
         (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
  }
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base_enemy).base_character.model);
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,this_ptr->field4_0xc040 + 0xc2c);
  if (iVar4 != 0) {
    this_ptr->morph_timer = 0.0;
    this_ptr->morphing = 1;
  }
  if ((this_ptr->morphing != 0) &&
     (fVar5 = this_ptr->morph_timer + in_stack_00000008, this_ptr->morph_timer = fVar5,
     DAT_0065ac10 < fVar5)) {
    this_ptr->morph_timer = DAT_0065ac10;
    return;
  }
  return;
}


// Assembly code:
// 00418700: PUSH EBX
//   Label: core_biggs.cpp_CBiggs_FUN_00418700
// 00418701: PUSH ESI
// 00418702: PUSH EBP
// 00418703: MOV EBP,ESP
// 00418705: SUB ESP,0x30
// 00418708: AND ESP,0xfffffff8
// 0041870b: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0041870e: PUSH dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00418711: PUSH EBX
// 00418712: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 00418717: ADD ESP,0x8
// 0041871a: TEST EAX,EAX
// 0041871c: JZ 0x00418944
//   XREF to: 00418944 (CONDITIONAL_JUMP)
// 00418722: LEA EAX,[EBX + 0x23ac]
// 00418728: MOV dword ptr [EAX + 0x8],0x0
// 0041872f: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00418732: MOV EDX,dword ptr [EAX + 0x8]
// 00418735: MOV dword ptr [EAX + 0x4],EDX
// 00418738: MOV EDX,dword ptr [EAX + 0x4]
// 0041873b: MOV dword ptr [EAX],EDX
// 0041873d: FMUL float ptr [EBX + 0xbe24]
// 00418743: LEA ESI,[EBX + 0x158]
// 00418749: FSTP float ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0041874c: FLD float ptr [ESP]
//   Label: LAB_0041874c
//   XREF to: Stack[-0x40] (DATA)
// 0041874f: FLDZ
// 00418751: FCOMPP
// 00418753: FNSTSW AX
// 00418755: SAHF
// 00418756: JC 0x0041894a
//   XREF to: 0041894a (CONDITIONAL_JUMP)
// 0041875c: FLD float ptr [EBX + 0xbe24]
// 00418762: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00418765: FMUL double ptr [0x00615b09]
//   XREF to: 00615b09 (READ)
// 0041876b: FMULP
// 0041876d: FLD float ptr [EBX + 0x23b4]
// 00418773: PUSH ESI
// 00418774: FSTP float ptr [EBX + 0x2434]
// 0041877a: FSTP float ptr [EBX + 0x2438]
// 00418780: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00418785: ADD ESP,0x4
// 00418788: PUSH dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0041878b: PUSH EBX
// 0041878c: CALL core_charactr.cpp_CCharacter_FUN_0042ca70
//   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
// 00418791: ADD ESP,0x8
// 00418794: TEST EAX,EAX
// 00418796: JZ 0x004187db
//   XREF to: 004187db (CONDITIONAL_JUMP)
// 00418798: MOV EAX,dword ptr [EBX + 0x25b0]
// 0041879e: CMP EAX,0x2
// 004187a1: JNC 0x00418989
//   XREF to: 00418989 (CONDITIONAL_JUMP)
// 004187a7: CMP EAX,0x1
// 004187aa: JNZ 0x00418994
//   XREF to: 00418994 (CONDITIONAL_JUMP)
// 004187b0: PUSH 0x1
//   Label: LAB_004187b0
// 004187b2: PUSH 0x1
// 004187b4: LEA EAX,[EBX + 0x158]
//   Label: LAB_004187b4
// 004187ba: PUSH EAX
// 004187bb: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004187c0: ADD ESP,0xc
//   Label: LAB_004187c0
// 004187c3: LEA EAX,[EBX + 0x23ac]
// 004187c9: MOV dword ptr [EAX + 0x8],0x0
// 004187d0: MOV EDX,dword ptr [EAX + 0x8]
// 004187d3: MOV dword ptr [EAX + 0x4],EDX
// 004187d6: MOV EDX,dword ptr [EAX + 0x4]
// 004187d9: MOV dword ptr [EAX],EDX
// 004187db: FLD float ptr [EBX + 0xbe38]
//   Label: LAB_004187db
// 004187e1: FLDZ
// 004187e3: FCOMPP
// 004187e5: FNSTSW AX
// 004187e7: SAHF
// 004187e8: JNC 0x004187f9
//   XREF to: 004187f9 (CONDITIONAL_JUMP)
// 004187ea: FLD float ptr [EBX + 0xbe38]
// 004187f0: FSUB float ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004187f3: FSTP float ptr [EBX + 0xbe38]
// 004187f9: PUSH EBX
//   Label: LAB_004187f9
// 004187fa: CALL core_charactr.cpp_CCharacter_FUN_004297e0
//   XREF to: 004297e0 (UNCONDITIONAL_CALL)
// 004187ff: ADD ESP,0x4
// 00418802: TEST EAX,EAX
// 00418804: JZ 0x004188cf
//   XREF to: 004188cf (CONDITIONAL_JUMP)
// 0041880a: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0041880d: FLD ST0
// 0041880f: FMUL double ptr [0x00615b11]
//   XREF to: 00615b11 (READ)
// 00418815: FLD float ptr [EBX + 0x242c]
// 0041881b: FXCH
// 0041881d: FSUBR ST0,ST1
// 0041881f: LEA EDX,[EBX + 0x2428]
// 00418825: FSTP ST1
// 00418827: FSTP float ptr [EBX + 0x242c]
// 0041882d: FLD float ptr [EDX]
// 0041882f: FMUL ST1
// 00418831: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (WRITE)
// 00418835: FLD float ptr [EDX + 0x4]
// 00418838: FMUL ST1
// 0041883a: LEA ESI,[EBX + 0x241c]
// 00418840: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (WRITE)
// 00418844: FMUL float ptr [EDX + 0x8]
// 00418847: LEA EAX,[EBX + 0x23ac]
// 0041884d: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 00418851: FXCH
// 00418853: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (WRITE)
// 00418857: FADD float ptr [ESI]
// 00418859: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 0041885d: FXCH
// 0041885f: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (WRITE)
// 00418863: FADD float ptr [ESI + 0x4]
// 00418866: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (READ)
// 0041886a: FXCH
// 0041886c: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (WRITE)
// 00418870: FADD float ptr [ESI + 0x8]
// 00418873: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 00418877: FXCH
// 00418879: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (WRITE)
// 0041887d: FADD float ptr [EAX]
// 0041887f: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 00418883: FXCH
// 00418885: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (WRITE)
// 00418889: FADD float ptr [EAX + 0x4]
// 0041888c: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 00418890: FXCH
// 00418892: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (WRITE)
// 00418896: FADD float ptr [EAX + 0x8]
// 00418899: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (WRITE)
// 0041889d: MOV dword ptr [ESI + 0x8],0x0
// 004188a4: MOV EDX,dword ptr [ESI + 0x8]
// 004188a7: MOV dword ptr [ESI + 0x4],EDX
// 004188aa: MOV EDX,dword ptr [ESI + 0x4]
// 004188ad: MOV dword ptr [ESI],EDX
// 004188af: MOV dword ptr [EAX + 0x8],0x0
// 004188b6: MOV EDX,dword ptr [EAX + 0x8]
// 004188b9: MOV dword ptr [EAX + 0x4],EDX
// 004188bc: MOV EDX,dword ptr [EAX + 0x4]
// 004188bf: MOV dword ptr [EAX],EDX
// 004188c1: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x30] (DATA)
// 004188c5: PUSH EAX
// 004188c6: PUSH EBX
// 004188c7: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 004188cc: ADD ESP,0x8
// 004188cf: PUSH EBX
//   Label: LAB_004188cf
// 004188d0: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 004188d5: ADD ESP,0x4
// 004188d8: LEA EAX,[EBX + 0x158]
// 004188de: PUSH EAX
// 004188df: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 004188e4: ADD ESP,0x4
// 004188e7: PUSH dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004188ea: PUSH EBX
// 004188eb: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 004188f0: ADD ESP,0x8
// 004188f3: LEA EAX,[EBX + 0xcc6c]
// 004188f9: PUSH EAX
// 004188fa: MOV ECX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 00418900: PUSH ECX
//   XREF to: 02d05310 (DATA)
// 00418901: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 00418906: ADD ESP,0x8
// 00418909: TEST EAX,EAX
// 0041890b: JZ 0x00418921
//   XREF to: 00418921 (CONDITIONAL_JUMP)
// 0041890d: MOV dword ptr [EBX + 0xc03c],0x0
// 00418917: MOV dword ptr [EBX + 0xc038],0x1
// 00418921: CMP dword ptr [EBX + 0xc038],0x0
//   Label: LAB_00418921
// 00418928: JZ 0x00418944
//   XREF to: 00418944 (CONDITIONAL_JUMP)
// 0041892a: FLD float ptr [EBX + 0xc03c]
// 00418930: FADD float ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00418933: FST float ptr [EBX + 0xc03c]
// 00418939: FCOMP float ptr [0x0065ac10]
//   XREF to: 0065ac10 (READ)
// 0041893f: FNSTSW AX
// 00418941: SAHF
// 00418942: JA 0x0041899d
//   XREF to: 0041899d (CONDITIONAL_JUMP)
// 00418944: MOV ESP,EBP
//   Label: LAB_00418944
// 00418946: POP EBP
// 00418947: POP ESI
// 00418948: POP EBX
// 00418949: RET
// 0041894a: MOV EAX,ESP
//   Label: LAB_0041894a
// 0041894c: PUSH EAX
// 0041894d: PUSH ESI
// 0041894e: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 00418953: ADD ESP,0x8
// 00418956: PUSH EAX
// 00418957: PUSH EBX
// 00418958: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 0041895d: ADD ESP,0x8
// 00418960: JMP 0x0041874c
//   XREF to: 0041874c (UNCONDITIONAL_JUMP)
// 00418965: PUSH 0x1
//   Label: LAB_00418965
// 00418967: PUSH 0x0
// 00418969: PUSH ESI
// 0041896a: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0041896f: ADD ESP,0xc
// 00418972: PUSH EBX
// 00418973: PUSH 0x615ada
//   XREF to: 00615ada (DATA)
// 00418978: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 0041897e: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 0041897f: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 00418984: JMP 0x004187c0
//   XREF to: 004187c0 (UNCONDITIONAL_JUMP)
// 00418989: JBE 0x004187b0
//   Label: LAB_00418989
//   XREF to: 004187b0 (CONDITIONAL_JUMP)
// 0041898f: CMP EAX,0x3
// 00418992: JZ 0x00418965
//   XREF to: 00418965 (CONDITIONAL_JUMP)
// 00418994: PUSH 0x1
//   Label: LAB_00418994
// 00418996: PUSH 0x0
// 00418998: JMP 0x004187b4
//   XREF to: 004187b4 (UNCONDITIONAL_JUMP)
// 0041899d: MOV EAX,[0x0065ac10]
//   Label: LAB_0041899d
//   XREF to: 0065ac10 (READ)
// 004189a2: MOV dword ptr [EBX + 0xc03c],EAX
// 004189a8: MOV ESP,EBP
// 004189aa: POP EBP
// 004189ab: POP ESI
// 004189ac: POP EBX
// 004189ad: RET
