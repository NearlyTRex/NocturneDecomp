// Name: sound_mp3.cpp_FUN_0052ecf0
// Address: 0052ecf0
// Address Range: [[0052ecf0, 0052ede8]]
// Convention: unknown
// Signature: undefined sound_mp3.cpp_FUN_0052ecf0()
// Globals:
//   TerminatedCString s_sound_mp3_cpp_0063ace1
//   TerminatedCString s_sound_mp3_cpp_0063acf2
//   TerminatedCString s_sound_mp3_cpp_0063ad03
//   TerminatedCString s_sound_mp3_cpp_0063ad14
//   TerminatedCString s_Out_of_memory_File_s_0063ad25
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined1 DAT_02f68188
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fseek_FUN_005ffacc
//   crt_stdio.c_ftell_FUN_00601560
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugFree_FUN_0050f460
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250

#include "nocturne.h"

void sound_mp3_cpp_FUN_0052ecf0
               (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4,
               undefined4 *param_5,undefined4 param_6,FILE *param_7,undefined4 param_8,int param_9,
               undefined4 param_10)

{
  long lVar1;
  void *pvVar2;
  
  if ((FILE *)*param_5 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)*param_5,"..\\sound\\mp3.cpp",0x20b);
    *param_5 = 0;
  }
  if ((void *)param_5[1] != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460((void *)param_5[1],"..\\sound\\mp3.cpp",0x210);
    param_5[1] = 0;
  }
  *param_5 = param_7;
  lVar1 = crt_stdio_c_ftell_FUN_00601560(param_7);
  param_5[8] = lVar1;
  param_5[9] = param_10;
  param_5[2] = param_9;
  pvVar2 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(param_9,"..\\sound\\mp3.cpp",0x1ff);
  param_5[1] = pvVar2;
  if (pvVar2 == (void *)0x0) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 0x200;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Out of memory.  File: %s",&DAT_02f68188,unaff_EBX);
  }
  crt_stdio_c_fseek_FUN_005ffacc((FILE *)*param_5,param_5[8],0);
  param_5[4] = 0;
  param_5[5] = 0;
  param_5[3] = 0;
  param_5[6] = 0;
  param_5[7] = 0;
  param_5[10] = param_5[9];
  return;
}


// Assembly code:
// 0052ecf0: PUSH EBX
//   Label: sound_mp3.cpp_FUN_0052ecf0
// 0052ecf1: PUSH ESI
// 0052ecf2: PUSH EDI
// 0052ecf3: PUSH EBP
// 0052ecf4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0052ecf8: MOV EDX,dword ptr [EBX]
// 0052ecfa: MOV ESI,EBX
// 0052ecfc: TEST EDX,EDX
// 0052ecfe: JNZ 0x0052ed9e
//   XREF to: 0052ed9e (CONDITIONAL_JUMP)
// 0052ed04: MOV EDI,dword ptr [ESI + 0x4]
//   Label: LAB_0052ed04
// 0052ed07: TEST EDI,EDI
// 0052ed09: JZ 0x0052ed25
//   XREF to: 0052ed25 (CONDITIONAL_JUMP)
// 0052ed0b: PUSH 0x210
// 0052ed10: PUSH 0x63acf2
//   XREF to: 0063acf2 (DATA)
// 0052ed15: PUSH EDI
// 0052ed16: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 0052ed1b: ADD ESP,0xc
// 0052ed1e: MOV dword ptr [ESI + 0x4],0x0
// 0052ed25: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_0052ed25
//   XREF to: Stack[0x8] (READ)
// 0052ed29: PUSH EAX
// 0052ed2a: MOV dword ptr [EBX],EAX
// 0052ed2c: CALL crt_stdio.c_ftell_FUN_00601560
//   XREF to: 00601560 (UNCONDITIONAL_CALL)
// 0052ed31: ADD ESP,0x4
// 0052ed34: PUSH 0x1ff
// 0052ed39: MOV dword ptr [EBX + 0x20],EAX
// 0052ed3c: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 0052ed40: PUSH 0x63ad03
//   XREF to: 0063ad03 (DATA)
// 0052ed45: MOV dword ptr [EBX + 0x24],EAX
// 0052ed48: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 0052ed4c: PUSH EAX
// 0052ed4d: MOV dword ptr [EBX + 0x8],EAX
// 0052ed50: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 0052ed55: ADD ESP,0xc
// 0052ed58: MOV dword ptr [EBX + 0x4],EAX
// 0052ed5b: TEST EAX,EAX
// 0052ed5d: JZ 0x0052edbc
//   XREF to: 0052edbc (CONDITIONAL_JUMP)
// 0052ed5f: PUSH 0x0
//   Label: LAB_0052ed5f
// 0052ed61: MOV EBP,dword ptr [EBX + 0x20]
// 0052ed64: PUSH EBP
// 0052ed65: MOV EAX,dword ptr [EBX]
// 0052ed67: PUSH EAX
// 0052ed68: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 0052ed6d: MOV dword ptr [EBX + 0x10],0x0
// 0052ed74: MOV dword ptr [EBX + 0x14],0x0
// 0052ed7b: MOV dword ptr [EBX + 0xc],0x0
// 0052ed82: MOV dword ptr [EBX + 0x18],0x0
// 0052ed89: MOV dword ptr [EBX + 0x1c],0x0
// 0052ed90: MOV EAX,dword ptr [EBX + 0x24]
// 0052ed93: ADD ESP,0xc
// 0052ed96: MOV dword ptr [EBX + 0x28],EAX
// 0052ed99: POP EBP
// 0052ed9a: POP EDI
// 0052ed9b: POP ESI
// 0052ed9c: POP EBX
// 0052ed9d: RET
// 0052ed9e: PUSH 0x20b
//   Label: LAB_0052ed9e
// 0052eda3: PUSH 0x63ace1
//   XREF to: 0063ace1 (DATA)
// 0052eda8: PUSH EDX
// 0052eda9: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0052edae: ADD ESP,0xc
// 0052edb1: MOV dword ptr [EBX],0x0
// 0052edb7: JMP 0x0052ed04
//   XREF to: 0052ed04 (UNCONDITIONAL_JUMP)
// 0052edbc: PUSH 0x2f68188
//   Label: LAB_0052edbc
//   XREF to: 02f68188 (DATA)
// 0052edc1: MOV ESI,0x63ad14
//   XREF to: 0063ad14 (DATA)
// 0052edc6: MOV EDI,0x200
// 0052edcb: PUSH 0x63ad25
//   XREF to: 0063ad25 (DATA)
// 0052edd0: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0052edd6: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0052eddc: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052ede1: ADD ESP,0x8
// 0052ede4: JMP 0x0052ed5f
//   XREF to: 0052ed5f (UNCONDITIONAL_JUMP)
