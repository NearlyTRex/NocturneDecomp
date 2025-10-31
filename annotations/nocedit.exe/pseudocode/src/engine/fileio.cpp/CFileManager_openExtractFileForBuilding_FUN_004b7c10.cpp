// Name: engine_fileio.cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10
// Address: 004b7c10
// Address Range: [[004b7c10, 004b7c5e]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10(CFileManager * this_ptr)
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 (004bda20) at 004bdb24 [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_moveSetIntoPod_FUN_004bd930 (004bd930) at 004bd970 [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 (004be270) at 004be52c [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_buildPodFromResponseFile_FUN_004b7ac0 (004b7ac0) at 004b7b18 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_fileio_cpp_00628029
//   TerminatedCString s_wt_0062803e
//   TerminatedCString s_level_lst_00628041
//   TerminatedCString s_engine_fileio_cpp_0062804b
//   TerminatedCString s_fileManager_openExtractF_00628060
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10(CFileManager *this_ptr)

{
  FILE *pFVar1;
  undefined4 *in_stack_00000008;
  
  pFVar1 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     ("level.lst",(char *)0x0,"wt","..\\engine\\fileio.cpp",
                      0xa8c);
  *in_stack_00000008 = pFVar1;
  if (pFVar1 != (FILE *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\engine\\fileio.cpp";
  g_CurrentLineNumber = 0xa8e;
  core_main_c_displayErrorAndQuit_FUN_00506f10("fileManager::openExtractFile - Unable to open level.lst");
  return;
}


// Assembly code:
// 004b7c10: PUSH 0xa8c
//   Label: engine_fileio.cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10
// 004b7c15: PUSH 0x628029
//   XREF to: 00628029 (DATA)
// 004b7c1a: PUSH 0x62803e
//   XREF to: 0062803e (DATA)
// 004b7c1f: PUSH 0x0
// 004b7c21: PUSH 0x628041
//   XREF to: 00628041 (DATA)
// 004b7c26: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004b7c2b: ADD ESP,0x14
// 004b7c2e: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 004b7c32: MOV dword ptr [EDX],EAX
// 004b7c34: TEST EAX,EAX
// 004b7c36: JZ 0x004b7c39
//   XREF to: 004b7c39 (CONDITIONAL_JUMP)
// 004b7c38: RET
// 004b7c39: PUSH EBX
//   Label: LAB_004b7c39
// 004b7c3a: MOV ECX,0x62804b
//   XREF to: 0062804b (PARAM)
// 004b7c3f: MOV EBX,0xa8e
// 004b7c44: PUSH 0x628060
//   XREF to: 00628060 (DATA)
// 004b7c49: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004b7c4f: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 004b7c55: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b7c5a: ADD ESP,0x4
// 004b7c5d: POP EBX
// 004b7c5e: RET
