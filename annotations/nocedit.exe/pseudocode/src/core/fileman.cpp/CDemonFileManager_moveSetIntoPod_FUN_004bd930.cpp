// Name: core_fileman.cpp_CDemonFileManager_moveSetIntoPod_FUN_004bd930
// Address: 004bd930
// Address Range: [[004bd930, 004bd9a1]]
// Convention: __cdecl
// Signature: void core_fileman.cpp_CDemonFileManager_moveSetIntoPod_FUN_004bd930(CDemonFileManager * this_ptr)
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 (004be270) at 004be451 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_set_006295a2
//   TerminatedCString s_models_006295a8
//   TerminatedCString s_Select_set_to_build_pod_006295af
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   core_fileman.cpp_CDemonFileManager_addSetToExtractList_FUN_004bd8e0
//   engine_fileio.cpp_CFileManager_closeExtractFile_FUN_004b7c60
//   engine_fileio.cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50
//   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270

#include "nocturne.h"

void __cdecl
core_fileman_cpp_CDemonFileManager_moveSetIntoPod_FUN_004bd930(CDemonFileManager *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  
  iVar1 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                    (g_CEditorToolsPtr,"Select set to build pod.","models",
                     "*.set",SUB41(&stack0xfffffefc,0));
  if (iVar1 == 0) {
    return;
  }
  engine_fileio_cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10
            (&this_ptr->base_filemanager);
  core_fileman_cpp_CDemonFileManager_addSetToExtractList_FUN_004bd8e0(this_ptr,&stack0xffffff04);
  engine_fileio_cpp_CFileManager_closeExtractFile_FUN_004b7c60(&this_ptr->base_filemanager);
  engine_fileio_cpp_CFileManager_rebuildLastPod_FUN_004b5a50
            (&this_ptr->base_filemanager,(char *)0x0,(char *)0x0);
  return;
}


// Assembly code:
// 004bd930: PUSH EBX
//   Label: core_fileman.cpp_CDemonFileManager_moveSetIntoPod_FUN_004bd930
// 004bd931: SUB ESP,0x100
// 004bd937: MOV EBX,dword ptr [ESP + 0x108]
//   XREF to: Stack[0x4] (READ)
// 004bd93e: PUSH 0x0
// 004bd940: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x104] (DATA)
// 004bd944: PUSH EAX
// 004bd945: PUSH 0x6295a2
//   XREF to: 006295a2 (DATA)
// 004bd94a: PUSH 0x6295a8
//   XREF to: 006295a8 (DATA)
// 004bd94f: PUSH 0x6295af
//   XREF to: 006295af (DATA)
// 004bd954: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004bd95a: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004bd95b: CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   XREF to: 0049f270 (UNCONDITIONAL_CALL)
// 004bd960: ADD ESP,0x18
// 004bd963: TEST EAX,EAX
// 004bd965: JNZ 0x004bd96f
//   XREF to: 004bd96f (CONDITIONAL_JUMP)
// 004bd967: ADD ESP,0x100
// 004bd96d: POP EBX
// 004bd96e: RET
// 004bd96f: PUSH EBX
//   Label: LAB_004bd96f
// 004bd970: CALL engine_fileio.cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10
//   XREF to: 004b7c10 (UNCONDITIONAL_CALL)
// 004bd975: ADD ESP,0x4
// 004bd978: MOV EAX,ESP
// 004bd97a: PUSH EAX
// 004bd97b: PUSH EBX
// 004bd97c: CALL core_fileman.cpp_CDemonFileManager_addSetToExtractList_FUN_004bd8e0
//   XREF to: 004bd8e0 (UNCONDITIONAL_CALL)
// 004bd981: ADD ESP,0x8
// 004bd984: PUSH EBX
// 004bd985: CALL engine_fileio.cpp_CFileManager_closeExtractFile_FUN_004b7c60
//   XREF to: 004b7c60 (UNCONDITIONAL_CALL)
// 004bd98a: ADD ESP,0x4
// 004bd98d: PUSH 0x0
// 004bd98f: PUSH 0x0
// 004bd991: PUSH EBX
// 004bd992: CALL engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50
//   XREF to: 004b5a50 (UNCONDITIONAL_CALL)
// 004bd997: ADD ESP,0xc
// 004bd99a: ADD ESP,0x100
// 004bd9a0: POP EBX
// 004bd9a1: RET
