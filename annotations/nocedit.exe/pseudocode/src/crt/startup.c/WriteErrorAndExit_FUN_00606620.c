// Name: crt_startup.c_WriteErrorAndExit_FUN_00606620
// Address: 00606620
// Address Range: [[00606620, 0060665c]]
// Convention: __cdecl
// Signature: void crt_startup.c_WriteErrorAndExit_FUN_00606620(char * error_message, int exit_code)
// Cross-references:
//   crt_cpp.c_reportPureVirtualError_FUN_00605b23 (00605b23) at 00605b57 [UNCONDITIONAL_CALL]
//   crt_startup.c_HandleRuntimeError_FUN_00606660 (00606660) at 00606684 [UNCONDITIONAL_CALL]
// Globals:
//   WriteFile* PTR_WriteFile_00611678 = 00212300
//   SIOControlBlock* g_IOControlBlock = 00000000
// Function calls:
//   crt_exit.c_ExitProcess_FUN_00602700
//   WriteFile

#include "nocturne.h"

void __cdecl crt_startup_c_WriteErrorAndExit_FUN_00606620(char *error_message,int exit_code)

{
  char cVar1;
  char *pcVar2;
  DWORD nNumberOfBytesToWrite;
  BADSPACEBASE *in_ESP;
  int in_stack_00000010;
  DWORD local_8;
  
  nNumberOfBytesToWrite = 0;
  pcVar2 = error_message;
  while (cVar1 = *pcVar2, pcVar2 = pcVar2 + 1, cVar1 != '\0') {
    nNumberOfBytesToWrite = nNumberOfBytesToWrite + 1;
  }
  (*PTR_WriteFile_00611678)
            (g_IOControlBlock->standard_handles[2],error_message,nNumberOfBytesToWrite,&local_8,
             (LPOVERLAPPED)0x0);
  crt_exit_c_ExitProcess_FUN_00602700(in_stack_00000010);
  return;
}


// Assembly code:
// 00606620: PUSH EBX
//   Label: crt_startup.c_WriteErrorAndExit_FUN_00606620
// 00606621: SUB ESP,0x4
// 00606624: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00606628: XOR EDX,EDX
// 0060662a: JMP 0x0060662d
//   XREF to: 0060662d (UNCONDITIONAL_JUMP)
// 0060662c: INC EDX
//   Label: LAB_0060662c
// 0060662d: MOV EBX,EAX
//   Label: LAB_0060662d
// 0060662f: MOV CL,byte ptr [EBX]
// 00606631: INC EAX
// 00606632: TEST CL,CL
// 00606634: JNZ 0x0060662c
//   XREF to: 0060662c (CONDITIONAL_JUMP)
// 00606636: PUSH 0x0
// 00606638: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x8] (DATA)
// 0060663c: PUSH EAX
// 0060663d: PUSH EDX
// 0060663e: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00606642: MOV EAX,[0x0068526c]
//   XREF to: 0068526c (READ)
// 00606647: PUSH EDX
// 00606648: MOV EBX,dword ptr [EAX + 0x8]
// 0060664b: PUSH EBX
// 0060664c: CALL dword ptr CS:[0x611678]
//   XREF to: EXTERNAL:000000a9 (COMPUTED_CALL)
//   XREF to: 00611678 (READ)
// 00606653: MOV ECX,dword ptr [ESP + 0x10]
// 00606657: PUSH ECX
// 00606658: JMP 0x00602700
//   XREF to: 00602700 (UNCONDITIONAL_CALL)
