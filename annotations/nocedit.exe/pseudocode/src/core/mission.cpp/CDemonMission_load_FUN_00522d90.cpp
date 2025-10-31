// Name: core_mission.cpp_CDemonMission_load_FUN_00522d90
// Address: 00522d90
// Address Range: [[00522d90, 00522e2c]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_load_FUN_00522d90(CDemonMission * this_ptr, char * mission_filename, int load_flags)
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 (004bda20) at 004bddc5 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 (004e1cb0) at 004e2025 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_run_FUN_00524420 (00524420) at 0052456c [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 005384d9 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00537230 (00537230) at 005372a9 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0 (0053ccf0) at 0053cf3b [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_WalkAroundOnSet_FUN_00538ba0 (00538ba0) at 00538cf8 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_FUN_00541390 (00541390) at 005419ac [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_rt_006389c5
//   TerminatedCString s_world_006389c8
//   TerminatedCString s_core_mission_cpp_006389ce
//   TerminatedCString s_CDemonMission_load_Unabl_006389e2
//   TerminatedCString s_Loading_mission_00638a0c
//   TerminatedCString s_core_mission_cpp_00638a1c
//   CLevelLoader* g_CLevelLoaderPtr = 02dcd850
//   CLevelLoader g_CLevelLoaderInstance
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_level.cpp_CLevelLoader_update_FUN_00504160
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0
//   core_mission.cpp_FUN_00524c20
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0

#include "nocturne.h"

void __cdecl
core_mission_cpp_CDemonMission_load_FUN_00522d90
          (CDemonMission *this_ptr,char *mission_filename,int load_flags)

{
  FILE *file_ptr;
  char *text;
  int unaff_EBX;
  CDemonMission *in_stack_00000014;
  
  file_ptr = engine_dosio_c_getFile_FUN_00481a50("world",mission_filename,"rt");
  if (file_ptr == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 0x9c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::load - Unable to open file");
  }
  text = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Loading mission");
  core_level_cpp_CLevelLoader_update_FUN_00504160(g_CLevelLoaderPtr,text,unaff_EBX);
  core_mission_cpp_CDemonMission_readMissionFile_FUN_00522eb0(in_stack_00000014);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\mission.cpp",0x9f);
  core_mission_cpp_FUN_00524c20();
  return;
}


// Assembly code:
// 00522d90: PUSH EBX
//   Label: core_mission.cpp_CDemonMission_load_FUN_00522d90
// 00522d91: PUSH EDI
// 00522d92: PUSH EBP
// 00522d93: PUSH 0x6389c5
//   XREF to: 006389c5 (DATA)
// 00522d98: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00522d9c: PUSH EDX
// 00522d9d: PUSH 0x6389c8
//   XREF to: 006389c8 (DATA)
// 00522da2: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00522da7: ADD ESP,0xc
// 00522daa: MOV EBX,EAX
// 00522dac: TEST EAX,EAX
// 00522dae: JZ 0x00522e06
//   XREF to: 00522e06 (CONDITIONAL_JUMP)
// 00522db0: PUSH 0x0
//   Label: LAB_00522db0
// 00522db2: PUSH 0x638a0c
//   XREF to: 00638a0c (DATA)
// 00522db7: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00522dbc: ADD ESP,0x4
// 00522dbf: PUSH EAX
// 00522dc0: MOV EDI,dword ptr [0x0067cf80]
//   XREF to: 0067cf80 (READ)
// 00522dc6: PUSH EDI
//   XREF to: 02dcd850 (DATA)
// 00522dc7: CALL core_level.cpp_CLevelLoader_update_FUN_00504160
//   XREF to: 00504160 (UNCONDITIONAL_CALL)
// 00522dcc: ADD ESP,0xc
// 00522dcf: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 00522dd3: PUSH EBP
// 00522dd4: PUSH EBX
// 00522dd5: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00522dd9: PUSH EAX
// 00522dda: CALL core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0
//   XREF to: 00522eb0 (UNCONDITIONAL_CALL)
// 00522ddf: ADD ESP,0xc
// 00522de2: PUSH 0x9f
// 00522de7: PUSH 0x638a1c
//   XREF to: 00638a1c (DATA)
// 00522dec: PUSH EBX
// 00522ded: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00522df2: ADD ESP,0xc
// 00522df5: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00522df9: PUSH EDX
// 00522dfa: CALL core_mission.cpp_FUN_00524c20
//   XREF to: 00524c20 (UNCONDITIONAL_CALL)
// 00522dff: ADD ESP,0x4
// 00522e02: POP EBP
// 00522e03: POP EDI
// 00522e04: POP EBX
// 00522e05: RET
// 00522e06: PUSH ESI
//   Label: LAB_00522e06
// 00522e07: MOV ECX,0x6389ce
//   XREF to: 006389ce (PARAM)
// 00522e0c: MOV ESI,0x9c
// 00522e11: PUSH 0x6389e2
//   XREF to: 006389e2 (DATA)
// 00522e16: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00522e1c: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00522e22: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00522e27: ADD ESP,0x4
// 00522e2a: POP ESI
// 00522e2b: JMP 0x00522db0
//   XREF to: 00522db0 (UNCONDITIONAL_JUMP)
