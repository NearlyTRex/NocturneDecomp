// Name: engine_dosio.c_CFileFinder_findNext_FUN_00481cf0
// Address: 00481cf0
// Address Range: [[00481cf0, 00481d6f]]
// Convention: __cdecl
// Signature: int engine_dosio.c_CFileFinder_findNext_FUN_00481cf0(CFileFinder * this_ptr)
// Cross-references:
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 00538a00 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00537230 (00537230) at 005372dd [UNCONDITIONAL_CALL]
//   core_podmain.cpp_CDemonPod_load_FUN_005519c0 (005519c0) at 00551a2a [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030 (004b5030) at 004b51c6 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0 (004bccf0) at 004bcdee [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 (0049f420) at 0049f531 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0 (004a35b0) at 004a373e [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0 (004a37b0) at 004a393d [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0 (004a39e0) at 004a3b43 [UNCONDITIONAL_CALL]
// Globals:
//   FindNextFileA* PTR_FindNextFileA_00611550 = 00211d96
//   TerminatedCString s_engine_dosio_c_006215de
//   TerminatedCString s_CFileFinder_open_search__006215f0
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_dosio.c_CFileFinder_convertStruct_FUN_00481dc0
//   engine_dosio.c_CFileFinder_reset_FUN_00481db0
//   FindNextFileA

#include "nocturne.h"

int __cdecl engine_dosio_c_CFileFinder_findNext_FUN_00481cf0(CFileFinder *this_ptr)

{
  BOOL BVar1;
  BADSPACEBASE *in_ESP;
  DWORD DStack_144;
  
  if (this_ptr->has_results == 0) {
    g_CurrentFilename = "..\\engine\\dosio.c";
    g_CurrentLineNumber = 0x244;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CFileFinder::open - search not opened!");
  }
  BVar1 = (*PTR_FindNextFileA_00611550)(this_ptr->search_handle,(LPWIN32_FIND_DATAA)&DStack_144);
  if (BVar1 != 0) {
    DStack_144 = 0x481d4b;
    engine_dosio_c_CFileFinder_convertStruct_FUN_00481dc0
              (this_ptr,(LPWIN32_FIND_DATAA)&stack0xfffffec8);
    return 1;
  }
  engine_dosio_c_CFileFinder_reset_FUN_00481db0(this_ptr);
  return 0;
}


// Assembly code:
// 00481cf0: PUSH EBX
//   Label: engine_dosio.c_CFileFinder_findNext_FUN_00481cf0
// 00481cf1: PUSH EDI
// 00481cf2: SUB ESP,0x140
// 00481cf8: MOV EBX,dword ptr [ESP + 0x14c]
//   XREF to: Stack[0x4] (READ)
// 00481cff: CMP dword ptr [EBX + 0x10c],0x0
// 00481d06: JNZ 0x00481d2d
//   XREF to: 00481d2d (CONDITIONAL_JUMP)
// 00481d08: PUSH ESI
// 00481d09: MOV ECX,0x6215de
//   XREF to: 006215de (PARAM)
// 00481d0e: MOV ESI,0x244
// 00481d13: PUSH 0x6215f0
//   XREF to: 006215f0 (DATA)
// 00481d18: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00481d1e: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00481d24: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00481d29: ADD ESP,0x4
// 00481d2c: POP ESI
// 00481d2d: MOV EAX,ESP
//   Label: LAB_00481d2d
// 00481d2f: PUSH EAX
// 00481d30: MOV EDI,dword ptr [EBX + 0x110]
// 00481d36: PUSH EDI
// 00481d37: CALL dword ptr CS:[0x611550]
//   XREF to: EXTERNAL:0000005f (COMPUTED_CALL)
//   XREF to: 00611550 (READ)
// 00481d3e: TEST EAX,EAX
// 00481d40: JZ 0x00481d5c
//   XREF to: 00481d5c (CONDITIONAL_JUMP)
// 00481d42: MOV EAX,ESP
// 00481d44: PUSH EAX
// 00481d45: PUSH EBX
// 00481d46: CALL engine_dosio.c_CFileFinder_convertStruct_FUN_00481dc0
//   XREF to: 00481dc0 (UNCONDITIONAL_CALL)
// 00481d4b: MOV EAX,0x1
// 00481d50: ADD ESP,0x8
// 00481d53: ADD ESP,0x140
// 00481d59: POP EDI
// 00481d5a: POP EBX
// 00481d5b: RET
// 00481d5c: PUSH EBX
//   Label: LAB_00481d5c
// 00481d5d: CALL engine_dosio.c_CFileFinder_reset_FUN_00481db0
//   XREF to: 00481db0 (UNCONDITIONAL_CALL)
// 00481d62: ADD ESP,0x4
// 00481d65: XOR EAX,EAX
// 00481d67: ADD ESP,0x140
// 00481d6d: POP EDI
// 00481d6e: POP EBX
// 00481d6f: RET
