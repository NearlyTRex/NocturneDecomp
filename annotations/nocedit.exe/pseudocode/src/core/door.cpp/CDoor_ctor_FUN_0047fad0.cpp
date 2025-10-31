// Name: core_door.cpp_CDoor_ctor_FUN_0047fad0
// Address: 0047fad0
// Address Range: [[0047fad0, 0047fc6e]]
// Convention: __cdecl
// Signature: CDoor * core_door.cpp_CDoor_ctor_FUN_0047fad0(CDoor * this_ptr)
// Cross-references:
//   core_door.cpp_factoryFunc_FUN_0047fa90 (0047fa90) at 0047faaa [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_churchd01_kfm_00621096
//   TerminatedCString s_defaultDoorOpen_006210a4
//   undefined4 s_efaultDoorOpen_006210a5
//   undefined4 s_faultDoorOpen_006210a6
//   undefined4 s_aultDoorOpen_006210a7
//   TerminatedCString s_defaultDoorClose_006210b4
//   undefined4 s_efaultDoorClose_006210b5
//   undefined4 s_faultDoorClose_006210b6
//   undefined4 s_aultDoorClose_006210b7
//   TerminatedCString s_door_locked_wav_006210c5
//   undefined4 s_oor-locked.wav_006210c6
//   undefined4 s_or-locked.wav_006210c7
//   undefined4 s_r-locked.wav_006210c8
//   CDemonActor_vtable PTR_core_door.cpp_FUN_0065cbf4
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   core_event.cpp_FUN_004b1670

#include "nocturne.h"

CDoor * __cdecl core_door_cpp_CDoor_ctor_FUN_0047fad0(CDoor *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar2 + 1));
  core_event_cpp_FUN_004b1670();
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&PTR_core_door_cpp_FUN_0065cbf4;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"churchd01.kfm");
  this_ptr_00[1].part_visibility_flags[1] = 0;
  this_ptr_00[1].part_visibility_flags[2] = 1;
  this_ptr_00[1].part_visibility_flags[3] = 0;
  this_ptr_00[1].part_visibility_flags[4] = 0;
  if ((int *)(this_ptr_00[5].model_name + 0x58) != this_ptr_00[-1].part_visibility_flags + 0x11) {
    *(int *)(this_ptr_00[5].model_name + 0x58) = this_ptr_00[-1].part_visibility_flags[0x11];
    *(int *)(this_ptr_00[5].model_name + 0x5c) = this_ptr_00[-1].part_visibility_flags[0x12];
    *(int *)(this_ptr_00[5].model_name + 0x60) = this_ptr_00[-1].part_visibility_flags[0x13];
  }
  pcVar3 = "defaultDoorOpen";
  piVar5 = this_ptr_00[1].part_visibility_flags + 5;
  do {
    cVar1 = *pcVar3;
    *(char *)piVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)piVar5 + 1) = cVar1;
    piVar5 = (int *)((int)piVar5 + 2);
  } while (cVar1 != '\0');
  pcVar4 = "defaultDoorClose";
  pcVar3 = this_ptr_00[1].model_name;
  do {
    cVar1 = *pcVar4;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "door-locked.wav";
  this_ptr_00[4].animation_state[0x40] = '\0';
  piVar5 = this_ptr_00[5].part_visibility_flags + 0x1a;
  *(undefined1 *)(this_ptr_00[5].part_visibility_flags + 1) = 0;
  do {
    cVar1 = *pcVar3;
    *(char *)piVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)piVar5 + 1) = cVar1;
    piVar5 = (int *)((int)piVar5 + 2);
  } while (cVar1 != '\0');
  this_ptr_00[5].model_name[0x54] = '\0';
  this_ptr_00[5].model_name[0x55] = '\0';
  this_ptr_00[5].model_name[0x56] = '\0';
  this_ptr_00[5].model_name[0x57] = '\0';
  this_ptr_00[5].animation_state[0xc] = '\0';
  this_ptr_00[5].animation_state[0xd] = '\0';
  this_ptr_00[5].animation_state[0xe] = '\0';
  this_ptr_00[5].animation_state[0xf] = '\0';
  this_ptr_00[5].animation_state[0x10] = '\0';
  this_ptr_00[5].animation_state[0x11] = '\0';
  this_ptr_00[5].animation_state[0x12] = -0x80;
  this_ptr_00[5].animation_state[0x13] = '?';
  this_ptr_00[5].animation_state[0x14] = '\0';
  this_ptr_00[5].animation_state[0x15] = '\0';
  this_ptr_00[5].animation_state[0x16] = -0x80;
  this_ptr_00[5].animation_state[0x17] = '?';
  this_ptr_00[5].animation_state[0x18] = '\0';
  this_ptr_00[5].animation_state[0x19] = '\0';
  this_ptr_00[5].animation_state[0x1a] = -0x80;
  this_ptr_00[5].animation_state[0x1b] = '?';
  this_ptr_00[1].part_visibility_flags[0] = 0;
  this_ptr_00[1].animation_state[0] = '\0';
  this_ptr_00[1].animation_state[100] = '\0';
  this_ptr_00[5].animation_state[0x28] = '\0';
  this_ptr_00[5].animation_state[0x29] = '\0';
  this_ptr_00[5].animation_state[0x2a] = '\0';
  this_ptr_00[5].animation_state[0x2b] = '\0';
  this_ptr_00[5].animation_state[0x2c] = '\0';
  this_ptr_00[5].animation_state[0x2d] = '\0';
  this_ptr_00[5].animation_state[0x2e] = '\0';
  this_ptr_00[5].animation_state[0x2f] = '\0';
  this_ptr_00[5].animation_state[0x30] = '\x01';
  this_ptr_00[5].animation_state[0x31] = '\0';
  this_ptr_00[5].animation_state[0x32] = '\0';
  this_ptr_00[5].animation_state[0x33] = '\0';
  this_ptr_00[5].animation_state[0x34] = '\0';
  this_ptr_00[5].animation_state[0x35] = '\0';
  this_ptr_00[5].animation_state[0x36] = '\0';
  this_ptr_00[5].animation_state[0x37] = '\0';
  this_ptr_00[5].animation_state[0x38] = '\x03';
  this_ptr_00[5].animation_state[0x39] = '\0';
  this_ptr_00[5].animation_state[0x3a] = '\0';
  this_ptr_00[5].animation_state[0x3b] = '\0';
  this_ptr_00[5].animation_state[0x3c] = '\x01';
  this_ptr_00[5].animation_state[0x3d] = '\0';
  this_ptr_00[5].animation_state[0x3e] = '\0';
  this_ptr_00[5].animation_state[0x3f] = '\0';
  return (CDoor *)(this_ptr_00[-1].part_visibility_flags + 9);
}


// Assembly code:
// 0047fad0: PUSH EBX
//   Label: core_door.cpp_CDoor_ctor_FUN_0047fad0
// 0047fad1: PUSH ESI
// 0047fad2: PUSH EDI
// 0047fad3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0047fad7: PUSH EBX
// 0047fad8: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 0047fadd: ADD ESP,0x4
// 0047fae0: ADD EAX,0x158
// 0047fae5: PUSH EAX
// 0047fae6: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 0047faeb: ADD ESP,0x4
// 0047faee: LEA EBX,[EAX + 0x320]
// 0047faf4: PUSH EBX
// 0047faf5: CALL core_event.cpp_FUN_004b1670
//   XREF to: 004b1670 (UNCONDITIONAL_CALL)
// 0047fafa: ADD ESP,0x4
// 0047fafd: SUB EBX,0x478
// 0047fb03: PUSH 0x621096
//   XREF to: 00621096 (DATA)
// 0047fb08: LEA EAX,[EBX + 0x158]
// 0047fb0e: PUSH EAX
// 0047fb0f: MOV dword ptr [EBX + 0x154],0x65cbf4
//   XREF to: 0065cbf4 (DATA)
// 0047fb19: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 0047fb1e: MOV dword ptr [EBX + 0x2d8],0x0
// 0047fb28: ADD ESP,0x8
// 0047fb2b: MOV dword ptr [EBX + 0x2dc],0x1
// 0047fb35: LEA EAX,[EBX + 0x994]
// 0047fb3b: MOV dword ptr [EBX + 0x2e0],0x0
// 0047fb45: LEA EDX,[EBX + 0x20]
// 0047fb48: MOV dword ptr [EBX + 0x2e4],0x0
// 0047fb52: CMP EAX,EDX
// 0047fb54: JZ 0x0047fb66
//   XREF to: 0047fb66 (CONDITIONAL_JUMP)
// 0047fb56: MOV ECX,dword ptr [EDX]
// 0047fb58: MOV dword ptr [EAX],ECX
// 0047fb5a: MOV ECX,dword ptr [EDX + 0x4]
// 0047fb5d: MOV dword ptr [EAX + 0x4],ECX
// 0047fb60: MOV ECX,dword ptr [EDX + 0x8]
// 0047fb63: MOV dword ptr [EAX + 0x8],ECX
// 0047fb66: MOV ESI,0x6210a4
//   Label: LAB_0047fb66
//   XREF to: 006210a4 (DATA)
// 0047fb6b: LEA EDI,[EBX + 0x2e8]
// 0047fb71: PUSH EDI
// 0047fb72: MOV AL,byte ptr [ESI]
//   Label: LAB_0047fb72
//   XREF to: 006210a4 (READ)
//   XREF to: 006210a6 (READ)
// 0047fb74: MOV byte ptr [EDI],AL
// 0047fb76: CMP AL,0x0
// 0047fb78: JZ 0x0047fb8a
//   XREF to: 0047fb8a (CONDITIONAL_JUMP)
// 0047fb7a: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006210a5 (READ)
//   XREF to: 006210a7 (READ)
// 0047fb7d: ADD ESI,0x2
// 0047fb80: MOV byte ptr [EDI + 0x1],AL
// 0047fb83: ADD EDI,0x2
// 0047fb86: CMP AL,0x0
// 0047fb88: JNZ 0x0047fb72
//   XREF to: 0047fb72 (CONDITIONAL_JUMP)
// 0047fb8a: POP EDI
//   Label: LAB_0047fb8a
// 0047fb8b: MOV ESI,0x6210b4
//   XREF to: 006210b4 (DATA)
// 0047fb90: LEA EDI,[EBX + 0x34c]
// 0047fb96: PUSH EDI
// 0047fb97: MOV AL,byte ptr [ESI]
//   Label: LAB_0047fb97
//   XREF to: 006210b4 (READ)
//   XREF to: 006210b6 (READ)
// 0047fb99: MOV byte ptr [EDI],AL
// 0047fb9b: CMP AL,0x0
// 0047fb9d: JZ 0x0047fbaf
//   XREF to: 0047fbaf (CONDITIONAL_JUMP)
// 0047fb9f: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006210b5 (READ)
//   XREF to: 006210b7 (READ)
// 0047fba2: ADD ESI,0x2
// 0047fba5: MOV byte ptr [EDI + 0x1],AL
// 0047fba8: ADD EDI,0x2
// 0047fbab: CMP AL,0x0
// 0047fbad: JNZ 0x0047fb97
//   XREF to: 0047fb97 (CONDITIONAL_JUMP)
// 0047fbaf: POP EDI
//   Label: LAB_0047fbaf
// 0047fbb0: MOV ESI,0x6210c5
//   XREF to: 006210c5 (DATA)
// 0047fbb5: MOV byte ptr [EBX + 0x864],0x0
// 0047fbbc: LEA EDI,[EBX + 0x92c]
// 0047fbc2: MOV byte ptr [EBX + 0x8c8],0x0
// 0047fbc9: PUSH EDI
// 0047fbca: MOV AL,byte ptr [ESI]
//   Label: LAB_0047fbca
//   XREF to: 006210c5 (READ)
//   XREF to: 006210c7 (READ)
// 0047fbcc: MOV byte ptr [EDI],AL
// 0047fbce: CMP AL,0x0
// 0047fbd0: JZ 0x0047fbe2
//   XREF to: 0047fbe2 (CONDITIONAL_JUMP)
// 0047fbd2: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006210c6 (READ)
//   XREF to: 006210c8 (READ)
// 0047fbd5: ADD ESI,0x2
// 0047fbd8: MOV byte ptr [EDI + 0x1],AL
// 0047fbdb: ADD EDI,0x2
// 0047fbde: CMP AL,0x0
// 0047fbe0: JNZ 0x0047fbca
//   XREF to: 0047fbca (CONDITIONAL_JUMP)
// 0047fbe2: POP EDI
//   Label: LAB_0047fbe2
// 0047fbe3: MOV dword ptr [EBX + 0x990],0x0
// 0047fbed: MOV dword ptr [EBX + 0x9ac],0x0
// 0047fbf7: MOV dword ptr [EBX + 0x9b0],0x3f800000
// 0047fc01: MOV dword ptr [EBX + 0x9b4],0x3f800000
// 0047fc0b: MOV dword ptr [EBX + 0x9b8],0x3f800000
// 0047fc15: MOV dword ptr [EBX + 0x2d4],0x0
// 0047fc1f: MOV byte ptr [EBX + 0x3b0],0x0
// 0047fc26: MOV byte ptr [EBX + 0x414],0x0
// 0047fc2d: MOV dword ptr [EBX + 0x9c8],0x0
// 0047fc37: MOV dword ptr [EBX + 0x9cc],0x0
// 0047fc41: MOV dword ptr [EBX + 0x9d0],0x1
// 0047fc4b: MOV dword ptr [EBX + 0x9d4],0x0
// 0047fc55: MOV dword ptr [EBX + 0x9d8],0x3
// 0047fc5f: MOV EAX,EBX
// 0047fc61: MOV dword ptr [EBX + 0x9dc],0x1
// 0047fc6b: POP EDI
// 0047fc6c: POP ESI
// 0047fc6d: POP EBX
// 0047fc6e: RET
