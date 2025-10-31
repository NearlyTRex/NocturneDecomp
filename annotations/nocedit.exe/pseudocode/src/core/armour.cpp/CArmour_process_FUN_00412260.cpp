// Name: core_armour.cpp_CArmour_process_FUN_00412260
// Address: 00412260
// Address Range: [[00412260, 0041239e]]
// Convention: __cdecl
// Signature: void core_armour.cpp_CArmour_process_FUN_00412260(CArmour * this_ptr)
// Globals:
//   TerminatedCString s_armour_wav_00614dcb
//   double DOUBLE_00614dd8 = 3.14159265350000
//   CEventList* g_CEventListPtr = 02d05310
//   undefined4 DAT_02d05310
// Function calls:
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   core_charactr.cpp_CCharacter_FUN_00429870
//   core_charactr.cpp_CCharacter_FUN_0042b9e0
//   core_charactr.cpp_CCharacter_FUN_0042ca70
//   core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   core_motion.cpp_CMotionController_advance_FUN_0052d610
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059e020

#include "nocturne.h"

void __cdecl core_armour_cpp_CArmour_process_FUN_00412260(CArmour *this_ptr)

{
  float fVar1;
  float fVar2;
  CCharacter *pCVar3;
  int iVar4;
  float in_stack_00000008;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  undefined4 uStack00000018;
  
  iVar4 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar4 != 0) {
    pCVar3 = &(this_ptr->base_enemy).base_character;
    (pCVar3->model).padding_0x0[0x225c] = '\0';
    (pCVar3->model).padding_0x0[0x225d] = '\0';
    (pCVar3->model).padding_0x0[0x225e] = '\0';
    (pCVar3->model).padding_0x0[0x225f] = '\0';
    *(undefined4 *)((this_ptr->base_enemy).base_character.model.padding_0x0 + 0x2258) =
         *(undefined4 *)((this_ptr->base_enemy).base_character.model.padding_0x0 + 0x225c);
    *(undefined4 *)((this_ptr->base_enemy).base_character.model.padding_0x0 + 0x2254) =
         *(undefined4 *)((this_ptr->base_enemy).base_character.model.padding_0x0 + 0x2258);
    fVar1 = (this_ptr->base_enemy).speed;
    while( true ) {
      if (in_stack_00000008 * fVar1 <= 0.0) break;
      core_motion_cpp_CMotionController_advance_FUN_0052d610();
    }
    fVar1 = (this_ptr->base_enemy).speed;
    fVar2 = (float)DOUBLE_00614dd8;
    *(undefined4 *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x28) =
         *(undefined4 *)((this_ptr->base_enemy).base_character.model.padding_0x0 + 0x225c);
    *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c) =
         in_stack_00000008 * fVar2 * fVar1;
    core_motion_cpp_CMotionController_FUN_0052dab0();
    iVar4 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
    if (iVar4 != 0) {
      pCVar3 = &(this_ptr->base_enemy).base_character;
      (pCVar3->model).padding_0x0[0x225c] = '\0';
      (pCVar3->model).padding_0x0[0x225d] = '\0';
      (pCVar3->model).padding_0x0[0x225e] = '\0';
      (pCVar3->model).padding_0x0[0x225f] = '\0';
      *(undefined4 *)((this_ptr->base_enemy).base_character.model.padding_0x0 + 0x2258) =
           *(undefined4 *)((this_ptr->base_enemy).base_character.model.padding_0x0 + 0x225c);
      *(undefined4 *)((this_ptr->base_enemy).base_character.model.padding_0x0 + 0x2254) =
           *(undefined4 *)((this_ptr->base_enemy).base_character.model.padding_0x0 + 0x2258);
    }
    core_skeleton_cpp_CDeformableModelInstance_FUN_0059e020();
    core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
    iVar4 = core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
                      (g_CEventListPtr,this_ptr->field1_0xbeb4 + 8);
    if (iVar4 != 0) {
      (*((this_ptr->base_enemy).base_character.base_actor.metadata.vtable)->playSound)
                ((CDemonActor *)this_ptr,"armour.wav");
      uStack00000010 = 0;
      uStack00000014 = 0;
      uStack00000018 = 0x40a00000;
      core_charactr_cpp_CCharacter_FUN_0042b9e0((CCharacter *)this_ptr);
      return;
    }
  }
  return;
}


// Assembly code:
// 00412260: PUSH EBX
//   Label: core_armour.cpp_CArmour_process_FUN_00412260
// 00412261: PUSH ESI
// 00412262: PUSH EDI
// 00412263: PUSH EBP
// 00412264: MOV EBP,ESP
// 00412266: SUB ESP,0x10
// 00412269: AND ESP,0xfffffff8
// 0041226c: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0041226f: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00412272: PUSH ESI
// 00412273: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 00412278: ADD ESP,0x8
// 0041227b: TEST EAX,EAX
// 0041227d: JZ 0x00412346
//   XREF to: 00412346 (CONDITIONAL_JUMP)
// 00412283: LEA EAX,[ESI + 0x23ac]
// 00412289: MOV dword ptr [EAX + 0x8],0x0
// 00412290: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00412293: MOV EDX,dword ptr [EAX + 0x8]
// 00412296: MOV dword ptr [EAX + 0x4],EDX
// 00412299: MOV EDX,dword ptr [EAX + 0x4]
// 0041229c: MOV dword ptr [EAX],EDX
// 0041229e: FMUL float ptr [ESI + 0xbe24]
// 004122a4: LEA EBX,[ESI + 0x158]
// 004122aa: FSTP float ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004122ad: FLD float ptr [ESP]
//   Label: LAB_004122ad
//   XREF to: Stack[-0x20] (DATA)
// 004122b0: FLDZ
// 004122b2: FCOMPP
// 004122b4: FNSTSW AX
// 004122b6: SAHF
// 004122b7: JC 0x0041234d
//   XREF to: 0041234d (CONDITIONAL_JUMP)
// 004122bd: FLD float ptr [ESI + 0xbe24]
// 004122c3: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004122c6: FMUL double ptr [0x00614dd8]
//   XREF to: 00614dd8 (READ)
// 004122cc: FMULP
// 004122ce: FLD float ptr [ESI + 0x23b4]
// 004122d4: PUSH EBX
// 004122d5: FSTP float ptr [ESI + 0x2434]
// 004122db: FSTP float ptr [ESI + 0x2438]
// 004122e1: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004122e6: ADD ESP,0x4
// 004122e9: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004122ec: PUSH ESI
// 004122ed: CALL core_charactr.cpp_CCharacter_FUN_0042ca70
//   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
// 004122f2: ADD ESP,0x8
// 004122f5: TEST EAX,EAX
// 004122f7: JZ 0x00412311
//   XREF to: 00412311 (CONDITIONAL_JUMP)
// 004122f9: LEA EAX,[ESI + 0x23ac]
// 004122ff: MOV dword ptr [EAX + 0x8],0x0
// 00412306: MOV EDX,dword ptr [EAX + 0x8]
// 00412309: MOV dword ptr [EAX + 0x4],EDX
// 0041230c: MOV EDX,dword ptr [EAX + 0x4]
// 0041230f: MOV dword ptr [EAX],EDX
// 00412311: LEA EAX,[ESI + 0x158]
//   Label: LAB_00412311
// 00412317: PUSH EAX
// 00412318: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 0041231d: ADD ESP,0x4
// 00412320: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00412323: PUSH ESI
// 00412324: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 00412329: ADD ESP,0x8
// 0041232c: LEA EAX,[ESI + 0xbebc]
// 00412332: PUSH EAX
// 00412333: MOV EDX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 00412339: PUSH EDX
//   XREF to: 02d05310 (DATA)
// 0041233a: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 0041233f: ADD ESP,0x8
// 00412342: TEST EAX,EAX
// 00412344: JNZ 0x0041235e
//   XREF to: 0041235e (CONDITIONAL_JUMP)
// 00412346: MOV ESP,EBP
//   Label: LAB_00412346
// 00412348: POP EBP
// 00412349: POP EDI
// 0041234a: POP ESI
// 0041234b: POP EBX
// 0041234c: RET
// 0041234d: MOV EAX,ESP
//   Label: LAB_0041234d
// 0041234f: PUSH EAX
// 00412350: PUSH EBX
// 00412351: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 00412356: ADD ESP,0x8
// 00412359: JMP 0x004122ad
//   XREF to: 004122ad (UNCONDITIONAL_JUMP)
// 0041235e: PUSH 0x614dcb
//   Label: LAB_0041235e
//   XREF to: 00614dcb (DATA)
// 00412363: MOV EAX,dword ptr [ESI + 0x154]
// 00412369: PUSH ESI
// 0041236a: CALL dword ptr [EAX + 0x24]
// 0041236d: ADD ESP,0x8
// 00412370: PUSH 0x1
// 00412372: LEA EAX,[ESP + 0x8]
// 00412376: PUSH 0xbf800000
// 0041237b: XOR ECX,ECX
// 0041237d: PUSH EAX
// 0041237e: MOV EDI,0x40a00000
// 00412383: MOV dword ptr [ESP + 0x10],ECX
// 00412387: PUSH ESI
// 00412388: MOV dword ptr [ESP + 0x18],ECX
// 0041238c: MOV dword ptr [ESP + 0x1c],EDI
// 00412390: CALL core_charactr.cpp_CCharacter_FUN_0042b9e0
//   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)
// 00412395: ADD ESP,0x10
// 00412398: MOV ESP,EBP
// 0041239a: POP EBP
// 0041239b: POP EDI
// 0041239c: POP ESI
// 0041239d: POP EBX
// 0041239e: RET
