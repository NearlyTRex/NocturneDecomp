// Name: core_fileman.cpp_CDemonFileManager_addDeformableModelToExtractList_FUN_004be070
// Address: 004be070
// Address Range: [[004be070, 004be141]]
// Convention: __cdecl
// Signature: void core_fileman.cpp_CDemonFileManager_addDeformableModelToExtractList_FUN_004be070(CDemonFileManager * file_manager_ptr, char * model_filename)
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 (004bda20) at 004bdfb0 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Adding_files_for_s_to_ex_006296fa
//   TerminatedCString s_models_s_00629721
//   TerminatedCString s_core_fileman_cpp_0062972c
//   TerminatedCString s_core_fileman_cpp_00629740
//   TerminatedCString s_Out_of_memory_00629754
//   TerminatedCString s_core_fileman_cpp_00629763
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   char* g_CurrentDebugFilename = 0067d200
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeledit.cpp_FUN_0058a2b0
//   core_skeleton.cpp_CDeformableModel_ctor_FUN_0059a160
//   core_skeleton.cpp_CDeformableModel_dtor_FUN_0059a270
//   core_skeleton.cpp_CDeformableModel_load_FUN_0059b8d0
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

void __cdecl
core_fileman_cpp_CDemonFileManager_addDeformableModelToExtractList_FUN_004be070
          (CDemonFileManager *file_manager_ptr,char *model_filename)

{
  CDeformableModel *pCVar1;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Adding files for %s to extract list...");
  crt_stdio_c_fprintf_FUN_005fe6d0(*(FILE **)model_filename,"models\\%s\n",model_filename);
  pCVar1 = (CDeformableModel *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x9000,"..\\core\\fileman.cpp",0x143);
  if (pCVar1 != (CDeformableModel *)0x0) {
    pCVar1 = core_skeleton_cpp_CDeformableModel_ctor_FUN_0059a160(pCVar1);
  }
  if (pCVar1 == (CDeformableModel *)0x0) {
    g_CurrentFilename = "..\\core\\fileman.cpp";
    g_CurrentLineNumber = 0x144;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory.");
  }
  core_skeleton_cpp_CDeformableModel_load_FUN_0059b8d0(pCVar1,model_filename);
  core_skeledit_cpp_FUN_0058a2b0();
  g_CurrentDebugLine = 0x147;
  g_CurrentDebugFilename = "..\\core\\fileman.cpp";
  if (pCVar1 == (CDeformableModel *)0x0) {
    return;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModel_dtor_FUN_0059a270(pCVar1);
  shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar1);
  return;
}


// Assembly code:
// 004be070: PUSH EBX
//   Label: core_fileman.cpp_CDemonFileManager_addDeformableModelToExtractList_FUN_004be070
// 004be071: PUSH ESI
// 004be072: PUSH EBP
// 004be073: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004be077: PUSH ESI
// 004be078: PUSH 0x6296fa
//   XREF to: 006296fa (DATA)
// 004be07d: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004be083: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004be084: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004be089: ADD ESP,0xc
// 004be08c: PUSH ESI
// 004be08d: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004be091: PUSH 0x629721
//   XREF to: 00629721 (DATA)
// 004be096: MOV ECX,dword ptr [EAX]
// 004be098: PUSH ECX
// 004be099: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004be09e: ADD ESP,0xc
// 004be0a1: PUSH 0x143
// 004be0a6: PUSH 0x62972c
//   XREF to: 0062972c (DATA)
// 004be0ab: PUSH 0x9000
// 004be0b0: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004be0b5: ADD ESP,0xc
// 004be0b8: TEST EAX,EAX
// 004be0ba: JNZ 0x004be11f
//   XREF to: 004be11f (CONDITIONAL_JUMP)
// 004be0bc: MOV EBX,EAX
//   Label: LAB_004be0bc
// 004be0be: TEST EAX,EAX
// 004be0c0: JNZ 0x004be0e7
//   XREF to: 004be0e7 (CONDITIONAL_JUMP)
// 004be0c2: PUSH EDI
// 004be0c3: MOV EDI,0x629740
//   XREF to: 00629740 (DATA)
// 004be0c8: MOV EBP,0x144
// 004be0cd: PUSH 0x629754
//   XREF to: 00629754 (DATA)
// 004be0d2: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 004be0d8: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 004be0de: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004be0e3: ADD ESP,0x4
// 004be0e6: POP EDI
// 004be0e7: PUSH ESI
//   Label: LAB_004be0e7
// 004be0e8: PUSH EBX
// 004be0e9: CALL core_skeleton.cpp_CDeformableModel_load_FUN_0059b8d0
//   XREF to: 0059b8d0 (UNCONDITIONAL_CALL)
// 004be0ee: ADD ESP,0x8
// 004be0f1: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004be0f5: MOV EDX,dword ptr [EAX]
// 004be0f7: PUSH EDX
// 004be0f8: PUSH EBX
// 004be0f9: MOV ESI,0x147
// 004be0fe: CALL core_skeledit.cpp_FUN_0058a2b0
//   XREF to: 0058a2b0 (UNCONDITIONAL_CALL)
// 004be103: MOV ECX,0x629763
//   XREF to: 00629763 (PARAM)
// 004be108: ADD ESP,0x8
// 004be10b: MOV dword ptr [0x02f0d944],ESI
//   XREF to: 02f0d944 (WRITE)
// 004be111: MOV dword ptr [0x0067d20c],ECX
//   XREF to: 0067d20c (WRITE)
// 004be117: TEST EBX,EBX
// 004be119: JNZ 0x004be12a
//   XREF to: 004be12a (CONDITIONAL_JUMP)
// 004be11b: POP EBP
// 004be11c: POP ESI
// 004be11d: POP EBX
// 004be11e: RET
// 004be11f: PUSH EAX
//   Label: LAB_004be11f
// 004be120: CALL core_skeleton.cpp_CDeformableModel_ctor_FUN_0059a160
//   XREF to: 0059a160 (UNCONDITIONAL_CALL)
// 004be125: ADD ESP,0x4
// 004be128: JMP 0x004be0bc
//   XREF to: 004be0bc (UNCONDITIONAL_JUMP)
// 004be12a: PUSH 0x0
//   Label: LAB_004be12a
// 004be12c: PUSH EBX
// 004be12d: CALL core_skeleton.cpp_CDeformableModel_dtor_FUN_0059a270
//   XREF to: 0059a270 (UNCONDITIONAL_CALL)
// 004be132: ADD ESP,0x8
// 004be135: PUSH EAX
// 004be136: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004be13b: ADD ESP,0x4
// 004be13e: POP EBP
// 004be13f: POP ESI
// 004be140: POP EBX
// 004be141: RET
