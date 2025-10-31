// Name: core_mission.cpp_CDemonMission_FUN_005243a0
// Address: 005243a0
// Address Range: [[005243a0, 00524410]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_FUN_005243a0(CDemonMission * this_ptr)
// Cross-references:
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 00538b8a [UNCONDITIONAL_CALL]
// Globals:
//   CScript* g_CScriptPtr = 0310f858
//   CScript g_CScriptInstance
// Function calls:
//   core_mission.cpp_CDemonMission_FUN_00523cf0
//   core_mission.cpp_CDemonMission_FUN_00523f50
//   core_mission.cpp_CDemonMission_FUN_00523fb0
//   core_script.cpp_CScript_FreeSomething1_FUN_00559870

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_FUN_005243a0(CDemonMission *this_ptr)

{
  char cVar1;
  char *pcVar2;
  char *in_stack_00000008;
  
  pcVar2 = this_ptr->field4_0x148;
  this_ptr->set_list = &DAT_00000001;
  do {
    cVar1 = *in_stack_00000008;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000008[1];
    in_stack_00000008 = in_stack_00000008 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  this_ptr->field0_0x0[0] = '\0';
  this_ptr->field0_0x0[1] = '\0';
  this_ptr->field0_0x0[2] = '\0';
  this_ptr->field0_0x0[3] = '\0';
  core_mission_cpp_CDemonMission_FUN_00523f50(this_ptr);
  core_script_cpp_CScript_FreeSomething1_FUN_00559870();
  core_mission_cpp_CDemonMission_FUN_00523cf0(this_ptr);
  this_ptr->field0_0x0[0] = -1;
  this_ptr->field0_0x0[1] = -1;
  this_ptr->field0_0x0[2] = -1;
  this_ptr->field0_0x0[3] = -1;
  core_mission_cpp_CDemonMission_FUN_00523fb0(this_ptr);
  return;
}


// Assembly code:
// 005243a0: PUSH EBX
//   Label: core_mission.cpp_CDemonMission_FUN_005243a0
// 005243a1: PUSH ESI
// 005243a2: PUSH EDI
// 005243a3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005243a7: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005243ab: LEA EDI,[EBX + 0x148]
// 005243b1: MOV dword ptr [EBX + 0x144],0x1
// 005243bb: PUSH EDI
// 005243bc: MOV AL,byte ptr [ESI]
//   Label: LAB_005243bc
// 005243be: MOV byte ptr [EDI],AL
// 005243c0: CMP AL,0x0
// 005243c2: JZ 0x005243d4
//   XREF to: 005243d4 (CONDITIONAL_JUMP)
// 005243c4: MOV AL,byte ptr [ESI + 0x1]
// 005243c7: ADD ESI,0x2
// 005243ca: MOV byte ptr [EDI + 0x1],AL
// 005243cd: ADD EDI,0x2
// 005243d0: CMP AL,0x0
// 005243d2: JNZ 0x005243bc
//   XREF to: 005243bc (CONDITIONAL_JUMP)
// 005243d4: POP EDI
//   Label: LAB_005243d4
// 005243d5: PUSH EBX
// 005243d6: MOV dword ptr [EBX],0x0
// 005243dc: CALL core_mission.cpp_CDemonMission_FUN_00523f50
//   XREF to: 00523f50 (UNCONDITIONAL_CALL)
// 005243e1: ADD ESP,0x4
// 005243e4: MOV EDX,dword ptr [0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 005243ea: PUSH EDX
//   XREF to: 0310f858 (DATA)
// 005243eb: CALL core_script.cpp_CScript_FreeSomething1_FUN_00559870
//   XREF to: 00559870 (UNCONDITIONAL_CALL)
// 005243f0: ADD ESP,0x4
// 005243f3: PUSH EBX
// 005243f4: CALL core_mission.cpp_CDemonMission_FUN_00523cf0
//   XREF to: 00523cf0 (UNCONDITIONAL_CALL)
// 005243f9: ADD ESP,0x4
// 005243fc: PUSH 0x0
// 005243fe: PUSH EBX
// 005243ff: MOV dword ptr [EBX],0xffffffff
// 00524405: CALL core_mission.cpp_CDemonMission_FUN_00523fb0
//   XREF to: 00523fb0 (UNCONDITIONAL_CALL)
// 0052440a: ADD ESP,0x8
// 0052440d: POP EDI
// 0052440e: POP ESI
// 0052440f: POP EBX
// 00524410: RET
