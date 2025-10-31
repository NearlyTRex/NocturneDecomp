// Name: core_mission.cpp_CDemonMission_getNextLoadedInventoryActor_FUN_00523520
// Address: 00523520
// Address Range: [[00523520, 005235ae]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_getNextLoadedInventoryActor_FUN_00523520(CDemonMission * this_ptr)
// Cross-references:
//   core_inv.cpp_CInventory_load_FUN_004ff400 (004ff400) at 004ff570 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_mission_cpp_00638d9c
//   TerminatedCString s_CDemonMission_getNextLoa_00638db0
//   TerminatedCString s_core_mission_cpp_00638de6
//   TerminatedCString s_CDemonMission_getNextLoa_00638dfa
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

void __cdecl
core_mission_cpp_CDemonMission_getNextLoadedInventoryActor_FUN_00523520(CDemonMission *this_ptr)

{
  int iVar1;
  char *in_stack_0000000c;
  
  if (*(int *)(this_ptr->field6_0x54c + 0x33c) == 0) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 0x186;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::getNextLoadedInventoryActor - no more!");
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0
                    (*(char **)(this_ptr->field6_0x54c + 0x33c),in_stack_0000000c);
  if (iVar1 != 0) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 0x18b;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CDemonMission::getNextLoadedInventoryActor - requested %s, but next actor was %s!",in_stack_0000000c,
               *(undefined4 *)(this_ptr->field6_0x54c + 0x33c));
  }
  *(undefined4 *)(this_ptr->field6_0x54c + 0x33c) =
       *(undefined4 *)(*(int *)(this_ptr->field6_0x54c + 0x33c) + 0x14c);
  return;
}


// Assembly code:
// 00523520: PUSH EBX
//   Label: core_mission.cpp_CDemonMission_getNextLoadedInventoryActor_FUN_00523520
// 00523521: PUSH EDI
// 00523522: PUSH EBP
// 00523523: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00523527: CMP dword ptr [EBX + 0x888],0x0
// 0052352e: JNZ 0x00523555
//   XREF to: 00523555 (CONDITIONAL_JUMP)
// 00523530: PUSH ESI
// 00523531: MOV ECX,0x638d9c
//   XREF to: 00638d9c (PARAM)
// 00523536: MOV ESI,0x186
// 0052353b: PUSH 0x638db0
//   XREF to: 00638db0 (DATA)
// 00523540: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00523546: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0052354c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00523551: ADD ESP,0x4
// 00523554: POP ESI
// 00523555: MOV EDI,dword ptr [ESP + 0x14]
//   Label: LAB_00523555
//   XREF to: Stack[0x8] (READ)
// 00523559: PUSH EDI
// 0052355a: MOV EBP,dword ptr [EBX + 0x888]
// 00523560: PUSH EBP
// 00523561: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 00523566: ADD ESP,0x8
// 00523569: TEST EAX,EAX
// 0052356b: JNZ 0x00523583
//   XREF to: 00523583 (CONDITIONAL_JUMP)
// 0052356d: MOV EAX,dword ptr [EBX + 0x888]
//   Label: LAB_0052356d
// 00523573: MOV EDX,dword ptr [EAX + 0x14c]
// 00523579: MOV dword ptr [EBX + 0x888],EDX
// 0052357f: POP EBP
// 00523580: POP EDI
// 00523581: POP EBX
// 00523582: RET
// 00523583: MOV ECX,dword ptr [EBX + 0x888]
//   Label: LAB_00523583
// 00523589: PUSH ECX
// 0052358a: PUSH EDI
// 0052358b: MOV EAX,0x638de6
//   XREF to: 00638de6 (PARAM)
// 00523590: MOV EDX,0x18b
// 00523595: PUSH 0x638dfa
//   XREF to: 00638dfa (DATA)
// 0052359a: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0052359f: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005235a5: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005235aa: ADD ESP,0xc
// 005235ad: JMP 0x0052356d
//   XREF to: 0052356d (UNCONDITIONAL_JUMP)
