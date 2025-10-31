// Name: core_fileman.cpp_CDemonFileManager_addKeyframeModelToExtractList_FUN_004be230
// Address: 004be230
// Address Range: [[004be230, 004be261]]
// Convention: __cdecl
// Signature: void core_fileman.cpp_CDemonFileManager_addKeyframeModelToExtractList_FUN_004be230(CDemonFileManager * this_ptr, char * filename)
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 (004bda20) at 004bdf52 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Adding_files_for_s_to_ex_006297fa
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   core_dmodel.cpp_writeModelDependencies_FUN_0047ee30
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790

#include "nocturne.h"

void __cdecl
core_fileman_cpp_CDemonFileManager_addKeyframeModelToExtractList_FUN_004be230
          (CDemonFileManager *this_ptr,char *filename)

{
  char *in_stack_0000000c;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Adding files for %s to extract list...");
  core_dmodel_cpp_writeModelDependencies_FUN_0047ee30(*(FILE **)filename,in_stack_0000000c);
  return;
}


// Assembly code:
// 004be230: PUSH EBX
//   Label: core_fileman.cpp_CDemonFileManager_addKeyframeModelToExtractList_FUN_004be230
// 004be231: PUSH ESI
// 004be232: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004be236: PUSH EDX
// 004be237: PUSH 0x6297fa
//   XREF to: 006297fa (DATA)
// 004be23c: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004be242: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004be243: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004be248: ADD ESP,0xc
// 004be24b: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004be24f: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004be253: PUSH EBX
// 004be254: MOV ESI,dword ptr [EAX]
// 004be256: PUSH ESI
// 004be257: CALL core_dmodel.cpp_writeModelDependencies_FUN_0047ee30
//   XREF to: 0047ee30 (UNCONDITIONAL_CALL)
// 004be25c: ADD ESP,0x8
// 004be25f: POP ESI
// 004be260: POP EBX
// 004be261: RET
