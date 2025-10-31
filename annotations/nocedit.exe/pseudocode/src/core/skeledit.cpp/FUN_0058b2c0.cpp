// Name: core_skeledit.cpp_FUN_0058b2c0
// Address: 0058b2c0
// Address Range: [[0058b2c0, 0058b399]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058b2c0()
// Globals:
//   TerminatedCString s_s_s_already_exists_in_a__0064a0c6
//   TerminatedCString s_Saving_skeleton_to_s_0064a5ce
//   TerminatedCString s_data_0064a5e7
//   TerminatedCString s_wt_0064a5ec
//   TerminatedCString s_data_0064a5ef
//   TerminatedCString s_core_skeledit_cpp_0064a5f4
//   TerminatedCString s_CSkeleton_save_Can_t_cre_0064a609
//   TerminatedCString s_core_skeledit_cpp_0064a62b
//   TerminatedCString s_Saved_skeleton_to_s_OK_0064a640
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CDemonPod* g_CDemonPodPtr = 030e5090
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonPod g_CDemonPodInstance
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeledit.cpp_FUN_0058b3a0
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   engine_dosio.c_getFile_FUN_00481a50
//   engine_pod.cpp_CPod_locateFile_FUN_005512f0
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058b2c0(void)

{
  CPodFile *pCVar1;
  FILE *file_ptr;
  char *in_stack_00000010;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x24);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Saving skeleton to %s...");
  pCVar1 = engine_pod_cpp_CPod_locateFile_FUN_005512f0
                     ((CPod *)g_CDemonPodPtr,"data",in_stack_00000010,(int *)0x0);
  if (pCVar1 != (CPodFile *)0x0) {
    shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
              (g_CEditorToolsPtr,"%s\\%s already exists in a mounted pod file:\n%s\nI'm still saving it to the local file,\nbut just thought you would want to know about the\none in the pod.","data",
               in_stack_00000010);
  }
  file_ptr = engine_dosio_c_getFile_FUN_00481a50("data",in_stack_00000010,"wt");
  if (file_ptr == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x457;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CSkeleton::save - Can't create %s");
  }
  core_skeledit_cpp_FUN_0058b3a0();
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\skeledit.cpp",0x459);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Saved skeleton to %s OK");
  return;
}


// Assembly code:
// 0058b2c0: PUSH 0x24
//   Label: core_skeledit.cpp_FUN_0058b2c0
// 0058b2c5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058b2ca: PUSH EBX
// 0058b2cb: PUSH ESI
// 0058b2cc: PUSH EBP
// 0058b2cd: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0058b2d1: PUSH EBX
// 0058b2d2: PUSH 0x64a5ce
//   XREF to: 0064a5ce (DATA)
// 0058b2d7: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0058b2dd: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0058b2de: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0058b2e3: ADD ESP,0xc
// 0058b2e6: PUSH 0x0
// 0058b2e8: PUSH EBX
// 0058b2e9: PUSH 0x64a5e7
//   XREF to: 0064a5e7 (DATA)
// 0058b2ee: MOV ECX,dword ptr [0x00680cdc]
//   XREF to: 00680cdc (READ)
// 0058b2f4: PUSH ECX
//   XREF to: 030e5090 (DATA)
// 0058b2f5: CALL engine_pod.cpp_CPod_locateFile_FUN_005512f0
//   XREF to: 005512f0 (UNCONDITIONAL_CALL)
// 0058b2fa: ADD ESP,0x10
// 0058b2fd: TEST EAX,EAX
// 0058b2ff: JZ 0x0058b31f
//   XREF to: 0058b31f (CONDITIONAL_JUMP)
// 0058b301: ADD EAX,0x4
// 0058b304: PUSH EAX
// 0058b305: PUSH EBX
// 0058b306: PUSH 0x64a5e7
//   XREF to: 0064a5e7 (DATA)
// 0058b30b: PUSH 0x64a0c6
//   XREF to: 0064a0c6 (DATA)
// 0058b310: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0058b316: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 0058b317: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 0058b31c: ADD ESP,0x14
// 0058b31f: PUSH 0x64a5ec
//   Label: LAB_0058b31f
//   XREF to: 0064a5ec (DATA)
// 0058b324: PUSH EBX
// 0058b325: PUSH 0x64a5ef
//   XREF to: 0064a5ef (DATA)
// 0058b32a: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0058b32f: ADD ESP,0xc
// 0058b332: MOV ESI,EAX
// 0058b334: TEST EAX,EAX
// 0058b336: JZ 0x0058b372
//   XREF to: 0058b372 (CONDITIONAL_JUMP)
// 0058b338: PUSH ESI
//   Label: LAB_0058b338
// 0058b339: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0058b33d: PUSH EAX
// 0058b33e: CALL core_skeledit.cpp_FUN_0058b3a0
//   XREF to: 0058b3a0 (UNCONDITIONAL_CALL)
// 0058b343: ADD ESP,0x8
// 0058b346: PUSH 0x459
// 0058b34b: PUSH 0x64a62b
//   XREF to: 0064a62b (DATA)
// 0058b350: PUSH ESI
// 0058b351: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0058b356: ADD ESP,0xc
// 0058b359: PUSH EBX
// 0058b35a: PUSH 0x64a640
//   XREF to: 0064a640 (DATA)
// 0058b35f: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0058b365: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0058b366: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0058b36b: ADD ESP,0xc
// 0058b36e: POP EBP
// 0058b36f: POP ESI
// 0058b370: POP EBX
// 0058b371: RET
// 0058b372: PUSH EDI
//   Label: LAB_0058b372
// 0058b373: PUSH EBX
// 0058b374: MOV EDI,0x64a5f4
//   XREF to: 0064a5f4 (DATA)
// 0058b379: MOV EBP,0x457
// 0058b37e: PUSH 0x64a609
//   XREF to: 0064a609 (DATA)
// 0058b383: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0058b389: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 0058b38f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0058b394: ADD ESP,0x8
// 0058b397: POP EDI
// 0058b398: JMP 0x0058b338
//   XREF to: 0058b338 (UNCONDITIONAL_JUMP)
