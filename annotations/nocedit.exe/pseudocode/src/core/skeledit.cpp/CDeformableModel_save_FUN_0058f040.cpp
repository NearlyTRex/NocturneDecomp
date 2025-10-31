// Name: core_skeledit.cpp_CDeformableModel_save_FUN_0058f040
// Address: 0058f040
// Address Range: [[0058f040, 0058f119]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_CDeformableModel_save_FUN_0058f040()
// Cross-references:
//   core_skeledit.cpp_DefinitelyRelatedToEditorMode_FUN_005968b0 (005968b0) at 00598ecb [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_s_already_exists_in_a__0064a0c6
//   TerminatedCString s_Saving_model_to_s_0064b160
//   TerminatedCString s_models_0064b176
//   TerminatedCString s_wt_0064b17d
//   TerminatedCString s_models_0064b180
//   TerminatedCString s_core_skeledit_cpp_0064b187
//   TerminatedCString s_CDeformableModel_save_Ca_0064b19c
//   TerminatedCString s_core_skeledit_cpp_0064b1c5
//   TerminatedCString s_Saved_model_to_s_OK_0064b1da
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CDemonPod* g_CDemonPodPtr = 030e5090
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonPod g_CDemonPodInstance
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeledit.cpp_ParseSkeletonBase_FUN_0058f120
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   engine_dosio.c_getFile_FUN_00481a50
//   engine_pod.cpp_CPod_locateFile_FUN_005512f0
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

/* Signature: void core_skeledit.cpp_CDeformableModel_save(int* param_1, char* param_2, undefined4
   param_3) */

void core_skeledit_cpp_CDeformableModel_save_FUN_0058f040(void)

{
  CPodFile *pCVar1;
  FILE *file_ptr;
  char *in_stack_00000010;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x24);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Saving model to %s...");
  pCVar1 = engine_pod_cpp_CPod_locateFile_FUN_005512f0
                     ((CPod *)g_CDemonPodPtr,"models",in_stack_00000010,(int *)0x0);
  if (pCVar1 != (CPodFile *)0x0) {
    shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
              (g_CEditorToolsPtr,"%s\\%s already exists in a mounted pod file:\n%s\nI'm still saving it to the local file,\nbut just thought you would want to know about the\none in the pod.","models",
               in_stack_00000010);
  }
  file_ptr = engine_dosio_c_getFile_FUN_00481a50("models",in_stack_00000010,"wt");
  if (file_ptr == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0xb2c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::save - Can't create %s");
  }
  core_skeledit_cpp_ParseSkeletonBase_FUN_0058f120();
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\skeledit.cpp",0xb2e);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Saved model to %s OK");
  return;
}


// Assembly code:
// 0058f040: PUSH 0x24
//   Label: core_skeledit.cpp_CDeformableModel_save_FUN_0058f040
// 0058f045: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058f04a: PUSH EBX
// 0058f04b: PUSH ESI
// 0058f04c: PUSH EBP
// 0058f04d: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0058f051: PUSH EBX
// 0058f052: PUSH 0x64b160
//   XREF to: 0064b160 (DATA)
// 0058f057: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0058f05d: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0058f05e: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0058f063: ADD ESP,0xc
// 0058f066: PUSH 0x0
// 0058f068: PUSH EBX
// 0058f069: PUSH 0x64b176
//   XREF to: 0064b176 (DATA)
// 0058f06e: MOV ECX,dword ptr [0x00680cdc]
//   XREF to: 030e5090 (PARAM)
//   XREF to: 00680cdc (READ)
// 0058f074: PUSH ECX
//   XREF to: 030e5090 (DATA)
// 0058f075: CALL engine_pod.cpp_CPod_locateFile_FUN_005512f0
//   XREF to: 005512f0 (UNCONDITIONAL_CALL)
// 0058f07a: ADD ESP,0x10
// 0058f07d: TEST EAX,EAX
// 0058f07f: JZ 0x0058f09f
//   XREF to: 0058f09f (CONDITIONAL_JUMP)
// 0058f081: ADD EAX,0x4
// 0058f084: PUSH EAX
// 0058f085: PUSH EBX
// 0058f086: PUSH 0x64b176
//   XREF to: 0064b176 (DATA)
// 0058f08b: PUSH 0x64a0c6
//   XREF to: 0064a0c6 (DATA)
// 0058f090: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0058f096: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 0058f097: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 0058f09c: ADD ESP,0x14
// 0058f09f: PUSH 0x64b17d
//   Label: LAB_0058f09f
//   XREF to: 0064b17d (DATA)
// 0058f0a4: PUSH EBX
// 0058f0a5: PUSH 0x64b180
//   XREF to: 0064b180 (DATA)
// 0058f0aa: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0058f0af: ADD ESP,0xc
// 0058f0b2: MOV ESI,EAX
// 0058f0b4: TEST EAX,EAX
// 0058f0b6: JZ 0x0058f0f2
//   XREF to: 0058f0f2 (CONDITIONAL_JUMP)
// 0058f0b8: PUSH ESI
//   Label: LAB_0058f0b8
// 0058f0b9: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0058f0bd: PUSH EAX
// 0058f0be: CALL core_skeledit.cpp_ParseSkeletonBase_FUN_0058f120
//   XREF to: 0058f120 (UNCONDITIONAL_CALL)
// 0058f0c3: ADD ESP,0x8
// 0058f0c6: PUSH 0xb2e
// 0058f0cb: PUSH 0x64b1c5
//   XREF to: 0064b1c5 (DATA)
// 0058f0d0: PUSH ESI
// 0058f0d1: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0058f0d6: ADD ESP,0xc
// 0058f0d9: PUSH EBX
// 0058f0da: PUSH 0x64b1da
//   XREF to: 0064b1da (DATA)
// 0058f0df: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0058f0e5: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0058f0e6: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0058f0eb: ADD ESP,0xc
// 0058f0ee: POP EBP
// 0058f0ef: POP ESI
// 0058f0f0: POP EBX
// 0058f0f1: RET
// 0058f0f2: PUSH EDI
//   Label: LAB_0058f0f2
// 0058f0f3: PUSH EBX
// 0058f0f4: MOV EDI,0x64b187
//   XREF to: 0064b187 (DATA)
// 0058f0f9: MOV EBP,0xb2c
// 0058f0fe: PUSH 0x64b19c
//   XREF to: 0064b19c (DATA)
// 0058f103: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0058f109: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 0058f10f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0058f114: ADD ESP,0x8
// 0058f117: POP EDI
// 0058f118: JMP 0x0058f0b8
//   XREF to: 0058f0b8 (UNCONDITIONAL_JUMP)
