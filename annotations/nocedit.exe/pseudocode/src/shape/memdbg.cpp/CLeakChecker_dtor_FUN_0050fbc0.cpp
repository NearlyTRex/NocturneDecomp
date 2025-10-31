// Name: shape_memdbg.cpp_CLeakChecker_dtor_FUN_0050fbc0
// Address: 0050fbc0
// Address Range: [[0050fbc0, 0050fdac]]
// Convention: __cdecl
// Signature: CLeakChecker * shape_memdbg.cpp_CLeakChecker_dtor_FUN_0050fbc0(CLeakChecker * this_ptr, uint d1, uint d2, uint d3, uint d4)
// Globals:
//   TerminatedCString s_Files_left_open_006363dd
//   TerminatedCString s_at_006363f3
//   TerminatedCString s_shape_memdbg_cpp_006363f6
//   TerminatedCString s_Files_left_open_but_can__0063640a
//   TerminatedCString s_shape_memdbg_cpp_00636463
//   TerminatedCString s_Files_were_left_open_Che_00636477
//   TerminatedCString s_Memory_leaks_detected_00636497
//   TerminatedCString s_at_006364b3
//   TerminatedCString s_shape_memdbg_cpp_006364b6
//   TerminatedCString s_Memory_leaks_detected_bu_006364ca
//   TerminatedCString s_d_bytes_s_line_d_006364f5
//   TerminatedCString s_shape_memdbg_cpp_0063650b
//   TerminatedCString s_Memory_leaks_detected_Ch_0063651f
//   TerminatedCString s_memdbg_txt_0067d1f0
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   BOOL g_RecursiveCallFlag
//   int g_IsDestroyingLeakChecker
//   SMemHead* g_MemoryListHead
//   int g_OpenFileCount
//   FileTrackingEntry[100] g_FileRegistry
//   undefined4 g_FileRegistry[0].directory[0]
//   undefined4 g_FileRegistry[0].source_file[0]
//   undefined4 g_FileRegistry[0].line_number
//   undefined4 g_FileRegistry[1].filename[0]
//   undefined4 g_FileRegistry[1].directory[0]
//   undefined4 g_FileRegistry[1].source_file[0]
//   undefined4 g_FileRegistry[1].line_number
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_closeTrackedFile_FUN_00601ea0
//   crt_stdio.c_fopen_FUN_00601a7c
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   shape_memdbg.cpp_traceFile_FUN_0050f180

#include "nocturne.h"

CLeakChecker * __cdecl
shape_memdbg_cpp_CLeakChecker_dtor_FUN_0050fbc0
          (CLeakChecker *this_ptr,uint d1,uint d2,uint d3,uint d4)

{
  SMemHead *pSVar1;
  FILE *pFVar2;
  int iVar3;
  int iVar4;
  CLeakChecker *in_stack_00000018;
  
  if ((g_RecursiveCallFlag == 0) && (g_IsDestroyingLeakChecker == 0)) {
    g_IsDestroyingLeakChecker = 1;
    if (0 < g_OpenFileCount) {
      shape_memdbg_cpp_traceFile_FUN_0050f180("!!!!!Files left open:");
      pFVar2 = crt_stdio_c_fopen_FUN_00601a7c("memdbg.txt","at");
      if (pFVar2 == (FILE *)0x0) {
        g_CurrentFilename = "..\\shape\\memdbg.cpp";
        g_CurrentLineNumber = 0x26e;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Files left open, but can't log them.");
      }
      iVar4 = 0;
      if (0 < g_OpenFileCount) {
        iVar3 = 0x2f0db68;
        do {
          if (g_FileRegistry[iVar4].directory[0] == '\0') {
            crt_stdio_c_fprintf_FUN_005fe6d0
                      (pFVar2,"%s, opened %s line %d\n","%s, opened %s line %d\n",
                       g_FileRegistry + iVar4,iVar3,g_FileRegistry[iVar4].line_number);
          }
          else {
            crt_stdio_c_fprintf_FUN_005fe6d0
                      (pFVar2,"%s in %s, opened %s line %d\n","%s in %s, opened %s line %d\n",
                       iVar4 * 0x328 + 0x2f0da50,g_FileRegistry + iVar4,iVar3,
                       g_FileRegistry[iVar4].line_number);
          }
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 0x328;
        } while (iVar4 < g_OpenFileCount);
      }
      crt_stdio_c_closeTrackedFile_FUN_00601ea0(pFVar2);
      g_CurrentFilename = "..\\shape\\memdbg.cpp";
      g_CurrentLineNumber = 0x27e;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("Files were left open.  Check %s","memdbg.txt");
    }
    if (g_MemoryListHead != (SMemHead *)0x0) {
      shape_memdbg_cpp_traceFile_FUN_0050f180("!!!!!Memory leaks detected:");
      pFVar2 = crt_stdio_c_fopen_FUN_00601a7c("memdbg.txt","at");
      pSVar1 = g_MemoryListHead;
      if (pFVar2 == (FILE *)0x0) {
        g_CurrentFilename = "..\\shape\\memdbg.cpp";
        g_CurrentLineNumber = 0x289;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Memory leaks detected, but can't log them.");
        pSVar1 = g_MemoryListHead;
      }
      for (; pSVar1 != (SMemHead *)0x0; pSVar1 = pSVar1->next) {
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (pFVar2,"%d bytes, %s line %d\n",pSVar1->num_bytes,pSVar1->source_file,
                   pSVar1->source_line);
      }
      crt_stdio_c_closeTrackedFile_FUN_00601ea0(pFVar2);
      g_CurrentLineNumber = 0x297;
      g_CurrentFilename = "..\\shape\\memdbg.cpp";
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("Memory leaks detected.  Check %s","memdbg.txt");
    }
  }
  return in_stack_00000018;
}


// Assembly code:
// 0050fbc0: PUSH EBX
//   Label: shape_memdbg.cpp_CLeakChecker_dtor_FUN_0050fbc0
// 0050fbc1: PUSH ESI
// 0050fbc2: PUSH EDI
// 0050fbc3: PUSH EBP
// 0050fbc4: CMP dword ptr [0x02f0ca50],0x0
//   XREF to: 02f0ca50 (READ)
// 0050fbcb: JNZ 0x0050fcb1
//   XREF to: 0050fcb1 (CONDITIONAL_JUMP)
// 0050fbd1: CMP dword ptr [0x02f0d934],0x0
//   XREF to: 02f0d934 (READ)
// 0050fbd8: JNZ 0x0050fcb1
//   XREF to: 0050fcb1 (CONDITIONAL_JUMP)
// 0050fbde: MOV EBX,0x1
// 0050fbe3: MOV ESI,dword ptr [0x02f0d948]
//   XREF to: 02f0d948 (READ)
// 0050fbe9: MOV dword ptr [0x02f0d934],EBX
//   XREF to: 02f0d934 (WRITE)
// 0050fbef: TEST ESI,ESI
// 0050fbf1: JG 0x0050fcba
//   XREF to: 0050fcba (CONDITIONAL_JUMP)
// 0050fbf7: CMP dword ptr [0x02f0d938],0x0
//   Label: LAB_0050fbf7
//   XREF to: 02f0d938 (READ)
// 0050fbfe: JZ 0x0050fcb1
//   XREF to: 0050fcb1 (CONDITIONAL_JUMP)
// 0050fc04: PUSH 0x636497
//   XREF to: 00636497 (DATA)
// 0050fc09: CALL shape_memdbg.cpp_traceFile_FUN_0050f180
//   XREF to: 0050f180 (UNCONDITIONAL_CALL)
// 0050fc0e: ADD ESP,0x4
// 0050fc11: PUSH 0x6364b3
//   XREF to: 006364b3 (DATA)
// 0050fc16: PUSH 0x67d1f0
//   XREF to: 0067d1f0 (DATA)
// 0050fc1b: CALL crt_stdio.c_fopen_FUN_00601a7c
//   XREF to: 00601a7c (UNCONDITIONAL_CALL)
// 0050fc20: ADD ESP,0x8
// 0050fc23: MOV ESI,EAX
// 0050fc25: TEST EAX,EAX
// 0050fc27: JNZ 0x0050fc4c
//   XREF to: 0050fc4c (CONDITIONAL_JUMP)
// 0050fc29: MOV EDI,0x6364b6
//   XREF to: 006364b6 (DATA)
// 0050fc2e: MOV EBP,0x289
// 0050fc33: PUSH 0x6364ca
//   XREF to: 006364ca (DATA)
// 0050fc38: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0050fc3e: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 0050fc44: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0050fc49: ADD ESP,0x4
// 0050fc4c: MOV EBX,dword ptr [0x02f0d938]
//   Label: LAB_0050fc4c
//   XREF to: 02f0d938 (READ)
// 0050fc52: TEST EBX,EBX
// 0050fc54: JZ 0x0050fc80
//   XREF to: 0050fc80 (CONDITIONAL_JUMP)
// 0050fc56: MOV EAX,dword ptr [EBX + 0x20]
//   Label: LAB_0050fc56
// 0050fc59: PUSH EAX
// 0050fc5a: LEA EAX,[EBX + 0xc]
// 0050fc5d: PUSH EAX
// 0050fc5e: MOV EDX,dword ptr [EBX + 0x8]
// 0050fc61: PUSH EDX
// 0050fc62: PUSH 0x6364f5
//   XREF to: 006364f5 (DATA)
// 0050fc67: PUSH ESI
// 0050fc68: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0050fc6d: MOV EBX,dword ptr [EBX + 0x4]
// 0050fc70: ADD ESP,0x14
// 0050fc73: TEST EBX,EBX
// 0050fc75: JNZ 0x0050fc56
//   XREF to: 0050fc56 (CONDITIONAL_JUMP)
// 0050fc77: LEA EAX,[EAX]
// 0050fc7d: LEA EDX,[EDX]
// 0050fc80: PUSH ESI
//   Label: LAB_0050fc80
// 0050fc81: CALL crt_stdio.c_closeTrackedFile_FUN_00601ea0
//   XREF to: 00601ea0 (UNCONDITIONAL_CALL)
// 0050fc86: ADD ESP,0x4
// 0050fc89: PUSH 0x67d1f0
//   XREF to: 0067d1f0 (DATA)
// 0050fc8e: MOV EBX,0x297
// 0050fc93: MOV ECX,0x63650b
//   XREF to: 0063650b (DATA)
// 0050fc98: PUSH 0x63651f
//   XREF to: 0063651f (DATA)
// 0050fc9d: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0050fca3: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0050fca9: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0050fcae: ADD ESP,0x8
// 0050fcb1: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_0050fcb1
//   XREF to: Stack[0x4] (READ)
// 0050fcb5: POP EBP
// 0050fcb6: POP EDI
// 0050fcb7: POP ESI
// 0050fcb8: POP EBX
// 0050fcb9: RET
// 0050fcba: PUSH 0x6363dd
//   Label: LAB_0050fcba
//   XREF to: 006363dd (DATA)
// 0050fcbf: CALL shape_memdbg.cpp_traceFile_FUN_0050f180
//   XREF to: 0050f180 (UNCONDITIONAL_CALL)
// 0050fcc4: ADD ESP,0x4
// 0050fcc7: PUSH 0x6363f3
//   XREF to: 006363f3 (DATA)
// 0050fccc: PUSH 0x67d1f0
//   XREF to: 0067d1f0 (DATA)
// 0050fcd1: CALL crt_stdio.c_fopen_FUN_00601a7c
//   XREF to: 00601a7c (UNCONDITIONAL_CALL)
// 0050fcd6: ADD ESP,0x8
// 0050fcd9: MOV EDI,EAX
// 0050fcdb: TEST EAX,EAX
// 0050fcdd: JNZ 0x0050fd01
//   XREF to: 0050fd01 (CONDITIONAL_JUMP)
// 0050fcdf: MOV EBP,0x6363f6
//   XREF to: 006363f6 (DATA)
// 0050fce4: MOV EAX,0x26e
// 0050fce9: PUSH 0x63640a
//   XREF to: 0063640a (DATA)
// 0050fcee: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 0050fcf4: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0050fcf9: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0050fcfe: ADD ESP,0x4
// 0050fd01: MOV EDX,dword ptr [0x02f0d948]
//   Label: LAB_0050fd01
//   XREF to: 02f0d948 (READ)
// 0050fd07: XOR ESI,ESI
// 0050fd09: TEST EDX,EDX
// 0050fd0b: JLE 0x0050fd57
//   XREF to: 0050fd57 (CONDITIONAL_JUMP)
// 0050fd0d: MOV EBX,0x2f0d94c
//   XREF to: 02f0d94c (DATA)
// 0050fd12: ADD EBX,0x21c
// 0050fd18: IMUL EAX,ESI,0x328
//   Label: LAB_0050fd18
// 0050fd1e: MOV EDX,0x2f0d94c
//   XREF to: 02f0d94c (DATA)
// 0050fd23: MOV CL,byte ptr [EAX + 0x2f0da50]
//   XREF to: 02f0da50 (READ)
//   XREF to: 02f0dd78 (READ)
// 0050fd29: ADD EDX,EAX
// 0050fd2b: TEST CL,CL
// 0050fd2d: JNZ 0x0050fd8d
//   XREF to: 0050fd8d (CONDITIONAL_JUMP)
// 0050fd2f: MOV ECX,dword ptr [EAX + 0x2f0dc6c]
//   XREF to: 02f0dc6c (READ)
//   XREF to: 02f0df94 (READ)
// 0050fd35: PUSH ECX
// 0050fd36: PUSH EBX
//   XREF to: 02f0db68 (DATA)
//   XREF to: 02f0de90 (DATA)
// 0050fd37: PUSH EDX
//   XREF to: 02f0d94c (DATA)
//   XREF to: 02f0dc74 (DATA)
// 0050fd38: PUSH 0x63642f
//   XREF to: 0063642f (DATA)
// 0050fd3d: PUSH EDI
// 0050fd3e: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0050fd43: ADD ESP,0x14
// 0050fd46: MOV ECX,dword ptr [0x02f0d948]
//   Label: LAB_0050fd46
//   XREF to: 02f0d948 (READ)
// 0050fd4c: INC ESI
// 0050fd4d: ADD EBX,0x328
// 0050fd53: CMP ESI,ECX
// 0050fd55: JL 0x0050fd18
//   XREF to: 0050fd18 (CONDITIONAL_JUMP)
// 0050fd57: PUSH EDI
//   Label: LAB_0050fd57
// 0050fd58: CALL crt_stdio.c_closeTrackedFile_FUN_00601ea0
//   XREF to: 00601ea0 (UNCONDITIONAL_CALL)
// 0050fd5d: ADD ESP,0x4
// 0050fd60: PUSH 0x67d1f0
//   XREF to: 0067d1f0 (DATA)
// 0050fd65: MOV EBX,0x636463
//   XREF to: 00636463 (DATA)
// 0050fd6a: MOV ESI,0x27e
// 0050fd6f: PUSH 0x636477
//   XREF to: 00636477 (DATA)
// 0050fd74: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0050fd7a: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0050fd80: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0050fd85: ADD ESP,0x8
// 0050fd88: JMP 0x0050fbf7
//   XREF to: 0050fbf7 (UNCONDITIONAL_JUMP)
// 0050fd8d: MOV EBP,dword ptr [EAX + 0x2f0dc6c]
//   Label: LAB_0050fd8d
//   XREF to: 02f0df94 (READ)
// 0050fd93: PUSH EBP
// 0050fd94: PUSH EBX
//   XREF to: 02f0de90 (DATA)
// 0050fd95: PUSH EDX
//   XREF to: 02f0dc74 (DATA)
// 0050fd96: ADD EDX,0x104
// 0050fd9c: PUSH EDX
//   XREF to: 02f0dd78 (DATA)
// 0050fd9d: PUSH 0x636446
//   XREF to: 00636446 (DATA)
// 0050fda2: PUSH EDI
// 0050fda3: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0050fda8: ADD ESP,0x18
// 0050fdab: JMP 0x0050fd46
//   XREF to: 0050fd46 (UNCONDITIONAL_JUMP)
