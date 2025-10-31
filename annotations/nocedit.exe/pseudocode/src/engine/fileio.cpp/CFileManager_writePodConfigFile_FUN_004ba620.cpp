// Name: engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620
// Address: 004ba620
// Address Range: [[004ba620, 004ba6b3]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620(CFileManager * this_ptr, CStrList * pod_list)
// Cross-references:
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bc1d6 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 (004ba740) at 004bae8e [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0 (004bccf0) at 004bce22 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 (004b6e10) at 004b71a1 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b8f93 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0 (004bcec0) at 004bd0dc [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0 (004bc2b0) at 004bc512 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_fileio_cpp_00628d4f
//   TerminatedCString s_wt_00628d64
//   TerminatedCString s_pod_ini_00628d67
//   TerminatedCString s_engine_fileio_cpp_00628d6f
//   TerminatedCString s_Can_t_create_POD_INI_00628d84
//   TerminatedCString s_d_00628d9a
//   TerminatedCString s_s_00628d9e
//   TerminatedCString s_engine_fileio_cpp_00628da2
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_writePodConfigFile_FUN_004ba620
          (CFileManager *this_ptr,CStrList *pod_list)

{
  FILE *file;
  char *pcVar1;
  int index;
  char *format;
  
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   ("pod.ini",(char *)0x0,"wt","..\\engine\\fileio.cpp",0xe94)
  ;
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0xe95;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create POD.INI!");
  }
  pcVar1 = (char *)pod_list->item_count;
  format = "%d\n";
  index = 0;
  while( true ) {
    crt_stdio_c_fprintf_FUN_005fe6d0(file,format,pcVar1);
    if (pod_list->item_count <= index) break;
    pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(pod_list,index);
    format = "%s\n";
    index = index + 1;
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\fileio.cpp",0xe9b);
  return;
}


// Assembly code:
// 004ba620: PUSH EBX
//   Label: engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620
// 004ba621: PUSH ESI
// 004ba622: PUSH EDI
// 004ba623: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004ba627: PUSH 0xe94
// 004ba62c: PUSH 0x628d4f
//   XREF to: 00628d4f (DATA)
// 004ba631: PUSH 0x628d64
//   XREF to: 00628d64 (DATA)
// 004ba636: PUSH 0x0
// 004ba638: PUSH 0x628d67
//   XREF to: 00628d67 (DATA)
// 004ba63d: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004ba642: ADD ESP,0x14
// 004ba645: MOV EDI,EAX
// 004ba647: TEST EAX,EAX
// 004ba649: JZ 0x004ba67b
//   XREF to: 004ba67b (CONDITIONAL_JUMP)
// 004ba64b: MOV EAX,dword ptr [ESI]
//   Label: LAB_004ba64b
// 004ba64d: PUSH EAX
// 004ba64e: PUSH 0x628d9a
//   XREF to: 00628d9a (DATA)
// 004ba653: PUSH EDI
// 004ba654: XOR EBX,EBX
// 004ba656: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   Label: LAB_004ba656
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004ba65b: ADD ESP,0xc
// 004ba65e: MOV EAX,dword ptr [ESI]
// 004ba660: CMP EBX,EAX
// 004ba662: JL 0x004ba6a0
//   XREF to: 004ba6a0 (CONDITIONAL_JUMP)
// 004ba664: PUSH 0xe9b
// 004ba669: PUSH 0x628da2
//   XREF to: 00628da2 (DATA)
// 004ba66e: PUSH EDI
// 004ba66f: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004ba674: ADD ESP,0xc
// 004ba677: POP EDI
// 004ba678: POP ESI
// 004ba679: POP EBX
// 004ba67a: RET
// 004ba67b: MOV EDX,0x628d6f
//   Label: LAB_004ba67b
//   XREF to: 00628d6f (PARAM)
// 004ba680: MOV ECX,0xe95
// 004ba685: PUSH 0x628d84
//   XREF to: 00628d84 (DATA)
// 004ba68a: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004ba690: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004ba696: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004ba69b: ADD ESP,0x4
// 004ba69e: JMP 0x004ba64b
//   XREF to: 004ba64b (UNCONDITIONAL_JUMP)
// 004ba6a0: PUSH EBX
//   Label: LAB_004ba6a0
// 004ba6a1: PUSH ESI
// 004ba6a2: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004ba6a7: ADD ESP,0x8
// 004ba6aa: PUSH EAX
// 004ba6ab: PUSH 0x628d9e
//   XREF to: 00628d9e (DATA)
// 004ba6b0: PUSH EDI
// 004ba6b1: INC EBX
// 004ba6b2: JMP 0x004ba656
//   XREF to: 004ba656 (UNCONDITIONAL_JUMP)
