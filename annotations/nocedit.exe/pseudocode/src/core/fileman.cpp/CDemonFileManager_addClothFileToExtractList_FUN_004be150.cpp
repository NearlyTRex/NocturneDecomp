// Name: core_fileman.cpp_CDemonFileManager_addClothFileToExtractList_FUN_004be150
// Address: 004be150
// Address Range: [[004be150, 004be228]]
// Convention: __cdecl
// Signature: void core_fileman.cpp_CDemonFileManager_addClothFileToExtractList_FUN_004be150(CDemonFileManager * file_manager_ptr, char * cloth_filename)
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 (004bda20) at 004bdf81 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Adding_files_for_s_to_ex_00629777
//   TerminatedCString s_core_fileman_cpp_0062979e
//   TerminatedCString s_core_fileman_cpp_006297b2
//   TerminatedCString s_Can_t_allocate_cloth_006297c6
//   TerminatedCString s_models_s_006297db
//   TerminatedCString s_core_fileman_cpp_006297e6
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   char* g_CurrentDebugFilename = 0067d200
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
// Function calls:
//   core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00
//   core_cloth.cpp_CCloth_load_FUN_00438cf0
//   core_cloth.cpp_FUN_00438ba0
//   core_cloth.cpp_FUN_0043e0a0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

void __cdecl
core_fileman_cpp_CDemonFileManager_addClothFileToExtractList_FUN_004be150
          (CDemonFileManager *file_manager_ptr,char *cloth_filename)

{
  CCloth *this_ptr;
  void *ptr;
  undefined4 *in_stack_00000014;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Adding files for %s to extract list...");
  this_ptr = (CCloth *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x3fe70,"..\\core\\fileman.cpp",0x153);
  if (this_ptr != (CCloth *)0x0) {
    this_ptr = (CCloth *)core_cloth_cpp_FUN_00438ba0();
  }
  if (this_ptr == (CCloth *)0x0) {
    g_CurrentFilename = "..\\core\\fileman.cpp";
    g_CurrentLineNumber = 0x154;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't allocate cloth");
  }
  core_cloth_cpp_CCloth_load_FUN_00438cf0(this_ptr,cloth_filename);
  crt_stdio_c_fprintf_FUN_005fe6d0((FILE *)*in_stack_00000014,"models\\%s\n");
  core_cloth_cpp_FUN_0043e0a0();
  g_CurrentDebugLine = 0x158;
  g_CurrentDebugFilename = "..\\core\\fileman.cpp";
  if (this_ptr == (CCloth *)0x0) {
    return;
  }
  ptr = (void *)core_cloth_cpp_CallToUnknownSomethingFreeMem_FUN_00438c00();
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return;
}


// Assembly code:
// 004be150: PUSH EBX
//   Label: core_fileman.cpp_CDemonFileManager_addClothFileToExtractList_FUN_004be150
// 004be151: PUSH ESI
// 004be152: PUSH EBP
// 004be153: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004be157: PUSH ESI
// 004be158: PUSH 0x629777
//   XREF to: 00629777 (DATA)
// 004be15d: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004be163: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004be164: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004be169: ADD ESP,0xc
// 004be16c: PUSH 0x153
// 004be171: PUSH 0x62979e
//   XREF to: 0062979e (DATA)
// 004be176: PUSH 0x3fe70
// 004be17b: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004be180: ADD ESP,0xc
// 004be183: TEST EAX,EAX
// 004be185: JNZ 0x004be203
//   XREF to: 004be203 (CONDITIONAL_JUMP)
// 004be18b: MOV EBX,EAX
//   Label: LAB_004be18b
// 004be18d: TEST EAX,EAX
// 004be18f: JNZ 0x004be1b6
//   XREF to: 004be1b6 (CONDITIONAL_JUMP)
// 004be191: PUSH EDI
// 004be192: MOV ECX,0x6297b2
//   XREF to: 006297b2 (PARAM)
// 004be197: MOV EDI,0x154
// 004be19c: PUSH 0x6297c6
//   XREF to: 006297c6 (DATA)
// 004be1a1: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004be1a7: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004be1ad: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004be1b2: ADD ESP,0x4
// 004be1b5: POP EDI
// 004be1b6: PUSH ESI
//   Label: LAB_004be1b6
// 004be1b7: PUSH EBX
// 004be1b8: CALL core_cloth.cpp_CCloth_load_FUN_00438cf0
//   XREF to: 00438cf0 (UNCONDITIONAL_CALL)
// 004be1bd: ADD ESP,0x8
// 004be1c0: PUSH ESI
// 004be1c1: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004be1c5: PUSH 0x6297db
//   XREF to: 006297db (DATA)
// 004be1ca: MOV EBP,dword ptr [EAX]
// 004be1cc: PUSH EBP
// 004be1cd: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004be1d2: ADD ESP,0xc
// 004be1d5: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004be1d9: MOV EDX,dword ptr [EAX]
// 004be1db: PUSH EDX
// 004be1dc: PUSH EBX
// 004be1dd: MOV ESI,0x158
// 004be1e2: CALL core_cloth.cpp_FUN_0043e0a0
//   XREF to: 0043e0a0 (UNCONDITIONAL_CALL)
// 004be1e7: MOV ECX,0x6297e6
//   XREF to: 006297e6 (PARAM)
// 004be1ec: ADD ESP,0x8
// 004be1ef: MOV dword ptr [0x02f0d944],ESI
//   XREF to: 02f0d944 (WRITE)
// 004be1f5: MOV dword ptr [0x0067d20c],ECX
//   XREF to: 0067d20c (WRITE)
// 004be1fb: TEST EBX,EBX
// 004be1fd: JNZ 0x004be211
//   XREF to: 004be211 (CONDITIONAL_JUMP)
// 004be1ff: POP EBP
// 004be200: POP ESI
// 004be201: POP EBX
// 004be202: RET
// 004be203: PUSH EAX
//   Label: LAB_004be203
// 004be204: CALL core_cloth.cpp_FUN_00438ba0
//   XREF to: 00438ba0 (UNCONDITIONAL_CALL)
// 004be209: ADD ESP,0x4
// 004be20c: JMP 0x004be18b
//   XREF to: 004be18b (UNCONDITIONAL_JUMP)
// 004be211: PUSH 0x0
//   Label: LAB_004be211
// 004be213: PUSH EBX
// 004be214: CALL core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00
//   XREF to: 00438c00 (UNCONDITIONAL_CALL)
// 004be219: ADD ESP,0x8
// 004be21c: PUSH EAX
// 004be21d: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004be222: ADD ESP,0x4
// 004be225: POP EBP
// 004be226: POP ESI
// 004be227: POP EBX
// 004be228: RET
