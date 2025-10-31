// Name: engine_pod.cpp_CPodFile_getAuditRecord_FUN_00550590
// Address: 00550590
// Address Range: [[00550590, 005506ba]]
// Convention: __cdecl
// Signature: void engine_pod.cpp_CPodFile_getAuditRecord_FUN_00550590(CPodFile * this_ptr, int record_index, void * output_buffer)
// Cross-references:
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b5c3e [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190 (004bd190) at 004bd40f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50 (004b7f50) at 004b8068 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_pod_cpp_00640411
//   TerminatedCString s_CPodFile_getAuditRecord__00640423
//   TerminatedCString s_engine_pod_cpp_0064045f
//   TerminatedCString s_rb_00640471
//   TerminatedCString s_engine_pod_cpp_00640474
//   TerminatedCString s_CPodFile_getAuditRecord__00640486
//   TerminatedCString s_engine_pod_cpp_006404af
//   TerminatedCString s_CPodFile_getAuditRecord__006404c1
//   TerminatedCString s_engine_pod_cpp_006404ed
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fread_FUN_005fd990
//   crt_stdio.c_fseek_FUN_005ffacc
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

void __cdecl
engine_pod_cpp_CPodFile_getAuditRecord_FUN_00550590
          (CPodFile *this_ptr,int record_index,void *output_buffer)

{
  FILE *file;
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar2;
  byte bVar3;
  int in_stack_00000014;
  undefined4 auStack_128 [71];
  
  bVar3 = 0;
  if ((record_index < 0) || ((int)this_ptr->audit_count <= record_index)) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 0x308;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPodFile::getAuditRecord - invalid index.  Pod not mounted?");
  }
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (this_ptr->filename,(char *)0x0,"rb","..\\engine\\pod.cpp",0x30c);
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 0x30d;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CPodFile::getAuditRecord - can't open %s",this_ptr->filename);
  }
  crt_stdio_c_fseek_FUN_005ffacc(file,in_stack_00000014 * 0x138 + this_ptr->total_file_size,0);
  crt_stdio_c_fread_FUN_005fd990(&stack0xfffffecc,0x138,1,file);
  if ((file->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 0x31b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPodFile::getAuditRecord - error reading %s");
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\pod.cpp",800);
  puVar2 = auStack_128;
  for (iVar1 = 0x4e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)output_buffer = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    output_buffer = (undefined4 *)((int)output_buffer + ((uint)bVar3 * -2 + 1) * 4);
  }
  return;
}


// Assembly code:
// 00550590: PUSH EBX
//   Label: engine_pod.cpp_CPodFile_getAuditRecord_FUN_00550590
// 00550591: PUSH EDI
// 00550592: PUSH EBP
// 00550593: SUB ESP,0x138
// 00550599: MOV EBP,dword ptr [ESP + 0x148]
//   XREF to: Stack[0x4] (READ)
// 005505a0: MOV EBX,ESI
// 005505a2: MOV EDX,dword ptr [ESP + 0x14c]
//   XREF to: Stack[0x8] (READ)
// 005505a9: TEST EDX,EDX
// 005505ab: JL 0x005505b5
//   XREF to: 005505b5 (CONDITIONAL_JUMP)
// 005505ad: CMP EDX,dword ptr [EBP + 0x41c]
// 005505b3: JL 0x005505d8
//   XREF to: 005505d8 (CONDITIONAL_JUMP)
// 005505b5: MOV ESI,0x640411
//   Label: LAB_005505b5
//   XREF to: 00640411 (DATA)
// 005505ba: MOV EDI,0x308
// 005505bf: PUSH 0x640423
//   XREF to: 00640423 (DATA)
// 005505c4: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 005505ca: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005505d0: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005505d5: ADD ESP,0x4
// 005505d8: PUSH 0x30c
//   Label: LAB_005505d8
// 005505dd: PUSH 0x64045f
//   XREF to: 0064045f (DATA)
// 005505e2: PUSH 0x640471
//   XREF to: 00640471 (DATA)
// 005505e7: PUSH 0x0
// 005505e9: LEA EDI,[EBP + 0x4]
// 005505ec: PUSH EDI
// 005505ed: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 005505f2: ADD ESP,0x14
// 005505f5: MOV ESI,EAX
// 005505f7: TEST EAX,EAX
// 005505f9: JNZ 0x0055061e
//   XREF to: 0055061e (CONDITIONAL_JUMP)
// 005505fb: PUSH EDI
// 005505fc: MOV EAX,0x640474
//   XREF to: 00640474 (PARAM)
// 00550601: MOV EDX,0x30d
// 00550606: PUSH 0x640486
//   XREF to: 00640486 (DATA)
// 0055060b: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00550610: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00550616: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0055061b: ADD ESP,0x8
// 0055061e: MOV EDX,dword ptr [ESP + 0x14c]
//   Label: LAB_0055061e
//   XREF to: Stack[0x8] (READ)
// 00550625: LEA EAX,[EDX*0x4 + 0x0]
// 0055062c: ADD EAX,EDX
// 0055062e: SHL EAX,0x3
// 00550631: SUB EAX,EDX
// 00550633: MOV ECX,dword ptr [EBP + 0x420]
// 00550639: SHL EAX,0x3
// 0055063c: PUSH 0x0
// 0055063e: ADD EAX,ECX
// 00550640: PUSH EAX
// 00550641: PUSH ESI
// 00550642: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 00550647: ADD ESP,0xc
// 0055064a: PUSH ESI
// 0055064b: PUSH 0x1
// 0055064d: PUSH 0x138
// 00550652: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x144] (DATA)
// 00550656: PUSH EAX
// 00550657: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0055065c: MOV AH,byte ptr [ESI + 0xc]
// 0055065f: ADD ESP,0x10
// 00550662: TEST AH,0x20
// 00550665: JNZ 0x00550693
//   XREF to: 00550693 (CONDITIONAL_JUMP)
// 00550667: PUSH 0x320
//   Label: LAB_00550667
// 0055066c: PUSH 0x6404ed
//   XREF to: 006404ed (DATA)
// 00550671: PUSH ESI
// 00550672: MOV EDI,EBX
// 00550674: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00550679: MOV ECX,0x4e
// 0055067e: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x144] (DATA)
// 00550682: ADD ESP,0xc
// 00550685: MOVSD.REP ES:EDI,ESI
// 00550687: MOV EAX,EBX
// 00550689: ADD ESP,0x138
// 0055068f: POP EBP
// 00550690: POP EDI
// 00550691: POP EBX
// 00550692: RET
// 00550693: ADD EBP,0x4
//   Label: LAB_00550693
// 00550696: PUSH EBP
// 00550697: MOV EDI,0x6404af
//   XREF to: 006404af (DATA)
// 0055069c: MOV EAX,0x31b
// 005506a1: PUSH 0x6404c1
//   XREF to: 006404c1 (DATA)
// 005506a6: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 005506ac: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005506b1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005506b6: ADD ESP,0x8
// 005506b9: JMP 0x00550667
//   XREF to: 00550667 (UNCONDITIONAL_JUMP)
