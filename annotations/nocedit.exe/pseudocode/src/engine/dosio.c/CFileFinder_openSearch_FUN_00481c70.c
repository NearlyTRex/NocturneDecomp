// Name: engine_dosio.c_CFileFinder_openSearch_FUN_00481c70
// Address: 00481c70
// Address Range: [[00481c70, 00481ce9]]
// Convention: __cdecl
// Signature: int engine_dosio.c_CFileFinder_openSearch_FUN_00481c70(CFileFinder * this_ptr, char * search_pattern)
// Cross-references:
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 00538955 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00537230 (00537230) at 0053724f [UNCONDITIONAL_CALL]
//   core_podmain.cpp_CDemonPod_load_FUN_005519c0 (005519c0) at 00551a09 [UNCONDITIONAL_CALL]
//   engine_dosio.c_getFileTimestamp_FUN_00481960 (00481960) at 0048199f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030 (004b5030) at 004b512f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0 (004bccf0) at 004bcdbc [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 (0049f420) at 0049f603 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0 (004a35b0) at 004a3701 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0 (004a37b0) at 004a38f4 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0 (004a39e0) at 004a3ab4 [UNCONDITIONAL_CALL]
// Globals:
//   FindFirstFileA* PTR_FindFirstFileA_0061154c = 00211d84
// Function calls:
//   engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70
//   engine_dosio.c_CFileFinder_convertStruct_FUN_00481dc0
//   engine_dosio.c_CFileFinder_reset_FUN_00481db0
//   FindFirstFileA

#include "nocturne.h"

int __cdecl
engine_dosio_c_CFileFinder_openSearch_FUN_00481c70(CFileFinder *this_ptr,char *search_pattern)

{
  HANDLE pvVar1;
  BADSPACEBASE *in_ESP;
  LPCSTR in_stack_0000000c;
  DWORD DStack_140;
  
  engine_dosio_c_CFileFinder_closeSearch_FUN_00481d70(this_ptr);
  pvVar1 = (*PTR_FindFirstFileA_0061154c)(in_stack_0000000c,(LPWIN32_FIND_DATAA)&DStack_140);
  if (pvVar1 == (HANDLE)0xffffffff) {
    if (this_ptr->has_results == 0) {
      engine_dosio_c_CFileFinder_reset_FUN_00481db0(this_ptr);
      return this_ptr->has_results;
    }
  }
  else {
    this_ptr->search_handle = pvVar1;
    DStack_140 = 0x481cc4;
    engine_dosio_c_CFileFinder_convertStruct_FUN_00481dc0
              (this_ptr,(LPWIN32_FIND_DATAA)&stack0xfffffecc);
    this_ptr->has_results = 1;
  }
  return this_ptr->has_results;
}


// Assembly code:
// 00481c70: PUSH EBX
//   Label: engine_dosio.c_CFileFinder_openSearch_FUN_00481c70
// 00481c71: SUB ESP,0x140
// 00481c77: MOV EBX,dword ptr [ESP + 0x148]
//   XREF to: Stack[0x4] (READ)
// 00481c7e: PUSH EBX
// 00481c7f: CALL engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70
//   XREF to: 00481d70 (UNCONDITIONAL_CALL)
// 00481c84: ADD ESP,0x4
// 00481c87: MOV EAX,ESP
// 00481c89: PUSH EAX
// 00481c8a: MOV EDX,dword ptr [ESP + 0x150]
//   XREF to: Stack[0x8] (READ)
// 00481c91: PUSH EDX
// 00481c92: CALL dword ptr CS:[0x61154c]
//   XREF to: EXTERNAL:0000005e (COMPUTED_CALL)
//   XREF to: 0061154c (READ)
// 00481c99: CMP EAX,-0x1
// 00481c9c: JNZ 0x00481cb5
//   XREF to: 00481cb5 (CONDITIONAL_JUMP)
// 00481c9e: CMP dword ptr [EBX + 0x10c],0x0
// 00481ca5: JZ 0x00481cd3
//   XREF to: 00481cd3 (CONDITIONAL_JUMP)
// 00481ca7: MOV EAX,dword ptr [EBX + 0x10c]
//   Label: LAB_00481ca7
// 00481cad: ADD ESP,0x140
// 00481cb3: POP EBX
// 00481cb4: RET
// 00481cb5: MOV dword ptr [EBX + 0x110],EAX
//   Label: LAB_00481cb5
// 00481cbb: MOV EAX,ESP
// 00481cbd: PUSH EAX
// 00481cbe: PUSH EBX
// 00481cbf: CALL engine_dosio.c_CFileFinder_convertStruct_FUN_00481dc0
//   XREF to: 00481dc0 (UNCONDITIONAL_CALL)
// 00481cc4: ADD ESP,0x8
// 00481cc7: MOV dword ptr [EBX + 0x10c],0x1
// 00481cd1: JMP 0x00481ca7
//   XREF to: 00481ca7 (UNCONDITIONAL_JUMP)
// 00481cd3: PUSH EBX
//   Label: LAB_00481cd3
// 00481cd4: CALL engine_dosio.c_CFileFinder_reset_FUN_00481db0
//   XREF to: 00481db0 (UNCONDITIONAL_CALL)
// 00481cd9: ADD ESP,0x4
// 00481cdc: MOV EAX,dword ptr [EBX + 0x10c]
// 00481ce2: ADD ESP,0x140
// 00481ce8: POP EBX
// 00481ce9: RET
