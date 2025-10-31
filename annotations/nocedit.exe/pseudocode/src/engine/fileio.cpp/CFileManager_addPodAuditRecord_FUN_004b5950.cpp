// Name: engine_fileio.cpp_CFileManager_addPodAuditRecord_FUN_004b5950
// Address: 004b5950
// Address Range: [[004b5950, 004b5a44]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_addPodAuditRecord_FUN_004b5950(CFileManager * this_ptr, CPodAuditRecord * audit_data, char * filename_path)
// Globals:
//   TerminatedCString s_engine_fileio_cpp_006276c0
//   TerminatedCString s_engine_fileio_cpp_006276d5
//   TerminatedCString s_Out_of_memory_for_pod_au_006276ea
//   int g_AuditRecordCount
//   CPodAuditRecord* g_AuditRecordsArray
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_memset_FUN_005fde40
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_addPodAuditRecord_FUN_004b5950
          (CFileManager *this_ptr,CPodAuditRecord *audit_data,char *filename_path)

{
  char cVar1;
  CPodAuditRecord *pCVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char **ppcVar4;
  char *pcVar5;
  CPodAuditRecord *pCVar6;
  char *pcVar7;
  byte bVar8;
  
  bVar8 = 0;
  g_AuditRecordCount = g_AuditRecordCount + 1;
  g_AuditRecordsArray =
       (CPodAuditRecord *)
       shape_memdbg_cpp_debugRealloc_FUN_0050f540
                 (g_AuditRecordsArray,g_AuditRecordCount * 0x138,"..\\engine\\fileio.cpp",0x7a1)
  ;
  if (g_AuditRecordsArray == (CPodAuditRecord *)0x0) {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0x7a2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory for pod audit list.");
  }
  pCVar2 = g_AuditRecordsArray + g_AuditRecordCount + -1;
  ppcVar4 = &filename_path;
  pCVar6 = pCVar2;
  for (iVar3 = 0x4e; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar6->day = (int)*ppcVar4;
    ppcVar4 = ppcVar4 + (uint)bVar8 * -2 + 1;
    pCVar6 = (CPodAuditRecord *)((int)pCVar6 + (uint)bVar8 * -8 + 4);
  }
  crt_memory_c_memset_FUN_005fde40(pCVar2->filename_path,0,0x100);
  pcVar5 = &stack0x00000038;
  pcVar7 = g_AuditRecordsArray[g_AuditRecordCount + -1].filename_path;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  return;
}


// Assembly code:
// 004b5950: PUSH ESI
//   Label: engine_fileio.cpp_CFileManager_addPodAuditRecord_FUN_004b5950
// 004b5951: PUSH EDI
// 004b5952: MOV EDX,dword ptr [0x02d12d30]
//   XREF to: 02d12d30 (READ)
// 004b5958: INC EDX
// 004b5959: MOV dword ptr [0x02d12d30],EDX
//   XREF to: 02d12d30 (WRITE)
// 004b595f: LEA EAX,[EDX*0x4 + 0x0]
// 004b5966: ADD EAX,EDX
// 004b5968: SHL EAX,0x3
// 004b596b: PUSH 0x7a1
// 004b5970: SUB EAX,EDX
// 004b5972: PUSH 0x6276c0
//   XREF to: 006276c0 (DATA)
// 004b5977: SHL EAX,0x3
// 004b597a: PUSH EAX
// 004b597b: MOV ECX,dword ptr [0x02d12d34]
//   XREF to: 02d12d34 (READ)
// 004b5981: PUSH ECX
// 004b5982: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 004b5987: ADD ESP,0x10
// 004b598a: MOV [0x02d12d34],EAX
//   XREF to: 02d12d34 (WRITE)
// 004b598f: TEST EAX,EAX
// 004b5991: JZ 0x004b5a1b
//   XREF to: 004b5a1b (CONDITIONAL_JUMP)
// 004b5997: MOV EDX,dword ptr [0x02d12d30]
//   Label: LAB_004b5997
//   XREF to: 02d12d30 (READ)
// 004b599d: DEC EDX
// 004b599e: LEA EAX,[EDX*0x4 + 0x0]
// 004b59a5: ADD EAX,EDX
// 004b59a7: SHL EAX,0x3
// 004b59aa: PUSH 0x100
// 004b59af: SUB EAX,EDX
// 004b59b1: MOV EDX,dword ptr [0x02d12d34]
//   XREF to: 02d12d34 (READ)
// 004b59b7: SHL EAX,0x3
// 004b59ba: MOV ECX,0x4e
// 004b59bf: ADD EAX,EDX
// 004b59c1: PUSH 0x0
// 004b59c3: MOV EDI,EAX
// 004b59c5: ADD EAX,0x28
// 004b59c8: LEA ESI,[ESP + 0x14]
//   XREF to: Stack[0x4] (DATA)
// 004b59cc: PUSH EAX
// 004b59cd: MOVSD.REP ES:EDI,ESI
// 004b59cf: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 004b59d4: MOV EDX,dword ptr [0x02d12d30]
//   XREF to: 02d12d30 (READ)
// 004b59da: DEC EDX
// 004b59db: LEA EAX,[EDX*0x4 + 0x0]
// 004b59e2: ADD EAX,EDX
// 004b59e4: SHL EAX,0x3
// 004b59e7: SUB EAX,EDX
// 004b59e9: MOV EDX,dword ptr [0x02d12d34]
//   XREF to: 02d12d34 (READ)
// 004b59ef: SHL EAX,0x3
// 004b59f2: ADD ESP,0xc
// 004b59f5: ADD EAX,EDX
// 004b59f7: LEA ESI,[ESP + 0x34]
//   XREF to: Stack[0x2c] (DATA)
// 004b59fb: LEA EDI,[EAX + 0x28]
// 004b59fe: PUSH EDI
// 004b59ff: MOV AL,byte ptr [ESI]
//   Label: LAB_004b59ff
//   XREF to: Stack[0x2c] (DATA)
// 004b5a01: MOV byte ptr [EDI],AL
// 004b5a03: CMP AL,0x0
// 004b5a05: JZ 0x004b5a17
//   XREF to: 004b5a17 (CONDITIONAL_JUMP)
// 004b5a07: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[0x2d] (READ)
// 004b5a0a: ADD ESI,0x2
// 004b5a0d: MOV byte ptr [EDI + 0x1],AL
// 004b5a10: ADD EDI,0x2
// 004b5a13: CMP AL,0x0
// 004b5a15: JNZ 0x004b59ff
//   XREF to: 004b59ff (CONDITIONAL_JUMP)
// 004b5a17: POP EDI
//   Label: LAB_004b5a17
// 004b5a18: POP EDI
// 004b5a19: POP ESI
// 004b5a1a: RET
// 004b5a1b: PUSH EBX
//   Label: LAB_004b5a1b
// 004b5a1c: MOV EBX,0x6276d5
//   XREF to: 006276d5 (DATA)
// 004b5a21: MOV ESI,0x7a2
// 004b5a26: PUSH 0x6276ea
//   XREF to: 006276ea (DATA)
// 004b5a2b: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 004b5a31: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 004b5a37: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b5a3c: ADD ESP,0x4
// 004b5a3f: POP EBX
// 004b5a40: JMP 0x004b5997
//   XREF to: 004b5997 (UNCONDITIONAL_JUMP)
