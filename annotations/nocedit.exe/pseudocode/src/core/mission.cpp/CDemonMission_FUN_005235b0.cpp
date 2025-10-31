// Name: core_mission.cpp_CDemonMission_FUN_005235b0
// Address: 005235b0
// Address Range: [[005235b0, 005235f9]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_FUN_005235b0(CDemonMission * this_ptr)
// Cross-references:
//   core_mission.cpp_CDemonMission_FUN_00524760 (00524760) at 00524816 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 005384e4 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_scr_00638e4c
//   CScript* g_CScriptPtr = 0310f858
//   CScript g_CScriptInstance
// Function calls:
//   core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80
//   crt_file.c_makepath_FUN_005febfc

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_FUN_005235b0(CDemonMission *this_ptr)

{
  BADSPACEBASE *in_ESP;
  char local_104 [260];
  
  crt_file_c_makepath_FUN_005febfc
            (local_104,(char *)0x0,(char *)0x0,this_ptr->field2_0xc + 0x38,"scr");
  core_script_cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80();
  return;
}


// Assembly code:
// 005235b0: SUB ESP,0x104
//   Label: core_mission.cpp_CDemonMission_FUN_005235b0
// 005235b6: MOV EAX,dword ptr [ESP + 0x108]
//   XREF to: Stack[0x4] (READ)
// 005235bd: PUSH 0x638e4c
//   XREF to: 00638e4c (DATA)
// 005235c2: ADD EAX,0x44
// 005235c5: PUSH EAX
// 005235c6: PUSH 0x0
// 005235c8: PUSH 0x0
// 005235ca: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x104] (DATA)
// 005235ce: PUSH EAX
// 005235cf: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 005235d4: ADD ESP,0x14
// 005235d7: MOV EDX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[0x8] (READ)
// 005235de: PUSH EDX
// 005235df: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x104] (DATA)
// 005235e3: PUSH EAX
// 005235e4: MOV ECX,dword ptr [0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 005235ea: PUSH ECX
//   XREF to: 0310f858 (DATA)
// 005235eb: CALL core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80
//   XREF to: 00559f80 (UNCONDITIONAL_CALL)
// 005235f0: ADD ESP,0xc
// 005235f3: ADD ESP,0x104
// 005235f9: RET
