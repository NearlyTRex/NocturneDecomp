// Name: core_mission.cpp_CDemonMission_save_FUN_00522e30
// Address: 00522e30
// Address Range: [[00522e30, 00522eab]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_save_FUN_00522e30(CDemonMission * this_ptr)
// Cross-references:
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 005389f0 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_CheckWorldMountedAndSave_FUN_0053d190 (0053d190) at 0053d1c3 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00537230 (00537230) at 005372d2 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_WalkAroundOnSet_FUN_00538ba0 (00538ba0) at 00538bf3 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_mission_cpp_00638a30
//   TerminatedCString s_wt_00638a44
//   TerminatedCString s_world_00638a47
//   TerminatedCString s_core_mission_cpp_00638a4d
//   TerminatedCString s_CDemonMission_save_Unabl_00638a61
//   TerminatedCString s_core_mission_cpp_00638a8b
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_mission.cpp_CDemonMission_writeFile_FUN_00523600
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_save_FUN_00522e30(CDemonMission *this_ptr)

{
  FILE *file_ptr;
  char *in_stack_0000000c;
  CDemonMission *in_stack_00000010;
  
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\mission.cpp",0xb0);
  file_ptr = engine_dosio_c_getFile_FUN_00481a50("world",in_stack_0000000c,"wt");
  if (file_ptr == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 0xb6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::save - Unable to open file");
  }
  core_mission_cpp_CDemonMission_writeFile_FUN_00523600(in_stack_00000010);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\mission.cpp",0xb8);
  return;
}


// Assembly code:
// 00522e30: PUSH EBX
//   Label: core_mission.cpp_CDemonMission_save_FUN_00522e30
// 00522e31: PUSH EDI
// 00522e32: PUSH 0xb0
// 00522e37: PUSH 0x638a30
//   XREF to: 00638a30 (DATA)
// 00522e3c: CALL shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0
//   XREF to: 0050efe0 (UNCONDITIONAL_CALL)
// 00522e41: ADD ESP,0x8
// 00522e44: PUSH 0x638a44
//   XREF to: 00638a44 (DATA)
// 00522e49: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00522e4d: PUSH EDX
// 00522e4e: PUSH 0x638a47
//   XREF to: 00638a47 (DATA)
// 00522e53: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00522e58: ADD ESP,0xc
// 00522e5b: MOV EBX,EAX
// 00522e5d: TEST EAX,EAX
// 00522e5f: JZ 0x00522e85
//   XREF to: 00522e85 (CONDITIONAL_JUMP)
// 00522e61: PUSH EBX
//   Label: LAB_00522e61
// 00522e62: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00522e66: PUSH EDI
// 00522e67: CALL core_mission.cpp_CDemonMission_writeFile_FUN_00523600
//   XREF to: 00523600 (UNCONDITIONAL_CALL)
// 00522e6c: ADD ESP,0x8
// 00522e6f: PUSH 0xb8
// 00522e74: PUSH 0x638a8b
//   XREF to: 00638a8b (DATA)
// 00522e79: PUSH EBX
// 00522e7a: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00522e7f: ADD ESP,0xc
// 00522e82: POP EDI
// 00522e83: POP EBX
// 00522e84: RET
// 00522e85: PUSH ESI
//   Label: LAB_00522e85
// 00522e86: MOV ECX,0x638a4d
//   XREF to: 00638a4d (PARAM)
// 00522e8b: MOV ESI,0xb6
// 00522e90: PUSH 0x638a61
//   XREF to: 00638a61 (DATA)
// 00522e95: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00522e9b: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00522ea1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00522ea6: ADD ESP,0x4
// 00522ea9: POP ESI
// 00522eaa: JMP 0x00522e61
//   XREF to: 00522e61 (UNCONDITIONAL_JUMP)
