// Name: engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
// Address: 004ba4f0
// Address Range: [[004ba4f0, 004ba614]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0(CFileManager * this_ptr, CStrList * pod_list)
// Cross-references:
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bb4ae [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 (004ba740) at 004bae4f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 (004b6e10) at 004b713c [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b87e8 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0 (004bcec0) at 004bcf14 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0 (004bc2b0) at 004bc375 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_fileio_cpp_00628cbc
//   TerminatedCString s_rt_00628cd1
//   TerminatedCString s_pod_ini_00628cd4
//   TerminatedCString s_d_00628cdc
//   TerminatedCString s_engine_fileio_cpp_00628ce0
//   TerminatedCString s_Error_parsing_POD_INI_00628cf5
//   TerminatedCString s_s_00628d0b
//   TerminatedCString s_engine_fileio_cpp_00628d0f
//   TerminatedCString s_Error_parsing_POD_INI_00628d24
//   TerminatedCString s_engine_fileio_cpp_00628d3a
//   char[260] g_FilenameBufferTemplate
//   undefined4 DAT_0067a15c
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
          (CFileManager *this_ptr,CStrList *pod_list)

{
  FILE *file;
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  undefined4 *puVar4;
  byte bVar5;
  int unaff_retaddr;
  CStrList *in_stack_00000010;
  char *pcVar6;
  undefined4 *puVar7;
  char cStack_108;
  char acStack_104 [4];
  undefined4 auStack_100 [63];
  
  bVar5 = 0;
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   ("pod.ini",(char *)0x0,"rt","..\\engine\\fileio.cpp",0xe7c)
  ;
  if (file == (FILE *)0x0) {
    return;
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d\n",&stack0xfffffffc);
  if (unaff_retaddr < 0) {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0xe81;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Error parsing POD.INI");
  }
  iVar2 = 0;
  if (0 < (int)this_ptr) {
    do {
      puVar7 = auStack_100;
      pcVar6 = "%s\n";
      pcVar3 = g_FilenameBufferTemplate;
      puVar4 = auStack_100;
      for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + ((uint)bVar5 * -2 + 1) * 4;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      crt_stdio_c_fscanf_FUN_005fe7c0(file,"%s\n");
      if (cStack_108 == '\0') {
        g_CurrentFilename = "..\\engine\\fileio.cpp";
        g_CurrentLineNumber = 0xe86;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Error parsing POD.INI",pcVar6,puVar7)
        ;
      }
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(in_stack_00000010,acStack_104);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)this_ptr);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\fileio.cpp",0xe89);
  return;
}


// Assembly code:
// 004ba4f0: PUSH EBP
//   Label: engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
// 004ba4f1: SUB ESP,0x108
// 004ba4f7: PUSH 0xe7c
// 004ba4fc: PUSH 0x628cbc
//   XREF to: 00628cbc (DATA)
// 004ba501: PUSH 0x628cd1
//   XREF to: 00628cd1 (DATA)
// 004ba506: PUSH 0x0
// 004ba508: PUSH 0x628cd4
//   XREF to: 00628cd4 (DATA)
// 004ba50d: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004ba512: ADD ESP,0x14
// 004ba515: MOV EBP,EAX
// 004ba517: TEST EAX,EAX
// 004ba519: JNZ 0x004ba523
//   XREF to: 004ba523 (CONDITIONAL_JUMP)
// 004ba51b: ADD ESP,0x108
// 004ba521: POP EBP
// 004ba522: RET
// 004ba523: PUSH EDI
//   Label: LAB_004ba523
// 004ba524: PUSH ESI
// 004ba525: PUSH EBX
// 004ba526: LEA EBX,[ESP + 0x110]
//   XREF to: Stack[-0x8] (DATA)
// 004ba52d: PUSH EBX
// 004ba52e: PUSH 0x628cdc
//   XREF to: 00628cdc (DATA)
// 004ba533: MOV EDX,0xffffffff
// 004ba538: PUSH EAX
// 004ba539: MOV dword ptr [ESP + 0x11c],EDX
//   XREF to: Stack[-0x8] (WRITE)
// 004ba540: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004ba545: ADD ESP,0xc
// 004ba548: CMP dword ptr [ESP + 0x110],0x0
//   XREF to: Stack[-0x8] (READ)
// 004ba550: JL 0x004ba5ed
//   XREF to: 004ba5ed (CONDITIONAL_JUMP)
// 004ba556: MOV EDI,dword ptr [ESP + 0x110]
//   Label: LAB_004ba556
//   XREF to: Stack[-0x8] (READ)
// 004ba55d: XOR EBX,EBX
// 004ba55f: TEST EDI,EDI
// 004ba561: JLE 0x004ba5cf
//   XREF to: 004ba5cf (CONDITIONAL_JUMP)
// 004ba563: LEA EAX,[ESP + 0xc]
//   Label: LAB_004ba563
//   XREF to: Stack[-0x10c] (DATA)
// 004ba567: PUSH EAX
// 004ba568: MOV ECX,0x41
// 004ba56d: PUSH 0x628d0b
//   XREF to: 00628d0b (DATA)
// 004ba572: LEA EDI,[ESP + 0x14]
//   XREF to: Stack[-0x10c] (DATA)
// 004ba576: MOV ESI,0x67a158
//   XREF to: 0067a158 (DATA)
// 004ba57b: PUSH EBP
// 004ba57c: MOVSD.REP ES:EDI,ESI
//   XREF to: 0067a158 (READ)
//   XREF to: 0067a15c (READ)
// 004ba57e: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004ba583: ADD ESP,0xc
// 004ba586: CMP byte ptr [ESP + 0xc],0x0
//   XREF to: Stack[-0x10c] (READ)
// 004ba58b: JNZ 0x004ba5b0
//   XREF to: 004ba5b0 (CONDITIONAL_JUMP)
// 004ba58d: MOV ECX,0x628d0f
//   XREF to: 00628d0f (PARAM)
// 004ba592: MOV ESI,0xe86
// 004ba597: PUSH 0x628d24
//   XREF to: 00628d24 (DATA)
// 004ba59c: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004ba5a2: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 004ba5a8: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004ba5ad: ADD ESP,0x4
// 004ba5b0: LEA EAX,[ESP + 0xc]
//   Label: LAB_004ba5b0
//   XREF to: Stack[-0x10c] (DATA)
// 004ba5b4: PUSH EAX
// 004ba5b5: MOV EAX,dword ptr [ESP + 0x124]
//   XREF to: Stack[0x8] (READ)
// 004ba5bc: PUSH EAX
// 004ba5bd: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004ba5c2: ADD ESP,0x8
// 004ba5c5: INC EBX
// 004ba5c6: CMP EBX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x8] (READ)
// 004ba5cd: JL 0x004ba563
//   XREF to: 004ba563 (CONDITIONAL_JUMP)
// 004ba5cf: PUSH 0xe89
//   Label: LAB_004ba5cf
// 004ba5d4: PUSH 0x628d3a
//   XREF to: 00628d3a (DATA)
// 004ba5d9: PUSH EBP
// 004ba5da: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004ba5df: ADD ESP,0xc
// 004ba5e2: POP EBX
// 004ba5e3: POP ESI
// 004ba5e4: POP EDI
// 004ba5e5: ADD ESP,0x108
// 004ba5eb: POP EBP
// 004ba5ec: RET
// 004ba5ed: MOV EBX,0x628ce0
//   Label: LAB_004ba5ed
//   XREF to: 00628ce0 (PARAM)
// 004ba5f2: MOV ESI,0xe81
// 004ba5f7: PUSH 0x628cf5
//   XREF to: 00628cf5 (DATA)
// 004ba5fc: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 004ba602: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 004ba608: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004ba60d: ADD ESP,0x4
// 004ba610: JMP 0x004ba556
//   XREF to: 004ba556 (UNCONDITIONAL_JUMP)
