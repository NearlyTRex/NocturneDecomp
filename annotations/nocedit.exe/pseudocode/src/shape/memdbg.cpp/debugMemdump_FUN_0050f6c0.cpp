// Name: shape_memdbg.cpp_debugMemdump_FUN_0050f6c0
// Address: 0050f6c0
// Address Range: [[0050f6c0, 0050f791]]
// Convention: __cdecl
// Signature: void shape_memdbg.cpp_debugMemdump_FUN_0050f6c0(FILE * output_file)
// Cross-references:
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 00507982 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_anon_00636154
//   TerminatedCString s_memory_usage_summary_00636176
//   TerminatedCString s_anon_0063618c
//   TerminatedCString s_d_bytes_s_line_d_006361ae
//   TerminatedCString s_anon_006361c4
//   TerminatedCString s_Total_d_blocks_d_bytes_006361e6
//   BOOL g_RecursiveCallFlag
//   SMemHead* g_MemoryListHead
//   HANDLE g_FileMutex
// Function calls:
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   wincore_winrun.cpp_createMutex_FUN_005f3fe0
//   wincore_winrun.cpp_releaseMutex_FUN_005f4050
//   wincore_winrun.cpp_waitForMutex_FUN_005f3ff0

#include "nocturne.h"

void __cdecl shape_memdbg_cpp_debugMemdump_FUN_0050f6c0(FILE *output_file)

{
  SMemHead *pSVar1;
  
  if (g_RecursiveCallFlag == 0) {
    if (g_FileMutex == (HANDLE)0x0) {
      g_FileMutex = wincore_winrun_cpp_createMutex_FUN_005f3fe0();
    }
    wincore_winrun_cpp_waitForMutex_FUN_005f3ff0(g_FileMutex);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(output_file,"================================\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(output_file,"memory usage summary\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(output_file,"================================\n");
  for (pSVar1 = g_MemoryListHead; pSVar1 != (SMemHead *)0x0; pSVar1 = pSVar1->next) {
    crt_stdio_c_fprintf_FUN_005fe6d0
              (output_file,"%d bytes, %s line %d\n","%d bytes, %s line %d\n",pSVar1->num_bytes
               ,pSVar1->source_file);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(output_file,"--------------------------------\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(output_file,"Total %d blocks, %d bytes\n");
  wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
  return;
}


// Assembly code:
// 0050f6c0: PUSH EBX
//   Label: shape_memdbg.cpp_debugMemdump_FUN_0050f6c0
// 0050f6c1: PUSH ESI
// 0050f6c2: PUSH EDI
// 0050f6c3: PUSH EBP
// 0050f6c4: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0050f6c8: CMP dword ptr [0x02f0ca50],0x0
//   XREF to: 02f0ca50 (READ)
// 0050f6cf: JNZ 0x0050f6f3
//   XREF to: 0050f6f3 (CONDITIONAL_JUMP)
// 0050f6d1: CMP dword ptr [0x02f0d93c],0x0
//   XREF to: 02f0d93c (READ)
// 0050f6d8: JNZ 0x0050f6e4
//   XREF to: 0050f6e4 (CONDITIONAL_JUMP)
// 0050f6da: CALL wincore_winrun.cpp_createMutex_FUN_005f3fe0
//   XREF to: 005f3fe0 (UNCONDITIONAL_CALL)
// 0050f6df: MOV [0x02f0d93c],EAX
//   XREF to: 02f0d93c (WRITE)
// 0050f6e4: MOV EBX,dword ptr [0x02f0d93c]
//   Label: LAB_0050f6e4
//   XREF to: 02f0d93c (READ)
// 0050f6ea: PUSH EBX
// 0050f6eb: CALL wincore_winrun.cpp_waitForMutex_FUN_005f3ff0
//   XREF to: 005f3ff0 (UNCONDITIONAL_CALL)
// 0050f6f0: ADD ESP,0x4
// 0050f6f3: PUSH 0x636154
//   Label: LAB_0050f6f3
//   XREF to: 00636154 (DATA)
// 0050f6f8: PUSH EBP
// 0050f6f9: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0050f6fe: ADD ESP,0x8
// 0050f701: PUSH 0x636176
//   XREF to: 00636176 (DATA)
// 0050f706: PUSH EBP
// 0050f707: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0050f70c: ADD ESP,0x8
// 0050f70f: PUSH 0x63618c
//   XREF to: 0063618c (DATA)
// 0050f714: PUSH EBP
// 0050f715: XOR EDI,EDI
// 0050f717: XOR ESI,ESI
// 0050f719: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0050f71e: MOV EBX,dword ptr [0x02f0d938]
//   XREF to: 02f0d938 (READ)
// 0050f724: ADD ESP,0x8
// 0050f727: TEST EBX,EBX
// 0050f729: JZ 0x0050f760
//   XREF to: 0050f760 (CONDITIONAL_JUMP)
// 0050f72b: MOV EDX,dword ptr [EBX + 0x20]
//   Label: LAB_0050f72b
// 0050f72e: MOV EAX,dword ptr [EBX + 0x8]
// 0050f731: PUSH EDX
// 0050f732: ADD ESI,EAX
// 0050f734: LEA EAX,[EBX + 0xc]
// 0050f737: PUSH EAX
// 0050f738: MOV ECX,dword ptr [EBX + 0x8]
// 0050f73b: PUSH ECX
// 0050f73c: PUSH 0x6361ae
//   XREF to: 006361ae (DATA)
// 0050f741: PUSH EBP
// 0050f742: INC EDI
// 0050f743: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0050f748: MOV EBX,dword ptr [EBX + 0x4]
// 0050f74b: ADD ESP,0x14
// 0050f74e: TEST EBX,EBX
// 0050f750: JNZ 0x0050f72b
//   XREF to: 0050f72b (CONDITIONAL_JUMP)
// 0050f752: LEA EAX,[EAX]
// 0050f758: LEA EDX,[EDX]
// 0050f75e: MOV EAX,EAX
// 0050f760: PUSH 0x6361c4
//   Label: LAB_0050f760
//   XREF to: 006361c4 (DATA)
// 0050f765: PUSH EBP
// 0050f766: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0050f76b: ADD ESP,0x8
// 0050f76e: PUSH ESI
// 0050f76f: PUSH EDI
// 0050f770: PUSH 0x6361e6
//   XREF to: 006361e6 (DATA)
// 0050f775: PUSH EBP
// 0050f776: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0050f77b: ADD ESP,0x10
// 0050f77e: MOV EBX,dword ptr [0x02f0d93c]
//   XREF to: 02f0d93c (READ)
// 0050f784: PUSH EBX
// 0050f785: CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050
//   XREF to: 005f4050 (UNCONDITIONAL_CALL)
// 0050f78a: ADD ESP,0x4
// 0050f78d: POP EBP
// 0050f78e: POP EDI
// 0050f78f: POP ESI
// 0050f790: POP EBX
// 0050f791: RET
