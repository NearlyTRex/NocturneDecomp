// Name: crt_stdio.c_fopenWithFlags_FUN_00601a20
// Address: 00601a20
// Address Range: [[00601a20, 00601a78]]
// Convention: __cdecl
// Signature: FILE * crt_stdio.c_fopenWithFlags_FUN_00601a20(char * filename, char * mode, int flags)
// Cross-references:
//   crt_stdio.c_fopen_FUN_00601a7c (00601a7c) at 00601a89 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_AllocateFileStruct_FUN_006092f0
//   crt_stdio.c_OpenFileAndInitialize_FUN_0060190c
//   crt_stdio.c_OpenModeStringParser_FUN_006017d0

#include "nocturne.h"

FILE * __cdecl crt_stdio_c_fopenWithFlags_FUN_00601a20(char *filename,char *mode,int flags)

{
  FILE *parsed_mode_flags;
  FILE *file_struct;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  char *in_stack_00000010;
  int in_stack_00000014;
  
  parsed_mode_flags = (FILE *)crt_stdio_c_OpenModeStringParser_FUN_006017d0(mode,&stack0xfffffff0);
  file_struct = parsed_mode_flags;
  if ((parsed_mode_flags != (FILE *)0x0) &&
     (file_struct = crt_stdio_c_AllocateFileStruct_FUN_006092f0(0), file_struct != (FILE *)0x0)) {
    file_struct = crt_stdio_c_OpenFileAndInitialize_FUN_0060190c
                            ((char *)flags,*in_stack_00000010,(int)parsed_mode_flags,unaff_ESI,
                             in_stack_00000014,file_struct);
  }
  return file_struct;
}


// Assembly code:
// 00601a20: PUSH EBX
//   Label: crt_stdio.c_fopenWithFlags_FUN_00601a20
// 00601a21: PUSH ESI
// 00601a22: PUSH EDI
// 00601a23: SUB ESP,0x4
// 00601a26: MOV EAX,ESP
// 00601a28: PUSH EAX
// 00601a29: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00601a2d: PUSH EDX
// 00601a2e: CALL crt_stdio.c_OpenModeStringParser_FUN_006017d0
//   XREF to: 006017d0 (UNCONDITIONAL_CALL)
// 00601a33: MOV EBX,EAX
// 00601a35: ADD ESP,0x8
// 00601a38: TEST EAX,EAX
// 00601a3a: JZ 0x00601a72
//   XREF to: 00601a72 (CONDITIONAL_JUMP)
// 00601a3c: PUSH 0x0
// 00601a3e: CALL crt_stdio.c_AllocateFileStruct_FUN_006092f0
//   XREF to: 006092f0 (UNCONDITIONAL_CALL)
// 00601a43: ADD ESP,0x4
// 00601a46: MOV EDX,EAX
// 00601a48: TEST EAX,EAX
// 00601a4a: JZ 0x00601a70
//   XREF to: 00601a70 (CONDITIONAL_JUMP)
// 00601a4c: PUSH EAX
// 00601a4d: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 00601a51: PUSH ECX
// 00601a52: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (READ)
// 00601a56: PUSH ESI
// 00601a57: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 00601a5b: XOR EAX,EAX
// 00601a5d: PUSH EBX
// 00601a5e: MOV AL,byte ptr [EDX]
// 00601a60: PUSH EAX
// 00601a61: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 00601a65: PUSH EDI
// 00601a66: CALL crt_stdio.c_OpenFileAndInitialize_FUN_0060190c
//   XREF to: 0060190c (UNCONDITIONAL_CALL)
// 00601a6b: ADD ESP,0x18
// 00601a6e: MOV EDX,EAX
// 00601a70: MOV EAX,EDX
//   Label: LAB_00601a70
// 00601a72: ADD ESP,0x4
//   Label: LAB_00601a72
// 00601a75: POP EDI
// 00601a76: POP ESI
// 00601a77: POP EBX
// 00601a78: RET
