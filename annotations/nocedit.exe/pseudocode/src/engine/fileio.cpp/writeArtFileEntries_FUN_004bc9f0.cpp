// Name: engine_fileio.cpp_writeArtFileEntries_FUN_004bc9f0
// Address: 004bc9f0
// Address Range: [[004bc9f0, 004bca4d]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_writeArtFileEntries_FUN_004bc9f0(char * filename, FILE * * raw_file, FILE * * act_file)
// Globals:
//   TerminatedCString s_ART_s_RAW_006291bc
//   TerminatedCString s_ART_s_ACT_006291c8
// Function calls:
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   engine_dosio.c_splitPath_FUN_00481f20

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_writeArtFileEntries_FUN_004bc9f0(char *filename,FILE **raw_file,FILE **act_file)

{
  BADSPACEBASE *in_ESP;
  
  engine_dosio_c_splitPath_FUN_00481f20
            ((char *)raw_file,(char *)0x0,(char *)0x0,&stack0xfffffefc,(char *)0x0);
  crt_stdio_c_fprintf_FUN_005fe6d0(*raw_file,"ART\\%s.RAW\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(*act_file,"ART\\%s.ACT\n");
  return;
}


// Assembly code:
// 004bc9f0: PUSH EBX
//   Label: engine_fileio.cpp_writeArtFileEntries_FUN_004bc9f0
// 004bc9f1: SUB ESP,0x100
// 004bc9f7: PUSH 0x0
// 004bc9f9: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x104] (DATA)
// 004bc9fd: PUSH EAX
// 004bc9fe: PUSH 0x0
// 004bca00: PUSH 0x0
// 004bca02: MOV EDX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[0x8] (READ)
// 004bca09: PUSH EDX
// 004bca0a: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 004bca0f: ADD ESP,0x14
// 004bca12: MOV EAX,ESP
// 004bca14: PUSH EAX
// 004bca15: MOV EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[0x4] (READ)
// 004bca1c: PUSH 0x6291bc
//   XREF to: 006291bc (DATA)
// 004bca21: MOV ECX,dword ptr [EAX]
// 004bca23: PUSH ECX
// 004bca24: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004bca29: ADD ESP,0xc
// 004bca2c: MOV EAX,ESP
// 004bca2e: PUSH EAX
// 004bca2f: MOV EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[0x4] (READ)
// 004bca36: PUSH 0x6291c8
//   XREF to: 006291c8 (DATA)
// 004bca3b: MOV EBX,dword ptr [EAX]
// 004bca3d: PUSH EBX
// 004bca3e: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004bca43: ADD ESP,0xc
// 004bca46: ADD ESP,0x100
// 004bca4c: POP EBX
// 004bca4d: RET
