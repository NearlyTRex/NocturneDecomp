// Name: cockpit_pkbitmap.cpp_FUN_0054b930
// Address: 0054b930
// Address Range: [[0054b930, 0054b9a9]]
// Convention: unknown
// Signature: undefined cockpit_pkbitmap.cpp_FUN_0054b930()
// Globals:
//   TerminatedCString s_cockpit_pkbitmap_cpp_0063f250
//   TerminatedCString s_Error_writing_PBG_header_0063f268
//   undefined4 s_PBG_00680ca0
//   undefined4 s__00680ca4
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fwrite_FUN_005fdc00

#include "nocturne.h"

void cockpit_pkbitmap_cpp_FUN_0054b930(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  char *pcVar2;
  char *pcVar3;
  FILE *in_stack_00000008;
  int in_stack_0000000c;
  
  pcVar2 = "PBM\032PBG\032";
  pcVar3 = &stack0xfffffff0;
  for (iVar1 = 1; pcVar2 = pcVar2 + 4, iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar3 = pcVar3 + 4;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pcVar3 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  }
  crt_stdio_c_fwrite_FUN_005fdc00(&stack0xfffffff0,8,1,in_stack_00000008);
  if ((*(byte *)(in_stack_0000000c + 0xc) & 0x20) == 0) {
    return;
  }
  g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
  g_CurrentLineNumber = 0x538;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Error writing PBG header");
  return;
}


// Assembly code:
// 0054b930: PUSH ESI
//   Label: cockpit_pkbitmap.cpp_FUN_0054b930
// 0054b931: PUSH EDI
// 0054b932: SUB ESP,0x8
// 0054b935: MOV ECX,0x4
// 0054b93a: MOV ESI,0x680ca0
//   XREF to: 00680ca0 (DATA)
// 0054b93f: MOV EDI,ESP
// 0054b941: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0054b945: PUSH EDI
// 0054b946: MOV EAX,ECX
// 0054b948: SHR ECX,0x2
// 0054b94b: MOVSD.REP ES:EDI,ESI
//   XREF to: 00680ca0 (READ)
// 0054b94d: MOV CL,AL
// 0054b94f: AND CL,0x3
// 0054b952: MOVSB.REP ES:EDI,ESI
//   XREF to: 00680ca4 (READ)
// 0054b954: POP EDI
// 0054b955: PUSH EDX
// 0054b956: PUSH 0x1
// 0054b958: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0054b95c: PUSH 0x8
// 0054b95e: MOV dword ptr [ESP + 0x10],EDI
//   XREF to: Stack[-0xc] (WRITE)
// 0054b962: LEA EDI,[ESP + 0xc]
//   XREF to: Stack[-0x10] (DATA)
// 0054b966: PUSH EDI
// 0054b967: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0054b96c: ADD ESP,0x10
// 0054b96f: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0054b973: TEST byte ptr [EDI + 0xc],0x20
// 0054b977: JNZ 0x0054b97f
//   XREF to: 0054b97f (CONDITIONAL_JUMP)
// 0054b979: ADD ESP,0x8
// 0054b97c: POP EDI
// 0054b97d: POP ESI
// 0054b97e: RET
// 0054b97f: PUSH EBX
//   Label: LAB_0054b97f
// 0054b980: MOV ECX,0x63f250
//   XREF to: 0063f250 (DATA)
// 0054b985: MOV EBX,0x538
// 0054b98a: PUSH 0x63f268
//   XREF to: 0063f268 (DATA)
// 0054b98f: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0054b995: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0054b99b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054b9a0: ADD ESP,0x4
// 0054b9a3: POP EBX
// 0054b9a4: ADD ESP,0x8
// 0054b9a7: POP EDI
// 0054b9a8: POP ESI
// 0054b9a9: RET
