// Name: core_skeleton.cpp_CSkeleton_load_FUN_00599b10
// Address: 00599b10
// Address Range: [[00599b10, 00599ba0]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CSkeleton_load_FUN_00599b10(CSkeleton * this_ptr, char * filename)
// Cross-references:
//   core_skeleton.cpp_loadSkeleton_FUN_005a1df0 (005a1df0) at 005a1e86 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_rt_0064e29e
//   TerminatedCString s_data_0064e2a1
//   TerminatedCString s_core_skeleton_cpp_0064e2a6
//   TerminatedCString s_CSkeleton_load_Can_t_ope_0064e2bb
//   TerminatedCString s_core_skeleton_cpp_0064e2db
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeleton.cpp_CSkeleton_loadStream_FUN_00599bb0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CSkeleton_load_FUN_00599b10(CSkeleton *this_ptr,char *filename)

{
  char cVar1;
  FILE *file_handle;
  char *pcVar2;
  char *pcVar3;
  CSkeleton *in_stack_0000000c;
  
  pcVar3 = this_ptr->loaded_filename;
  pcVar2 = filename;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  file_handle = engine_dosio_c_getFile_FUN_00481a50("data",filename,"rt");
  if (file_handle == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0xf6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CSkeleton::load - Can't open %s",filename);
  }
  core_skeleton_cpp_CSkeleton_loadStream_FUN_00599bb0(in_stack_0000000c,file_handle);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\skeleton.cpp",0xf8);
  return;
}


// Assembly code:
// 00599b10: PUSH EBX
//   Label: core_skeleton.cpp_CSkeleton_load_FUN_00599b10
// 00599b11: PUSH ESI
// 00599b12: PUSH EDI
// 00599b13: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00599b17: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00599b1b: MOV ESI,EBX
// 00599b1d: ADD EDI,0x28508
// 00599b23: PUSH EDI
// 00599b24: MOV AL,byte ptr [ESI]
//   Label: LAB_00599b24
// 00599b26: MOV byte ptr [EDI],AL
// 00599b28: CMP AL,0x0
// 00599b2a: JZ 0x00599b3c
//   XREF to: 00599b3c (CONDITIONAL_JUMP)
// 00599b2c: MOV AL,byte ptr [ESI + 0x1]
// 00599b2f: ADD ESI,0x2
// 00599b32: MOV byte ptr [EDI + 0x1],AL
// 00599b35: ADD EDI,0x2
// 00599b38: CMP AL,0x0
// 00599b3a: JNZ 0x00599b24
//   XREF to: 00599b24 (CONDITIONAL_JUMP)
// 00599b3c: POP EDI
//   Label: LAB_00599b3c
// 00599b3d: PUSH 0x64e29e
//   XREF to: 0064e29e (DATA)
// 00599b42: PUSH EBX
// 00599b43: PUSH 0x64e2a1
//   XREF to: 0064e2a1 (DATA)
// 00599b48: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00599b4d: ADD ESP,0xc
// 00599b50: MOV EDI,EAX
// 00599b52: TEST EAX,EAX
// 00599b54: JZ 0x00599b7b
//   XREF to: 00599b7b (CONDITIONAL_JUMP)
// 00599b56: PUSH EDI
//   Label: LAB_00599b56
// 00599b57: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00599b5b: PUSH EBX
// 00599b5c: CALL core_skeleton.cpp_CSkeleton_loadStream_FUN_00599bb0
//   XREF to: 00599bb0 (UNCONDITIONAL_CALL)
// 00599b61: ADD ESP,0x8
// 00599b64: PUSH 0xf8
// 00599b69: PUSH 0x64e2db
//   XREF to: 0064e2db (DATA)
// 00599b6e: PUSH EDI
// 00599b6f: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00599b74: ADD ESP,0xc
// 00599b77: POP EDI
// 00599b78: POP ESI
// 00599b79: POP EBX
// 00599b7a: RET
// 00599b7b: PUSH EBX
//   Label: LAB_00599b7b
// 00599b7c: MOV EDX,0x64e2a6
//   XREF to: 0064e2a6 (PARAM)
// 00599b81: MOV ECX,0xf6
// 00599b86: PUSH 0x64e2bb
//   XREF to: 0064e2bb (DATA)
// 00599b8b: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00599b91: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00599b97: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00599b9c: ADD ESP,0x8
// 00599b9f: JMP 0x00599b56
//   XREF to: 00599b56 (UNCONDITIONAL_JUMP)
