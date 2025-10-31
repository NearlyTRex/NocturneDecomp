// Name: core_teleport.cpp_CTeleport_FUN_005dabe0
// Address: 005dabe0
// Address Range: [[005dabe0, 005dadbb]]
// Convention: __cdecl
// Signature: void core_teleport.cpp_CTeleport_FUN_005dabe0(CTeleport * this_ptr)
// Globals:
//   TerminatedCString s_Teleport_has_no_destinat_00654d05
//   TerminatedCString s_Switch_to_destination_s_00654d22
//   double DOUBLE_00654d3b = 4
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CEditorTools g_CEditorToolsPtr
//   undefined4 g_CGameInstance.delta_time_float
//   void* g_CKeysPtr
//   CDemonMission g_CDemonMissionInstance
// Function calls:
//   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140
//   shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleport_FUN_005dabe0(CTeleport *this_ptr)

{
  int iVar1;
  float in_stack_00000018;
  undefined4 uStack0000001c;
  float in_stack_0000002c;
  undefined4 uStack00000030;
  float in_stack_00000040;
  undefined4 uStack00000044;
  float in_stack_00000054;
  undefined4 uStack00000058;
  float in_stack_00000068;
  float in_stack_0000007c;
  
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
  if (iVar1 == 0) {
    iVar1 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x14);
    if (iVar1 == 0) {
      core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base_actor);
      return;
    }
    if (*(int *)(this_ptr->field1_0x158 + 0xc) == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"Teleport has no destination!");
      return;
    }
    iVar1 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                      (g_CEditorToolsPtr,"Switch to destination %s");
    if (iVar1 != 0) {
      core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140();
      return;
    }
  }
  else {
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4b);
    if (iVar1 != 0) {
      *(float *)this_ptr->field1_0x158 = *(float *)this_ptr->field1_0x158 - in_stack_00000018;
    }
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4d);
    if (iVar1 != 0) {
      *(float *)this_ptr->field1_0x158 = *(float *)this_ptr->field1_0x158 + in_stack_0000002c;
    }
    uStack0000001c = 0x5dac68;
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1e);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field1_0x158 + 4) =
           *(float *)(this_ptr->field1_0x158 + 4) - in_stack_00000040;
    }
    uStack00000030 = 0x5dac8b;
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x10);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field1_0x158 + 4) =
           *(float *)(this_ptr->field1_0x158 + 4) + in_stack_00000054;
    }
    uStack00000044 = 0x5dacae;
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x50);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field1_0x158 + 8) =
           *(float *)(this_ptr->field1_0x158 + 8) - in_stack_00000068;
    }
    uStack00000058 = 0x5dacd1;
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x48);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field1_0x158 + 8) =
           *(float *)(this_ptr->field1_0x158 + 8) + in_stack_0000007c;
    }
    if (*(int *)this_ptr->field1_0x158 < 0x3f000000) {
      this_ptr->field1_0x158[0] = '\0';
      this_ptr->field1_0x158[1] = '\0';
      this_ptr->field1_0x158[2] = '\0';
      this_ptr->field1_0x158[3] = '?';
    }
    if (*(float *)(this_ptr->field1_0x158 + 4) < 0.5) {
      this_ptr->field1_0x158[4] = '\0';
      this_ptr->field1_0x158[5] = '\0';
      this_ptr->field1_0x158[6] = '\0';
      this_ptr->field1_0x158[7] = '?';
    }
    if (*(float *)(this_ptr->field1_0x158 + 8) < 0.5) {
      this_ptr->field1_0x158[8] = '\0';
      this_ptr->field1_0x158[9] = '\0';
      this_ptr->field1_0x158[10] = '\0';
      this_ptr->field1_0x158[0xb] = '?';
      return;
    }
  }
  return;
}


// Assembly code:
// 005dabe0: PUSH EBX
//   Label: core_teleport.cpp_CTeleport_FUN_005dabe0
// 005dabe1: PUSH ESI
// 005dabe2: PUSH EBP
// 005dabe3: SUB ESP,0x8
// 005dabe6: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005dabea: PUSH 0x1d
// 005dabec: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005dabf1: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005dabf2: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005dabf4: CALL dword ptr [EDX]
// 005dabf6: ADD ESP,0x8
// 005dabf9: TEST EAX,EAX
// 005dabfb: JZ 0x005dad3c
//   XREF to: 005dad3c (CONDITIONAL_JUMP)
// 005dac01: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 005dac06: PUSH 0x4b
// 005dac08: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 005dac0e: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005dac13: FMUL double ptr [0x00654d3b]
//   XREF to: 00654d3b (READ)
// 005dac19: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005dac1a: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005dac1c: FSTP float ptr [ESP + 0xc]
// 005dac20: CALL dword ptr [EDX]
// 005dac22: ADD ESP,0x8
// 005dac25: TEST EAX,EAX
// 005dac27: JZ 0x005dac39
//   XREF to: 005dac39 (CONDITIONAL_JUMP)
// 005dac29: FLD float ptr [EBX + 0x158]
// 005dac2f: FSUB float ptr [ESP + 0x4]
// 005dac33: FSTP float ptr [EBX + 0x158]
// 005dac39: PUSH 0x4d
//   Label: LAB_005dac39
// 005dac3b: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005dac40: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005dac41: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005dac43: CALL dword ptr [EDX]
// 005dac45: ADD ESP,0x8
// 005dac48: TEST EAX,EAX
// 005dac4a: JZ 0x005dac5c
//   XREF to: 005dac5c (CONDITIONAL_JUMP)
// 005dac4c: FLD float ptr [EBX + 0x158]
// 005dac52: FADD float ptr [ESP + 0x4]
// 005dac56: FSTP float ptr [EBX + 0x158]
// 005dac5c: PUSH 0x1e
//   Label: LAB_005dac5c
// 005dac5e: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005dac63: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005dac64: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005dac66: CALL dword ptr [EDX]
// 005dac68: ADD ESP,0x8
// 005dac6b: TEST EAX,EAX
// 005dac6d: JZ 0x005dac7f
//   XREF to: 005dac7f (CONDITIONAL_JUMP)
// 005dac6f: FLD float ptr [EBX + 0x15c]
// 005dac75: FSUB float ptr [ESP + 0x4]
// 005dac79: FSTP float ptr [EBX + 0x15c]
// 005dac7f: PUSH 0x10
//   Label: LAB_005dac7f
// 005dac81: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005dac86: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005dac87: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005dac89: CALL dword ptr [EDX]
// 005dac8b: ADD ESP,0x8
// 005dac8e: TEST EAX,EAX
// 005dac90: JZ 0x005daca2
//   XREF to: 005daca2 (CONDITIONAL_JUMP)
// 005dac92: FLD float ptr [EBX + 0x15c]
// 005dac98: FADD float ptr [ESP + 0x4]
// 005dac9c: FSTP float ptr [EBX + 0x15c]
// 005daca2: PUSH 0x50
//   Label: LAB_005daca2
// 005daca4: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005daca9: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005dacaa: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005dacac: CALL dword ptr [EDX]
// 005dacae: ADD ESP,0x8
// 005dacb1: TEST EAX,EAX
// 005dacb3: JZ 0x005dacc5
//   XREF to: 005dacc5 (CONDITIONAL_JUMP)
// 005dacb5: FLD float ptr [EBX + 0x160]
// 005dacbb: FSUB float ptr [ESP + 0x4]
// 005dacbf: FSTP float ptr [EBX + 0x160]
// 005dacc5: PUSH 0x48
//   Label: LAB_005dacc5
// 005dacc7: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005daccc: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005daccd: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005daccf: CALL dword ptr [EDX]
// 005dacd1: ADD ESP,0x8
// 005dacd4: TEST EAX,EAX
// 005dacd6: JZ 0x005dace8
//   XREF to: 005dace8 (CONDITIONAL_JUMP)
// 005dacd8: FLD float ptr [EBX + 0x160]
// 005dacde: FADD float ptr [ESP + 0x4]
// 005dace2: FSTP float ptr [EBX + 0x160]
// 005dace8: MOV EDX,0x3f000000
//   Label: LAB_005dace8
// 005daced: MOV ECX,dword ptr [EBX + 0x158]
// 005dacf3: MOV dword ptr [ESP],EDX
// 005dacf6: CMP ECX,EDX
// 005dacf8: JGE 0x005dad00
//   XREF to: 005dad00 (CONDITIONAL_JUMP)
// 005dacfa: MOV dword ptr [EBX + 0x158],EDX
// 005dad00: FLD float ptr [EBX + 0x15c]
//   Label: LAB_005dad00
// 005dad06: FCOMP float ptr [ESP]
// 005dad09: FNSTSW AX
// 005dad0b: SAHF
// 005dad0c: JNC 0x005dad17
//   XREF to: 005dad17 (CONDITIONAL_JUMP)
// 005dad0e: MOV EAX,dword ptr [ESP]
// 005dad11: MOV dword ptr [EBX + 0x15c],EAX
// 005dad17: FLD float ptr [EBX + 0x160]
//   Label: LAB_005dad17
// 005dad1d: FCOMP float ptr [ESP]
// 005dad20: FNSTSW AX
// 005dad22: SAHF
// 005dad23: JC 0x005dad2c
//   XREF to: 005dad2c (CONDITIONAL_JUMP)
// 005dad25: ADD ESP,0x8
//   Label: LAB_005dad25
// 005dad28: POP EBP
// 005dad29: POP ESI
// 005dad2a: POP EBX
// 005dad2b: RET
// 005dad2c: MOV EAX,dword ptr [ESP]
//   Label: LAB_005dad2c
// 005dad2f: MOV dword ptr [EBX + 0x160],EAX
// 005dad35: ADD ESP,0x8
// 005dad38: POP EBP
// 005dad39: POP ESI
// 005dad3a: POP EBX
// 005dad3b: RET
// 005dad3c: PUSH 0x14
//   Label: LAB_005dad3c
// 005dad3e: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005dad43: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005dad44: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005dad46: CALL dword ptr [EDX + 0x4]
// 005dad49: ADD ESP,0x8
// 005dad4c: TEST EAX,EAX
// 005dad4e: JZ 0x005dadac
//   XREF to: 005dadac (CONDITIONAL_JUMP)
// 005dad50: MOV EDX,dword ptr [EBX + 0x164]
// 005dad56: TEST EDX,EDX
// 005dad58: JZ 0x005dad92
//   XREF to: 005dad92 (CONDITIONAL_JUMP)
// 005dad5a: PUSH EDX
// 005dad5b: PUSH 0x654d22
//   XREF to: 00654d22 (DATA)
// 005dad60: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005dad66: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 005dad67: CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   XREF to: 0049f060 (UNCONDITIONAL_CALL)
// 005dad6c: ADD ESP,0xc
// 005dad6f: TEST EAX,EAX
// 005dad71: JZ 0x005dad25
//   XREF to: 005dad25 (CONDITIONAL_JUMP)
// 005dad73: PUSH EDI
// 005dad74: MOV EDI,dword ptr [EBX + 0x164]
// 005dad7a: PUSH EDI
// 005dad7b: MOV EBP,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 005dad81: PUSH EBP
//   XREF to: 02f33740 (DATA)
// 005dad82: CALL core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140
//   XREF to: 0053c140 (UNCONDITIONAL_CALL)
// 005dad87: ADD ESP,0x8
// 005dad8a: POP EDI
// 005dad8b: ADD ESP,0x8
// 005dad8e: POP EBP
// 005dad8f: POP ESI
// 005dad90: POP EBX
// 005dad91: RET
// 005dad92: PUSH 0x654d05
//   Label: LAB_005dad92
//   XREF to: 00654d05 (DATA)
// 005dad97: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (DATA)
//   XREF to: 00678a60 (READ)
// 005dad9c: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 005dad9d: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 005dada2: ADD ESP,0x8
// 005dada5: ADD ESP,0x8
// 005dada8: POP EBP
// 005dada9: POP ESI
// 005dadaa: POP EBX
// 005dadab: RET
// 005dadac: PUSH EBX
//   Label: LAB_005dadac
// 005dadad: CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   XREF to: 0040d040 (UNCONDITIONAL_CALL)
// 005dadb2: ADD ESP,0x4
// 005dadb5: ADD ESP,0x8
// 005dadb8: POP EBP
// 005dadb9: POP ESI
// 005dadba: POP EBX
// 005dadbb: RET
