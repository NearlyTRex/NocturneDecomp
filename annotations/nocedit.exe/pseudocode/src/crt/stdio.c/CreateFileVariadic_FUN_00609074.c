// Name: crt_stdio.c_CreateFileVariadic_FUN_00609074
// Address: 00609074
// Address Range: [[00609074, 0060909d]]
// Convention: __cdecl
// Signature: int crt_stdio.c_CreateFileVariadic_FUN_00609074(char * filename, int access_mode, int share_mode, ...)
// Cross-references:
//   crt_fstream.cpp_convertModesAndOpenFile_FUN_0060c340 (0060c340) at 0060c424 [UNCONDITIONAL_CALL]
//   crt_stdio.c_OpenFileAndInitialize_FUN_0060190c (0060190c) at 006019a1 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_CreateFileImpl_FUN_006090a0

#include "nocturne.h"

int __cdecl
crt_stdio_c_CreateFileVariadic_FUN_00609074(char *filename,int access_mode,int share_mode,...)

{
  HANDLE pvVar1;
  BADSPACEBASE *in_ESP;
  va_list_t variadic_args;
  
  variadic_args = &stack0x00000010;
  pvVar1 = crt_stdio_c_CreateFileImpl_FUN_006090a0(filename,access_mode,share_mode,&variadic_args);
  return (int)pvVar1;
}


// Assembly code:
// 00609074: PUSH EBX
//   Label: crt_stdio.c_CreateFileVariadic_FUN_00609074
// 00609075: SUB ESP,0x4
// 00609078: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[0x10] (DATA)
// 0060907c: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x8] (DATA)
// 0060907f: MOV EAX,ESP
// 00609081: PUSH EAX
// 00609082: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 00609086: PUSH EDX
// 00609087: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0060908b: PUSH EBX
// 0060908c: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00609090: PUSH ECX
// 00609091: CALL crt_stdio.c_CreateFileImpl_FUN_006090a0
//   XREF to: 006090a0 (UNCONDITIONAL_CALL)
// 00609096: ADD ESP,0x10
// 00609099: ADD ESP,0x4
// 0060909c: POP EBX
// 0060909d: RET
