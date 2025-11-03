// Name: core_npc.cpp_CNPC_process_FUN_005448b0
// Address: 005448b0
// Address Range: [[005448b0, 00544b6d]]
// Convention: __cdecl
// Signature: void core_npc.cpp_CNPC_process_FUN_005448b0(CNPC * this_ptr)
// Cross-references:
//   core_hpriest.cpp_FUN_004f7c00 (004f7c00) at 004f7c0a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_STAND_0063e31f
//   TerminatedCString s_s_confused_while_walking_0063e325
//   TerminatedCString s_RUN_0063e34f
//   TerminatedCString s_WALK_0063e353
//   TerminatedCString s_STAND_0063e358
//   double DOUBLE_0063e364 = 3.14159265350000
//   double DOUBLE_0063e36c = 0.5
//   double DOUBLE_0063e374 = 32
//   CConsole* g_CConsolePtr = 0083b1a4
//   CGore* g_CGorePtr = 02d83364
//   CConsole g_ConsolePtr
//   CGore g_CGoreInstance
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   core_charactr.cpp_CCharacter_FUN_00428f40
//   core_charactr.cpp_CCharacter_FUN_00429820
//   core_charactr.cpp_CCharacter_FUN_00429870
//   core_charactr.cpp_CCharacter_FUN_0042ca70
//   core_charactr.cpp_CCharacter_FUN_0042ea40
//   core_charactr.cpp_CCharacter_FUN_0042ec40
//   core_gore.cpp_FUN_004ede30
//   core_motion.cpp_CMotionController_advance_FUN_0052d610
//   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
//   core_motion.cpp_FUN_0052db90
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059e020
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

void __cdecl core_npc_cpp_CNPC_process_FUN_005448b0(CNPC *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  char *pcVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  CCharacter *pCVar6;
  int iVar7;
  SCollisionInfo *collision_info;
  CVector3f *input_local_point;
  CMotionList *this_ptr_00;
  BADSPACEBASE *in_ESP;
  SCollisionInfo *in_stack_00000008;
  float fStack0000000c;
  float fStack00000010;
  float fStack00000014;
  
  iVar7 = core_charactr_cpp_CCharacter_FUN_00429870(&this_ptr->base_character);
  if (iVar7 == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_FUN_0042ea40(&this_ptr->base_character);
  pCVar6 = &this_ptr->base_character;
  (pCVar6->model).field10_0x2254[8] = '\0';
  (pCVar6->model).field10_0x2254[9] = '\0';
  (pCVar6->model).field10_0x2254[10] = '\0';
  (pCVar6->model).field10_0x2254[0xb] = '\0';
  *(undefined4 *)((this_ptr->base_character).model.field10_0x2254 + 4) =
       *(undefined4 *)((this_ptr->base_character).model.field10_0x2254 + 8);
  *(undefined4 *)(this_ptr->base_character).model.field10_0x2254 =
       *(undefined4 *)((this_ptr->base_character).model.field10_0x2254 + 4);
  pCVar1 = &(this_ptr->base_character).model;
  collision_info = in_stack_00000008;
  while (0.0 < (float)collision_info) {
    collision_info =
         (SCollisionInfo *)
         core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar1->motion_controller);
    core_charactr_cpp_CCharacter_FUN_0042ec40(&this_ptr->base_character);
  }
  iVar7 = (*(this_ptr->base_character).base_actor.vtable[1].hasCollision)
                    ((CDemonActor *)this_ptr,collision_info);
  if ((((1 < iVar7) && ((this_ptr->base_character).base_actor.was_created == 1)) &&
      (this_ptr->pool_me == 0)) && ((this_ptr->base_character).base_actor.field11_0xdc == 0)) {
    input_local_point = core_skeleton_cpp_CDeformableModelInstance_FUN_0059fa20(pCVar1);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,(CVector3f *)&stack0xfffffff0,input_local_point);
    core_gore_cpp_FUN_004ede30();
    this_ptr->pool_me = 1;
  }
  fVar5 = (float)DOUBLE_0063e364;
  fVar4 = (float)DOUBLE_0063e36c;
  *(undefined4 *)((this_ptr->base_character).field2_0x240c + 0x28) =
       *(undefined4 *)((this_ptr->base_character).model.field10_0x2254 + 8);
  *(float *)((this_ptr->base_character).field2_0x240c + 0x2c) =
       (float)in_stack_00000008 * fVar5 * fVar4;
  iVar7 = core_charactr_cpp_CCharacter_FUN_0042ca70(&this_ptr->base_character);
  if (iVar7 == 0) goto LAB_00544a0c;
  uVar3 = *(uint *)((this_ptr->base_character).field11_0x25a0 + 0x10);
  if (uVar3 < 2) {
LAB_005449e5:
    core_motion_cpp_FUN_0052db90();
  }
  else {
    pCVar1 = &(this_ptr->base_character).model;
    if (uVar3 < 3) {
      this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                              (&pCVar1->motion_controller);
      iVar7 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(this_ptr_00);
      if (iVar7 < 0) goto LAB_005449e5;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller);
    }
    else {
      if (uVar3 != 3) goto LAB_005449e5;
      core_motion_cpp_FUN_0052db90();
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
    }
  }
  pCVar6 = &this_ptr->base_character;
  (pCVar6->model).field10_0x2254[8] = '\0';
  (pCVar6->model).field10_0x2254[9] = '\0';
  (pCVar6->model).field10_0x2254[10] = '\0';
  (pCVar6->model).field10_0x2254[0xb] = '\0';
  *(undefined4 *)((this_ptr->base_character).model.field10_0x2254 + 4) =
       *(undefined4 *)((this_ptr->base_character).model.field10_0x2254 + 8);
  *(undefined4 *)(this_ptr->base_character).model.field10_0x2254 =
       *(undefined4 *)((this_ptr->base_character).model.field10_0x2254 + 4);
LAB_00544a0c:
  *(float *)((this_ptr->base_character).field2_0x240c + 0x20) =
       *(float *)((this_ptr->base_character).field2_0x240c + 0x20) -
       (float)in_stack_00000008 * (float)DOUBLE_0063e374;
  pcVar2 = (this_ptr->base_character).field2_0x240c + 0x10;
  fStack0000000c =
       *(float *)((this_ptr->base_character).field2_0x240c + 0x1c) * (float)in_stack_00000008 +
       *(float *)pcVar2;
  fStack00000010 =
       *(float *)((this_ptr->base_character).field2_0x240c + 0x20) * (float)in_stack_00000008 +
       *(float *)((this_ptr->base_character).field2_0x240c + 0x14);
  fStack00000014 =
       *(float *)((this_ptr->base_character).field2_0x240c + 0x24) * (float)in_stack_00000008 +
       *(float *)((this_ptr->base_character).field2_0x240c + 0x18);
  (this_ptr->base_character).field2_0x240c[0x18] = '\0';
  (this_ptr->base_character).field2_0x240c[0x19] = '\0';
  (this_ptr->base_character).field2_0x240c[0x1a] = '\0';
  (this_ptr->base_character).field2_0x240c[0x1b] = '\0';
  *(undefined4 *)((this_ptr->base_character).field2_0x240c + 0x14) =
       *(undefined4 *)((this_ptr->base_character).field2_0x240c + 0x18);
  *(float *)pcVar2 = *(float *)((this_ptr->base_character).field2_0x240c + 0x14);
  pCVar6 = &this_ptr->base_character;
  (pCVar6->model).field10_0x2254[8] = '\0';
  (pCVar6->model).field10_0x2254[9] = '\0';
  (pCVar6->model).field10_0x2254[10] = '\0';
  (pCVar6->model).field10_0x2254[0xb] = '\0';
  *(undefined4 *)((this_ptr->base_character).model.field10_0x2254 + 4) =
       *(undefined4 *)((this_ptr->base_character).model.field10_0x2254 + 8);
  *(undefined4 *)(this_ptr->base_character).model.field10_0x2254 =
       *(undefined4 *)((this_ptr->base_character).model.field10_0x2254 + 4);
  core_charactr_cpp_CCharacter_FUN_00428f40(&this_ptr->base_character);
  core_charactr_cpp_CCharacter_FUN_00429820(&this_ptr->base_character);
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059e020();
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(&this_ptr->base_character);
  return;
}


// Assembly code:
// 005448b0: PUSH EBX
//   Label: core_npc.cpp_CNPC_process_FUN_005448b0
// 005448b1: PUSH ESI
// 005448b2: PUSH EDI
// 005448b3: PUSH EBP
// 005448b4: MOV EBP,ESP
// 005448b6: SUB ESP,0x48
// 005448b9: AND ESP,0xfffffff8
// 005448bc: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005448bf: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005448c2: PUSH EBX
// 005448c3: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 005448c8: ADD ESP,0x8
// 005448cb: TEST EAX,EAX
// 005448cd: JNZ 0x005448d6
//   XREF to: 005448d6 (CONDITIONAL_JUMP)
// 005448cf: MOV ESP,EBP
// 005448d1: POP EBP
// 005448d2: POP EDI
// 005448d3: POP ESI
// 005448d4: POP EBX
// 005448d5: RET
// 005448d6: PUSH dword ptr [EBP + 0x18]
//   Label: LAB_005448d6
//   XREF to: Stack[0x8] (READ)
// 005448d9: PUSH EBX
// 005448da: CALL core_charactr.cpp_CCharacter_FUN_0042ea40
//   XREF to: 0042ea40 (UNCONDITIONAL_CALL)
// 005448df: LEA EAX,[EBX + 0x23ac]
// 005448e5: MOV dword ptr [EAX + 0x8],0x0
// 005448ec: ADD ESP,0x8
// 005448ef: MOV EDX,dword ptr [EAX + 0x8]
// 005448f2: MOV dword ptr [EAX + 0x4],EDX
// 005448f5: MOV EDX,dword ptr [EAX + 0x4]
// 005448f8: MOV dword ptr [EAX],EDX
// 005448fa: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005448fd: LEA ESI,[EBX + 0x158]
// 00544903: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x58] (DATA)
// 00544906: FLD float ptr [ESP]
//   Label: LAB_00544906
//   XREF to: Stack[-0x58] (DATA)
// 00544909: FLDZ
// 0054490b: FCOMPP
// 0054490d: FNSTSW AX
// 0054490f: SAHF
// 00544910: JNC 0x0054492a
//   XREF to: 0054492a (CONDITIONAL_JUMP)
// 00544912: MOV EAX,ESP
// 00544914: PUSH EAX
// 00544915: PUSH ESI
// 00544916: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 0054491b: ADD ESP,0x8
// 0054491e: PUSH EAX
// 0054491f: PUSH EBX
// 00544920: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 00544925: ADD ESP,0x8
// 00544928: JMP 0x00544906
//   XREF to: 00544906 (UNCONDITIONAL_JUMP)
// 0054492a: PUSH EBX
//   Label: LAB_0054492a
// 0054492b: MOV EAX,dword ptr [EBX + 0x154]
// 00544931: CALL dword ptr [EAX + 0x120]
// 00544937: ADD ESP,0x4
// 0054493a: CMP EAX,0x1
// 0054493d: JLE 0x00544995
//   XREF to: 00544995 (CONDITIONAL_JUMP)
// 0054493f: CMP dword ptr [EBX + 0x70],0x1
// 00544943: JNZ 0x00544995
//   XREF to: 00544995 (CONDITIONAL_JUMP)
// 00544945: MOV ECX,dword ptr [EBX + 0x1f704]
// 0054494b: TEST ECX,ECX
// 0054494d: JNZ 0x00544995
//   XREF to: 00544995 (CONDITIONAL_JUMP)
// 0054494f: MOV EDI,dword ptr [EBX + 0xdc]
// 00544955: TEST EDI,EDI
// 00544957: JNZ 0x00544995
//   XREF to: 00544995 (CONDITIONAL_JUMP)
// 00544959: PUSH ECX
// 0054495a: LEA EAX,[ESP + 0x14]
// 0054495e: PUSH EAX
// 0054495f: PUSH ESI
// 00544960: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 00544965: ADD ESP,0xc
// 00544968: PUSH EAX
// 00544969: LEA EAX,[ESP + 0x2c]
// 0054496d: PUSH EAX
// 0054496e: PUSH EBX
// 0054496f: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00544974: ADD ESP,0xc
// 00544977: PUSH EDI
// 00544978: LEA EAX,[ESP + 0x2c]
// 0054497c: PUSH EAX
// 0054497d: MOV EAX,[0x0067b9a0]
//   XREF to: 02d83364 (PARAM)
//   XREF to: 0067b9a0 (READ)
// 00544982: PUSH EAX
//   XREF to: 02d83364 (DATA)
// 00544983: CALL core_gore.cpp_FUN_004ede30
//   XREF to: 004ede30 (UNCONDITIONAL_CALL)
// 00544988: ADD ESP,0xc
// 0054498b: MOV dword ptr [EBX + 0x1f704],0x1
// 00544995: FLD float ptr [EBP + 0x18]
//   Label: LAB_00544995
//   XREF to: Stack[0x8] (READ)
// 00544998: FMUL double ptr [0x0063e364]
//   XREF to: 0063e364 (READ)
// 0054499e: FMUL double ptr [0x0063e36c]
//   XREF to: 0063e36c (READ)
// 005449a4: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005449a7: MOV EAX,dword ptr [EBX + 0x23b4]
// 005449ad: MOV dword ptr [EBX + 0x2434],EAX
// 005449b3: PUSH EBX
// 005449b4: FSTP float ptr [EBX + 0x2438]
// 005449ba: CALL core_charactr.cpp_CCharacter_FUN_0042ca70
//   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
// 005449bf: ADD ESP,0x8
// 005449c2: TEST EAX,EAX
// 005449c4: JZ 0x00544a0c
//   XREF to: 00544a0c (CONDITIONAL_JUMP)
// 005449c6: MOV EAX,dword ptr [EBX + 0x25b0]
// 005449cc: CMP EAX,0x2
// 005449cf: JNC 0x00544b55
//   XREF to: 00544b55 (CONDITIONAL_JUMP)
// 005449d5: CMP EAX,0x1
// 005449d8: JNZ 0x00544b62
//   XREF to: 00544b62 (CONDITIONAL_JUMP)
// 005449de: PUSH 0x1
//   Label: LAB_005449de
// 005449e0: PUSH 0x63e353
//   XREF to: 0063e353 (DATA)
// 005449e5: LEA EAX,[EBX + 0x158]
//   Label: LAB_005449e5
// 005449eb: PUSH EAX
// 005449ec: CALL core_motion.cpp_FUN_0052db90
//   XREF to: 0052db90 (UNCONDITIONAL_CALL)
// 005449f1: ADD ESP,0xc
//   Label: LAB_005449f1
// 005449f4: LEA EAX,[EBX + 0x23ac]
// 005449fa: MOV dword ptr [EAX + 0x8],0x0
// 00544a01: MOV EDX,dword ptr [EAX + 0x8]
// 00544a04: MOV dword ptr [EAX + 0x4],EDX
// 00544a07: MOV EDX,dword ptr [EAX + 0x4]
// 00544a0a: MOV dword ptr [EAX],EDX
// 00544a0c: FLD float ptr [EBP + 0x18]
//   Label: LAB_00544a0c
//   XREF to: Stack[0x8] (READ)
// 00544a0f: FMUL double ptr [0x0063e374]
//   XREF to: 0063e374 (READ)
// 00544a15: FLD float ptr [EBX + 0x242c]
// 00544a1b: FXCH
// 00544a1d: FSUBR ST0,ST1
// 00544a1f: LEA EDX,[EBX + 0x2428]
// 00544a25: FSTP ST1
// 00544a27: FSTP float ptr [EBX + 0x242c]
// 00544a2d: FLD float ptr [EDX]
// 00544a2f: FMUL float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00544a32: FSTP float ptr [ESP + 0x1c]
// 00544a36: FLD float ptr [EDX + 0x4]
// 00544a39: FMUL float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00544a3c: LEA ESI,[EBX + 0x241c]
// 00544a42: FSTP float ptr [ESP + 0x20]
// 00544a46: FLD float ptr [EDX + 0x8]
// 00544a49: FMUL float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00544a4c: LEA EAX,[EBX + 0x23ac]
// 00544a52: FLD float ptr [ESP + 0x1c]
// 00544a56: FXCH
// 00544a58: FSTP float ptr [ESP + 0x24]
// 00544a5c: FADD float ptr [ESI]
// 00544a5e: FLD float ptr [ESP + 0x20]
// 00544a62: FXCH
// 00544a64: FSTP float ptr [ESP + 0x34]
// 00544a68: FADD float ptr [ESI + 0x4]
// 00544a6b: FLD float ptr [ESP + 0x24]
// 00544a6f: FXCH
// 00544a71: FSTP float ptr [ESP + 0x38]
// 00544a75: FADD float ptr [ESI + 0x8]
// 00544a78: FLD float ptr [ESP + 0x34]
// 00544a7c: FXCH
// 00544a7e: FSTP float ptr [ESP + 0x3c]
// 00544a82: FADD float ptr [EAX]
// 00544a84: FLD float ptr [ESP + 0x38]
// 00544a88: FXCH
// 00544a8a: FSTP float ptr [ESP + 0x4]
// 00544a8e: FADD float ptr [EAX + 0x4]
// 00544a91: FLD float ptr [ESP + 0x3c]
// 00544a95: FXCH
// 00544a97: FSTP float ptr [ESP + 0x8]
// 00544a9b: FADD float ptr [EAX + 0x8]
// 00544a9e: FSTP float ptr [ESP + 0xc]
// 00544aa2: MOV dword ptr [ESI + 0x8],0x0
// 00544aa9: MOV EDX,dword ptr [ESI + 0x8]
// 00544aac: MOV dword ptr [ESI + 0x4],EDX
// 00544aaf: MOV EDX,dword ptr [ESI + 0x4]
// 00544ab2: MOV dword ptr [ESI],EDX
// 00544ab4: MOV dword ptr [EAX + 0x8],0x0
// 00544abb: MOV EDX,dword ptr [EAX + 0x8]
// 00544abe: MOV dword ptr [EAX + 0x4],EDX
// 00544ac1: MOV EDX,dword ptr [EAX + 0x4]
// 00544ac4: MOV dword ptr [EAX],EDX
// 00544ac6: LEA EAX,[ESP + 0x4]
// 00544aca: PUSH EAX
// 00544acb: PUSH EBX
// 00544acc: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 00544ad1: ADD ESP,0x8
// 00544ad4: PUSH EBX
// 00544ad5: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 00544ada: ADD ESP,0x4
// 00544add: LEA EAX,[EBX + 0x158]
// 00544ae3: PUSH EAX
// 00544ae4: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 00544ae9: ADD ESP,0x4
// 00544aec: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00544aef: PUSH EBX
// 00544af0: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 00544af5: ADD ESP,0x8
// 00544af8: MOV ESP,EBP
// 00544afa: POP EBP
// 00544afb: POP EDI
// 00544afc: POP ESI
// 00544afd: POP EBX
// 00544afe: RET
// 00544aff: PUSH 0x1
//   Label: LAB_00544aff
// 00544b01: PUSH 0x63e31f
//   XREF to: 0063e31f (DATA)
// 00544b06: PUSH ESI
// 00544b07: CALL core_motion.cpp_FUN_0052db90
//   XREF to: 0052db90 (UNCONDITIONAL_CALL)
// 00544b0c: ADD ESP,0xc
// 00544b0f: PUSH EBX
// 00544b10: PUSH 0x63e325
//   XREF to: 0063e325 (DATA)
// 00544b15: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 00544b1b: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 00544b1c: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 00544b21: JMP 0x005449f1
//   XREF to: 005449f1 (UNCONDITIONAL_JUMP)
// 00544b26: PUSH 0x0
//   Label: LAB_00544b26
// 00544b28: PUSH 0x63e34f
//   XREF to: 0063e34f (DATA)
// 00544b2d: PUSH ESI
// 00544b2e: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 00544b33: ADD ESP,0x4
// 00544b36: PUSH EAX
// 00544b37: CALL core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
//   XREF to: 0052d4f0 (UNCONDITIONAL_CALL)
// 00544b3c: ADD ESP,0xc
// 00544b3f: TEST EAX,EAX
// 00544b41: JL 0x005449de
//   XREF to: 005449de (CONDITIONAL_JUMP)
// 00544b47: PUSH 0x1
// 00544b49: PUSH EAX
// 00544b4a: PUSH ESI
// 00544b4b: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00544b50: JMP 0x005449f1
//   XREF to: 005449f1 (UNCONDITIONAL_JUMP)
// 00544b55: LEA ESI,[EBX + 0x158]
//   Label: LAB_00544b55
// 00544b5b: JBE 0x00544b26
//   XREF to: 00544b26 (CONDITIONAL_JUMP)
// 00544b5d: CMP EAX,0x3
// 00544b60: JZ 0x00544aff
//   XREF to: 00544aff (CONDITIONAL_JUMP)
// 00544b62: PUSH 0x1
//   Label: LAB_00544b62
// 00544b64: PUSH 0x63e358
//   XREF to: 0063e358 (DATA)
// 00544b69: JMP 0x005449e5
//   XREF to: 005449e5 (UNCONDITIONAL_JUMP)
